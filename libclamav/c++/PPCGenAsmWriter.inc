//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// Assembly Writer Source Fragment
//
// Automatically generated file, do not edit!
//
//===----------------------------------------------------------------------===//

/// printInstruction - This method is automatically generated by tablegen
/// from the instruction set description.
void PPCAsmPrinter::printInstruction(const MachineInstr *MI) {
  static const unsigned OpInfo[] = {
    0U,	// PHI
    0U,	// INLINEASM
    0U,	// DBG_LABEL
    0U,	// EH_LABEL
    0U,	// GC_LABEL
    0U,	// KILL
    0U,	// EXTRACT_SUBREG
    0U,	// INSERT_SUBREG
    0U,	// IMPLICIT_DEF
    0U,	// SUBREG_TO_REG
    0U,	// COPY_TO_REGCLASS
    1U,	// ADD4
    6U,	// ADD8
    11U,	// ADDC
    11U,	// ADDC8
    17U,	// ADDE
    17U,	// ADDE8
    4119U,	// ADDI
    4119U,	// ADDI8
    4125U,	// ADDIC
    4125U,	// ADDIC8
    4132U,	// ADDICo
    8236U,	// ADDIS
    8236U,	// ADDIS8
    32819U,	// ADDME
    32819U,	// ADDME8
    32826U,	// ADDZE
    32826U,	// ADDZE8
    272629825U,	// ADJCALLSTACKDOWN
    276824129U,	// ADJCALLSTACKUP
    66U,	// AND
    66U,	// AND8
    71U,	// ANDC
    71U,	// ANDC8
    12365U,	// ANDISo
    12365U,	// ANDISo8
    12373U,	// ANDIo
    12373U,	// ANDIo8
    281018433U,	// ATOMIC_CMP_SWAP_I16
    285212737U,	// ATOMIC_CMP_SWAP_I32
    289407041U,	// ATOMIC_CMP_SWAP_I64
    293601345U,	// ATOMIC_CMP_SWAP_I8
    297795649U,	// ATOMIC_LOAD_ADD_I16
    301989953U,	// ATOMIC_LOAD_ADD_I32
    306184257U,	// ATOMIC_LOAD_ADD_I64
    310378561U,	// ATOMIC_LOAD_ADD_I8
    314572865U,	// ATOMIC_LOAD_AND_I16
    318767169U,	// ATOMIC_LOAD_AND_I32
    322961473U,	// ATOMIC_LOAD_AND_I64
    327155777U,	// ATOMIC_LOAD_AND_I8
    331350081U,	// ATOMIC_LOAD_NAND_I16
    335544385U,	// ATOMIC_LOAD_NAND_I32
    339738689U,	// ATOMIC_LOAD_NAND_I64
    343932993U,	// ATOMIC_LOAD_NAND_I8
    348127297U,	// ATOMIC_LOAD_OR_I16
    352321601U,	// ATOMIC_LOAD_OR_I32
    356515905U,	// ATOMIC_LOAD_OR_I64
    360710209U,	// ATOMIC_LOAD_OR_I8
    364904513U,	// ATOMIC_LOAD_SUB_I16
    369098817U,	// ATOMIC_LOAD_SUB_I32
    373293121U,	// ATOMIC_LOAD_SUB_I64
    377487425U,	// ATOMIC_LOAD_SUB_I8
    381681729U,	// ATOMIC_LOAD_XOR_I16
    385876033U,	// ATOMIC_LOAD_XOR_I32
    390070337U,	// ATOMIC_LOAD_XOR_I64
    394264641U,	// ATOMIC_LOAD_XOR_I8
    398458945U,	// ATOMIC_SWAP_I16
    402653249U,	// ATOMIC_SWAP_I32
    406847553U,	// ATOMIC_SWAP_I64
    411041857U,	// ATOMIC_SWAP_I8
    536871004U,	// B
    952369247U,	// BCC
    1073741921U,	// BCTR
    1073741926U,	// BCTRL8_Darwin
    1073741926U,	// BCTRL8_ELF
    1073741926U,	// BCTRL_Darwin
    1073741926U,	// BCTRL_SVR4
    1493172332U,	// BL8_Darwin
    1493172332U,	// BL8_ELF
    1761607792U,	// BLA8_Darwin
    1761607792U,	// BLA8_ELF
    1761607792U,	// BLA_Darwin
    1761607792U,	// BLA_SVR4
    960495711U,	// BLR
    1493172332U,	// BL_Darwin
    1493172332U,	// BL_SVR4
    117U,	// CMPD
    4219U,	// CMPDI
    130U,	// CMPLD
    12425U,	// CMPLDI
    145U,	// CMPLW
    12440U,	// CMPLWI
    160U,	// CMPW
    4262U,	// CMPWI
    32941U,	// CNTLZD
    32949U,	// CNTLZW
    189U,	// CREQV
    196U,	// CROR
    524477U,	// CRSET
    1879048394U,	// DCBA
    1879048400U,	// DCBF
    1879048406U,	// DCBI
    1879048412U,	// DCBST
    1879048419U,	// DCBT
    1879048425U,	// DCBTST
    1879048433U,	// DCBZ
    1879048439U,	// DCBZL
    254U,	// DIVD
    260U,	// DIVDU
    267U,	// DIVW
    273U,	// DIVWU
    2147483928U,	// DSS
    1073742109U,	// DSSALL
    2415919396U,	// DST
    2415919396U,	// DST64
    2415919401U,	// DSTST
    2415919401U,	// DSTST64
    2415919408U,	// DSTSTT
    2415919408U,	// DSTSTT64
    2415919416U,	// DSTT
    2415919416U,	// DSTT64
    427819073U,	// DYNALLOC
    432013377U,	// DYNALLOC8
    318U,	// EQV
    318U,	// EQV8
    33091U,	// EXTSB
    33091U,	// EXTSB8
    33098U,	// EXTSH
    33098U,	// EXTSH8
    33105U,	// EXTSW
    33105U,	// EXTSW_32
    33105U,	// EXTSW_32_64
    33112U,	// FABSD
    33112U,	// FABSS
    350U,	// FADD
    356U,	// FADDS
    350U,	// FADDrtz
    33131U,	// FCFID
    370U,	// FCMPUD
    370U,	// FCMPUS
    33145U,	// FCTIDZ
    33153U,	// FCTIWZ
    393U,	// FDIV
    399U,	// FDIVS
    406U,	// FMADD
    413U,	// FMADDS
    33189U,	// FMRD
    33189U,	// FMRS
    33189U,	// FMRSD
    426U,	// FMSUB
    433U,	// FMSUBS
    441U,	// FMUL
    447U,	// FMULS
    33222U,	// FNABSD
    33222U,	// FNABSS
    33229U,	// FNEGD
    33229U,	// FNEGS
    467U,	// FNMADD
    475U,	// FNMADDS
    484U,	// FNMSUB
    492U,	// FNMSUBS
    33269U,	// FRSP
    507U,	// FSELD
    507U,	// FSELS
    33281U,	// FSQRT
    33288U,	// FSQRTS
    528U,	// FSUB
    534U,	// FSUBS
    852509U,	// LA
    1049121U,	// LBZ
    1049121U,	// LBZ8
    1311270U,	// LBZU
    1311270U,	// LBZU8
    1573420U,	// LBZX
    1573420U,	// LBZX8
    1835570U,	// LD
    1573430U,	// LDARX
    2097725U,	// LDU
    1573442U,	// LDX
    167772743U,	// LDinto_toc
    2359858U,	// LDtoc
    1073742416U,	// LDtoc_restore
    1049180U,	// LFD
    1311324U,	// LFDU
    1573473U,	// LFDX
    1049191U,	// LFS
    1311335U,	// LFSU
    1573484U,	// LFSX
    1049202U,	// LHA
    1049202U,	// LHA8
    1311351U,	// LHAU
    885367U,	// LHAU8
    1573501U,	// LHAX
    1573501U,	// LHAX8
    1573507U,	// LHBRX
    1049226U,	// LHZ
    1049226U,	// LHZ8
    1311375U,	// LHZU
    1311375U,	// LHZU8
    1573525U,	// LHZX
    1573525U,	// LHZX8
    2622107U,	// LI
    2622107U,	// LI8
    2884255U,	// LIS
    2884255U,	// LIS8
    1573540U,	// LVEBX
    1573547U,	// LVEHX
    1573554U,	// LVEWX
    1573561U,	// LVSL
    1573567U,	// LVSR
    1573573U,	// LVX
    1573578U,	// LVXL
    1835728U,	// LWA
    1573589U,	// LWARX
    1573596U,	// LWAX
    1573602U,	// LWBRX
    1049321U,	// LWZ
    1049321U,	// LWZ8
    1311470U,	// LWZU
    1311470U,	// LWZU8
    1573620U,	// LWZX
    1573620U,	// LWZX8
    33530U,	// MCRF
    150995712U,	// MFCR
    150995718U,	// MFCTR
    150995718U,	// MFCTR8
    150995725U,	// MFFS
    150995731U,	// MFLR
    150995731U,	// MFLR8
    3146496U,	// MFOCRF
    171967257U,	// MFVRSAVE
    150995744U,	// MFVSCR
    2684355368U,	// MTCRF
    150995759U,	// MTCTR
    150995759U,	// MTCTR8
    2952790838U,	// MTFSB0
    2952790846U,	// MTFSB1
    3397387078U,	// MTFSF
    150995789U,	// MTLR
    150995789U,	// MTLR8
    150995795U,	// MTVRSAVE
    150995807U,	// MTVSCR
    871U,	// MULHD
    878U,	// MULHDU
    886U,	// MULHW
    893U,	// MULHWU
    901U,	// MULLD
    5004U,	// MULLI
    915U,	// MULLW
    3489661036U,	// MovePCtoLR
    3489661036U,	// MovePCtoLR8
    922U,	// NAND
    922U,	// NAND8
    33696U,	// NEG
    33696U,	// NEG8
    1073742757U,	// NOP
    937U,	// NOR
    937U,	// NOR8
    942U,	// OR
    942U,	// OR4To8
    942U,	// OR8
    942U,	// OR8To4
    946U,	// ORC
    946U,	// ORC8
    13239U,	// ORI
    13239U,	// ORI8
    13244U,	// ORIS
    13244U,	// ORIS8
    962U,	// RLDCL
    17353U,	// RLDICL
    17361U,	// RLDICR
    3539929U,	// RLDIMI
    3572705U,	// RLWIMI
    21481U,	// RLWINM
    21489U,	// RLWINMo
    1018U,	// RLWNM
    448790593U,	// SELECT_CC_F4
    448790593U,	// SELECT_CC_F8
    448790593U,	// SELECT_CC_I4
    448790593U,	// SELECT_CC_I8
    448790593U,	// SELECT_CC_VRRC
    1025U,	// SLD
    1030U,	// SLW
    452984897U,	// SPILL_CR
    1035U,	// SRAD
    17425U,	// SRADI
    1048U,	// SRAW
    21534U,	// SRAWI
    1061U,	// SRD
    1066U,	// SRW
    1049647U,	// STB
    1049647U,	// STB8
    3409970228U,	// STBU
    3409970228U,	// STBU8
    1573946U,	// STBX
    1573946U,	// STBX8
    1836096U,	// STD
    1573957U,	// STDCX
    3414164557U,	// STDU
    1573971U,	// STDUX
    1573978U,	// STDX
    1573978U,	// STDX_32
    1836096U,	// STD_32
    1049696U,	// STFD
    3409970278U,	// STFDU
    1573997U,	// STFDX
    1574004U,	// STFIWX
    1049724U,	// STFS
    3409970306U,	// STFSU
    1574025U,	// STFSX
    1049744U,	// STH
    1049744U,	// STH8
    1574037U,	// STHBRX
    3409970333U,	// STHU
    3409970333U,	// STHU8
    1574051U,	// STHX
    1574051U,	// STHX8
    1574057U,	// STVEBX
    1574065U,	// STVEHX
    1574073U,	// STVEWX
    1574081U,	// STVX
    1574087U,	// STVXL
    1049806U,	// STW
    1049806U,	// STW8
    1574099U,	// STWBRX
    1574107U,	// STWCX
    3409970403U,	// STWU
    3409970403U,	// STWU8
    1257U,	// STWUX
    1574128U,	// STWX
    1574128U,	// STWX8
    1270U,	// SUBF
    1270U,	// SUBF8
    1276U,	// SUBFC
    1276U,	// SUBFC8
    1283U,	// SUBFE
    1283U,	// SUBFE8
    5386U,	// SUBFIC
    5386U,	// SUBFIC8
    34066U,	// SUBFME
    34066U,	// SUBFME8
    34074U,	// SUBFZE
    34074U,	// SUBFZE8
    1073743138U,	// SYNC
    1493172316U,	// TAILB
    1493172316U,	// TAILB8
    1761608999U,	// TAILBA
    1761608999U,	// TAILBA8
    1073741921U,	// TAILBCTR
    1073741921U,	// TAILBCTR8
    1757447467U,	// TCRETURNai
    1757447480U,	// TCRETURNai8
    1489012038U,	// TCRETURNdi
    1489012051U,	// TCRETURNdi8
    146834785U,	// TCRETURNri
    146834798U,	// TCRETURNri8
    1073743228U,	// TRAP
    34177U,	// UPDATE_VRSAVE
    1424U,	// VADDCUW
    1433U,	// VADDFP
    1441U,	// VADDSBS
    1450U,	// VADDSHS
    1459U,	// VADDSWS
    1468U,	// VADDUBM
    1477U,	// VADDUBS
    1486U,	// VADDUHM
    1495U,	// VADDUHS
    1504U,	// VADDUWM
    1513U,	// VADDUWS
    1522U,	// VAND
    1528U,	// VANDC
    1535U,	// VAVGSB
    1543U,	// VAVGSH
    1551U,	// VAVGSW
    1559U,	// VAVGUB
    1567U,	// VAVGUH
    1575U,	// VAVGUW
    3606063U,	// VCFSX
    3606070U,	// VCFUX
    1597U,	// VCMPBFP
    1606U,	// VCMPBFPo
    1616U,	// VCMPEQFP
    1626U,	// VCMPEQFPo
    1637U,	// VCMPEQUB
    1647U,	// VCMPEQUBo
    1658U,	// VCMPEQUH
    1668U,	// VCMPEQUHo
    1679U,	// VCMPEQUW
    1689U,	// VCMPEQUWo
    1700U,	// VCMPGEFP
    1710U,	// VCMPGEFPo
    1721U,	// VCMPGTFP
    1731U,	// VCMPGTFPo
    1742U,	// VCMPGTSB
    1752U,	// VCMPGTSBo
    1763U,	// VCMPGTSH
    1773U,	// VCMPGTSHo
    1784U,	// VCMPGTSW
    1794U,	// VCMPGTSWo
    1805U,	// VCMPGTUB
    1815U,	// VCMPGTUBo
    1826U,	// VCMPGTUH
    1836U,	// VCMPGTUHo
    1847U,	// VCMPGTUW
    1857U,	// VCMPGTUWo
    3606348U,	// VCTSXS
    3606356U,	// VCTUXS
    34652U,	// VEXPTEFP
    34662U,	// VLOGEFP
    1903U,	// VMADDFP
    1912U,	// VMAXFP
    1920U,	// VMAXSB
    1928U,	// VMAXSH
    1936U,	// VMAXSW
    1944U,	// VMAXUB
    1952U,	// VMAXUH
    1960U,	// VMAXUW
    1968U,	// VMHADDSHS
    1979U,	// VMHRADDSHS
    1991U,	// VMINFP
    1999U,	// VMINSB
    2007U,	// VMINSH
    2015U,	// VMINSW
    2023U,	// VMINUB
    2031U,	// VMINUH
    2039U,	// VMINUW
    2047U,	// VMLADDUHM
    2058U,	// VMRGHB
    2066U,	// VMRGHH
    2074U,	// VMRGHW
    2082U,	// VMRGLB
    2090U,	// VMRGLH
    2098U,	// VMRGLW
    2106U,	// VMSUMMBM
    2116U,	// VMSUMSHM
    2126U,	// VMSUMSHS
    2136U,	// VMSUMUBM
    2146U,	// VMSUMUHM
    2156U,	// VMSUMUHS
    2166U,	// VMULESB
    2175U,	// VMULESH
    2184U,	// VMULEUB
    2193U,	// VMULEUH
    2202U,	// VMULOSB
    2211U,	// VMULOSH
    2220U,	// VMULOUB
    2229U,	// VMULOUH
    2238U,	// VNMSUBFP
    2248U,	// VNOR
    2254U,	// VOR
    2259U,	// VPERM
    2266U,	// VPKPX
    2273U,	// VPKSHSS
    2282U,	// VPKSHUS
    2291U,	// VPKSWSS
    2300U,	// VPKSWUS
    2309U,	// VPKUHUM
    2318U,	// VPKUHUS
    2327U,	// VPKUWUM
    2336U,	// VPKUWUS
    35113U,	// VREFP
    35120U,	// VRFIM
    35127U,	// VRFIN
    35134U,	// VRFIP
    35141U,	// VRFIZ
    2380U,	// VRLB
    2386U,	// VRLH
    2392U,	// VRLW
    35166U,	// VRSQRTEFP
    2409U,	// VSEL
    2415U,	// VSL
    2420U,	// VSLB
    2426U,	// VSLDOI
    2434U,	// VSLH
    2440U,	// VSLO
    2446U,	// VSLW
    3606932U,	// VSPLTB
    3606940U,	// VSPLTH
    3672484U,	// VSPLTISB
    3672494U,	// VSPLTISH
    3672504U,	// VSPLTISW
    3606978U,	// VSPLTW
    2506U,	// VSR
    2511U,	// VSRAB
    2518U,	// VSRAH
    2525U,	// VSRAW
    2532U,	// VSRB
    2538U,	// VSRH
    2544U,	// VSRO
    2550U,	// VSRW
    2556U,	// VSUBCUW
    2565U,	// VSUBFP
    2573U,	// VSUBSBS
    2582U,	// VSUBSHS
    2591U,	// VSUBSWS
    2600U,	// VSUBUBM
    2609U,	// VSUBUBS
    2618U,	// VSUBUHM
    2627U,	// VSUBUHS
    2636U,	// VSUBUWM
    2645U,	// VSUBUWS
    2654U,	// VSUM2SWS
    2664U,	// VSUM4SBS
    2674U,	// VSUM4SHS
    2684U,	// VSUM4UBS
    2694U,	// VSUMSWS
    35471U,	// VUPKHPX
    35480U,	// VUPKHSB
    35489U,	// VUPKHSH
    35498U,	// VUPKLPX
    35507U,	// VUPKLSB
    35516U,	// VUPKLSH
    2757U,	// VXOR
    527045U,	// V_SET0
    2763U,	// XOR
    2763U,	// XOR8
    15056U,	// XORI
    15056U,	// XORI8
    15062U,	// XORIS
    15062U,	// XORIS8
    0U
  };

  const char *AsmStrs = 
    "add \000add \000addc \000adde \000addi \000addic \000addic. \000addis \000"
    "addme \000addze \000\000and \000andc \000andis. \000andi. \000b \000b\000"
    "bctr\000bctrl\000bl \000bla \000cmpd \000cmpdi \000cmpld \000cmpldi \000"
    "cmplw \000cmplwi \000cmpw \000cmpwi \000cntlzd \000cntlzw \000creqv \000"
    "cror \000dcba \000dcbf \000dcbi \000dcbst \000dcbt \000dcbtst \000dcbz "
    "\000dcbzl \000divd \000divdu \000divw \000divwu \000dss \000dssall\000d"
    "st \000dstst \000dststt \000dstt \000eqv \000extsb \000extsh \000extsw "
    "\000fabs \000fadd \000fadds \000fcfid \000fcmpu \000fctidz \000fctiwz \000"
    "fdiv \000fdivs \000fmadd \000fmadds \000fmr \000fmsub \000fmsubs \000fm"
    "ul \000fmuls \000fnabs \000fneg \000fnmadd \000fnmadds \000fnmsub \000f"
    "nmsubs \000frsp \000fsel \000fsqrt \000fsqrts \000fsub \000fsubs \000la"
    " \000lbz \000lbzu \000lbzx \000ld \000ldarx \000ldu \000ldx \000ld 2, 8"
    "(\000ld 2, 40(1)\000lfd \000lfdx \000lfs \000lfsx \000lha \000lhau \000"
    "lhax \000lhbrx \000lhz \000lhzu \000lhzx \000li \000lis \000lvebx \000l"
    "vehx \000lvewx \000lvsl \000lvsr \000lvx \000lvxl \000lwa \000lwarx \000"
    "lwax \000lwbrx \000lwz \000lwzu \000lwzx \000mcrf \000mfcr \000mfctr \000"
    "mffs \000mflr \000mfspr \000mfvscr \000mtcrf \000mtctr \000mtfsb0 \000m"
    "tfsb1 \000mtfsf \000mtlr \000mtspr 256, \000mtvscr \000mulhd \000mulhdu"
    " \000mulhw \000mulhwu \000mulld \000mulli \000mullw \000nand \000neg \000"
    "nop\000nor \000or \000orc \000ori \000oris \000rldcl \000rldicl \000rld"
    "icr \000rldimi \000rlwimi \000rlwinm \000rlwinm. \000rlwnm \000sld \000"
    "slw \000srad \000sradi \000sraw \000srawi \000srd \000srw \000stb \000s"
    "tbu \000stbx \000std \000stdcx. \000stdu \000stdux \000stdx \000stfd \000"
    "stfdu \000stfdx \000stfiwx \000stfs \000stfsu \000stfsx \000sth \000sth"
    "brx \000sthu \000sthx \000stvebx \000stvehx \000stvewx \000stvx \000stv"
    "xl \000stw \000stwbrx \000stwcx. \000stwu \000stwux \000stwx \000subf \000"
    "subfc \000subfe \000subfic \000subfme \000subfze \000sync\000ba \000#TC"
    "_RETURNa \000#TC_RETURNa8 \000#TC_RETURNd \000#TC_RETURNd8 \000#TC_RETU"
    "RNr \000#TC_RETURNr8 \000trap\000UPDATE_VRSAVE \000vaddcuw \000vaddfp \000"
    "vaddsbs \000vaddshs \000vaddsws \000vaddubm \000vaddubs \000vadduhm \000"
    "vadduhs \000vadduwm \000vadduws \000vand \000vandc \000vavgsb \000vavgs"
    "h \000vavgsw \000vavgub \000vavguh \000vavguw \000vcfsx \000vcfux \000v"
    "cmpbfp \000vcmpbfp. \000vcmpeqfp \000vcmpeqfp. \000vcmpequb \000vcmpequ"
    "b. \000vcmpequh \000vcmpequh. \000vcmpequw \000vcmpequw. \000vcmpgefp \000"
    "vcmpgefp. \000vcmpgtfp \000vcmpgtfp. \000vcmpgtsb \000vcmpgtsb. \000vcm"
    "pgtsh \000vcmpgtsh. \000vcmpgtsw \000vcmpgtsw. \000vcmpgtub \000vcmpgtu"
    "b. \000vcmpgtuh \000vcmpgtuh. \000vcmpgtuw \000vcmpgtuw. \000vctsxs \000"
    "vctuxs \000vexptefp \000vlogefp \000vmaddfp \000vmaxfp \000vmaxsb \000v"
    "maxsh \000vmaxsw \000vmaxub \000vmaxuh \000vmaxuw \000vmhaddshs \000vmh"
    "raddshs \000vminfp \000vminsb \000vminsh \000vminsw \000vminub \000vmin"
    "uh \000vminuw \000vmladduhm \000vmrghb \000vmrghh \000vmrghw \000vmrglb"
    " \000vmrglh \000vmrglw \000vmsummbm \000vmsumshm \000vmsumshs \000vmsum"
    "ubm \000vmsumuhm \000vmsumuhs \000vmulesb \000vmulesh \000vmuleub \000v"
    "muleuh \000vmulosb \000vmulosh \000vmuloub \000vmulouh \000vnmsubfp \000"
    "vnor \000vor \000vperm \000vpkpx \000vpkshss \000vpkshus \000vpkswss \000"
    "vpkswus \000vpkuhum \000vpkuhus \000vpkuwum \000vpkuwus \000vrefp \000v"
    "rfim \000vrfin \000vrfip \000vrfiz \000vrlb \000vrlh \000vrlw \000vrsqr"
    "tefp \000vsel \000vsl \000vslb \000vsldoi \000vslh \000vslo \000vslw \000"
    "vspltb \000vsplth \000vspltisb \000vspltish \000vspltisw \000vspltw \000"
    "vsr \000vsrab \000vsrah \000vsraw \000vsrb \000vsrh \000vsro \000vsrw \000"
    "vsubcuw \000vsubfp \000vsubsbs \000vsubshs \000vsubsws \000vsububm \000"
    "vsububs \000vsubuhm \000vsubuhs \000vsubuwm \000vsubuws \000vsum2sws \000"
    "vsum4sbs \000vsum4shs \000vsum4ubs \000vsumsws \000vupkhpx \000vupkhsb "
    "\000vupkhsh \000vupklpx \000vupklsb \000vupklsh \000vxor \000xor \000xo"
    "ri \000xoris \000";


#ifndef NO_ASM_WRITER_BOILERPLATE
  if (MI->getOpcode() == TargetInstrInfo::INLINEASM) {
    printInlineAsm(MI);
    return;
  } else if (MI->isLabel()) {
    printLabel(MI);
    return;
  } else if (MI->getOpcode() == TargetInstrInfo::IMPLICIT_DEF) {
    printImplicitDef(MI);
    return;
  } else if (MI->getOpcode() == TargetInstrInfo::KILL) {
    printKill(MI);
    return;
  }


#endif
  O << "\t";

  // Emit the opcode for the instruction.
  unsigned Bits = OpInfo[MI->getOpcode()];
  assert(Bits != 0 && "Cannot print this instruction.");
  O << AsmStrs+(Bits & 4095)-1;


  // Fragment 0 encoded into 4 bits for 14 unique commands.
  switch ((Bits >> 28) & 15) {
  default:   // unreachable.
  case 0:
    // ADD4, ADD8, ADDC, ADDC8, ADDE, ADDE8, ADDI, ADDI8, ADDIC, ADDIC8, ADDI...
    printOperand(MI, 0); 
    break;
  case 1:
    // ADJCALLSTACKDOWN, ADJCALLSTACKUP, ATOMIC_CMP_SWAP_I16, ATOMIC_CMP_SWAP...
    PrintSpecial(MI, "comment"); 
    break;
  case 2:
    // B
    printBranchOperand(MI, 0); 
    return;
    break;
  case 3:
    // BCC, BLR
    printPredicateOperand(MI, 0, "cc"); 
    break;
  case 4:
    // BCTR, BCTRL8_Darwin, BCTRL8_ELF, BCTRL_Darwin, BCTRL_SVR4, DSSALL, LDt...
    return;
    break;
  case 5:
    // BL8_Darwin, BL8_ELF, BL_Darwin, BL_SVR4, TAILB, TAILB8, TCRETURNdi, TC...
    printCallOperand(MI, 0); 
    break;
  case 6:
    // BLA8_Darwin, BLA8_ELF, BLA_Darwin, BLA_SVR4, TAILBA, TAILBA8, TCRETURN...
    printAbsAddrOperand(MI, 0); 
    break;
  case 7:
    // DCBA, DCBF, DCBI, DCBST, DCBT, DCBTST, DCBZ, DCBZL
    printMemRegReg(MI, 0); 
    return;
    break;
  case 8:
    // DSS
    printU5ImmOperand(MI, 1); 
    return;
    break;
  case 9:
    // DST, DST64, DSTST, DSTST64, DSTSTT, DSTSTT64, DSTT, DSTT64
    printOperand(MI, 2); 
    O << ", "; 
    printOperand(MI, 3); 
    O << ", "; 
    printU5ImmOperand(MI, 1); 
    return;
    break;
  case 10:
    // MTCRF
    printcrbitm(MI, 0); 
    O << ", "; 
    printOperand(MI, 1); 
    return;
    break;
  case 11:
    // MTFSB0, MTFSB1
    printU5ImmOperand(MI, 0); 
    return;
    break;
  case 12:
    // MTFSF, STBU, STBU8, STDU, STFDU, STFSU, STHU, STHU8, STWU, STWU8
    printOperand(MI, 1); 
    O << ", "; 
    break;
  case 13:
    // MovePCtoLR, MovePCtoLR8
    printPICLabel(MI, 0); 
    return;
    break;
  }


  // Fragment 1 encoded into 6 bits for 47 unique commands.
  switch ((Bits >> 22) & 63) {
  default:   // unreachable.
  case 0:
    // ADD4, ADD8, ADDC, ADDC8, ADDE, ADDE8, ADDI, ADDI8, ADDIC, ADDIC8, ADDI...
    O << ", "; 
    break;
  case 1:
    // ADJCALLSTACKDOWN
    O << " ADJCALLSTACKDOWN"; 
    return;
    break;
  case 2:
    // ADJCALLSTACKUP
    O << " ADJCALLSTACKUP"; 
    return;
    break;
  case 3:
    // ATOMIC_CMP_SWAP_I16
    O << " ATOMIC_CMP_SWAP_I16 PSEUDO!"; 
    return;
    break;
  case 4:
    // ATOMIC_CMP_SWAP_I32
    O << " ATOMIC_CMP_SWAP_I32 PSEUDO!"; 
    return;
    break;
  case 5:
    // ATOMIC_CMP_SWAP_I64
    O << " ATOMIC_CMP_SWAP_I64 PSEUDO!"; 
    return;
    break;
  case 6:
    // ATOMIC_CMP_SWAP_I8
    O << " ATOMIC_CMP_SWAP_I8 PSEUDO!"; 
    return;
    break;
  case 7:
    // ATOMIC_LOAD_ADD_I16
    O << " ATOMIC_LOAD_ADD_I16 PSEUDO!"; 
    return;
    break;
  case 8:
    // ATOMIC_LOAD_ADD_I32
    O << " ATOMIC_LOAD_ADD_I32 PSEUDO!"; 
    return;
    break;
  case 9:
    // ATOMIC_LOAD_ADD_I64
    O << " ATOMIC_LOAD_ADD_I64 PSEUDO!"; 
    return;
    break;
  case 10:
    // ATOMIC_LOAD_ADD_I8
    O << " ATOMIC_LOAD_ADD_I8 PSEUDO!"; 
    return;
    break;
  case 11:
    // ATOMIC_LOAD_AND_I16
    O << " ATOMIC_LOAD_AND_I16 PSEUDO!"; 
    return;
    break;
  case 12:
    // ATOMIC_LOAD_AND_I32
    O << " ATOMIC_LOAD_AND_I32 PSEUDO!"; 
    return;
    break;
  case 13:
    // ATOMIC_LOAD_AND_I64
    O << " ATOMIC_LOAD_AND_I64 PSEUDO!"; 
    return;
    break;
  case 14:
    // ATOMIC_LOAD_AND_I8
    O << " ATOMIC_LOAD_AND_I8 PSEUDO!"; 
    return;
    break;
  case 15:
    // ATOMIC_LOAD_NAND_I16
    O << " ATOMIC_LOAD_NAND_I16 PSEUDO!"; 
    return;
    break;
  case 16:
    // ATOMIC_LOAD_NAND_I32
    O << " ATOMIC_LOAD_NAND_I32 PSEUDO!"; 
    return;
    break;
  case 17:
    // ATOMIC_LOAD_NAND_I64
    O << " ATOMIC_LOAD_NAND_I64 PSEUDO!"; 
    return;
    break;
  case 18:
    // ATOMIC_LOAD_NAND_I8
    O << " ATOMIC_LOAD_NAND_I8 PSEUDO!"; 
    return;
    break;
  case 19:
    // ATOMIC_LOAD_OR_I16
    O << " ATOMIC_LOAD_OR_I16 PSEUDO!"; 
    return;
    break;
  case 20:
    // ATOMIC_LOAD_OR_I32
    O << " ATOMIC_LOAD_OR_I32 PSEUDO!"; 
    return;
    break;
  case 21:
    // ATOMIC_LOAD_OR_I64
    O << " ATOMIC_LOAD_OR_I64 PSEUDO!"; 
    return;
    break;
  case 22:
    // ATOMIC_LOAD_OR_I8
    O << " ATOMIC_LOAD_OR_I8 PSEUDO!"; 
    return;
    break;
  case 23:
    // ATOMIC_LOAD_SUB_I16
    O << " ATOMIC_LOAD_SUB_I16 PSEUDO!"; 
    return;
    break;
  case 24:
    // ATOMIC_LOAD_SUB_I32
    O << " ATOMIC_LOAD_SUB_I32 PSEUDO!"; 
    return;
    break;
  case 25:
    // ATOMIC_LOAD_SUB_I64
    O << " ATOMIC_LOAD_SUB_I64 PSEUDO!"; 
    return;
    break;
  case 26:
    // ATOMIC_LOAD_SUB_I8
    O << " ATOMIC_LOAD_SUB_I8 PSEUDO!"; 
    return;
    break;
  case 27:
    // ATOMIC_LOAD_XOR_I16
    O << " ATOMIC_LOAD_XOR_I16 PSEUDO!"; 
    return;
    break;
  case 28:
    // ATOMIC_LOAD_XOR_I32
    O << " ATOMIC_LOAD_XOR_I32 PSEUDO!"; 
    return;
    break;
  case 29:
    // ATOMIC_LOAD_XOR_I64
    O << " ATOMIC_LOAD_XOR_I64 PSEUDO!"; 
    return;
    break;
  case 30:
    // ATOMIC_LOAD_XOR_I8
    O << " ATOMIC_LOAD_XOR_I8 PSEUDO!"; 
    return;
    break;
  case 31:
    // ATOMIC_SWAP_I16
    O << " ATOMIC_SWAP_I16 PSEUDO!"; 
    return;
    break;
  case 32:
    // ATOMIC_SWAP_I32
    O << " ATOMIC_SWAP_I32 PSEUDO!"; 
    return;
    break;
  case 33:
    // ATOMIC_SWAP_I64
    O << " ATOMIC_SWAP_I64 PSEUDO!"; 
    return;
    break;
  case 34:
    // ATOMIC_SWAP_I8
    O << " ATOMIC_SWAP_I8 PSEUDO!"; 
    return;
    break;
  case 35:
    // BCC, TCRETURNai, TCRETURNai8, TCRETURNdi, TCRETURNdi8, TCRETURNri, TCR...
    O << ' '; 
    break;
  case 36:
    // BL8_Darwin, BL8_ELF, BLA8_Darwin, BLA8_ELF, BLA_Darwin, BLA_SVR4, BL_D...
    return;
    break;
  case 37:
    // BLR
    O << "lr "; 
    printPredicateOperand(MI, 0, "reg"); 
    return;
    break;
  case 38:
    // DYNALLOC
    O << " DYNALLOC "; 
    printOperand(MI, 0); 
    O << ", "; 
    printOperand(MI, 1); 
    O << ", "; 
    printMemRegImm(MI, 2); 
    return;
    break;
  case 39:
    // DYNALLOC8
    O << " DYNALLOC8 "; 
    printOperand(MI, 0); 
    O << ", "; 
    printOperand(MI, 1); 
    O << ", "; 
    printMemRegImm(MI, 2); 
    return;
    break;
  case 40:
    // LDinto_toc
    O << ')'; 
    return;
    break;
  case 41:
    // MFVRSAVE
    O << ", 256"; 
    return;
    break;
  case 42:
    // MTFSF
    printOperand(MI, 2); 
    return;
    break;
  case 43:
    // SELECT_CC_F4, SELECT_CC_F8, SELECT_CC_I4, SELECT_CC_I8, SELECT_CC_VRRC
    O << " SELECT_CC PSEUDO!"; 
    return;
    break;
  case 44:
    // SPILL_CR
    O << " SPILL_CR "; 
    printOperand(MI, 0); 
    O << ' '; 
    printMemRegImm(MI, 1); 
    return;
    break;
  case 45:
    // STBU, STBU8, STFDU, STFSU, STHU, STHU8, STWU, STWU8
    printSymbolLo(MI, 2); 
    O << '('; 
    printOperand(MI, 3); 
    O << ')'; 
    return;
    break;
  case 46:
    // STDU
    printS16X4ImmOperand(MI, 2); 
    O << '('; 
    printOperand(MI, 3); 
    O << ')'; 
    return;
    break;
  }


  // Fragment 2 encoded into 4 bits for 15 unique commands.
  switch ((Bits >> 18) & 15) {
  default:   // unreachable.
  case 0:
    // ADD4, ADD8, ADDC, ADDC8, ADDE, ADDE8, ADDI, ADDI8, ADDIC, ADDIC8, ADDI...
    printOperand(MI, 1); 
    break;
  case 1:
    // BCC
    printPredicateOperand(MI, 0, "reg"); 
    O << ", "; 
    printBranchOperand(MI, 2); 
    return;
    break;
  case 2:
    // CRSET, V_SET0
    printOperand(MI, 0); 
    O << ", "; 
    printOperand(MI, 0); 
    return;
    break;
  case 3:
    // LA, LHAU8
    printSymbolLo(MI, 2); 
    O << '('; 
    break;
  case 4:
    // LBZ, LBZ8, LFD, LFS, LHA, LHA8, LHZ, LHZ8, LWZ, LWZ8, STB, STB8, STFD,...
    printMemRegImm(MI, 1); 
    return;
    break;
  case 5:
    // LBZU, LBZU8, LFDU, LFSU, LHAU, LHZU, LHZU8, LWZU, LWZU8
    printMemRegImm(MI, 2); 
    return;
    break;
  case 6:
    // LBZX, LBZX8, LDARX, LDX, LFDX, LFSX, LHAX, LHAX8, LHBRX, LHZX, LHZX8, ...
    printMemRegReg(MI, 1); 
    return;
    break;
  case 7:
    // LD, LWA, STD, STD_32
    printMemRegImmShifted(MI, 1); 
    return;
    break;
  case 8:
    // LDU
    printMemRegImmShifted(MI, 2); 
    return;
    break;
  case 9:
    // LDtoc
    printTOCEntryLabel(MI, 1); 
    O << '('; 
    printOperand(MI, 2); 
    O << ')'; 
    return;
    break;
  case 10:
    // LI, LI8
    printSymbolLo(MI, 1); 
    return;
    break;
  case 11:
    // LIS, LIS8
    printSymbolHi(MI, 1); 
    return;
    break;
  case 12:
    // MFOCRF
    printcrbitm(MI, 1); 
    return;
    break;
  case 13:
    // RLDIMI, RLWIMI, VCFSX, VCFUX, VCTSXS, VCTUXS, VSPLTB, VSPLTH, VSPLTW
    printOperand(MI, 2); 
    O << ", "; 
    break;
  case 14:
    // VSPLTISB, VSPLTISH, VSPLTISW
    printS5ImmOperand(MI, 1); 
    return;
    break;
  }


  // Fragment 3 encoded into 3 bits for 7 unique commands.
  switch ((Bits >> 15) & 7) {
  default:   // unreachable.
  case 0:
    // ADD4, ADD8, ADDC, ADDC8, ADDE, ADDE8, ADDI, ADDI8, ADDIC, ADDIC8, ADDI...
    O << ", "; 
    break;
  case 1:
    // ADDME, ADDME8, ADDZE, ADDZE8, CNTLZD, CNTLZW, EXTSB, EXTSB8, EXTSH, EX...
    return;
    break;
  case 2:
    // LA
    printOperand(MI, 1); 
    O << ')'; 
    return;
    break;
  case 3:
    // LHAU8
    printOperand(MI, 3); 
    O << ')'; 
    return;
    break;
  case 4:
    // RLDIMI
    printU6ImmOperand(MI, 3); 
    O << ", "; 
    printU6ImmOperand(MI, 4); 
    return;
    break;
  case 5:
    // RLWIMI
    printU5ImmOperand(MI, 3); 
    O << ", "; 
    printU5ImmOperand(MI, 4); 
    O << ", "; 
    printU5ImmOperand(MI, 5); 
    return;
    break;
  case 6:
    // VCFSX, VCFUX, VCTSXS, VCTUXS, VSPLTB, VSPLTH, VSPLTW
    printU5ImmOperand(MI, 1); 
    return;
    break;
  }


  // Fragment 4 encoded into 3 bits for 6 unique commands.
  switch ((Bits >> 12) & 7) {
  default:   // unreachable.
  case 0:
    // ADD4, ADD8, ADDC, ADDC8, ADDE, ADDE8, AND, AND8, ANDC, ANDC8, CMPD, CM...
    printOperand(MI, 2); 
    break;
  case 1:
    // ADDI, ADDI8, ADDIC, ADDIC8, ADDICo, CMPDI, CMPWI, MULLI, SUBFIC, SUBFI...
    printS16ImmOperand(MI, 2); 
    return;
    break;
  case 2:
    // ADDIS, ADDIS8
    printSymbolHi(MI, 2); 
    return;
    break;
  case 3:
    // ANDISo, ANDISo8, ANDIo, ANDIo8, CMPLDI, CMPLWI, ORI, ORI8, ORIS, ORIS8...
    printU16ImmOperand(MI, 2); 
    return;
    break;
  case 4:
    // RLDICL, RLDICR, SRADI
    printU6ImmOperand(MI, 2); 
    break;
  case 5:
    // RLWINM, RLWINMo, SRAWI
    printU5ImmOperand(MI, 2); 
    break;
  }

  switch (MI->getOpcode()) {
  case PPC::ADD4:
  case PPC::ADD8:
  case PPC::ADDC:
  case PPC::ADDC8:
  case PPC::ADDE:
  case PPC::ADDE8:
  case PPC::AND:
  case PPC::AND8:
  case PPC::ANDC:
  case PPC::ANDC8:
  case PPC::CMPD:
  case PPC::CMPLD:
  case PPC::CMPLW:
  case PPC::CMPW:
  case PPC::CREQV:
  case PPC::CROR:
  case PPC::DIVD:
  case PPC::DIVDU:
  case PPC::DIVW:
  case PPC::DIVWU:
  case PPC::EQV:
  case PPC::EQV8:
  case PPC::FADD:
  case PPC::FADDS:
  case PPC::FADDrtz:
  case PPC::FCMPUD:
  case PPC::FCMPUS:
  case PPC::FDIV:
  case PPC::FDIVS:
  case PPC::FMUL:
  case PPC::FMULS:
  case PPC::FSUB:
  case PPC::FSUBS:
  case PPC::MULHD:
  case PPC::MULHDU:
  case PPC::MULHW:
  case PPC::MULHWU:
  case PPC::MULLD:
  case PPC::MULLW:
  case PPC::NAND:
  case PPC::NAND8:
  case PPC::NOR:
  case PPC::NOR8:
  case PPC::OR:
  case PPC::OR4To8:
  case PPC::OR8:
  case PPC::OR8To4:
  case PPC::ORC:
  case PPC::ORC8:
  case PPC::SLD:
  case PPC::SLW:
  case PPC::SRAD:
  case PPC::SRADI:
  case PPC::SRAW:
  case PPC::SRAWI:
  case PPC::SRD:
  case PPC::SRW:
  case PPC::STWUX:
  case PPC::SUBF:
  case PPC::SUBF8:
  case PPC::SUBFC:
  case PPC::SUBFC8:
  case PPC::SUBFE:
  case PPC::SUBFE8:
  case PPC::VADDCUW:
  case PPC::VADDFP:
  case PPC::VADDSBS:
  case PPC::VADDSHS:
  case PPC::VADDSWS:
  case PPC::VADDUBM:
  case PPC::VADDUBS:
  case PPC::VADDUHM:
  case PPC::VADDUHS:
  case PPC::VADDUWM:
  case PPC::VADDUWS:
  case PPC::VAND:
  case PPC::VANDC:
  case PPC::VAVGSB:
  case PPC::VAVGSH:
  case PPC::VAVGSW:
  case PPC::VAVGUB:
  case PPC::VAVGUH:
  case PPC::VAVGUW:
  case PPC::VCMPBFP:
  case PPC::VCMPBFPo:
  case PPC::VCMPEQFP:
  case PPC::VCMPEQFPo:
  case PPC::VCMPEQUB:
  case PPC::VCMPEQUBo:
  case PPC::VCMPEQUH:
  case PPC::VCMPEQUHo:
  case PPC::VCMPEQUW:
  case PPC::VCMPEQUWo:
  case PPC::VCMPGEFP:
  case PPC::VCMPGEFPo:
  case PPC::VCMPGTFP:
  case PPC::VCMPGTFPo:
  case PPC::VCMPGTSB:
  case PPC::VCMPGTSBo:
  case PPC::VCMPGTSH:
  case PPC::VCMPGTSHo:
  case PPC::VCMPGTSW:
  case PPC::VCMPGTSWo:
  case PPC::VCMPGTUB:
  case PPC::VCMPGTUBo:
  case PPC::VCMPGTUH:
  case PPC::VCMPGTUHo:
  case PPC::VCMPGTUW:
  case PPC::VCMPGTUWo:
  case PPC::VMAXFP:
  case PPC::VMAXSB:
  case PPC::VMAXSH:
  case PPC::VMAXSW:
  case PPC::VMAXUB:
  case PPC::VMAXUH:
  case PPC::VMAXUW:
  case PPC::VMINFP:
  case PPC::VMINSB:
  case PPC::VMINSH:
  case PPC::VMINSW:
  case PPC::VMINUB:
  case PPC::VMINUH:
  case PPC::VMINUW:
  case PPC::VMRGHB:
  case PPC::VMRGHH:
  case PPC::VMRGHW:
  case PPC::VMRGLB:
  case PPC::VMRGLH:
  case PPC::VMRGLW:
  case PPC::VMULESB:
  case PPC::VMULESH:
  case PPC::VMULEUB:
  case PPC::VMULEUH:
  case PPC::VMULOSB:
  case PPC::VMULOSH:
  case PPC::VMULOUB:
  case PPC::VMULOUH:
  case PPC::VNOR:
  case PPC::VOR:
  case PPC::VPKPX:
  case PPC::VPKSHSS:
  case PPC::VPKSHUS:
  case PPC::VPKSWSS:
  case PPC::VPKSWUS:
  case PPC::VPKUHUM:
  case PPC::VPKUHUS:
  case PPC::VPKUWUM:
  case PPC::VPKUWUS:
  case PPC::VRLB:
  case PPC::VRLH:
  case PPC::VRLW:
  case PPC::VSL:
  case PPC::VSLB:
  case PPC::VSLH:
  case PPC::VSLO:
  case PPC::VSLW:
  case PPC::VSR:
  case PPC::VSRAB:
  case PPC::VSRAH:
  case PPC::VSRAW:
  case PPC::VSRB:
  case PPC::VSRH:
  case PPC::VSRO:
  case PPC::VSRW:
  case PPC::VSUBCUW:
  case PPC::VSUBFP:
  case PPC::VSUBSBS:
  case PPC::VSUBSHS:
  case PPC::VSUBSWS:
  case PPC::VSUBUBM:
  case PPC::VSUBUBS:
  case PPC::VSUBUHM:
  case PPC::VSUBUHS:
  case PPC::VSUBUWM:
  case PPC::VSUBUWS:
  case PPC::VSUM2SWS:
  case PPC::VSUM4SBS:
  case PPC::VSUM4SHS:
  case PPC::VSUM4UBS:
  case PPC::VSUMSWS:
  case PPC::VXOR:
  case PPC::XOR:
  case PPC::XOR8:
    return;
    break;
  case PPC::FMADD:
  case PPC::FMADDS:
  case PPC::FMSUB:
  case PPC::FMSUBS:
  case PPC::FNMADD:
  case PPC::FNMADDS:
  case PPC::FNMSUB:
  case PPC::FNMSUBS:
  case PPC::FSELD:
  case PPC::FSELS:
  case PPC::RLDCL:
  case PPC::RLDICL:
  case PPC::RLDICR:
  case PPC::VMADDFP:
  case PPC::VMHADDSHS:
  case PPC::VMHRADDSHS:
  case PPC::VMLADDUHM:
  case PPC::VMSUMMBM:
  case PPC::VMSUMSHM:
  case PPC::VMSUMSHS:
  case PPC::VMSUMUBM:
  case PPC::VMSUMUHM:
  case PPC::VMSUMUHS:
  case PPC::VNMSUBFP:
  case PPC::VPERM:
  case PPC::VSEL:
  case PPC::VSLDOI:
    O << ", "; 
    switch (MI->getOpcode()) {
    case PPC::FMADD: 
    case PPC::FMADDS: 
    case PPC::FMSUB: 
    case PPC::FMSUBS: 
    case PPC::FNMADD: 
    case PPC::FNMADDS: 
    case PPC::FNMSUB: 
    case PPC::FNMSUBS: 
    case PPC::FSELD: 
    case PPC::FSELS: 
    case PPC::VMADDFP: 
    case PPC::VMHADDSHS: 
    case PPC::VMHRADDSHS: 
    case PPC::VMLADDUHM: 
    case PPC::VMSUMMBM: 
    case PPC::VMSUMSHM: 
    case PPC::VMSUMSHS: 
    case PPC::VMSUMUBM: 
    case PPC::VMSUMUHM: 
    case PPC::VMSUMUHS: 
    case PPC::VNMSUBFP: 
    case PPC::VPERM: 
    case PPC::VSEL: printOperand(MI, 3); break;
    case PPC::RLDCL: 
    case PPC::RLDICL: 
    case PPC::RLDICR: printU6ImmOperand(MI, 3); break;
    case PPC::VSLDOI: printU5ImmOperand(MI, 3); break;
    }
    return;
    break;
  case PPC::RLWINM:
  case PPC::RLWINMo:
  case PPC::RLWNM:
    O << ", "; 
    printU5ImmOperand(MI, 3); 
    O << ", "; 
    printU5ImmOperand(MI, 4); 
    return;
    break;
  }
  return;
}


