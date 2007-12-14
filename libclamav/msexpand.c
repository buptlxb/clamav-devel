/*
 *  Copyright (C) 2007 Sourcefire, Inc.
 *  Author: Tomasz Kojm <tkojm@clamav.net>
 *  Credits: Decompression scheme by M. Winterhoff
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License version 2 as
 *  published by the Free Software Foundation.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 *  MA 02110-1301, USA.
 */

#if HAVE_CONFIG_H
#include "clamav-config.h"
#endif

#include <stdio.h>
#include <stddef.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include "clamav.h"
#include "cltypes.h"
#include "others.h"
#include "msexpand.h"

#ifndef HAVE_ATTRIB_PACKED
#define __attribute__(x)
#endif

#define EC32(x) le32_to_host(x)
#define EC16(x) le16_to_host(x)

#define MAGIC1	0x44445a53
#define MAGIC2	0x3327f088
#define MAGIC3	0x0041

struct msexp_hdr {
    uint32_t magic1;
    uint32_t magic2;
    uint16_t magic3;
    uint32_t fsize;
} __attribute((packed));

#define BSIZE 4096
#define RWBUFF 2048

#define READBYTES				\
    ret = cli_readn(fd, rbuff, RWBUFF);		\
    if(ret == -1)				\
	return CL_EIO;				\
    if(!ret)					\
	break;					\
    rbytes = (unsigned int) ret;		\
    r = 0;

#define WRITEBYTES				\
    ret = cli_writen(ofd, wbuff, w);		\
    if(ret == -1 || (unsigned int) ret != w)	\
	return CL_EIO;				\
    wbytes += w;				\
    if(wbytes >= hdr.fsize)			\
	return CL_SUCCESS;			\
    w = 0;


int cli_msexpand(int fd, int ofd, cli_ctx *ctx)
{
	struct msexp_hdr hdr;
	uint8_t i, mask, bits;
	unsigned char buff[BSIZE], rbuff[RWBUFF], wbuff[RWBUFF];
	unsigned int j = BSIZE - 16, k, l, r = 0, w = 0, rbytes = 0, wbytes = 0;
	int ret;


    if(cli_readn(fd, &hdr, sizeof(hdr)) == -1)
	return CL_EIO;

    if(EC32(hdr.magic1) != MAGIC1 || EC32(hdr.magic2) != MAGIC2 || EC16(hdr.magic3) != MAGIC3) {
	cli_dbgmsg("MSEXPAND: Not supported file format\n");
	return CL_EFORMAT;
    }

    cli_dbgmsg("MSEXPAND: File size from header: %u\n", hdr.fsize);

    if(ctx->limits && ctx->limits->maxfilesize && (hdr.fsize > ctx->limits->maxfilesize)) {
	cli_dbgmsg("MSEXPAND: Size exceeded (%u, max: %lu)\n", hdr.fsize, ctx->limits->maxfilesize);
        if(BLOCKMAX) {
	    *ctx->virname = "MSEXPAND.ExceededFileSize";
            return CL_VIRUS;
        }
	hdr.fsize = ctx->limits->maxfilesize;
	cli_dbgmsg("MSEXPAND: Only extracting first %u bytes\n", hdr.fsize); /* may extract up to 2kB more */
    }

    while(1) {

	if(!rbytes || (r == rbytes)) {
	    READBYTES;
	}

	bits = rbuff[r]; r++;

	mask = 1;
	for(i = 0; i < 8; i++) {
	    if(bits & mask) {
		if(r == rbytes) {
		    READBYTES;
		}

		if(w == RWBUFF) {
		    WRITEBYTES;
		}

		wbuff[w] = buff[j] = rbuff[r];
		r++; w++;
		j++; j %= BSIZE;
	    } else {
		if(r == rbytes) {
		    READBYTES;
		}
		k = rbuff[r]; r++;

		if(r == rbytes) {
		    READBYTES;
		}
		l = rbuff[r]; r++;

		k += (l & 0xf0) << 4;
		l = (l & 0x0f) + 3;
		while(l--) {
		    if(w == RWBUFF) {
			WRITEBYTES;
		    }
		    wbuff[w] = buff[j] = buff[k];
		    w++;
		    k++; k %= BSIZE;
		    j++; j %= BSIZE;
		}
	    }
	    mask *= 2;
	}
    }

    if(w) {
	WRITEBYTES;
    }

    return CL_SUCCESS;
}