/// getRegisterName - This method is automatically generated by tblgen
/// from the register set description.  This returns the assembler name
/// for the specified register.
const char *PPCAsmPrinter::getRegisterName(unsigned RegNo) {
  assert(RegNo && RegNo < 176 && "Invalid register number!");

  static const unsigned RegAsmOffset[] = {
    0, 3, 7, 9, 11, 13, 15, 19, 21, 23, 25, 27, 31, 34, 
    36, 38, 41, 45, 48, 51, 54, 57, 61, 64, 67, 70, 73, 77, 
    80, 83, 86, 89, 93, 96, 99, 102, 105, 109, 112, 115, 118, 121, 
    121, 125, 128, 131, 135, 139, 143, 147, 151, 155, 159, 163, 167, 171, 
    174, 178, 182, 186, 190, 194, 198, 202, 206, 210, 214, 217, 221, 225, 
    228, 231, 234, 237, 240, 243, 243, 246, 249, 252, 256, 260, 264, 268, 
    272, 276, 280, 284, 288, 292, 295, 299, 303, 307, 311, 315, 319, 323, 
    327, 331, 335, 338, 342, 346, 349, 352, 355, 358, 361, 364, 382, 385, 
    388, 392, 396, 400, 404, 408, 412, 416, 420, 424, 428, 431, 435, 439, 
    443, 447, 451, 455, 459, 463, 467, 471, 474, 478, 482, 485, 488, 491, 
    494, 497, 500, 246, 249, 252, 256, 260, 264, 268, 272, 276, 280, 284, 
    288, 292, 295, 299, 303, 307, 311, 315, 319, 323, 327, 331, 335, 338, 
    342, 346, 349, 352, 355, 358, 361, 0
  };

  const char *AsmStrs =
    "ca\000cr0\0002\0001\0000\0003\000cr1\0006\0005\0004\0007\000cr2\00010\000"
    "9\0008\00011\000cr3\00014\00013\00012\00015\000cr4\00018\00017\00016\000"
    "19\000cr5\00022\00021\00020\00023\000cr6\00026\00025\00024\00027\000cr7"
    "\00030\00029\00028\00031\000ctr\000f0\000f1\000f10\000f11\000f12\000f13"
    "\000f14\000f15\000f16\000f17\000f18\000f19\000f2\000f20\000f21\000f22\000"
    "f23\000f24\000f25\000f26\000f27\000f28\000f29\000f3\000f30\000f31\000f4"
    "\000f5\000f6\000f7\000f8\000f9\000lr\000r0\000r1\000r10\000r11\000r12\000"
    "r13\000r14\000r15\000r16\000r17\000r18\000r19\000r2\000r20\000r21\000r2"
    "2\000r23\000r24\000r25\000r26\000r27\000r28\000r29\000r3\000r30\000r31\000"
    "r4\000r5\000r6\000r7\000r8\000r9\000**ROUNDING MODE**\000v0\000v1\000v1"
    "0\000v11\000v12\000v13\000v14\000v15\000v16\000v17\000v18\000v19\000v2\000"
    "v20\000v21\000v22\000v23\000v24\000v25\000v26\000v27\000v28\000v29\000v"
    "3\000v30\000v31\000v4\000v5\000v6\000v7\000v8\000v9\000VRsave\000";
  return AsmStrs+RegAsmOffset[RegNo-1];
}