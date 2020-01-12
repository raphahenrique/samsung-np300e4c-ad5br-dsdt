/*
 * Intel ACPI Component Architecture
 * AML Disassembler version 20131218-64 [Jan  8 2014]
 * Copyright (c) 2000 - 2013 Intel Corporation
 * 
 * Disassembly of iASLpdI8mE.aml, Sun Jan 12 01:56:41 2020
 *
 * Original Table Header:
 *     Signature        "DSDT"
 *     Length           0x00009743 (38723)
 *     Revision         0x02
 *     Checksum         0xAD
 *     OEM ID           "SECCSD"
 *     OEM Table ID     "IVB-CPT"
 *     OEM Revision     0x00000000 (0)
 *     Compiler ID      "INTL"
 *     Compiler Version 0x20131218 (538120728)
 */
DefinitionBlock ("iASLpdI8mE.aml", "DSDT", 2, "SECCSD", "IVB-CPT", 0x00000000)
{
    /*
     * iASL Warning: There were 5 external control methods found during
     * disassembly, but additional ACPI tables to resolve these externals
     * were not specified. This resulting disassembler output file may not
     * compile because the disassembler did not know how many arguments
     * to assign to these methods. To specify the tables needed to resolve
     * external control method references, use the one of the following
     * example iASL invocations:
     *     iasl -e <ssdt1.aml,ssdt2.aml...> -d <dsdt.aml>
     *     iasl -e <dsdt.aml,ssdt2.aml...> -d <ssdt1.aml>
     */
    External (_SB_.PCI0.IEIT.EITV, MethodObj)    // Warning: Unresolved Method, guessing 0 arguments (may be incorrect, see warning above)
    External (HDOS, MethodObj)    // Warning: Unresolved Method, guessing 0 arguments (may be incorrect, see warning above)
    External (HNOT, MethodObj)    // Warning: Unresolved Method, guessing 1 arguments (may be incorrect, see warning above)
    External (IDAB, MethodObj)    // Warning: Unresolved Method, guessing 0 arguments (may be incorrect, see warning above)
    External (TNOT, MethodObj)    // Warning: Unresolved Method, guessing 0 arguments (may be incorrect, see warning above)

    External (_PR_.AAC0)
    External (_PR_.ACRT)
    External (_PR_.APSV)
    External (_PR_.CPPC, IntObj)
    External (_PR_.CPU0._PPC)
    External (_SB_.IFFS.FFST, IntObj)
    External (CFGD)
    External (HWID, IntObj)
    External (PDC0)
    External (PDC1)
    External (PDC2)
    External (PDC3)
    External (PDC4)
    External (PDC5)
    External (PDC6)
    External (PDC7)

    Name (SS1, One)
    Name (SS2, Zero)
    Name (SS3, One)
    Name (SS4, One)
    Name (IOST, 0xFFFF)
    Name (SP2O, 0x4E)
    Name (SP1O, 0x164E)
    Name (IO1B, 0x0600)
    Name (IO1L, 0x70)
    Name (IO2B, 0x0680)
    Name (IO2L, 0x20)
    Name (IO3B, 0x0290)
    Name (IO3L, 0x10)
    Name (SP3O, 0x2E)
    Name (IO4B, 0x0A20)
    Name (IO4L, 0x20)
    Name (MCHB, 0xFED10000)
    Name (MCHL, 0x8000)
    Name (EGPB, 0xFED19000)
    Name (EGPL, 0x1000)
    Name (DMIB, 0xFED18000)
    Name (DMIL, 0x1000)
    Name (IFPB, 0xFED14000)
    Name (IFPL, 0x1000)
    Name (PEBS, 0xF8000000)
    Name (PELN, 0x04000000)
    Name (SMBS, 0x0580)
    Name (SMBL, 0x20)
    Name (PBLK, 0x0410)
    Name (PMBS, 0x0400)
    Name (PMLN, 0x80)
    Name (LVL2, 0x0414)
    Name (LVL3, 0x0415)
    Name (LVL4, 0x0416)
    Name (SMIP, 0xB2)
    Name (GPBS, 0x0500)
    Name (GPLN, 0x80)
    Name (APCB, 0xFEC00000)
    Name (APCL, 0x1000)
    Name (PM30, 0x0430)
    Name (SRCB, 0xFED1C000)
    Name (SRCL, 0x4000)
    Name (HPTB, 0xFED00000)
    Name (HPTC, 0xFED1F404)
    Name (ACPH, 0xDE)
    Name (ASSB, Zero)
    Name (AOTB, Zero)
    Name (AAXB, Zero)
    Name (PEHP, One)
    Name (SHPC, One)
    Name (PEPM, One)
    Name (PEER, One)
    Name (PECS, One)
    Name (DSSP, Zero)
    Name (FHPP, Zero)
    Name (FMBL, One)
    Name (FDTP, 0x02)
    Name (FUPS, 0x03)
    Name (BSH, Zero)
    Name (BEL, One)
    Name (BEH, 0x02)
    Name (BRH, 0x03)
    Name (BTF, 0x04)
    Name (BHC, 0x05)
    Name (BYB, 0x06)
    Name (BWB, 0x06)
    Name (BPH, 0x07)
    Name (BSHS, 0x08)
    Name (BELC, 0x09)
    Name (BRHP, 0x0A)
    Name (BTFC, 0x0B)
    Name (BEHP, 0x0C)
    Name (BELP, 0x0E)
    Name (BTL, 0x10)
    Name (BTFP, 0x11)
    Name (BSR, 0x14)
    Name (BCC, 0x1C)
    Name (BOF, 0x20)
    Name (BEF, 0x21)
    Name (BLLE, 0x22)
    Name (BLLC, 0x23)
    Name (BLCA, 0x24)
    Name (BLLS, 0x25)
    Name (BLLP, 0x26)
    Name (BLLD, 0x27)
    Name (BKF, 0x28)
    Name (BHBE, 0x30)
    Name (BHBC, 0x31)
    Name (BHBN, 0x32)
    Name (BHBM, 0x33)
    Name (TCGM, One)
    Name (TRTP, One)
    Name (WDTE, One)
    Name (TRTD, 0x02)
    Name (TRTI, 0x03)
    Name (GCDD, One)
    Name (DSTA, 0x0A)
    Name (DSLO, 0x0C)
    Name (DSLC, 0x0E)
    Name (PITS, 0x10)
    Name (SBCS, 0x12)
    Name (SALS, 0x13)
    Name (LSSS, 0x2A)
    Name (SOOT, 0x35)
    Name (PDBR, 0x4D)
    Name (DPPB, 0xFED98000)
    Name (DPPL, 0x8000)
    OperationRegion (GNVS, SystemMemory, 0xDAF7DE18, 0x01C8)
    Field (GNVS, AnyAcc, Lock, Preserve)
    {
        OSYS,   16, 
        SMIF,   8, 
        PRM0,   8, 
        PRM1,   8, 
        SCIF,   8, 
        PRM2,   8, 
        PRM3,   8, 
        LCKF,   8, 
        PRM4,   8, 
        PRM5,   8, 
        P80D,   32, 
        LIDS,   8, 
        PWRS,   8, 
        DBGS,   8, 
        THOF,   8, 
        ACT1,   8, 
        ACTT,   8, 
        PSVT,   8, 
        TC1V,   8, 
        TC2V,   8, 
        TSPV,   8, 
        CRTT,   8, 
        DTSE,   8, 
        DTS1,   8, 
        DTS2,   8, 
        DTSF,   8, 
        Offset (0x25), 
        REVN,   8, 
        IFFS,   8, 
        Offset (0x28), 
        APIC,   8, 
        TCNT,   8, 
        PCP0,   8, 
        PCP1,   8, 
        PPCM,   8, 
        PPMF,   32, 
        C67L,   8, 
        NATP,   8, 
        CMAP,   8, 
        CMBP,   8, 
        LPTP,   8, 
        FDCP,   8, 
        CMCP,   8, 
        CIRP,   8, 
        SMSC,   8, 
        W381,   8, 
        SMC1,   8, 
        IGDS,   8, 
        TLST,   8, 
        CADL,   8, 
        PADL,   8, 
        CSTE,   16, 
        NSTE,   16, 
        SSTE,   16, 
        NDID,   8, 
        DID1,   32, 
        DID2,   32, 
        DID3,   32, 
        DID4,   32, 
        DID5,   32, 
        KSV0,   32, 
        KSV1,   8, 
        Offset (0x67), 
        BLCS,   8, 
        BRTL,   8, 
        ALSE,   8, 
        ALAF,   8, 
        LLOW,   8, 
        LHIH,   8, 
        Offset (0x6E), 
        EMAE,   8, 
        EMAP,   16, 
        EMAL,   16, 
        Offset (0x74), 
        MEFE,   8, 
        DSTS,   8, 
        Offset (0x78), 
        TPMP,   8, 
        TPME,   8, 
        MORD,   8, 
        TCGP,   8, 
        PPRP,   32, 
        PPRQ,   8, 
        LPPR,   8, 
        GTF0,   56, 
        GTF2,   56, 
        IDEM,   8, 
        GTF1,   56, 
        BID,    8, 
        PLID,   8, 
        AOAC,   8, 
        SLDR,   32, 
        WAKR,   8, 
        Offset (0xAA), 
        ASLB,   32, 
        IBTT,   8, 
        IPAT,   8, 
        ITVF,   8, 
        ITVM,   8, 
        IPSC,   8, 
        IBLC,   8, 
        IBIA,   8, 
        ISSC,   8, 
        I409,   8, 
        I509,   8, 
        I609,   8, 
        I709,   8, 
        IPCF,   8, 
        IDMS,   8, 
        IF1E,   8, 
        HVCO,   8, 
        NXD1,   32, 
        NXD2,   32, 
        NXD3,   32, 
        NXD4,   32, 
        NXD5,   32, 
        NXD6,   32, 
        NXD7,   32, 
        NXD8,   32, 
        GSMI,   8, 
        PAVP,   8, 
        Offset (0xE1), 
        OSCC,   8, 
        NEXP,   8, 
        SBV1,   8, 
        SBV2,   8, 
        Offset (0xEB), 
        DSEN,   8, 
        ECON,   8, 
        GPIC,   8, 
        CTYP,   8, 
        L01C,   8, 
        VFN0,   8, 
        VFN1,   8, 
        VFN2,   8, 
        VFN3,   8, 
        VFN4,   8, 
        Offset (0x100), 
        NVGA,   32, 
        NVHA,   32, 
        AMDA,   32, 
        DID6,   32, 
        DID7,   32, 
        DID8,   32, 
        EBAS,   32, 
        CPSP,   32, 
        EECP,   32, 
        EVCP,   32, 
        XBAS,   32, 
        OBS1,   32, 
        OBS2,   32, 
        OBS3,   32, 
        OBS4,   32, 
        OBS5,   32, 
        OBS6,   32, 
        OBS7,   32, 
        OBS8,   32, 
        Offset (0x157), 
        ATMC,   8, 
        PTMC,   8, 
        ATRA,   8, 
        PTRA,   8, 
        PNHM,   32, 
        TBAB,   32, 
        TBAH,   32, 
        RTIP,   8, 
        TSOD,   8, 
        ATPC,   8, 
        PTPC,   8, 
        PFLV,   8, 
        BREV,   8, 
        SGMD,   8, 
        SGFL,   8, 
        PWOK,   8, 
        HLRS,   8, 
        DSEL,   8, 
        ESEL,   8, 
        PSEL,   8, 
        PWEN,   8, 
        PRST,   8, 
        MXD1,   32, 
        MXD2,   32, 
        MXD3,   32, 
        MXD4,   32, 
        MXD5,   32, 
        MXD6,   32, 
        MXD7,   32, 
        MXD8,   32, 
        GBAS,   16, 
        SGGP,   8, 
        Offset (0x19D), 
        ALFP,   8, 
        IMON,   8, 
        PDTS,   8, 
        PKGA,   8, 
        PAMT,   8, 
        AC0F,   8, 
        AC1F,   8, 
        DTS3,   8, 
        DTS4,   8, 
        Offset (0x1B2), 
        XHCI,   8, 
        XHPM,   8, 
        Offset (0x1B7), 
        XTUB,   32, 
        XTUS,   32, 
        XMPB,   32, 
        Offset (0x1C4), 
        LPMV,   8, 
        Offset (0x1C6), 
        DDRF,   8, 
        MM64,   8
    }

    Scope (_SB)
    {
        Name (PR00, Package (0x1F)
        {
            Package (0x04)
            {
                0x001FFFFF, 
                Zero, 
                LNKF, 
                Zero
            }, 

            Package (0x04)
            {
                0x001FFFFF, 
                One, 
                LNKD, 
                Zero
            }, 

            Package (0x04)
            {
                0x001FFFFF, 
                0x02, 
                LNKC, 
                Zero
            }, 

            Package (0x04)
            {
                0x001FFFFF, 
                0x03, 
                LNKA, 
                Zero
            }, 

            Package (0x04)
            {
                0x0014FFFF, 
                Zero, 
                LNKA, 
                Zero
            }, 

            Package (0x04)
            {
                0x001DFFFF, 
                Zero, 
                LNKH, 
                Zero
            }, 

            Package (0x04)
            {
                0x001AFFFF, 
                Zero, 
                LNKA, 
                Zero
            }, 

            Package (0x04)
            {
                0x001BFFFF, 
                Zero, 
                LNKG, 
                Zero
            }, 

            Package (0x04)
            {
                0x0018FFFF, 
                Zero, 
                LNKE, 
                Zero
            }, 

            Package (0x04)
            {
                0x0019FFFF, 
                Zero, 
                LNKE, 
                Zero
            }, 

            Package (0x04)
            {
                0x0016FFFF, 
                Zero, 
                LNKA, 
                Zero
            }, 

            Package (0x04)
            {
                0x0016FFFF, 
                One, 
                LNKD, 
                Zero
            }, 

            Package (0x04)
            {
                0x0016FFFF, 
                0x02, 
                LNKC, 
                Zero
            }, 

            Package (0x04)
            {
                0x0016FFFF, 
                0x03, 
                LNKB, 
                Zero
            }, 

            Package (0x04)
            {
                0x001CFFFF, 
                Zero, 
                LNKA, 
                Zero
            }, 

            Package (0x04)
            {
                0x001CFFFF, 
                One, 
                LNKB, 
                Zero
            }, 

            Package (0x04)
            {
                0x001CFFFF, 
                0x02, 
                LNKC, 
                Zero
            }, 

            Package (0x04)
            {
                0x001CFFFF, 
                0x03, 
                LNKD, 
                Zero
            }, 

            Package (0x04)
            {
                0x0001FFFF, 
                Zero, 
                LNKA, 
                Zero
            }, 

            Package (0x04)
            {
                0x0001FFFF, 
                One, 
                LNKB, 
                Zero
            }, 

            Package (0x04)
            {
                0x0001FFFF, 
                0x02, 
                LNKC, 
                Zero
            }, 

            Package (0x04)
            {
                0x0001FFFF, 
                0x03, 
                LNKD, 
                Zero
            }, 

            Package (0x04)
            {
                0x0006FFFF, 
                Zero, 
                LNKD, 
                Zero
            }, 

            Package (0x04)
            {
                0x0006FFFF, 
                One, 
                LNKA, 
                Zero
            }, 

            Package (0x04)
            {
                0x0006FFFF, 
                0x02, 
                LNKB, 
                Zero
            }, 

            Package (0x04)
            {
                0x0006FFFF, 
                0x03, 
                LNKC, 
                Zero
            }, 

            Package (0x04)
            {
                0x0002FFFF, 
                Zero, 
                LNKA, 
                Zero
            }, 

            Package (0x04)
            {
                0x0004FFFF, 
                Zero, 
                LNKA, 
                Zero
            }, 

            Package (0x04)
            {
                0x0004FFFF, 
                One, 
                LNKB, 
                Zero
            }, 

            Package (0x04)
            {
                0x0004FFFF, 
                0x02, 
                LNKC, 
                Zero
            }, 

            Package (0x04)
            {
                0x0004FFFF, 
                0x03, 
                LNKD, 
                Zero
            }
        })
        Name (AR00, Package (0x1F)
        {
            Package (0x04)
            {
                0x001FFFFF, 
                Zero, 
                Zero, 
                0x15
            }, 

            Package (0x04)
            {
                0x001FFFFF, 
                One, 
                Zero, 
                0x13
            }, 

            Package (0x04)
            {
                0x001FFFFF, 
                0x02, 
                Zero, 
                0x12
            }, 

            Package (0x04)
            {
                0x001FFFFF, 
                0x03, 
                Zero, 
                0x10
            }, 

            Package (0x04)
            {
                0x0014FFFF, 
                Zero, 
                Zero, 
                0x15
            }, 

            Package (0x04)
            {
                0x001DFFFF, 
                Zero, 
                Zero, 
                0x17
            }, 

            Package (0x04)
            {
                0x001AFFFF, 
                Zero, 
                Zero, 
                0x10
            }, 

            Package (0x04)
            {
                0x001BFFFF, 
                Zero, 
                Zero, 
                0x16
            }, 

            Package (0x04)
            {
                0x0018FFFF, 
                Zero, 
                Zero, 
                0x14
            }, 

            Package (0x04)
            {
                0x0019FFFF, 
                Zero, 
                Zero, 
                0x14
            }, 

            Package (0x04)
            {
                0x0016FFFF, 
                Zero, 
                Zero, 
                0x10
            }, 

            Package (0x04)
            {
                0x0016FFFF, 
                One, 
                Zero, 
                0x13
            }, 

            Package (0x04)
            {
                0x0016FFFF, 
                0x02, 
                Zero, 
                0x12
            }, 

            Package (0x04)
            {
                0x0016FFFF, 
                0x03, 
                Zero, 
                0x11
            }, 

            Package (0x04)
            {
                0x001CFFFF, 
                Zero, 
                Zero, 
                0x10
            }, 

            Package (0x04)
            {
                0x001CFFFF, 
                One, 
                Zero, 
                0x11
            }, 

            Package (0x04)
            {
                0x001CFFFF, 
                0x02, 
                Zero, 
                0x12
            }, 

            Package (0x04)
            {
                0x001CFFFF, 
                0x03, 
                Zero, 
                0x13
            }, 

            Package (0x04)
            {
                0x0001FFFF, 
                Zero, 
                Zero, 
                0x10
            }, 

            Package (0x04)
            {
                0x0001FFFF, 
                One, 
                Zero, 
                0x11
            }, 

            Package (0x04)
            {
                0x0001FFFF, 
                0x02, 
                Zero, 
                0x12
            }, 

            Package (0x04)
            {
                0x0001FFFF, 
                0x03, 
                Zero, 
                0x13
            }, 

            Package (0x04)
            {
                0x0006FFFF, 
                Zero, 
                Zero, 
                0x13
            }, 

            Package (0x04)
            {
                0x0006FFFF, 
                One, 
                Zero, 
                0x10
            }, 

            Package (0x04)
            {
                0x0006FFFF, 
                0x02, 
                Zero, 
                0x11
            }, 

            Package (0x04)
            {
                0x0006FFFF, 
                0x03, 
                Zero, 
                0x12
            }, 

            Package (0x04)
            {
                0x0002FFFF, 
                Zero, 
                Zero, 
                0x10
            }, 

            Package (0x04)
            {
                0x0004FFFF, 
                Zero, 
                Zero, 
                0x10
            }, 

            Package (0x04)
            {
                0x0004FFFF, 
                One, 
                Zero, 
                0x11
            }, 

            Package (0x04)
            {
                0x0004FFFF, 
                0x02, 
                Zero, 
                0x12
            }, 

            Package (0x04)
            {
                0x0004FFFF, 
                0x03, 
                Zero, 
                0x13
            }
        })
        Name (PR04, Package (0x04)
        {
            Package (0x04)
            {
                0xFFFF, 
                Zero, 
                LNKA, 
                Zero
            }, 

            Package (0x04)
            {
                0xFFFF, 
                One, 
                LNKB, 
                Zero
            }, 

            Package (0x04)
            {
                0xFFFF, 
                0x02, 
                LNKC, 
                Zero
            }, 

            Package (0x04)
            {
                0xFFFF, 
                0x03, 
                LNKD, 
                Zero
            }
        })
        Name (AR04, Package (0x04)
        {
            Package (0x04)
            {
                0xFFFF, 
                Zero, 
                Zero, 
                0x10
            }, 

            Package (0x04)
            {
                0xFFFF, 
                One, 
                Zero, 
                0x11
            }, 

            Package (0x04)
            {
                0xFFFF, 
                0x02, 
                Zero, 
                0x12
            }, 

            Package (0x04)
            {
                0xFFFF, 
                0x03, 
                Zero, 
                0x13
            }
        })
        Name (PR05, Package (0x04)
        {
            Package (0x04)
            {
                0xFFFF, 
                Zero, 
                LNKB, 
                Zero
            }, 

            Package (0x04)
            {
                0xFFFF, 
                One, 
                LNKC, 
                Zero
            }, 

            Package (0x04)
            {
                0xFFFF, 
                0x02, 
                LNKD, 
                Zero
            }, 

            Package (0x04)
            {
                0xFFFF, 
                0x03, 
                LNKA, 
                Zero
            }
        })
        Name (AR05, Package (0x04)
        {
            Package (0x04)
            {
                0xFFFF, 
                Zero, 
                Zero, 
                0x11
            }, 

            Package (0x04)
            {
                0xFFFF, 
                One, 
                Zero, 
                0x12
            }, 

            Package (0x04)
            {
                0xFFFF, 
                0x02, 
                Zero, 
                0x13
            }, 

            Package (0x04)
            {
                0xFFFF, 
                0x03, 
                Zero, 
                0x10
            }
        })
        Name (PR06, Package (0x04)
        {
            Package (0x04)
            {
                0xFFFF, 
                Zero, 
                LNKC, 
                Zero
            }, 

            Package (0x04)
            {
                0xFFFF, 
                One, 
                LNKD, 
                Zero
            }, 

            Package (0x04)
            {
                0xFFFF, 
                0x02, 
                LNKA, 
                Zero
            }, 

            Package (0x04)
            {
                0xFFFF, 
                0x03, 
                LNKB, 
                Zero
            }
        })
        Name (AR06, Package (0x04)
        {
            Package (0x04)
            {
                0xFFFF, 
                Zero, 
                Zero, 
                0x12
            }, 

            Package (0x04)
            {
                0xFFFF, 
                One, 
                Zero, 
                0x13
            }, 

            Package (0x04)
            {
                0xFFFF, 
                0x02, 
                Zero, 
                0x10
            }, 

            Package (0x04)
            {
                0xFFFF, 
                0x03, 
                Zero, 
                0x11
            }
        })
        Name (PR07, Package (0x04)
        {
            Package (0x04)
            {
                0xFFFF, 
                Zero, 
                LNKD, 
                Zero
            }, 

            Package (0x04)
            {
                0xFFFF, 
                One, 
                LNKA, 
                Zero
            }, 

            Package (0x04)
            {
                0xFFFF, 
                0x02, 
                LNKB, 
                Zero
            }, 

            Package (0x04)
            {
                0xFFFF, 
                0x03, 
                LNKC, 
                Zero
            }
        })
        Name (AR07, Package (0x04)
        {
            Package (0x04)
            {
                0xFFFF, 
                Zero, 
                Zero, 
                0x13
            }, 

            Package (0x04)
            {
                0xFFFF, 
                One, 
                Zero, 
                0x10
            }, 

            Package (0x04)
            {
                0xFFFF, 
                0x02, 
                Zero, 
                0x11
            }, 

            Package (0x04)
            {
                0xFFFF, 
                0x03, 
                Zero, 
                0x12
            }
        })
        Name (PR08, Package (0x04)
        {
            Package (0x04)
            {
                0xFFFF, 
                Zero, 
                LNKA, 
                Zero
            }, 

            Package (0x04)
            {
                0xFFFF, 
                One, 
                LNKB, 
                Zero
            }, 

            Package (0x04)
            {
                0xFFFF, 
                0x02, 
                LNKC, 
                Zero
            }, 

            Package (0x04)
            {
                0xFFFF, 
                0x03, 
                LNKD, 
                Zero
            }
        })
        Name (AR08, Package (0x04)
        {
            Package (0x04)
            {
                0xFFFF, 
                Zero, 
                Zero, 
                0x10
            }, 

            Package (0x04)
            {
                0xFFFF, 
                One, 
                Zero, 
                0x11
            }, 

            Package (0x04)
            {
                0xFFFF, 
                0x02, 
                Zero, 
                0x12
            }, 

            Package (0x04)
            {
                0xFFFF, 
                0x03, 
                Zero, 
                0x13
            }
        })
        Name (PR09, Package (0x04)
        {
            Package (0x04)
            {
                0xFFFF, 
                Zero, 
                LNKB, 
                Zero
            }, 

            Package (0x04)
            {
                0xFFFF, 
                One, 
                LNKC, 
                Zero
            }, 

            Package (0x04)
            {
                0xFFFF, 
                0x02, 
                LNKD, 
                Zero
            }, 

            Package (0x04)
            {
                0xFFFF, 
                0x03, 
                LNKA, 
                Zero
            }
        })
        Name (AR09, Package (0x04)
        {
            Package (0x04)
            {
                0xFFFF, 
                Zero, 
                Zero, 
                0x11
            }, 

            Package (0x04)
            {
                0xFFFF, 
                One, 
                Zero, 
                0x12
            }, 

            Package (0x04)
            {
                0xFFFF, 
                0x02, 
                Zero, 
                0x13
            }, 

            Package (0x04)
            {
                0xFFFF, 
                0x03, 
                Zero, 
                0x10
            }
        })
        Name (PR0E, Package (0x04)
        {
            Package (0x04)
            {
                0xFFFF, 
                Zero, 
                LNKC, 
                Zero
            }, 

            Package (0x04)
            {
                0xFFFF, 
                One, 
                LNKD, 
                Zero
            }, 

            Package (0x04)
            {
                0xFFFF, 
                0x02, 
                LNKA, 
                Zero
            }, 

            Package (0x04)
            {
                0xFFFF, 
                0x03, 
                LNKB, 
                Zero
            }
        })
        Name (AR0E, Package (0x04)
        {
            Package (0x04)
            {
                0xFFFF, 
                Zero, 
                Zero, 
                0x12
            }, 

            Package (0x04)
            {
                0xFFFF, 
                One, 
                Zero, 
                0x13
            }, 

            Package (0x04)
            {
                0xFFFF, 
                0x02, 
                Zero, 
                0x10
            }, 

            Package (0x04)
            {
                0xFFFF, 
                0x03, 
                Zero, 
                0x11
            }
        })
        Name (PR0F, Package (0x04)
        {
            Package (0x04)
            {
                0xFFFF, 
                Zero, 
                LNKD, 
                Zero
            }, 

            Package (0x04)
            {
                0xFFFF, 
                One, 
                LNKA, 
                Zero
            }, 

            Package (0x04)
            {
                0xFFFF, 
                0x02, 
                LNKB, 
                Zero
            }, 

            Package (0x04)
            {
                0xFFFF, 
                0x03, 
                LNKC, 
                Zero
            }
        })
        Name (AR0F, Package (0x04)
        {
            Package (0x04)
            {
                0xFFFF, 
                Zero, 
                Zero, 
                0x13
            }, 

            Package (0x04)
            {
                0xFFFF, 
                One, 
                Zero, 
                0x10
            }, 

            Package (0x04)
            {
                0xFFFF, 
                0x02, 
                Zero, 
                0x11
            }, 

            Package (0x04)
            {
                0xFFFF, 
                0x03, 
                Zero, 
                0x12
            }
        })
        Name (PR02, Package (0x04)
        {
            Package (0x04)
            {
                0xFFFF, 
                Zero, 
                LNKA, 
                Zero
            }, 

            Package (0x04)
            {
                0xFFFF, 
                One, 
                LNKB, 
                Zero
            }, 

            Package (0x04)
            {
                0xFFFF, 
                0x02, 
                LNKC, 
                Zero
            }, 

            Package (0x04)
            {
                0xFFFF, 
                0x03, 
                LNKD, 
                Zero
            }
        })
        Name (AR02, Package (0x04)
        {
            Package (0x04)
            {
                0xFFFF, 
                Zero, 
                Zero, 
                0x10
            }, 

            Package (0x04)
            {
                0xFFFF, 
                One, 
                Zero, 
                0x11
            }, 

            Package (0x04)
            {
                0xFFFF, 
                0x02, 
                Zero, 
                0x12
            }, 

            Package (0x04)
            {
                0xFFFF, 
                0x03, 
                Zero, 
                0x13
            }
        })
        Name (PR0A, Package (0x04)
        {
            Package (0x04)
            {
                0xFFFF, 
                Zero, 
                LNKB, 
                Zero
            }, 

            Package (0x04)
            {
                0xFFFF, 
                One, 
                LNKC, 
                Zero
            }, 

            Package (0x04)
            {
                0xFFFF, 
                0x02, 
                LNKD, 
                Zero
            }, 

            Package (0x04)
            {
                0xFFFF, 
                0x03, 
                LNKA, 
                Zero
            }
        })
        Name (AR0A, Package (0x04)
        {
            Package (0x04)
            {
                0xFFFF, 
                Zero, 
                Zero, 
                0x11
            }, 

            Package (0x04)
            {
                0xFFFF, 
                One, 
                Zero, 
                0x12
            }, 

            Package (0x04)
            {
                0xFFFF, 
                0x02, 
                Zero, 
                0x13
            }, 

            Package (0x04)
            {
                0xFFFF, 
                0x03, 
                Zero, 
                0x10
            }
        })
        Name (PR0B, Package (0x04)
        {
            Package (0x04)
            {
                0xFFFF, 
                Zero, 
                LNKC, 
                Zero
            }, 

            Package (0x04)
            {
                0xFFFF, 
                One, 
                LNKD, 
                Zero
            }, 

            Package (0x04)
            {
                0xFFFF, 
                0x02, 
                LNKA, 
                Zero
            }, 

            Package (0x04)
            {
                0xFFFF, 
                0x03, 
                LNKB, 
                Zero
            }
        })
        Name (AR0B, Package (0x04)
        {
            Package (0x04)
            {
                0xFFFF, 
                Zero, 
                Zero, 
                0x12
            }, 

            Package (0x04)
            {
                0xFFFF, 
                One, 
                Zero, 
                0x13
            }, 

            Package (0x04)
            {
                0xFFFF, 
                0x02, 
                Zero, 
                0x10
            }, 

            Package (0x04)
            {
                0xFFFF, 
                0x03, 
                Zero, 
                0x11
            }
        })
        Name (PR0C, Package (0x04)
        {
            Package (0x04)
            {
                0xFFFF, 
                Zero, 
                LNKD, 
                Zero
            }, 

            Package (0x04)
            {
                0xFFFF, 
                One, 
                LNKA, 
                Zero
            }, 

            Package (0x04)
            {
                0xFFFF, 
                0x02, 
                LNKB, 
                Zero
            }, 

            Package (0x04)
            {
                0xFFFF, 
                0x03, 
                LNKC, 
                Zero
            }
        })
        Name (AR0C, Package (0x04)
        {
            Package (0x04)
            {
                0xFFFF, 
                Zero, 
                Zero, 
                0x13
            }, 

            Package (0x04)
            {
                0xFFFF, 
                One, 
                Zero, 
                0x10
            }, 

            Package (0x04)
            {
                0xFFFF, 
                0x02, 
                Zero, 
                0x11
            }, 

            Package (0x04)
            {
                0xFFFF, 
                0x03, 
                Zero, 
                0x12
            }
        })
        Name (PR01, Package (0x0C)
        {
            Package (0x04)
            {
                0xFFFF, 
                Zero, 
                LNKF, 
                Zero
            }, 

            Package (0x04)
            {
                0xFFFF, 
                One, 
                LNKG, 
                Zero
            }, 

            Package (0x04)
            {
                0xFFFF, 
                0x02, 
                LNKH, 
                Zero
            }, 

            Package (0x04)
            {
                0xFFFF, 
                0x03, 
                LNKE, 
                Zero
            }, 

            Package (0x04)
            {
                0x0001FFFF, 
                Zero, 
                LNKG, 
                Zero
            }, 

            Package (0x04)
            {
                0x0001FFFF, 
                One, 
                LNKF, 
                Zero
            }, 

            Package (0x04)
            {
                0x0001FFFF, 
                0x02, 
                LNKE, 
                Zero
            }, 

            Package (0x04)
            {
                0x0001FFFF, 
                0x03, 
                LNKH, 
                Zero
            }, 

            Package (0x04)
            {
                0x0005FFFF, 
                Zero, 
                LNKC, 
                Zero
            }, 

            Package (0x04)
            {
                0x0005FFFF, 
                One, 
                LNKE, 
                Zero
            }, 

            Package (0x04)
            {
                0x0005FFFF, 
                0x02, 
                LNKG, 
                Zero
            }, 

            Package (0x04)
            {
                0x0005FFFF, 
                0x03, 
                LNKF, 
                Zero
            }
        })
        Name (AR01, Package (0x0C)
        {
            Package (0x04)
            {
                0xFFFF, 
                Zero, 
                Zero, 
                0x15
            }, 

            Package (0x04)
            {
                0xFFFF, 
                One, 
                Zero, 
                0x16
            }, 

            Package (0x04)
            {
                0xFFFF, 
                0x02, 
                Zero, 
                0x17
            }, 

            Package (0x04)
            {
                0xFFFF, 
                0x03, 
                Zero, 
                0x14
            }, 

            Package (0x04)
            {
                0x0001FFFF, 
                Zero, 
                Zero, 
                0x16
            }, 

            Package (0x04)
            {
                0x0001FFFF, 
                One, 
                Zero, 
                0x15
            }, 

            Package (0x04)
            {
                0x0001FFFF, 
                0x02, 
                Zero, 
                0x14
            }, 

            Package (0x04)
            {
                0x0001FFFF, 
                0x03, 
                Zero, 
                0x17
            }, 

            Package (0x04)
            {
                0x0005FFFF, 
                Zero, 
                Zero, 
                0x12
            }, 

            Package (0x04)
            {
                0x0005FFFF, 
                One, 
                Zero, 
                0x14
            }, 

            Package (0x04)
            {
                0x0005FFFF, 
                0x02, 
                Zero, 
                0x16
            }, 

            Package (0x04)
            {
                0x0005FFFF, 
                0x03, 
                Zero, 
                0x15
            }
        })
        Name (PRSA, ResourceTemplate ()
        {
            IRQ (Level, ActiveLow, Shared, )
                {1,3,4,5,6,10,11,12,14,15}
        })
        Alias (PRSA, PRSB)
        Alias (PRSA, PRSC)
        Alias (PRSA, PRSD)
        Alias (PRSA, PRSE)
        Alias (PRSA, PRSF)
        Alias (PRSA, PRSG)
        Alias (PRSA, PRSH)
        Device (PCI0)
        {
            Name (_HID, EisaId ("PNP0A08"))  // _HID: Hardware ID
            Name (_CID, EisaId ("PNP0A03"))  // _CID: Compatible ID
            Name (_ADR, Zero)  // _ADR: Address
            Method (^BN00, 0, NotSerialized)
            {
                Return (Zero)
            }

            Method (_BBN, 0, NotSerialized)  // _BBN: BIOS Bus Number
            {
                Return (BN00 ())
            }

            Name (_UID, Zero)  // _UID: Unique ID
            Method (_PRT, 0, NotSerialized)  // _PRT: PCI Routing Table
            {
                If (PICM)
                {
                    Return (AR00 ())
                }

                Return (PR00 ())
            }

            OperationRegion (HBUS, PCI_Config, Zero, 0x0100)
            Field (HBUS, DWordAcc, NoLock, Preserve)
            {
                Offset (0x40), 
                EPEN,   1, 
                    ,   11, 
                EPBR,   20, 
                Offset (0x48), 
                MHEN,   1, 
                    ,   14, 
                MHBR,   17, 
                Offset (0x50), 
                GCLK,   1, 
                Offset (0x54), 
                D0EN,   1, 
                Offset (0x60), 
                PXEN,   1, 
                PXSZ,   2, 
                    ,   23, 
                PXBR,   6, 
                Offset (0x68), 
                DIEN,   1, 
                    ,   11, 
                DIBR,   20, 
                Offset (0x70), 
                    ,   20, 
                MEBR,   12, 
                Offset (0x80), 
                    ,   4, 
                PM0H,   2, 
                Offset (0x81), 
                PM1L,   2, 
                    ,   2, 
                PM1H,   2, 
                Offset (0x82), 
                PM2L,   2, 
                    ,   2, 
                PM2H,   2, 
                Offset (0x83), 
                PM3L,   2, 
                    ,   2, 
                PM3H,   2, 
                Offset (0x84), 
                PM4L,   2, 
                    ,   2, 
                PM4H,   2, 
                Offset (0x85), 
                PM5L,   2, 
                    ,   2, 
                PM5H,   2, 
                Offset (0x86), 
                PM6L,   2, 
                    ,   2, 
                PM6H,   2, 
                Offset (0x87), 
                Offset (0xA8), 
                    ,   20, 
                TUUD,   19, 
                Offset (0xBC), 
                    ,   20, 
                TLUD,   12, 
                Offset (0xC8), 
                    ,   7, 
                HTSE,   1
            }

            OperationRegion (MCHT, SystemMemory, 0xFED10000, 0x1100)
            Field (MCHT, ByteAcc, NoLock, Preserve)
            {
            }

            Name (BUF0, ResourceTemplate ()
            {
                WordBusNumber (ResourceProducer, MinFixed, MaxFixed, PosDecode,
                    0x0000,             // Granularity
                    0x0000,             // Range Minimum
                    0x00FF,             // Range Maximum
                    0x0000,             // Translation Offset
                    0x0100,             // Length
                    ,, _Y00)
                DWordIO (ResourceProducer, MinFixed, MaxFixed, PosDecode, EntireRange,
                    0x00000000,         // Granularity
                    0x00000000,         // Range Minimum
                    0x00000CF7,         // Range Maximum
                    0x00000000,         // Translation Offset
                    0x00000CF8,         // Length
                    ,, , TypeStatic)
                IO (Decode16,
                    0x0CF8,             // Range Minimum
                    0x0CF8,             // Range Maximum
                    0x01,               // Alignment
                    0x08,               // Length
                    )
                DWordIO (ResourceProducer, MinFixed, MaxFixed, PosDecode, EntireRange,
                    0x00000000,         // Granularity
                    0x00000D00,         // Range Minimum
                    0x0000FFFF,         // Range Maximum
                    0x00000000,         // Translation Offset
                    0x0000F300,         // Length
                    ,, , TypeStatic)
                DWordMemory (ResourceProducer, PosDecode, MinFixed, MaxFixed, Cacheable, ReadWrite,
                    0x00000000,         // Granularity
                    0x000A0000,         // Range Minimum
                    0x000BFFFF,         // Range Maximum
                    0x00000000,         // Translation Offset
                    0x00020000,         // Length
                    ,, , AddressRangeMemory, TypeStatic)
                DWordMemory (ResourceProducer, PosDecode, MinFixed, MaxFixed, Cacheable, ReadWrite,
                    0x00000000,         // Granularity
                    0x000C0000,         // Range Minimum
                    0x000C3FFF,         // Range Maximum
                    0x00000000,         // Translation Offset
                    0x00004000,         // Length
                    ,, _Y01, AddressRangeMemory, TypeStatic)
                DWordMemory (ResourceProducer, PosDecode, MinFixed, MaxFixed, Cacheable, ReadWrite,
                    0x00000000,         // Granularity
                    0x000C4000,         // Range Minimum
                    0x000C7FFF,         // Range Maximum
                    0x00000000,         // Translation Offset
                    0x00004000,         // Length
                    ,, _Y02, AddressRangeMemory, TypeStatic)
                DWordMemory (ResourceProducer, PosDecode, MinFixed, MaxFixed, Cacheable, ReadWrite,
                    0x00000000,         // Granularity
                    0x000C8000,         // Range Minimum
                    0x000CBFFF,         // Range Maximum
                    0x00000000,         // Translation Offset
                    0x00004000,         // Length
                    ,, _Y03, AddressRangeMemory, TypeStatic)
                DWordMemory (ResourceProducer, PosDecode, MinFixed, MaxFixed, Cacheable, ReadWrite,
                    0x00000000,         // Granularity
                    0x000CC000,         // Range Minimum
                    0x000CFFFF,         // Range Maximum
                    0x00000000,         // Translation Offset
                    0x00004000,         // Length
                    ,, _Y04, AddressRangeMemory, TypeStatic)
                DWordMemory (ResourceProducer, PosDecode, MinFixed, MaxFixed, Cacheable, ReadWrite,
                    0x00000000,         // Granularity
                    0x000D0000,         // Range Minimum
                    0x000D3FFF,         // Range Maximum
                    0x00000000,         // Translation Offset
                    0x00004000,         // Length
                    ,, _Y05, AddressRangeMemory, TypeStatic)
                DWordMemory (ResourceProducer, PosDecode, MinFixed, MaxFixed, Cacheable, ReadWrite,
                    0x00000000,         // Granularity
                    0x000D4000,         // Range Minimum
                    0x000D7FFF,         // Range Maximum
                    0x00000000,         // Translation Offset
                    0x00004000,         // Length
                    ,, _Y06, AddressRangeMemory, TypeStatic)
                DWordMemory (ResourceProducer, PosDecode, MinFixed, MaxFixed, Cacheable, ReadWrite,
                    0x00000000,         // Granularity
                    0x000D8000,         // Range Minimum
                    0x000DBFFF,         // Range Maximum
                    0x00000000,         // Translation Offset
                    0x00004000,         // Length
                    ,, _Y07, AddressRangeMemory, TypeStatic)
                DWordMemory (ResourceProducer, PosDecode, MinFixed, MaxFixed, Cacheable, ReadWrite,
                    0x00000000,         // Granularity
                    0x000DC000,         // Range Minimum
                    0x000DFFFF,         // Range Maximum
                    0x00000000,         // Translation Offset
                    0x00004000,         // Length
                    ,, _Y08, AddressRangeMemory, TypeStatic)
                DWordMemory (ResourceProducer, PosDecode, MinFixed, MaxFixed, Cacheable, ReadWrite,
                    0x00000000,         // Granularity
                    0x000E0000,         // Range Minimum
                    0x000E3FFF,         // Range Maximum
                    0x00000000,         // Translation Offset
                    0x00004000,         // Length
                    ,, _Y09, AddressRangeMemory, TypeStatic)
                DWordMemory (ResourceProducer, PosDecode, MinFixed, MaxFixed, Cacheable, ReadWrite,
                    0x00000000,         // Granularity
                    0x000E4000,         // Range Minimum
                    0x000E7FFF,         // Range Maximum
                    0x00000000,         // Translation Offset
                    0x00004000,         // Length
                    ,, _Y0A, AddressRangeMemory, TypeStatic)
                DWordMemory (ResourceProducer, PosDecode, MinFixed, MaxFixed, Cacheable, ReadWrite,
                    0x00000000,         // Granularity
                    0x000E8000,         // Range Minimum
                    0x000EBFFF,         // Range Maximum
                    0x00000000,         // Translation Offset
                    0x00004000,         // Length
                    ,, _Y0B, AddressRangeMemory, TypeStatic)
                DWordMemory (ResourceProducer, PosDecode, MinFixed, MaxFixed, Cacheable, ReadWrite,
                    0x00000000,         // Granularity
                    0x000EC000,         // Range Minimum
                    0x000EFFFF,         // Range Maximum
                    0x00000000,         // Translation Offset
                    0x00004000,         // Length
                    ,, _Y0C, AddressRangeMemory, TypeStatic)
                DWordMemory (ResourceProducer, PosDecode, MinFixed, MaxFixed, Cacheable, ReadWrite,
                    0x00000000,         // Granularity
                    0x000F0000,         // Range Minimum
                    0x000FFFFF,         // Range Maximum
                    0x00000000,         // Translation Offset
                    0x00010000,         // Length
                    ,, _Y0D, AddressRangeMemory, TypeStatic)
                DWordMemory (ResourceProducer, PosDecode, MinFixed, MaxFixed, Cacheable, ReadWrite,
                    0x00000000,         // Granularity
                    0x00000000,         // Range Minimum
                    0xFEAFFFFF,         // Range Maximum
                    0x00000000,         // Translation Offset
                    0xFEB00000,         // Length
                    ,, _Y0E, AddressRangeMemory, TypeStatic)
                QWordMemory (ResourceProducer, PosDecode, MinFixed, MaxFixed, Cacheable, ReadWrite,
                    0x0000000000000000, // Granularity
                    0x0000000000010000, // Range Minimum
                    0x000000000001FFFF, // Range Maximum
                    0x0000000000000000, // Translation Offset
                    0x0000000000010000, // Length
                    ,, _Y0F, AddressRangeMemory, TypeStatic)
            })
            Method (_CRS, 0, Serialized)  // _CRS: Current Resource Settings
            {
                CreateWordField (BUF0, \_SB.PCI0._Y00._MAX, PBMX)  // _MAX: Maximum Base Address
                Store (Subtract (ShiftRight (PELN, 0x14), 0x02), PBMX)
                CreateWordField (BUF0, \_SB.PCI0._Y00._LEN, PBLN)  // _LEN: Length
                Store (Subtract (ShiftRight (PELN, 0x14), One), PBLN)
                If (PM1L)
                {
                    CreateDWordField (BUF0, \_SB.PCI0._Y01._LEN, C0LN)  // _LEN: Length
                    Store (Zero, C0LN)
                }

                If (LEqual (PM1L, One))
                {
                    CreateBitField (BUF0, \_SB.PCI0._Y01._RW, C0RW)  // _RW_: Read-Write Status
                    Store (Zero, C0RW)
                }

                If (PM1H)
                {
                    CreateDWordField (BUF0, \_SB.PCI0._Y02._LEN, C4LN)  // _LEN: Length
                    Store (Zero, C4LN)
                }

                If (LEqual (PM1H, One))
                {
                    CreateBitField (BUF0, \_SB.PCI0._Y02._RW, C4RW)  // _RW_: Read-Write Status
                    Store (Zero, C4RW)
                }

                If (PM2L)
                {
                    CreateDWordField (BUF0, \_SB.PCI0._Y03._LEN, C8LN)  // _LEN: Length
                    Store (Zero, C8LN)
                }

                If (LEqual (PM2L, One))
                {
                    CreateBitField (BUF0, \_SB.PCI0._Y03._RW, C8RW)  // _RW_: Read-Write Status
                    Store (Zero, C8RW)
                }

                If (PM2H)
                {
                    CreateDWordField (BUF0, \_SB.PCI0._Y04._LEN, CCLN)  // _LEN: Length
                    Store (Zero, CCLN)
                }

                If (LEqual (PM2H, One))
                {
                    CreateBitField (BUF0, \_SB.PCI0._Y04._RW, CCRW)  // _RW_: Read-Write Status
                    Store (Zero, CCRW)
                }

                If (PM3L)
                {
                    CreateDWordField (BUF0, \_SB.PCI0._Y05._LEN, D0LN)  // _LEN: Length
                    Store (Zero, D0LN)
                }

                If (LEqual (PM3L, One))
                {
                    CreateBitField (BUF0, \_SB.PCI0._Y05._RW, D0RW)  // _RW_: Read-Write Status
                    Store (Zero, D0RW)
                }

                If (PM3H)
                {
                    CreateDWordField (BUF0, \_SB.PCI0._Y06._LEN, D4LN)  // _LEN: Length
                    Store (Zero, D4LN)
                }

                If (LEqual (PM3H, One))
                {
                    CreateBitField (BUF0, \_SB.PCI0._Y06._RW, D4RW)  // _RW_: Read-Write Status
                    Store (Zero, D4RW)
                }

                If (PM4L)
                {
                    CreateDWordField (BUF0, \_SB.PCI0._Y07._LEN, D8LN)  // _LEN: Length
                    Store (Zero, D8LN)
                }

                If (LEqual (PM4L, One))
                {
                    CreateBitField (BUF0, \_SB.PCI0._Y07._RW, D8RW)  // _RW_: Read-Write Status
                    Store (Zero, D8RW)
                }

                If (PM4H)
                {
                    CreateDWordField (BUF0, \_SB.PCI0._Y08._LEN, DCLN)  // _LEN: Length
                    Store (Zero, DCLN)
                }

                If (LEqual (PM4H, One))
                {
                    CreateBitField (BUF0, \_SB.PCI0._Y08._RW, DCRW)  // _RW_: Read-Write Status
                    Store (Zero, DCRW)
                }

                If (PM5L)
                {
                    CreateDWordField (BUF0, \_SB.PCI0._Y09._LEN, E0LN)  // _LEN: Length
                    Store (Zero, E0LN)
                }

                If (LEqual (PM5L, One))
                {
                    CreateBitField (BUF0, \_SB.PCI0._Y09._RW, E0RW)  // _RW_: Read-Write Status
                    Store (Zero, E0RW)
                }

                If (PM5H)
                {
                    CreateDWordField (BUF0, \_SB.PCI0._Y0A._LEN, E4LN)  // _LEN: Length
                    Store (Zero, E4LN)
                }

                If (LEqual (PM5H, One))
                {
                    CreateBitField (BUF0, \_SB.PCI0._Y0A._RW, E4RW)  // _RW_: Read-Write Status
                    Store (Zero, E4RW)
                }

                If (PM6L)
                {
                    CreateDWordField (BUF0, \_SB.PCI0._Y0B._LEN, E8LN)  // _LEN: Length
                    Store (Zero, E8LN)
                }

                If (LEqual (PM6L, One))
                {
                    CreateBitField (BUF0, \_SB.PCI0._Y0B._RW, E8RW)  // _RW_: Read-Write Status
                    Store (Zero, E8RW)
                }

                If (PM6H)
                {
                    CreateDWordField (BUF0, \_SB.PCI0._Y0C._LEN, ECLN)  // _LEN: Length
                    Store (Zero, ECLN)
                }

                If (LEqual (PM6H, One))
                {
                    CreateBitField (BUF0, \_SB.PCI0._Y0C._RW, ECRW)  // _RW_: Read-Write Status
                    Store (Zero, ECRW)
                }

                If (PM0H)
                {
                    CreateDWordField (BUF0, \_SB.PCI0._Y0D._LEN, F0LN)  // _LEN: Length
                    Store (Zero, F0LN)
                }

                If (LEqual (PM0H, One))
                {
                    CreateBitField (BUF0, \_SB.PCI0._Y0D._RW, F0RW)  // _RW_: Read-Write Status
                    Store (Zero, F0RW)
                }

                CreateDWordField (BUF0, \_SB.PCI0._Y0E._MIN, M1MN)  // _MIN: Minimum Base Address
                CreateDWordField (BUF0, \_SB.PCI0._Y0E._MAX, M1MX)  // _MAX: Maximum Base Address
                CreateDWordField (BUF0, \_SB.PCI0._Y0E._LEN, M1LN)  // _LEN: Length
                ShiftLeft (TLUD, 0x14, M1MN)
                Add (Subtract (M1MX, M1MN), One, M1LN)
                If (LOr (LEqual (MM64, Zero), LLessEqual (OSYS, 0x07D3)))
                {
                    CreateDWordField (BUF0, \_SB.PCI0._Y0F._LEN, MSLN)  // _LEN: Length
                    Store (Zero, MSLN)
                }
                Else
                {
                    CreateQWordField (BUF0, \_SB.PCI0._Y0F._LEN, M2LN)  // _LEN: Length
                    CreateQWordField (BUF0, \_SB.PCI0._Y0F._MIN, M2MN)  // _MIN: Minimum Base Address
                    CreateQWordField (BUF0, \_SB.PCI0._Y0F._MAX, M2MX)  // _MAX: Maximum Base Address
                    Store (0x0000000400000000, M2LN)
                    If (LGreaterEqual (TUUD, 0x1000))
                    {
                        ShiftLeft (TUUD, 0x14, M2MN)
                    }
                    Else
                    {
                        Store (0x0000000100000000, M2MN)
                    }

                    Subtract (Add (M2MN, M2LN), One, M2MX)
                }

                Return (BUF0)
            }

            Name (GUID, Buffer (0x10)
            {
                /* 0000 */   0x5B, 0x4D, 0xDB, 0x33, 0xF7, 0x1F, 0x1C, 0x40,
                /* 0008 */   0x96, 0x57, 0x74, 0x41, 0xC0, 0x3D, 0xD7, 0x66
            })
            Name (SUPP, Zero)
            Name (CTRL, Zero)
            Name (XCNT, Zero)
            Method (_OSC, 4, Serialized)  // _OSC: Operating System Capabilities
            {
                Store (Arg3, Local0)
                CreateDWordField (Local0, Zero, CDW1)
                CreateDWordField (Local0, 0x04, CDW2)
                CreateDWordField (Local0, 0x08, CDW3)
                If (^XHC.CUID (Arg0))
                {
                    Return (^XHC.POSC (Arg1, Arg2, Arg3))
                }
                Else
                {
                    If (_OSI ("Windows 2012"))
                    {
                        If (LEqual (XCNT, Zero))
                        {
                            ^XHC.XSEL ()
                            Increment (XCNT)
                        }
                    }
                }

                If (LAnd (LEqual (Arg0, GUID), NEXP))
                {
                    Store (CDW2, SUPP)
                    Store (CDW3, CTRL)
                    If (Not (And (CDW1, One)))
                    {
                        If (And (CTRL, One))
                        {
                            NHPG ()
                        }

                        If (And (CTRL, 0x04))
                        {
                            NPME ()
                        }
                    }

                    If (LNotEqual (Arg1, One))
                    {
                        Or (CDW1, 0x08, CDW1)
                    }

                    If (LNotEqual (CDW3, CTRL))
                    {
                        Or (CDW1, 0x10, CDW1)
                    }

                    Store (CTRL, CDW3)
                    Store (CTRL, OSCC)
                    Return (Local0)
                }
                Else
                {
                    Or (CDW1, 0x04, CDW1)
                    Return (Local0)
                }
            }

            Scope (\_SB.PCI0)
            {
                Method (AR00, 0, NotSerialized)
                {
                    Return (^^AR00)
                }

                Method (PR00, 0, NotSerialized)
                {
                    Return (^^PR00)
                }

                Method (AR01, 0, NotSerialized)
                {
                    Return (^^AR01)
                }

                Method (PR01, 0, NotSerialized)
                {
                    Return (^^PR01)
                }

                Method (AR02, 0, NotSerialized)
                {
                    Return (^^AR02)
                }

                Method (PR02, 0, NotSerialized)
                {
                    Return (^^PR02)
                }

                Method (AR04, 0, NotSerialized)
                {
                    Return (^^AR04)
                }

                Method (PR04, 0, NotSerialized)
                {
                    Return (^^PR04)
                }

                Method (AR05, 0, NotSerialized)
                {
                    Return (^^AR05)
                }

                Method (PR05, 0, NotSerialized)
                {
                    Return (^^PR05)
                }

                Method (AR06, 0, NotSerialized)
                {
                    Return (^^AR06)
                }

                Method (PR06, 0, NotSerialized)
                {
                    Return (^^PR06)
                }

                Method (AR07, 0, NotSerialized)
                {
                    Return (^^AR07)
                }

                Method (PR07, 0, NotSerialized)
                {
                    Return (^^PR07)
                }

                Method (AR08, 0, NotSerialized)
                {
                    Return (^^AR08)
                }

                Method (PR08, 0, NotSerialized)
                {
                    Return (^^PR08)
                }

                Method (AR09, 0, NotSerialized)
                {
                    Return (^^AR09)
                }

                Method (PR09, 0, NotSerialized)
                {
                    Return (^^PR09)
                }

                Method (AR0A, 0, NotSerialized)
                {
                    Return (^^AR0A)
                }

                Method (PR0A, 0, NotSerialized)
                {
                    Return (^^PR0A)
                }

                Method (AR0B, 0, NotSerialized)
                {
                    Return (^^AR0B)
                }

                Method (PR0B, 0, NotSerialized)
                {
                    Return (^^PR0B)
                }
            }

            Device (P0P1)
            {
                Name (_ADR, 0x001E0000)  // _ADR: Address
                Method (_PRW, 0, NotSerialized)  // _PRW: Power Resources for Wake
                {
                    Return (GPRW (0x0B, 0x04))
                }

                Method (_PRT, 0, NotSerialized)  // _PRT: PCI Routing Table
                {
                    If (PICM)
                    {
                        Return (AR01 ())
                    }

                    Return (PR01 ())
                }
            }

            Device (LPCB)
            {
                Name (_ADR, 0x001F0000)  // _ADR: Address
                Scope (\_SB)
                {
                    Name (TCGP, Buffer (0x08)
                    {
                         0x1F, 0xE0, 0x1F, 0x01, 0x02, 0x04, 0x08, 0xF0
                    })
                    CreateByteField (TCGP, Zero, PPRQ)
                    CreateByteField (TCGP, One, PPL1)
                    CreateByteField (TCGP, 0x02, PPRP)
                    CreateByteField (TCGP, 0x03, TPRS)
                    CreateByteField (TCGP, 0x04, PPOR)
                    CreateByteField (TCGP, 0x05, TPMV)
                    CreateByteField (TCGP, 0x06, MOR)
                    CreateByteField (TCGP, 0x07, TVEN)
                    OperationRegion (TCGC, SystemIO, 0x72, 0x02)
                    Field (TCGC, ByteAcc, Lock, Preserve)
                    {
                        TIDX,   8, 
                        TPDA,   8
                    }

                    IndexField (TIDX, TPDA, ByteAcc, Lock, Preserve)
                    {
                        Offset (0x40), 
                        TPP1,   8, 
                        PPLO,   8, 
                        TPP3,   8
                    }

                    OperationRegion (SMIP, SystemIO, 0xB2, 0x02)
                    Field (SMIP, WordAcc, NoLock, Preserve)
                    {
                        SMIT,   8, 
                        SMID,   8
                    }

                    OperationRegion (PCI0.LPCB.LPC1, PCI_Config, 0x40, 0xC0)
                    Field (PCI0.LPCB.LPC1, AnyAcc, NoLock, Preserve)
                    {
                        Offset (0x20), 
                        PARC,   8, 
                        PBRC,   8, 
                        PCRC,   8, 
                        PDRC,   8, 
                        Offset (0x28), 
                        PERC,   8, 
                        PFRC,   8, 
                        PGRC,   8, 
                        PHRC,   8, 
                        Offset (0x6C), 
                        Offset (0x6D), 
                        Offset (0x6E), 
                        XUSB,   1
                    }

                    Device (LNKA)
                    {
                        Name (_HID, EisaId ("PNP0C0F"))  // _HID: Hardware ID
                        Name (_UID, One)  // _UID: Unique ID
                        Method (_DIS, 0, Serialized)  // _DIS: Disable Device
                        {
                            Or (PARC, 0x80, PARC)
                        }

                        Method (_PRS, 0, Serialized)  // _PRS: Possible Resource Settings
                        {
                            Return (PRSA)
                        }

                        Method (_CRS, 0, Serialized)  // _CRS: Current Resource Settings
                        {
                            Name (RTLA, ResourceTemplate ()
                            {
                                IRQ (Level, ActiveLow, Shared, )
                                    {}
                            })
                            CreateWordField (RTLA, One, IRQ0)
                            Store (Zero, IRQ0)
                            ShiftLeft (One, And (PARC, 0x0F), IRQ0)
                            Return (RTLA)
                        }

                        Method (_SRS, 1, Serialized)  // _SRS: Set Resource Settings
                        {
                            CreateWordField (Arg0, One, IRQ0)
                            FindSetRightBit (IRQ0, Local0)
                            Decrement (Local0)
                            Store (Local0, PARC)
                        }

                        Method (_STA, 0, Serialized)  // _STA: Status
                        {
                            If (And (PARC, 0x80))
                            {
                                Return (0x09)
                            }
                            Else
                            {
                                Return (0x0B)
                            }
                        }
                    }

                    Device (LNKB)
                    {
                        Name (_HID, EisaId ("PNP0C0F"))  // _HID: Hardware ID
                        Name (_UID, 0x02)  // _UID: Unique ID
                        Method (_DIS, 0, Serialized)  // _DIS: Disable Device
                        {
                            Or (PBRC, 0x80, PBRC)
                        }

                        Method (_PRS, 0, Serialized)  // _PRS: Possible Resource Settings
                        {
                            Return (PRSB)
                        }

                        Method (_CRS, 0, Serialized)  // _CRS: Current Resource Settings
                        {
                            Name (RTLB, ResourceTemplate ()
                            {
                                IRQ (Level, ActiveLow, Shared, )
                                    {}
                            })
                            CreateWordField (RTLB, One, IRQ0)
                            Store (Zero, IRQ0)
                            ShiftLeft (One, And (PBRC, 0x0F), IRQ0)
                            Return (RTLB)
                        }

                        Method (_SRS, 1, Serialized)  // _SRS: Set Resource Settings
                        {
                            CreateWordField (Arg0, One, IRQ0)
                            FindSetRightBit (IRQ0, Local0)
                            Decrement (Local0)
                            Store (Local0, PBRC)
                        }

                        Method (_STA, 0, Serialized)  // _STA: Status
                        {
                            If (And (PBRC, 0x80))
                            {
                                Return (0x09)
                            }
                            Else
                            {
                                Return (0x0B)
                            }
                        }
                    }

                    Device (LNKC)
                    {
                        Name (_HID, EisaId ("PNP0C0F"))  // _HID: Hardware ID
                        Name (_UID, 0x03)  // _UID: Unique ID
                        Method (_DIS, 0, Serialized)  // _DIS: Disable Device
                        {
                            Or (PCRC, 0x80, PCRC)
                        }

                        Method (_PRS, 0, Serialized)  // _PRS: Possible Resource Settings
                        {
                            Return (PRSC)
                        }

                        Method (_CRS, 0, Serialized)  // _CRS: Current Resource Settings
                        {
                            Name (RTLC, ResourceTemplate ()
                            {
                                IRQ (Level, ActiveLow, Shared, )
                                    {}
                            })
                            CreateWordField (RTLC, One, IRQ0)
                            Store (Zero, IRQ0)
                            ShiftLeft (One, And (PCRC, 0x0F), IRQ0)
                            Return (RTLC)
                        }

                        Method (_SRS, 1, Serialized)  // _SRS: Set Resource Settings
                        {
                            CreateWordField (Arg0, One, IRQ0)
                            FindSetRightBit (IRQ0, Local0)
                            Decrement (Local0)
                            Store (Local0, PCRC)
                        }

                        Method (_STA, 0, Serialized)  // _STA: Status
                        {
                            If (And (PCRC, 0x80))
                            {
                                Return (0x09)
                            }
                            Else
                            {
                                Return (0x0B)
                            }
                        }
                    }

                    Device (LNKD)
                    {
                        Name (_HID, EisaId ("PNP0C0F"))  // _HID: Hardware ID
                        Name (_UID, 0x04)  // _UID: Unique ID
                        Method (_DIS, 0, Serialized)  // _DIS: Disable Device
                        {
                            Or (PDRC, 0x80, PDRC)
                        }

                        Method (_PRS, 0, Serialized)  // _PRS: Possible Resource Settings
                        {
                            Return (PRSD)
                        }

                        Method (_CRS, 0, Serialized)  // _CRS: Current Resource Settings
                        {
                            Name (RTLD, ResourceTemplate ()
                            {
                                IRQ (Level, ActiveLow, Shared, )
                                    {}
                            })
                            CreateWordField (RTLD, One, IRQ0)
                            Store (Zero, IRQ0)
                            ShiftLeft (One, And (PDRC, 0x0F), IRQ0)
                            Return (RTLD)
                        }

                        Method (_SRS, 1, Serialized)  // _SRS: Set Resource Settings
                        {
                            CreateWordField (Arg0, One, IRQ0)
                            FindSetRightBit (IRQ0, Local0)
                            Decrement (Local0)
                            Store (Local0, PDRC)
                        }

                        Method (_STA, 0, Serialized)  // _STA: Status
                        {
                            If (And (PDRC, 0x80))
                            {
                                Return (0x09)
                            }
                            Else
                            {
                                Return (0x0B)
                            }
                        }
                    }

                    Device (LNKE)
                    {
                        Name (_HID, EisaId ("PNP0C0F"))  // _HID: Hardware ID
                        Name (_UID, 0x05)  // _UID: Unique ID
                        Method (_DIS, 0, Serialized)  // _DIS: Disable Device
                        {
                            Or (PERC, 0x80, PERC)
                        }

                        Method (_PRS, 0, Serialized)  // _PRS: Possible Resource Settings
                        {
                            Return (PRSE)
                        }

                        Method (_CRS, 0, Serialized)  // _CRS: Current Resource Settings
                        {
                            Name (RTLE, ResourceTemplate ()
                            {
                                IRQ (Level, ActiveLow, Shared, )
                                    {}
                            })
                            CreateWordField (RTLE, One, IRQ0)
                            Store (Zero, IRQ0)
                            ShiftLeft (One, And (PERC, 0x0F), IRQ0)
                            Return (RTLE)
                        }

                        Method (_SRS, 1, Serialized)  // _SRS: Set Resource Settings
                        {
                            CreateWordField (Arg0, One, IRQ0)
                            FindSetRightBit (IRQ0, Local0)
                            Decrement (Local0)
                            Store (Local0, PERC)
                        }

                        Method (_STA, 0, Serialized)  // _STA: Status
                        {
                            If (And (PERC, 0x80))
                            {
                                Return (0x09)
                            }
                            Else
                            {
                                Return (0x0B)
                            }
                        }
                    }

                    Device (LNKF)
                    {
                        Name (_HID, EisaId ("PNP0C0F"))  // _HID: Hardware ID
                        Name (_UID, 0x06)  // _UID: Unique ID
                        Method (_DIS, 0, Serialized)  // _DIS: Disable Device
                        {
                            Or (PFRC, 0x80, PFRC)
                        }

                        Method (_PRS, 0, Serialized)  // _PRS: Possible Resource Settings
                        {
                            Return (PRSF)
                        }

                        Method (_CRS, 0, Serialized)  // _CRS: Current Resource Settings
                        {
                            Name (RTLF, ResourceTemplate ()
                            {
                                IRQ (Level, ActiveLow, Shared, )
                                    {}
                            })
                            CreateWordField (RTLF, One, IRQ0)
                            Store (Zero, IRQ0)
                            ShiftLeft (One, And (PFRC, 0x0F), IRQ0)
                            Return (RTLF)
                        }

                        Method (_SRS, 1, Serialized)  // _SRS: Set Resource Settings
                        {
                            CreateWordField (Arg0, One, IRQ0)
                            FindSetRightBit (IRQ0, Local0)
                            Decrement (Local0)
                            Store (Local0, PFRC)
                        }

                        Method (_STA, 0, Serialized)  // _STA: Status
                        {
                            If (And (PFRC, 0x80))
                            {
                                Return (0x09)
                            }
                            Else
                            {
                                Return (0x0B)
                            }
                        }
                    }

                    Device (LNKG)
                    {
                        Name (_HID, EisaId ("PNP0C0F"))  // _HID: Hardware ID
                        Name (_UID, 0x07)  // _UID: Unique ID
                        Method (_DIS, 0, Serialized)  // _DIS: Disable Device
                        {
                            Or (PGRC, 0x80, PGRC)
                        }

                        Method (_PRS, 0, Serialized)  // _PRS: Possible Resource Settings
                        {
                            Return (PRSG)
                        }

                        Method (_CRS, 0, Serialized)  // _CRS: Current Resource Settings
                        {
                            Name (RTLG, ResourceTemplate ()
                            {
                                IRQ (Level, ActiveLow, Shared, )
                                    {}
                            })
                            CreateWordField (RTLG, One, IRQ0)
                            Store (Zero, IRQ0)
                            ShiftLeft (One, And (PGRC, 0x0F), IRQ0)
                            Return (RTLG)
                        }

                        Method (_SRS, 1, Serialized)  // _SRS: Set Resource Settings
                        {
                            CreateWordField (Arg0, One, IRQ0)
                            FindSetRightBit (IRQ0, Local0)
                            Decrement (Local0)
                            Store (Local0, PGRC)
                        }

                        Method (_STA, 0, Serialized)  // _STA: Status
                        {
                            If (And (PGRC, 0x80))
                            {
                                Return (0x09)
                            }
                            Else
                            {
                                Return (0x0B)
                            }
                        }
                    }

                    Device (LNKH)
                    {
                        Name (_HID, EisaId ("PNP0C0F"))  // _HID: Hardware ID
                        Name (_UID, 0x08)  // _UID: Unique ID
                        Method (_DIS, 0, Serialized)  // _DIS: Disable Device
                        {
                            Or (PHRC, 0x80, PHRC)
                        }

                        Method (_PRS, 0, Serialized)  // _PRS: Possible Resource Settings
                        {
                            Return (PRSH)
                        }

                        Method (_CRS, 0, Serialized)  // _CRS: Current Resource Settings
                        {
                            Name (RTLH, ResourceTemplate ()
                            {
                                IRQ (Level, ActiveLow, Shared, )
                                    {}
                            })
                            CreateWordField (RTLH, One, IRQ0)
                            Store (Zero, IRQ0)
                            ShiftLeft (One, And (PHRC, 0x0F), IRQ0)
                            Return (RTLH)
                        }

                        Method (_SRS, 1, Serialized)  // _SRS: Set Resource Settings
                        {
                            CreateWordField (Arg0, One, IRQ0)
                            FindSetRightBit (IRQ0, Local0)
                            Decrement (Local0)
                            Store (Local0, PHRC)
                        }

                        Method (_STA, 0, Serialized)  // _STA: Status
                        {
                            If (And (PHRC, 0x80))
                            {
                                Return (0x09)
                            }
                            Else
                            {
                                Return (0x0B)
                            }
                        }
                    }
                }

                OperationRegion (LPC0, PCI_Config, 0x40, 0xC0)
                Field (LPC0, AnyAcc, NoLock, Preserve)
                {
                    Offset (0x40), 
                    IOD0,   8, 
                    IOD1,   8, 
                    Offset (0x60), 
                    Offset (0x61), 
                        ,   1, 
                    PBLV,   1, 
                    Offset (0xB0), 
                    RAEN,   1, 
                        ,   13, 
                    RCBA,   18
                }

                Device (H_EC)
                {
                    Name (_HID, EisaId ("PNP0C09"))  // _HID: Hardware ID
                    Name (_UID, One)  // _UID: Unique ID
                    Method (_CRS, 0, NotSerialized)  // _CRS: Current Resource Settings
                    {
                        Name (BFFR, ResourceTemplate ()
                        {
                            IO (Decode16,
                                0x0062,             // Range Minimum
                                0x0062,             // Range Maximum
                                0x00,               // Alignment
                                0x01,               // Length
                                )
                            IO (Decode16,
                                0x0066,             // Range Minimum
                                0x0066,             // Range Maximum
                                0x00,               // Alignment
                                0x01,               // Length
                                )
                        })
                        Return (BFFR)
                    }

                    Method (_STA, 0, NotSerialized)  // _STA: Status
                    {
                        If (LEqual (PFLV, One))
                        {
                            Return (0x0F)
                        }

                        Return (Zero)
                    }

                    OperationRegion (ECR, EmbeddedControl, Zero, 0xFF)
                    Field (ECR, ByteAcc, Lock, Preserve)
                    {
                        Offset (0x18), 
                        SPTR,   8, 
                        SSTS,   8, 
                        SADR,   8, 
                        SCMD,   8, 
                        SBFR,   256, 
                        SCNT,   8, 
                        Offset (0x80), 
                        B1EX,   1, 
                            ,   1, 
                        ACEX,   1, 
                        Offset (0x81), 
                        SWBE,   1, 
                        DCBE,   1, 
                        Offset (0x82), 
                        WLST,   1, 
                        OPST,   1, 
                        Offset (0x83), 
                        LIDS,   1, 
                        Offset (0x84), 
                        B1ST,   8, 
                        Offset (0x86), 
                        BRIT,   8, 
                        Offset (0x90), 
                        Offset (0x91), 
                        BPC0,   8, 
                        BPC1,   8, 
                        LUXH,   8, 
                        LUXL,   8, 
                        Offset (0x9A), 
                        VRMF,   8, 
                        Offset (0xA0), 
                        BRP0,   8, 
                        BRP1,   8, 
                        BRA0,   8, 
                        BRA1,   8, 
                        BPR0,   8, 
                        BPR1,   8, 
                        BVO0,   8, 
                        BVO1,   8, 
                        Offset (0xB0), 
                        BDA0,   8, 
                        BDA1,   8, 
                        BDF0,   8, 
                        BDF1,   8, 
                        BDV0,   8, 
                        BDV1,   8, 
                        BDL0,   8, 
                        BDL1,   8, 
                        Offset (0xC0), 
                        CTMP,   8, 
                        Offset (0xC7), 
                        TIST,   8, 
                        Offset (0xD0), 
                        CYC0,   8, 
                        CYC1,   8, 
                        BSE0,   8, 
                        BSE1,   8, 
                        BCR0,   8, 
                        BCR1,   8, 
                        BTM0,   8, 
                        BTM1,   8
                    }

                    Device (BAT1)
                    {
                        Name (_HID, EisaId ("PNP0C0A"))  // _HID: Hardware ID
                        Name (_UID, One)  // _UID: Unique ID
                        Name (BATI, Package (0x0D)
                        {
                            One, 
                            0xFFFFFFFF, 
                            0xFFFFFFFF, 
                            One, 
                            0xFFFFFFFF, 
                            0x03, 
                            0x0A, 
                            One, 
                            One, 
                            "Unknown", 
                            "Unknown", 
                            "Unknown", 
                            "Unknown"
                        })
                        Name (BIXP, Package (0x14)
                        {
                            Zero, 
                            One, 
                            0xFFFFFFFF, 
                            0xFFFFFFFF, 
                            One, 
                            0xFFFFFFFF, 
                            0x0A, 
                            0x04, 
                            Zero, 
                            0x00017318, 
                            0xFFFFFFFF, 
                            0xFFFFFFFF, 
                            0x88B8, 
                            0x61A8, 
                            One, 
                            One, 
                            "SR Real Battery", 
                            "123456789", 
                            "LION", 
                            "SAMSUNG Battery"
                        })
                        Method (_BIF, 0, NotSerialized)  // _BIF: Battery Information
                        {
                            If (LEqual (ECON, Zero))
                            {
                                Store (SECW (0x82, 0xB0, Zero), Local0)
                                If (LEqual (Local0, 0xFFFF))
                                {
                                    Store (0xFFFFFFFF, Index (BATI, One))
                                }
                                Else
                                {
                                    Store (Local0, Index (BATI, One))
                                }

                                Store (SECW (0x82, 0xB2, Zero), Local0)
                                If (LEqual (Local0, 0xFFFF))
                                {
                                    Store (0xFFFFFFFF, Index (BATI, 0x02))
                                }
                                Else
                                {
                                    Store (Local0, Index (BATI, 0x02))
                                }

                                Store (SECW (0x82, 0xB4, Zero), Local0)
                                If (LEqual (Local0, 0xFFFF))
                                {
                                    Store (0xFFFFFFFF, Index (BATI, 0x04))
                                }
                                Else
                                {
                                    Store (Local0, Index (BATI, 0x04))
                                }

                                Store (Zero, Index (BATI, 0x05))
                                Store (SECW (0x82, 0xB6, Zero), Local0)
                                If (LEqual (Local0, 0xFFFF))
                                {
                                    Store (Zero, Index (BATI, 0x06))
                                }
                                Else
                                {
                                    Store (Local0, Index (BATI, 0x06))
                                }
                            }
                            Else
                            {
                                Store (B1B2 (BDA0, BDA1), Local0)
                                ShiftLeft (Local0, 0x08, Local1)
                                And (Local1, 0xFF00, Local1)
                                ShiftRight (Local0, 0x08, Local0)
                                Or (Local0, Local1, Local0)
                                If (LEqual (Local0, 0xFFFF))
                                {
                                    Store (0xFFFFFFFF, Index (BATI, One))
                                }
                                Else
                                {
                                    Store (Local0, Index (BATI, One))
                                }

                                Store (B1B2 (BDF0, BDF1), Local0)
                                ShiftLeft (Local0, 0x08, Local1)
                                And (Local1, 0xFF00, Local1)
                                ShiftRight (Local0, 0x08, Local0)
                                Or (Local0, Local1, Local0)
                                If (LEqual (Local0, 0xFFFF))
                                {
                                    Store (0xFFFFFFFF, Index (BATI, 0x02))
                                }
                                Else
                                {
                                    Store (Local0, Index (BATI, 0x02))
                                }

                                Store (B1B2 (BDV0, BDV1), Local0)
                                ShiftLeft (Local0, 0x08, Local1)
                                And (Local1, 0xFF00, Local1)
                                ShiftRight (Local0, 0x08, Local0)
                                Or (Local0, Local1, Local0)
                                If (LEqual (Local0, 0xFFFF))
                                {
                                    Store (0xFFFFFFFF, Index (BATI, 0x04))
                                }
                                Else
                                {
                                    Store (Local0, Index (BATI, 0x04))
                                }

                                Store (Zero, Index (BATI, 0x05))
                                Store (B1B2 (BDL0, BDL1), Local0)
                                ShiftLeft (Local0, 0x08, Local1)
                                And (Local1, 0xFF00, Local1)
                                ShiftRight (Local0, 0x08, Local0)
                                Or (Local0, Local1, Local0)
                                If (LEqual (Local0, 0xFFFF))
                                {
                                    Store (0xFFFFFFFF, Index (BATI, 0x06))
                                }
                                Else
                                {
                                    Store (Local0, Index (BATI, 0x06))
                                }
                            }

                            Store ("", Index (BATI, 0x09))
                            Store ("", Index (BATI, 0x0A))
                            Store ("LION", Index (BATI, 0x0B))
                            Store ("SAMSUNG Electronics", Index (BATI, 0x0C))
                            Return (BATI)
                        }

                        Method (_BIX, 0, NotSerialized)  // _BIX: Battery Information Extended
                        {
                            If (LEqual (ECON, Zero))
                            {
                                Store (SECW (0x82, 0xB0, Zero), Local0)
                                If (LEqual (Local0, 0xFFFF))
                                {
                                    Store (0xFFFFFFFF, Index (BIXP, 0x02))
                                }
                                Else
                                {
                                    Store (Local0, Index (BIXP, 0x02))
                                }

                                Store (SECW (0x82, 0xB2, Zero), Local0)
                                If (LEqual (Local0, 0xFFFF))
                                {
                                    Store (0xFFFFFFFF, Index (BIXP, 0x03))
                                }
                                Else
                                {
                                    Store (Local0, Index (BIXP, 0x03))
                                }

                                Store (SECW (0x82, 0xB4, Zero), Local0)
                                If (LEqual (Local0, 0xFFFF))
                                {
                                    Store (0xFFFFFFFF, Index (BIXP, 0x05))
                                }
                                Else
                                {
                                    Store (Local0, Index (BIXP, 0x05))
                                }

                                Store (Zero, Index (BIXP, 0x06))
                                Store (SECW (0x82, 0xB6, Zero), Local0)
                                If (LEqual (Local0, 0xFFFF))
                                {
                                    Store (Zero, Index (BIXP, 0x07))
                                }
                                Else
                                {
                                    Store (Local0, Index (BIXP, 0x07))
                                }

                                Store (SECW (0x82, 0xD0, Zero), Local0)
                                If (LEqual (Local0, 0xFFFF))
                                {
                                    Store (Zero, Index (BIXP, 0x08))
                                }
                                Else
                                {
                                    Store (Local0, Index (BIXP, 0x08))
                                }
                            }
                            Else
                            {
                                Store (B1B2 (BDA0, BDA1), Local0)
                                ShiftLeft (Local0, 0x08, Local1)
                                And (Local1, 0xFF00, Local1)
                                ShiftRight (Local0, 0x08, Local0)
                                Or (Local0, Local1, Local0)
                                If (LEqual (Local0, 0xFFFF))
                                {
                                    Store (0xFFFFFFFF, Index (BIXP, 0x02))
                                }
                                Else
                                {
                                    Store (Local0, Index (BIXP, 0x02))
                                }

                                Store (B1B2 (BDF0, BDF1), Local0)
                                ShiftLeft (Local0, 0x08, Local1)
                                And (Local1, 0xFF00, Local1)
                                ShiftRight (Local0, 0x08, Local0)
                                Or (Local0, Local1, Local0)
                                If (LEqual (Local0, 0xFFFF))
                                {
                                    Store (0xFFFFFFFF, Index (BIXP, 0x03))
                                }
                                Else
                                {
                                    Store (Local0, Index (BIXP, 0x03))
                                }

                                Store (B1B2 (BDV0, BDV1), Local0)
                                ShiftLeft (Local0, 0x08, Local1)
                                And (Local1, 0xFF00, Local1)
                                ShiftRight (Local0, 0x08, Local0)
                                Or (Local0, Local1, Local0)
                                If (LEqual (Local0, 0xFFFF))
                                {
                                    Store (0xFFFFFFFF, Index (BIXP, 0x05))
                                }
                                Else
                                {
                                    Store (Local0, Index (BIXP, 0x05))
                                }

                                Store (Zero, Index (BIXP, 0x06))
                                Store (B1B2 (BDL0, BDL1), Local0)
                                ShiftLeft (Local0, 0x08, Local1)
                                And (Local1, 0xFF00, Local1)
                                ShiftRight (Local0, 0x08, Local0)
                                Or (Local0, Local1, Local0)
                                If (LEqual (Local0, 0xFFFF))
                                {
                                    Store (0xFFFFFFFF, Index (BIXP, 0x07))
                                }
                                Else
                                {
                                    Store (Local0, Index (BIXP, 0x07))
                                }

                                Store (B1B2 (CYC0, CYC1), Local0)
                                ShiftLeft (Local0, 0x08, Local1)
                                And (Local1, 0xFF00, Local1)
                                ShiftRight (Local0, 0x08, Local0)
                                Or (Local0, Local1, Local0)
                                If (LEqual (Local0, 0xFFFF))
                                {
                                    Store (0xFFFFFFFF, Index (BIXP, 0x08))
                                }
                                Else
                                {
                                    Store (Local0, Index (BIXP, 0x08))
                                }
                            }

                            Store ("", Index (BIXP, 0x10))
                            Store ("", Index (BIXP, 0x11))
                            Store ("LION", Index (BIXP, 0x12))
                            Store ("SAMSUNG Electronics", Index (BIXP, 0x13))
                            Return (BIXP)
                        }

                        Method (_BTP, 1, NotSerialized)  // _BTP: Battery Trip Point
                        {
                            ShiftRight (Arg0, 0x08, Local0)
                            Or (Arg0, 0x80, Local0)
                            Store (Arg0, Local1)
                            And (Local1, 0xFF, Local1)
                            ShiftLeft (Local1, 0x08, Local1)
                            Add (Local0, Local1, Local0)
                            If (LEqual (ECON, Zero)) {}
                            Else
                            {
                                Store (Local0, BPC0)
                                Store (ShiftRight (Local0, 0x08), BPC1)
                            }
                        }

                        Name (STAT, Package (0x04)
                        {
                            Zero, 
                            Zero, 
                            Zero, 
                            Zero
                        })
                        Method (_BST, 0, NotSerialized)  // _BST: Battery Status
                        {
                            If (LEqual (ECON, Zero))
                            {
                                Store (SECB (0x81, 0x84), Local0)
                                If (LAnd (LNotEqual (Local0, Zero), LNotEqual (Local0, 0x05)))
                                {
                                    If (LEqual (PWRS, One))
                                    {
                                        Store (0x02, Local0)
                                    }
                                    Else
                                    {
                                        Store (One, Local0)
                                    }
                                }

                                Store (Local0, Index (STAT, Zero))
                                Store (SECW (0x82, 0xA4, Zero), Local0)
                                If (LEqual (Local0, 0xFFFF))
                                {
                                    Store (0xFFFFFFFF, Index (STAT, One))
                                }
                                Else
                                {
                                    If (LGreaterEqual (Local0, 0x8000))
                                    {
                                        XOr (Local0, 0xFFFF, Local0)
                                        Increment (Local0)
                                    }

                                    Store (Local0, Index (STAT, One))
                                }

                                Store (SECW (0x82, 0xA2, Zero), Local0)
                                If (LEqual (Local0, 0xFFFF))
                                {
                                    Store (0xFFFFFFFF, Index (STAT, 0x02))
                                }
                                Else
                                {
                                    Store (Local0, Index (STAT, 0x02))
                                }

                                Store (SECW (0x82, 0xA6, Zero), Local0)
                                If (LEqual (Local0, 0xFFFF))
                                {
                                    Store (0xFFFFFFFF, Index (STAT, 0x03))
                                }
                                Else
                                {
                                    Store (Local0, Index (STAT, 0x03))
                                }
                            }
                            Else
                            {
                                Store (B1ST, Local0)
                                If (LAnd (LNotEqual (Local0, Zero), LNotEqual (Local0, 0x05)))
                                {
                                    If (LEqual (PWRS, One))
                                    {
                                        Store (0x02, Local0)
                                    }
                                    Else
                                    {
                                        Store (One, Local0)
                                    }
                                }

                                Store (Local0, Index (STAT, Zero))
                                Store (B1B2 (BPR0, BPR1), Local0)
                                ShiftLeft (Local0, 0x08, Local1)
                                And (Local1, 0xFF00, Local1)
                                ShiftRight (Local0, 0x08, Local0)
                                Or (Local0, Local1, Local0)
                                If (LEqual (Local0, 0xFFFF))
                                {
                                    Store (0xFFFFFFFF, Index (STAT, One))
                                }
                                Else
                                {
                                    If (LGreaterEqual (Local0, 0x8000))
                                    {
                                        XOr (Local0, 0xFFFF, Local0)
                                        Increment (Local0)
                                    }

                                    Store (Local0, Index (STAT, One))
                                }

                                Store (B1B2 (BRA0, BRA1), Local0)
                                ShiftLeft (Local0, 0x08, Local1)
                                And (Local1, 0xFF00, Local1)
                                ShiftRight (Local0, 0x08, Local0)
                                Or (Local0, Local1, Local0)
                                If (LEqual (Local0, 0xFFFF))
                                {
                                    Store (0xFFFFFFFF, Index (STAT, 0x02))
                                }
                                Else
                                {
                                    Store (Local0, Index (STAT, 0x02))
                                }

                                Store (B1B2 (BVO0, BVO1), Local0)
                                ShiftLeft (Local0, 0x08, Local1)
                                And (Local1, 0xFF00, Local1)
                                ShiftRight (Local0, 0x08, Local0)
                                Or (Local0, Local1, Local0)
                                If (LEqual (Local0, 0xFFFF))
                                {
                                    Store (0xFFFFFFFF, Index (STAT, 0x03))
                                }
                                Else
                                {
                                    Store (Local0, Index (STAT, 0x03))
                                }
                            }

                            Return (STAT)
                        }

                        Method (_STA, 0, NotSerialized)  // _STA: Status
                        {
                            If (LEqual (ECON, Zero))
                            {
                                If (LEqual (SECB (0x85, Zero), One))
                                {
                                    Store (0x1F, Local0)
                                }
                                Else
                                {
                                    Store (0x0F, Local0)
                                }
                            }
                            Else
                            {
                                If (LEqual (B1EX, One))
                                {
                                    Store (0x1F, Local0)
                                }
                                Else
                                {
                                    Store (0x0F, Local0)
                                }
                            }

                            Return (Local0)
                        }

                        Method (_PCL, 0, NotSerialized)  // _PCL: Power Consumer List
                        {
                            Return (_SB)
                        }
                    }

                    Device (ALSD)
                    {
                        Name (_HID, "ACPI0008")  // _HID: Hardware ID
                        Method (_STA, 0, NotSerialized)  // _STA: Status
                        {
                            If (LEqual (ALSE, 0x02))
                            {
                                If (LGreaterEqual (OSYS, 0x07D9))
                                {
                                    If (LNotEqual (LAnd (GL01, 0x02), Zero))
                                    {
                                        Return (0x0B)
                                    }
                                }

                                Return (0x08)
                            }

                            Return (Zero)
                        }

                        Method (_ALI, 0, NotSerialized)  // _ALI: Ambient Light Illuminance
                        {
                            Store (LUXH, Local0)
                            Or (ShiftLeft (Local0, 0x08), LUXL, Local0)
                            Store (Local0, Local4)
                            Store (0x09, Local2)
                            Store (0x97, Local3)
                            Store (Multiply (Local0, Local2), Local0)
                            Store (Divide (Local0, Local3, ), Local0)
                            If (And (LNotEqual (Local4, Zero), LEqual (Local0, Zero)))
                            {
                                Store (One, Local0)
                            }

                            Store (Local0, Local1)
                            Store (Local0, Local2)
                            Store (And (Local0, 0xFF), LLOW)
                            And (ShiftRight (Local1, 0x08), 0xFF, LHIH)
                            Return (Local2)
                        }

                        Name (_ALR, Package (0x09)  // _ALR: Ambient Light Response
                        {
                            Package (0x02)
                            {
                                0x06, 
                                One
                            }, 

                            Package (0x02)
                            {
                                0x0E, 
                                One
                            }, 

                            Package (0x02)
                            {
                                0x19, 
                                0x02
                            }, 

                            Package (0x02)
                            {
                                0x28, 
                                0x05
                            }, 

                            Package (0x02)
                            {
                                0x3C, 
                                0x0C
                            }, 

                            Package (0x02)
                            {
                                0x46, 
                                0x1C
                            }, 

                            Package (0x02)
                            {
                                0x50, 
                                0x3F
                            }, 

                            Package (0x02)
                            {
                                0x5A, 
                                0x92
                            }, 

                            Package (0x02)
                            {
                                0x64, 
                                0x012C
                            }
                        })
                    }

                    Method (_REG, 2, NotSerialized)  // _REG: Region Availability
                    {
                        If (LAnd (LEqual (Arg0, 0x03), LEqual (Arg1, One)))
                        {
                            Store (One, ECON)
                            Store (0x03, ^^^IGPU.CLID)
                            Store (ACEX, PWRS)
                            Store (LIDS, \LIDS)
                            And (GL02, 0xFE, GL02)
                            If (LNotEqual (LAnd (GL01, 0x02), Zero))
                            {
                                If (LAnd (LEqual (ALSE, 0x02), \IGDS))
                                {
                                    Store (^ALSD._ALI (), ^^^IGPU.ALSI)
                                }
                            }

                            If (LOr (LEqual (CTUR, One), LNotEqual (TIST, One)))
                            {
                                Store (One, GSSR)
                                If (LLessEqual (TIST, 0x03))
                                {
                                    Store (TIST, Local0)
                                    Store (Local0, TZON)
                                    Store (DIAG, Local1)
                                    If (Local1)
                                    {
                                        Sleep (0x64)
                                    }
                                    Else
                                    {
                                        CPRN ()
                                    }
                                }
                                Else
                                {
                                    Store (Zero, TZON)
                                    CPRN ()
                                }
                            }
                        }
                    }

                    Name (_GPE, 0x17)  // _GPE: General Purpose Events
                    Method (_Q51, 0, NotSerialized)  // _Qxx: EC Query
                    {
                        P8XH (Zero, 0x51)
                        Notify (ADP1, 0x80)
                        Store (One, PWRS)
                        If (LOr (LLess (OSYS, 0x07D6), LEqual (VDRV, Zero)))
                        {
                            SECS (0xA7)
                        }

                        Store (One, VRMF)
                        Notify (^^^PEG0.PEGP, 0xD1)
                        And (GL02, 0xFE, GL02)
                        PNOT ()
                    }

                    Method (_Q52, 0, NotSerialized)  // _Qxx: EC Query
                    {
                        P8XH (Zero, 0x52)
                        Notify (ADP1, 0x80)
                        Store (Zero, PWRS)
                        If (LOr (LLess (OSYS, 0x07D6), LEqual (VDRV, Zero)))
                        {
                            SECS (0xA7)
                        }

                        Store (One, VRMF)
                        Notify (^^^PEG0.PEGP, 0xD2)
                        PNOT ()
                    }

                    Method (_Q53, 0, NotSerialized)  // _Qxx: EC Query
                    {
                        P8XH (Zero, 0x53)
                        Notify (BAT1, 0x80)
                        Notify (BAT1, 0x81)
                    }

                    Method (_Q54, 0, NotSerialized)  // _Qxx: EC Query
                    {
                        P8XH (Zero, 0x54)
                        Notify (BAT1, 0x80)
                        Notify (BAT1, 0x81)
                    }

                    Method (_Q5D, 0, NotSerialized)  // _Qxx: EC Query
                    {
                        If (\IGDS)
                        {
                            ^^^IGPU.GHDS (0x02)
                        }
                    }

                    Method (_Q5E, 0, NotSerialized)  // _Qxx: EC Query
                    {
                        P8XH (Zero, 0x5E)
                        If (LNotEqual (LIDS, \LIDS))
                        {
                            Store (LIDS, \LIDS)
                            If (\IGDS)
                            {
                                ^^^IGPU.GLID (LIDS)
                            }

                            Notify (LID0, 0x80)
                        }
                    }

                    Method (_Q5F, 0, NotSerialized)  // _Qxx: EC Query
                    {
                        P8XH (Zero, 0x5F)
                        If (LNotEqual (LIDS, \LIDS))
                        {
                            Store (LIDS, \LIDS)
                            If (\IGDS)
                            {
                                ^^^IGPU.GLID (LIDS)
                            }

                            Notify (LID0, 0x80)
                        }
                    }

                    Method (_Q60, 0, NotSerialized)  // _Qxx: EC Query
                    {
                        P8XH (Zero, 0x60)
                        If (LEqual (B1EX, One))
                        {
                            Notify (BAT1, 0x80)
                        }
                    }

                    Method (_Q61, 0, NotSerialized)  // _Qxx: EC Query
                    {
                        P8XH (Zero, 0x61)
                        If (LEqual (B1EX, One))
                        {
                            Notify (BAT1, 0x80)
                        }
                    }

                    Method (_Q63, 0, NotSerialized)  // _Qxx: EC Query
                    {
                        P8XH (Zero, 0x63)
                        If (LGreaterEqual (OSYS, 0x07D6))
                        {
                            If (And (VDRV, One))
                            {
                                If (LNot (^^^IGPU.PDRD ()))
                                {
                                    BRTN (0x87)
                                }
                            }

                            If (And (VDRV, 0x02)) {}
                        }
                        Else
                        {
                            SECS (0x88)
                        }
                    }

                    Method (_Q64, 0, NotSerialized)  // _Qxx: EC Query
                    {
                        P8XH (Zero, 0x64)
                        If (LGreaterEqual (OSYS, 0x07D6))
                        {
                            If (And (VDRV, One))
                            {
                                If (LNot (^^^IGPU.PDRD ()))
                                {
                                    BRTN (0x86)
                                }
                            }

                            If (And (VDRV, 0x02)) {}
                        }
                        Else
                        {
                            SECS (0x89)
                        }
                    }

                    Method (_Q65, 0, NotSerialized)  // _Qxx: EC Query
                    {
                        P8XH (Zero, 0x65)
                        Notify (\_TZ.TZ00, 0x80)
                        Notify (\_TZ.TZ01, 0x80)
                    }

                    Method (_Q66, 0, NotSerialized)  // _Qxx: EC Query
                    {
                        P8XH (Zero, 0x66)
                        If (LEqual (B1EX, One))
                        {
                            Notify (BAT1, 0x80)
                        }
                    }

                    Method (_Q68, 0, NotSerialized)  // _Qxx: EC Query
                    {
                    }

                    Method (_Q69, 0, NotSerialized)  // _Qxx: EC Query
                    {
                    }

                    Method (_Q6F, 0, NotSerialized)  // _Qxx: EC Query
                    {
                    }

                    Method (_Q70, 0, NotSerialized)  // _Qxx: EC Query
                    {
                        P8XH (Zero, 0x70)
                        If (LGreaterEqual (OSYS, 0x07D9))
                        {
                            If (LAnd (LEqual (ALSE, 0x02), \IGDS))
                            {
                                Store (^ALSD._ALI (), Local0)
                                ^^^IGPU.AINT (Zero, Local0)
                                Notify (ALSD, 0x80)
                            }
                            Else
                            {
                                Store (^ALSD._ALI (), Local0)
                            }

                            If (LEqual (KBTO, Zero))
                            {
                                If (LAnd (LLessEqual (Local0, 0x32), LNotEqual (KBST, One)))
                                {
                                    SECS (0x9A)
                                    Store (One, KBST)
                                }
                                Else
                                {
                                    If (LAnd (LGreaterEqual (Local0, 0x64), LNotEqual (KBST, Zero)))
                                    {
                                        SECS (0x9B)
                                        Store (Zero, KBST)
                                    }
                                }
                            }
                        }
                    }

                    Method (_Q73, 0, NotSerialized)  // _Qxx: EC Query
                    {
                        If (LOr (LEqual (CTUR, One), LNotEqual (TIST, One)))
                        {
                            Store (One, GSSR)
                            If (LLessEqual (TIST, 0x03))
                            {
                                Store (TIST, Local0)
                                Store (Local0, TZON)
                                Store (DIAG, Local1)
                                If (Local1)
                                {
                                    Sleep (0x64)
                                }
                                Else
                                {
                                    CPRN ()
                                }
                            }
                            Else
                            {
                                Store (Zero, TZON)
                                CPRN ()
                            }
                        }
                    }

                    Method (_Q76, 0, NotSerialized)  // _Qxx: EC Query
                    {
                        SECS (0x94)
                    }

                    Method (_Q77, 0, NotSerialized)  // _Qxx: EC Query
                    {
                    }

                    Method (_Q79, 0, NotSerialized)  // _Qxx: EC Query
                    {
                    }

                    Method (_Q7A, 0, NotSerialized)  // _Qxx: EC Query
                    {
                    }

                    Method (_Q7D, 0, NotSerialized)  // _Qxx: EC Query
                    {
                    }

                    Method (_Q7E, 0, NotSerialized)  // _Qxx: EC Query
                    {
                    }

                    Method (_Q7F, 0, NotSerialized)  // _Qxx: EC Query
                    {
                        If (LGreaterEqual (\OSYS, 0x07DC))
                        {
                            Notify (SAPM, 0x80)
                        }
                    }

                    Method (_Q80, 0, NotSerialized)  // _Qxx: EC Query
                    {
                        BreakPoint
                    }
                }

                Scope (\_SB)
                {
                    Device (ADP1)
                    {
                        Name (_HID, "ACPI0003")  // _HID: Hardware ID
                        Method (_PSR, 0, NotSerialized)  // _PSR: Power Source
                        {
                            If (LEqual (ECON, Zero))
                            {
                                Store (SECB (0x85, 0x02), Local0)
                            }
                            Else
                            {
                                Store (^^PCI0.LPCB.H_EC.ACEX, Local0)
                            }

                            Return (Local0)
                        }

                        Method (_PCL, 0, NotSerialized)  // _PCL: Power Consumer List
                        {
                            Return (_SB)
                        }

                        Method (_STA, 0, NotSerialized)  // _STA: Status
                        {
                            If (LEqual (ECON, Zero))
                            {
                                Store (0x0F, Local0)
                            }
                            Else
                            {
                                If (LEqual (^^PCI0.LPCB.H_EC.ACEX, Zero))
                                {
                                    Store (0x1F, Local0)
                                }
                                Else
                                {
                                    Store (0x0F, Local0)
                                }
                            }

                            Return (Local0)
                        }
                    }

                    Device (LID0)
                    {
                        Name (_HID, EisaId ("PNP0C0D"))  // _HID: Hardware ID
                        Method (_LID, 0, NotSerialized)  // _LID: Lid Status
                        {
                            Return (LIDS)
                        }
                    }

                    Device (PWRB)
                    {
                        Name (_HID, EisaId ("PNP0C0C"))  // _HID: Hardware ID
                        Name (_PRW, Package (0x02)  // _PRW: Power Resources for Wake
                        {
                            0x1E, 
                            0x04
                        })
                    }

                    Device (SAPM)
                    {
                        Name (_HID, "SAM0714")  // _HID: Hardware ID
                        Name (_UID, One)  // _UID: Unique ID
                        Method (_STA, 0, NotSerialized)  // _STA: Status
                        {
                            If (LGreaterEqual (\OSYS, 0x07DC))
                            {
                                Return (0x0F)
                            }

                            Return (Zero)
                        }
                    }
                }

                Device (DMAC)
                {
                    Name (_HID, EisaId ("PNP0200"))  // _HID: Hardware ID
                    Name (_CRS, ResourceTemplate ()  // _CRS: Current Resource Settings
                    {
                        IO (Decode16,
                            0x0000,             // Range Minimum
                            0x0000,             // Range Maximum
                            0x01,               // Alignment
                            0x20,               // Length
                            )
                        IO (Decode16,
                            0x0081,             // Range Minimum
                            0x0081,             // Range Maximum
                            0x01,               // Alignment
                            0x11,               // Length
                            )
                        IO (Decode16,
                            0x0093,             // Range Minimum
                            0x0093,             // Range Maximum
                            0x01,               // Alignment
                            0x0D,               // Length
                            )
                        IO (Decode16,
                            0x00C0,             // Range Minimum
                            0x00C0,             // Range Maximum
                            0x01,               // Alignment
                            0x20,               // Length
                            )
                        DMA (Compatibility, NotBusMaster, Transfer8_16, )
                            {4}
                    })
                }

                Device (FWHD)
                {
                    Name (_HID, EisaId ("INT0800"))  // _HID: Hardware ID
                    Name (_CRS, ResourceTemplate ()  // _CRS: Current Resource Settings
                    {
                        Memory32Fixed (ReadOnly,
                            0xFF000000,         // Address Base
                            0x01000000,         // Address Length
                            )
                    })
                }

                Device (HPET)
                {
                    Name (_HID, EisaId ("PNP0103"))  // _HID: Hardware ID
                    Name (_CID, EisaId ("PNP0C01"))  // _CID: Compatible ID
                    Name (_STA, 0x0F)  // _STA: Status
                    Name (_CRS, ResourceTemplate ()  // _CRS: Current Resource Settings
                    {
                        IRQNoFlags ()
                            {0,8,11}
                        Memory32Fixed (ReadWrite,
                            0xFED00000,         // Address Base
                            0x00000400,         // Address Length
                            )
                    })
                }

                Device (IPIC)
                {
                    Name (_HID, EisaId ("PNP0000"))  // _HID: Hardware ID
                    Name (_CRS, ResourceTemplate ()  // _CRS: Current Resource Settings
                    {
                        IO (Decode16,
                            0x0020,             // Range Minimum
                            0x0020,             // Range Maximum
                            0x01,               // Alignment
                            0x02,               // Length
                            )
                        IO (Decode16,
                            0x0024,             // Range Minimum
                            0x0024,             // Range Maximum
                            0x01,               // Alignment
                            0x02,               // Length
                            )
                        IO (Decode16,
                            0x0028,             // Range Minimum
                            0x0028,             // Range Maximum
                            0x01,               // Alignment
                            0x02,               // Length
                            )
                        IO (Decode16,
                            0x002C,             // Range Minimum
                            0x002C,             // Range Maximum
                            0x01,               // Alignment
                            0x02,               // Length
                            )
                        IO (Decode16,
                            0x0030,             // Range Minimum
                            0x0030,             // Range Maximum
                            0x01,               // Alignment
                            0x02,               // Length
                            )
                        IO (Decode16,
                            0x0034,             // Range Minimum
                            0x0034,             // Range Maximum
                            0x01,               // Alignment
                            0x02,               // Length
                            )
                        IO (Decode16,
                            0x0038,             // Range Minimum
                            0x0038,             // Range Maximum
                            0x01,               // Alignment
                            0x02,               // Length
                            )
                        IO (Decode16,
                            0x003C,             // Range Minimum
                            0x003C,             // Range Maximum
                            0x01,               // Alignment
                            0x02,               // Length
                            )
                        IO (Decode16,
                            0x00A0,             // Range Minimum
                            0x00A0,             // Range Maximum
                            0x01,               // Alignment
                            0x02,               // Length
                            )
                        IO (Decode16,
                            0x00A4,             // Range Minimum
                            0x00A4,             // Range Maximum
                            0x01,               // Alignment
                            0x02,               // Length
                            )
                        IO (Decode16,
                            0x00A8,             // Range Minimum
                            0x00A8,             // Range Maximum
                            0x01,               // Alignment
                            0x02,               // Length
                            )
                        IO (Decode16,
                            0x00AC,             // Range Minimum
                            0x00AC,             // Range Maximum
                            0x01,               // Alignment
                            0x02,               // Length
                            )
                        IO (Decode16,
                            0x00B0,             // Range Minimum
                            0x00B0,             // Range Maximum
                            0x01,               // Alignment
                            0x02,               // Length
                            )
                        IO (Decode16,
                            0x00B4,             // Range Minimum
                            0x00B4,             // Range Maximum
                            0x01,               // Alignment
                            0x02,               // Length
                            )
                        IO (Decode16,
                            0x00B8,             // Range Minimum
                            0x00B8,             // Range Maximum
                            0x01,               // Alignment
                            0x02,               // Length
                            )
                        IO (Decode16,
                            0x00BC,             // Range Minimum
                            0x00BC,             // Range Maximum
                            0x01,               // Alignment
                            0x02,               // Length
                            )
                        IO (Decode16,
                            0x04D0,             // Range Minimum
                            0x04D0,             // Range Maximum
                            0x01,               // Alignment
                            0x02,               // Length
                            )
                    })
                }

                Device (MATH)
                {
                    Name (_HID, EisaId ("PNP0C04"))  // _HID: Hardware ID
                    Name (_CRS, ResourceTemplate ()  // _CRS: Current Resource Settings
                    {
                        IO (Decode16,
                            0x00F0,             // Range Minimum
                            0x00F0,             // Range Maximum
                            0x01,               // Alignment
                            0x01,               // Length
                            )
                        IRQNoFlags ()
                            {13}
                    })
                }

                Device (LDRC)
                {
                    Name (_HID, EisaId ("PNP0C02"))  // _HID: Hardware ID
                    Name (_UID, 0x02)  // _UID: Unique ID
                    Name (_CRS, ResourceTemplate ()  // _CRS: Current Resource Settings
                    {
                        IO (Decode16,
                            0x002E,             // Range Minimum
                            0x002E,             // Range Maximum
                            0x01,               // Alignment
                            0x02,               // Length
                            )
                        IO (Decode16,
                            0x004E,             // Range Minimum
                            0x004E,             // Range Maximum
                            0x01,               // Alignment
                            0x02,               // Length
                            )
                        IO (Decode16,
                            0x0061,             // Range Minimum
                            0x0061,             // Range Maximum
                            0x01,               // Alignment
                            0x01,               // Length
                            )
                        IO (Decode16,
                            0x0063,             // Range Minimum
                            0x0063,             // Range Maximum
                            0x01,               // Alignment
                            0x01,               // Length
                            )
                        IO (Decode16,
                            0x0065,             // Range Minimum
                            0x0065,             // Range Maximum
                            0x01,               // Alignment
                            0x01,               // Length
                            )
                        IO (Decode16,
                            0x0067,             // Range Minimum
                            0x0067,             // Range Maximum
                            0x01,               // Alignment
                            0x01,               // Length
                            )
                        IO (Decode16,
                            0x0070,             // Range Minimum
                            0x0070,             // Range Maximum
                            0x01,               // Alignment
                            0x01,               // Length
                            )
                        IO (Decode16,
                            0x0080,             // Range Minimum
                            0x0080,             // Range Maximum
                            0x01,               // Alignment
                            0x01,               // Length
                            )
                        IO (Decode16,
                            0x0092,             // Range Minimum
                            0x0092,             // Range Maximum
                            0x01,               // Alignment
                            0x01,               // Length
                            )
                        IO (Decode16,
                            0x00B2,             // Range Minimum
                            0x00B2,             // Range Maximum
                            0x01,               // Alignment
                            0x02,               // Length
                            )
                        IO (Decode16,
                            0x0680,             // Range Minimum
                            0x0680,             // Range Maximum
                            0x01,               // Alignment
                            0x20,               // Length
                            )
                        IO (Decode16,
                            0x1000,             // Range Minimum
                            0x1000,             // Range Maximum
                            0x01,               // Alignment
                            0x10,               // Length
                            )
                        IO (Decode16,
                            0x5000,             // Range Minimum
                            0x5000,             // Range Maximum
                            0x01,               // Alignment
                            0x04,               // Length
                            )
                        IO (Decode16,
                            0xFFFF,             // Range Minimum
                            0xFFFF,             // Range Maximum
                            0x01,               // Alignment
                            0x01,               // Length
                            )
                        IO (Decode16,
                            0x0400,             // Range Minimum
                            0x0400,             // Range Maximum
                            0x01,               // Alignment
                            0x54,               // Length
                            )
                        IO (Decode16,
                            0x0458,             // Range Minimum
                            0x0458,             // Range Maximum
                            0x01,               // Alignment
                            0x28,               // Length
                            )
                        IO (Decode16,
                            0x0500,             // Range Minimum
                            0x0500,             // Range Maximum
                            0x01,               // Alignment
                            0x80,               // Length
                            )
                        IO (Decode16,
                            0x0A00,             // Range Minimum
                            0x0A00,             // Range Maximum
                            0x01,               // Alignment
                            0x10,               // Length
                            )
                        IO (Decode16,
                            0x164E,             // Range Minimum
                            0x164E,             // Range Maximum
                            0x01,               // Alignment
                            0x02,               // Length
                            )
                        IO (Decode16,
                            0x5000,             // Range Minimum
                            0x5000,             // Range Maximum
                            0x01,               // Alignment
                            0x10,               // Length
                            )
                    })
                }

                Device (RTC)
                {
                    Name (_HID, EisaId ("PNP0B00"))  // _HID: Hardware ID
                    Name (_CRS, ResourceTemplate ()  // _CRS: Current Resource Settings
                    {
                        IO (Decode16,
                            0x0070,             // Range Minimum
                            0x0070,             // Range Maximum
                            0x00,               // Alignment
                            0x02,               // Length
                            )
                    })
                }

                Device (TIMR)
                {
                    Name (_HID, EisaId ("PNP0100"))  // _HID: Hardware ID
                    Name (_CRS, ResourceTemplate ()  // _CRS: Current Resource Settings
                    {
                        IO (Decode16,
                            0x0040,             // Range Minimum
                            0x0040,             // Range Maximum
                            0x01,               // Alignment
                            0x04,               // Length
                            )
                        IO (Decode16,
                            0x0050,             // Range Minimum
                            0x0050,             // Range Maximum
                            0x10,               // Alignment
                            0x04,               // Length
                            )
                    })
                }

                Device (CWDT)
                {
                    Name (_HID, EisaId ("INT3F0D"))  // _HID: Hardware ID
                    Name (_CID, EisaId ("PNP0C02"))  // _CID: Compatible ID
                    Name (BUF0, ResourceTemplate ()
                    {
                        IO (Decode16,
                            0x0454,             // Range Minimum
                            0x0454,             // Range Maximum
                            0x04,               // Alignment
                            0x04,               // Length
                            )
                    })
                    Method (_STA, 0, Serialized)  // _STA: Status
                    {
                        If (LEqual (WDTE, One))
                        {
                            Return (0x0F)
                        }
                        Else
                        {
                            Return (Zero)
                        }
                    }

                    Method (_CRS, 0, Serialized)  // _CRS: Current Resource Settings
                    {
                        Return (BUF0)
                    }
                }

                OperationRegion (PKBS, SystemIO, 0x60, 0x05)
                Field (PKBS, ByteAcc, Lock, Preserve)
                {
                    PKBD,   8, 
                    Offset (0x02), 
                    Offset (0x03), 
                    Offset (0x04), 
                    PKBC,   8
                }

                Device (PS2K)
                {
                    Name (_HID, "MSFT0001")  // _HID: Hardware ID
                    Name (_CID, EisaId ("PNP0303"))  // _CID: Compatible ID
                    Method (_STA, 0, NotSerialized)  // _STA: Status
                    {
                        Return (0x0F)
                    }

                    Name (_CRS, ResourceTemplate ()  // _CRS: Current Resource Settings
                    {
                        IO (Decode16,
                            0x0060,             // Range Minimum
                            0x0060,             // Range Maximum
                            0x01,               // Alignment
                            0x01,               // Length
                            )
                        IO (Decode16,
                            0x0064,             // Range Minimum
                            0x0064,             // Range Maximum
                            0x01,               // Alignment
                            0x01,               // Length
                            )
                        IRQ (Edge, ActiveHigh, Exclusive, )
                            {1}
                    })
                    Name (_PRS, ResourceTemplate ()  // _PRS: Possible Resource Settings
                    {
                        StartDependentFn (0x00, 0x00)
                        {
                            FixedIO (
                                0x0060,             // Address
                                0x01,               // Length
                                )
                            FixedIO (
                                0x0064,             // Address
                                0x01,               // Length
                                )
                            IRQNoFlags ()
                                {1}
                        }
                        EndDependentFn ()
                    })
                }

                Device (EPAD)
                {
                    Name (_HID, EisaId ("ETD0B00"))  // _HID: Hardware ID
                    Name (_CID, EisaId ("PNP0F13"))  // _CID: Compatible ID
                    Method (_STA, 0, NotSerialized)  // _STA: Status
                    {
                        If (LEqual (PKBC, 0xFF))
                        {
                            Return (Zero)
                        }

                        If (LEqual (TPAD, One))
                        {
                            Return (0x0F)
                        }

                        Return (Zero)
                    }

                    Name (_CRS, ResourceTemplate ()  // _CRS: Current Resource Settings
                    {
                        IRQ (Edge, ActiveHigh, Exclusive, )
                            {12}
                    })
                    Name (_PRS, ResourceTemplate ()  // _PRS: Possible Resource Settings
                    {
                        StartDependentFn (0x00, 0x00)
                        {
                            IRQNoFlags ()
                                {12}
                        }
                        EndDependentFn ()
                    })
                }

                Device (SPAD)
                {
                    Name (_HID, EisaId ("SYN2601"))  // _HID: Hardware ID
                    Name (_CID, EisaId ("PNP0F13"))  // _CID: Compatible ID
                    Method (_STA, 0, NotSerialized)  // _STA: Status
                    {
                        If (LEqual (PKBC, 0xFF))
                        {
                            Return (Zero)
                        }

                        If (LEqual (TPAD, Zero))
                        {
                            Return (0x0F)
                        }

                        Return (Zero)
                    }

                    Name (_CRS, ResourceTemplate ()  // _CRS: Current Resource Settings
                    {
                        IRQ (Edge, ActiveHigh, Exclusive, )
                            {12}
                    })
                    Name (_PRS, ResourceTemplate ()  // _PRS: Possible Resource Settings
                    {
                        StartDependentFn (0x00, 0x00)
                        {
                            IRQNoFlags ()
                                {12}
                        }
                        EndDependentFn ()
                    })
                }

                OperationRegion (TPMF, SystemMemory, 0xFFFF0000, 0xAA55)
                Field (TPMF, AnyAcc, Lock, Preserve)
                {
                    PPIP,   8, 
                    PPIC,   8
                }

                Device (TPM)
                {
                    Name (TMPV, Zero)
                    Method (_HID, 0, NotSerialized)  // _HID: Hardware ID
                    {
                        If (LEqual (TVID, 0x15D1))
                        {
                            Return (0x0201D824)
                        }

                        If (LOr (LEqual (TVID, 0x1050), LEqual (TVID, 0x100B)))
                        {
                            Return (0x0010A35C)
                        }

                        If (LEqual (TVID, 0x19FA))
                        {
                            Return (0x0435CF4D)
                        }

                        If (LEqual (TDID, 0x1002))
                        {
                            Return (0x02016D08)
                        }

                        If (LEqual (TDID, 0x1001))
                        {
                            Return (0x01016D08)
                        }

                        If (LEqual (TVID, 0x1114))
                        {
                            Return (0x00128D06)
                        }

                        Return (0x310CD041)
                    }

                    Name (_CID, EisaId ("PNP0C31"))  // _CID: Compatible ID
                    Name (_UID, One)  // _UID: Unique ID
                    OperationRegion (TMMB, SystemMemory, 0xFED40000, 0x1000)
                    Field (TMMB, ByteAcc, Lock, Preserve)
                    {
                        ACCS,   8, 
                        Offset (0x18), 
                        TSTA,   8, 
                        TBCA,   8, 
                        Offset (0xF00), 
                        TVID,   16, 
                        TDID,   16
                    }

                    Method (_STA, 0, NotSerialized)  // _STA: Status
                    {
                        If (LEqual (ACCS, 0xFF))
                        {
                            Return (Zero)
                        }
                        Else
                        {
                            If (LEqual (TPMP, One))
                            {
                                Return (0x0F)
                            }
                            Else
                            {
                                Return (Zero)
                            }
                        }
                    }

                    Name (_CRS, ResourceTemplate ()  // _CRS: Current Resource Settings
                    {
                        Memory32Fixed (ReadOnly,
                            0xFED40000,         // Address Base
                            0x00005000,         // Address Length
                            )
                    })
                    Method (UCMP, 2, NotSerialized)
                    {
                        If (LNotEqual (0x10, SizeOf (Arg0)))
                        {
                            Return (Zero)
                        }

                        If (LNotEqual (0x10, SizeOf (Arg1)))
                        {
                            Return (Zero)
                        }

                        Store (Zero, Local0)
                        While (LLess (Local0, 0x10))
                        {
                            If (LNotEqual (DerefOf (Index (Arg0, Local0)), DerefOf (Index (
                                Arg1, Local0))))
                            {
                                Return (Zero)
                            }

                            Increment (Local0)
                        }

                        Return (One)
                    }

                    Method (_DSM, 4, Serialized)  // _DSM: Device-Specific Method
                    {
                        Name (TTMP, Buffer (One)
                        {
                             0x00
                        })
                        CreateByteField (TTMP, Zero, TMPV)
                        If (LEqual (UCMP (Arg0, Buffer (0x10)
                                    {
                                        /* 0000 */   0xA6, 0xFA, 0xDD, 0x3D, 0x1B, 0x36, 0xB4, 0x4E,
                                        /* 0008 */   0xA4, 0x24, 0x8D, 0x10, 0x08, 0x9D, 0x16, 0x53
                                    }), One))
                        {
                            If (LEqual (Arg2, Zero))
                            {
                                Return (Buffer (0x02)
                                {
                                     0xFF, 0x01
                                })
                            }

                            If (LEqual (Arg2, One))
                            {
                                Return (Buffer (0x04)
                                {
                                    "1.2"
                                })
                            }

                            If (LEqual (Arg2, 0x02))
                            {
                                Store (TPP3, TMPV)
                                If (And (TMPV, TPRS))
                                {
                                    If (LLessEqual (DerefOf (Index (Arg3, Zero)), 0x0B))
                                    {
                                        Store (DerefOf (Index (Arg3, Zero)), TPP1)
                                        Return (Zero)
                                    }

                                    If (LAnd (LGreaterEqual (DerefOf (Index (Arg3, Zero)), 0x0E), 
                                        LLessEqual (DerefOf (Index (Arg3, Zero)), 0x12)))
                                    {
                                        Store (DerefOf (Index (Arg3, Zero)), TPP1)
                                        Return (Zero)
                                    }

                                    If (LOr (LEqual (DerefOf (Index (Arg3, Zero)), 0x15), LEqual (
                                        DerefOf (Index (Arg3, Zero)), 0x16)))
                                    {
                                        Store (DerefOf (Index (Arg3, Zero)), TPP1)
                                        Return (Zero)
                                    }

                                    Return (One)
                                }

                                Return (0x02)
                            }

                            If (LEqual (Arg2, 0x03))
                            {
                                Name (TMP1, Package (0x02)
                                {
                                    Zero, 
                                    0xFFFFFFFF
                                })
                                Store (TPP1, TMPV)
                                Store (And (TMPV, PPRQ, TMPV), Index (TMP1, One))
                                Return (TMP1)
                            }

                            If (LEqual (Arg2, 0x04))
                            {
                                Return (0x02)
                            }

                            If (LEqual (Arg2, 0x05))
                            {
                                Name (TMP2, Package (0x03)
                                {
                                    Zero, 
                                    0xFFFFFFFF, 
                                    0xFFFFFFFF
                                })
                                Store (PPLO, TMPV)
                                And (TMPV, 0x7F, TMPV)
                                Store (TMPV, Index (TMP2, One))
                                If (LGreaterEqual (PPLO, 0x80))
                                {
                                    Store (Zero, Index (TMP2, 0x02))
                                    Return (TMP2)
                                }

                                Store (0xFFFFFFF1, Index (TMP2, 0x02))
                                Return (TMP2)
                            }

                            If (LEqual (Arg2, 0x06))
                            {
                                Return (0x03)
                            }

                            If (LEqual (Arg2, 0x07))
                            {
                                Store (TPP3, TMPV)
                                If (And (TMPV, TPRS))
                                {
                                    If (LLessEqual (DerefOf (Index (Arg3, Zero)), 0x0B))
                                    {
                                        Store (DerefOf (Index (Arg3, Zero)), TPP1)
                                        Return (Zero)
                                    }

                                    If (LAnd (LGreaterEqual (DerefOf (Index (Arg3, Zero)), 0x0E), 
                                        LLessEqual (DerefOf (Index (Arg3, Zero)), 0x12)))
                                    {
                                        Store (DerefOf (Index (Arg3, Zero)), TPP1)
                                        Return (Zero)
                                    }

                                    If (LOr (LEqual (DerefOf (Index (Arg3, Zero)), 0x15), LEqual (
                                        DerefOf (Index (Arg3, Zero)), 0x16)))
                                    {
                                        Store (DerefOf (Index (Arg3, Zero)), TPP1)
                                        Return (Zero)
                                    }

                                    Return (One)
                                }

                                Return (0x02)
                            }

                            If (LEqual (Arg2, 0x08))
                            {
                                If (LEqual (DerefOf (Index (Arg3, Zero)), 0x05))
                                {
                                    If (LGreater (PPIC, Zero))
                                    {
                                        Return (0x04)
                                    }

                                    Return (0x03)
                                }

                                If (LAnd (LGreaterEqual (DerefOf (Index (Arg3, Zero)), One), 
                                    LLessEqual (DerefOf (Index (Arg3, Zero)), 0x04)))
                                {
                                    If (LGreater (PPIP, Zero))
                                    {
                                        Return (0x04)
                                    }

                                    Return (0x03)
                                }

                                If (LAnd (LGreaterEqual (DerefOf (Index (Arg3, Zero)), 0x06), 
                                    LLessEqual (DerefOf (Index (Arg3, Zero)), 0x0B)))
                                {
                                    If (LGreater (PPIP, Zero))
                                    {
                                        Return (0x04)
                                    }

                                    Return (0x03)
                                }

                                If (LOr (LEqual (DerefOf (Index (Arg3, Zero)), 0x0E), LAnd (
                                    LGreaterEqual (DerefOf (Index (Arg3, Zero)), 0x15), LLessEqual (DerefOf (
                                    Index (Arg3, Zero)), 0x16))))
                                {
                                    If (LAnd (LGreater (PPIP, Zero), LGreater (PPIC, Zero)))
                                    {
                                        Return (0x04)
                                    }

                                    Return (0x03)
                                }

                                If (LOr (LEqual (DerefOf (Index (Arg3, Zero)), 0x10), LEqual (
                                    DerefOf (Index (Arg3, Zero)), 0x12)))
                                {
                                    Return (0x03)
                                }

                                If (LOr (LEqual (DerefOf (Index (Arg3, Zero)), Zero), LOr (
                                    LEqual (DerefOf (Index (Arg3, Zero)), 0x0F), LEqual (DerefOf (Index (Arg3, 
                                    Zero)), 0x11))))
                                {
                                    Return (0x04)
                                }

                                Return (Zero)
                            }

                            Return (One)
                        }

                        If (LEqual (UCMP (Arg0, Buffer (0x10)
                                    {
                                        /* 0000 */   0xED, 0x54, 0x60, 0x37, 0x13, 0xCC, 0x75, 0x46,
                                        /* 0008 */   0x90, 0x1C, 0x47, 0x56, 0xD7, 0xF2, 0xD4, 0x5D
                                    }), One))
                        {
                            If (LEqual (Arg2, Zero))
                            {
                                Return (Buffer (One)
                                {
                                     0x03
                                })
                            }

                            If (LEqual (Arg2, One))
                            {
                                Store (DerefOf (Index (Arg3, Zero)), TMPV)
                                And (TMPV, One, TMPV)
                                If (LEqual (TMPV, Zero))
                                {
                                    Store (0x80, TPP1)
                                    Return (Zero)
                                }

                                If (LEqual (TMPV, One))
                                {
                                    Store (0x81, TPP1)
                                    Return (Zero)
                                }
                            }

                            Return (One)
                        }

                        Return (Buffer (One)
                        {
                             0x00
                        })
                    }
                }
            }
        }
    }

    Scope (_PR)
    {
        Processor (CPU0, 0x01, 0x00000410, 0x06) {}
        Processor (CPU1, 0x02, 0x00000410, 0x06) {}
        Processor (CPU2, 0x03, 0x00000410, 0x06) {}
        Processor (CPU3, 0x04, 0x00000410, 0x06) {}
        Processor (CPU4, 0x05, 0x00000410, 0x06) {}
        Processor (CPU5, 0x06, 0x00000410, 0x06) {}
        Processor (CPU6, 0x07, 0x00000410, 0x06) {}
        Processor (CPU7, 0x08, 0x00000410, 0x06) {}
    }

    Mutex (MUTX, 0x00)
    OperationRegion (PRT0, SystemIO, 0x80, 0x04)
    Field (PRT0, DWordAcc, Lock, Preserve)
    {
        P80H,   32
    }

    Method (P8XH, 2, Serialized)
    {
        If (LEqual (Arg0, Zero))
        {
            Store (Or (And (P80D, 0xFFFFFF00), Arg1), P80D)
        }

        If (LEqual (Arg0, One))
        {
            Store (Or (And (P80D, 0xFFFF00FF), ShiftLeft (Arg1, 0x08)
                ), P80D)
        }

        If (LEqual (Arg0, 0x02))
        {
            Store (Or (And (P80D, 0xFF00FFFF), ShiftLeft (Arg1, 0x10)
                ), P80D)
        }

        If (LEqual (Arg0, 0x03))
        {
            Store (Or (And (P80D, 0x00FFFFFF), ShiftLeft (Arg1, 0x18)
                ), P80D)
        }

        Store (P80D, P80H)
    }

    OperationRegion (SPRT, SystemIO, 0xB2, 0x02)
    Field (SPRT, ByteAcc, Lock, Preserve)
    {
        SSMP,   8
    }

    Method (_PIC, 1, NotSerialized)  // _PIC: Interrupt Model
    {
        Store (Arg0, GPIC)
        Store (Arg0, PICM)
    }

    Method (_PTS, 1, NotSerialized)  // _PTS: Prepare To Sleep
    {
        Store (Zero, P80D)
        P8XH (Zero, Arg0)
        Store (B1B2 (\_SB.PCI0.LPCB.H_EC.BDF0, \_SB.PCI0.LPCB.H_EC.BDF1), \_SB.BFCC)
        If (LEqual (Arg0, 0x03))
        {
            If (LAnd (DTSE, LGreater (TCNT, One)))
            {
                TRAP (TRTD, 0x1E)
            }

            Store (And (GL07, 0x0A), GBF0)
            And (GL07, 0xF5, GL07)
            Store (And (GL08, 0xA0), GBF1)
            And (GL08, 0x5F, GL08)
            Store (And (GL05, 0x08), GBF2)
            If (LAnd (LEqual (IFFS, One), LEqual (\_SB.FFBF, One)))
            {
                Store (Zero, \_SB.IFFS.FFST)
            }

            While (LNotEqual (\_SB.PCI0.LPCB.PBLV, One))
            {
                Stall (0x64)
            }
        }

        If (LOr (LOr (LEqual (Arg0, 0x03), LEqual (Arg0, 0x04)), LEqual (
            Arg0, 0x05)))
        {
            If (LEqual (PFLV, FDTP))
            {
                Store (One, GP27)
            }
        }

        Store (Zero, \_SB.NVGF)
        If (LEqual (Arg0, 0x04))
        {
            Store (0x06, STYP)
        }
    }

    Method (_WAK, 1, Serialized)  // _WAK: Wake
    {
        P8XH (One, 0xAB)
        Store (One, ECON)
        If (LNotEqual (\_SB.PCI0.LPCB.H_EC.ACEX, PWRS))
        {
            Store (\_SB.PCI0.LPCB.H_EC.ACEX, PWRS)
            If (LGreaterEqual (\_SB.OSYS, 0x07D1))
            {
                PNOT ()
            }
        }

        Store (One, \_SB.PCI0.LPCB.H_EC.VRMF)
        And (GL02, 0xFE, GL02)
        If (LNotEqual (B1B2 (\_SB.PCI0.LPCB.H_EC.BDF0, \_SB.PCI0.LPCB.H_EC.BDF1), \_SB.BFCC))
        {
            Notify (\_SB.PCI0.LPCB.H_EC.BAT1, 0x80)
            Notify (\_SB.PCI0.LPCB.H_EC.BAT1, 0x81)
        }

        If (NEXP)
        {
            If (And (OSCC, 0x02))
            {
                \_SB.PCI0.NHPG ()
            }

            If (And (OSCC, 0x04))
            {
                \_SB.PCI0.NPME ()
            }
        }

        If (LEqual (Arg0, 0x03))
        {
            If (LNotEqual (\_SB.PCI0.LPCB.H_EC.TIST, \_SB.TZON))
            {
                Store (\_SB.PCI0.LPCB.H_EC.TIST, \_SB.TZON)
                CPRN ()
            }

            Or (GL07, GBF0, GL07)
            Or (GL08, GBF1, GL08)
            And (GL05, 0xF7, GL05)
            Or (GL05, GBF2, GL05)
            If (LOr (GBF0, GBF1))
            {
                \_SB.SECS (0xB2)
            }

            If (LNotEqual (\_SB.HBAT, Zero))
            {
                Notify (\_SB.PWRB, 0x02)
            }

            If (LAnd (LEqual (IFFS, One), LEqual (\_SB.FFBF, One)))
            {
                Store (Zero, \_SB.FFBF)
                Store (\_SB.FFBT, \_SB.IFFS.FFST)
            }
        }

        If (LOr (LEqual (Arg0, 0x03), LEqual (Arg0, 0x04)))
        {
            Store (Arg0, \_SB.RTYP)
            If (LAnd (DTSE, LGreater (TCNT, One)))
            {
                TRAP (TRTD, 0x14)
            }

            If (LEqual (OSYS, 0x07D2))
            {
                If (And (CFGD, One))
                {
                    If (LGreater (\_PR.CPU0._PPC, Zero))
                    {
                        Subtract (\_PR.CPU0._PPC, One, \_PR.CPU0._PPC)
                        PNOT ()
                        Add (\_PR.CPU0._PPC, One, \_PR.CPU0._PPC)
                        PNOT ()
                    }
                    Else
                    {
                        Add (\_PR.CPU0._PPC, One, \_PR.CPU0._PPC)
                        PNOT ()
                        Subtract (\_PR.CPU0._PPC, One, \_PR.CPU0._PPC)
                        PNOT ()
                    }
                }
            }

            If (LEqual (ECON, One))
            {
                If (LNotEqual (LIDS, \_SB.PCI0.LPCB.H_EC.LIDS))
                {
                    Store (\_SB.PCI0.LPCB.H_EC.LIDS, LIDS)
                    If (IGDS)
                    {
                        If (\_SB.PCI0.IGPU.GLID (LIDS))
                        {
                            Or (0x80000000, \_SB.PCI0.IGPU.CLID, \_SB.PCI0.IGPU.CLID)
                        }
                    }

                    Notify (\_SB.LID0, 0x80)
                }
            }

            If (LEqual (RP1D, Zero))
            {
                Notify (\_SB.PCI0.RP01, Zero)
            }

            If (LEqual (RP2D, Zero))
            {
                Notify (\_SB.PCI0.RP02, Zero)
            }

            If (LEqual (RP3D, Zero))
            {
                Notify (\_SB.PCI0.RP03, Zero)
            }

            If (LEqual (RP4D, Zero))
            {
                Notify (\_SB.PCI0.RP04, Zero)
            }

            If (LEqual (RP5D, Zero))
            {
                Notify (\_SB.PCI0.RP05, Zero)
            }

            If (LEqual (RP6D, Zero))
            {
                Notify (\_SB.PCI0.RP06, Zero)
            }

            If (LEqual (RP7D, Zero))
            {
                Notify (\_SB.PCI0.RP07, Zero)
            }

            If (LEqual (RP8D, Zero))
            {
                Notify (\_SB.PCI0.RP08, Zero)
            }
        }

        If (LOr (LEqual (Arg0, 0x03), LEqual (Arg0, 0x04)))
        {
            \_SB.PCI0.XHC.XWAK ()
        }

        Store (Zero, \_SB.KBST)
        Return (Package (0x02)
        {
            Zero, 
            Zero
        })
    }

    Method (GETB, 3, Serialized)
    {
        Multiply (Arg0, 0x08, Local0)
        Multiply (Arg1, 0x08, Local1)
        CreateField (Arg2, Local0, Local1, TBF3)
        Return (TBF3)
    }

    Method (PNOT, 0, Serialized)
    {
        If (LGreater (TCNT, One))
        {
            If (And (PDC0, 0x08))
            {
                Notify (\_PR.CPU0, 0x80)
                If (And (PDC0, 0x10))
                {
                    Sleep (0x64)
                    Notify (\_PR.CPU0, 0x81)
                }
            }

            If (And (PDC1, 0x08))
            {
                Notify (\_PR.CPU1, 0x80)
                If (And (PDC1, 0x10))
                {
                    Sleep (0x64)
                    Notify (\_PR.CPU1, 0x81)
                }
            }

            If (And (PDC2, 0x08))
            {
                Notify (\_PR.CPU2, 0x80)
                If (And (PDC2, 0x10))
                {
                    Sleep (0x64)
                    Notify (\_PR.CPU2, 0x81)
                }
            }

            If (And (PDC3, 0x08))
            {
                Notify (\_PR.CPU3, 0x80)
                If (And (PDC3, 0x10))
                {
                    Sleep (0x64)
                    Notify (\_PR.CPU3, 0x81)
                }
            }

            If (And (PDC4, 0x08))
            {
                Notify (\_PR.CPU4, 0x80)
                If (And (PDC4, 0x10))
                {
                    Sleep (0x64)
                    Notify (\_PR.CPU4, 0x81)
                }
            }

            If (And (PDC5, 0x08))
            {
                Notify (\_PR.CPU5, 0x80)
                If (And (PDC5, 0x10))
                {
                    Sleep (0x64)
                    Notify (\_PR.CPU5, 0x81)
                }
            }

            If (And (PDC6, 0x08))
            {
                Notify (\_PR.CPU6, 0x80)
                If (And (PDC6, 0x10))
                {
                    Sleep (0x64)
                    Notify (\_PR.CPU6, 0x81)
                }
            }

            If (And (PDC7, 0x08))
            {
                Notify (\_PR.CPU7, 0x80)
                If (And (PDC7, 0x10))
                {
                    Sleep (0x64)
                    Notify (\_PR.CPU7, 0x81)
                }
            }
        }
        Else
        {
            Notify (\_PR.CPU0, 0x80)
            Sleep (0x64)
            Notify (\_PR.CPU0, 0x81)
        }
    }

    Method (CPRN, 0, Serialized)
    {
        SPPC ()
        If (LGreater (TCNT, One))
        {
            If (And (PDC0, 0x08))
            {
                Notify (\_PR.CPU0, 0x80)
                Sleep (0x64)
            }

            If (And (PDC1, 0x08))
            {
                Notify (\_PR.CPU1, 0x80)
                Sleep (0x64)
            }

            If (And (PDC2, 0x08))
            {
                Notify (\_PR.CPU2, 0x80)
                Sleep (0x64)
            }

            If (And (PDC3, 0x08))
            {
                Notify (\_PR.CPU3, 0x80)
                Sleep (0x64)
            }

            If (And (PDC4, 0x08))
            {
                Notify (\_PR.CPU4, 0x80)
                Sleep (0x64)
            }

            If (And (PDC5, 0x08))
            {
                Notify (\_PR.CPU5, 0x80)
                Sleep (0x64)
            }

            If (And (PDC6, 0x08))
            {
                Notify (\_PR.CPU6, 0x80)
                Sleep (0x64)
            }

            If (And (PDC7, 0x08))
            {
                Notify (\_PR.CPU7, 0x80)
                Sleep (0x64)
            }
        }
        Else
        {
            Notify (\_PR.CPU0, 0x80)
            Sleep (0x64)
        }
    }

    Method (SPPC, 0, NotSerialized)
    {
        Add (\_SB.PPCM, One, \_SB.NIST)
        Store (\_PR.CPPC, \_SB.PPCS)
        Store (\_SB.PPCS, \_PR.CPU0._PPC)
        If (LEqual (\_SB.GSSR, One))
        {
            If (LEqual (\_SB.TZON, One))
            {
                Store (\_PR.CPPC, Local0)
                Increment (Local0)
                Store (Local0, \_SB.PPCS)
                Subtract (\_SB.PPCM, \_SB.PPCS, \_SB.NIST)
                Increment (\_SB.NIST)
                Store (\_SB.PPCS, \_PR.CPU0._PPC)
            }

            If (LEqual (\_SB.TZON, 0x02))
            {
                Store (\_SB.PPCM, Local1)
                Subtract (Local1, \_PR.CPPC, Local1)
                Divide (Local1, 0x02, Local2, Local3)
                If (LNotEqual (Local2, Zero))
                {
                    Increment (Local3)
                }

                Add (Local3, \_PR.CPPC, Local3)
                Store (Local3, \_SB.PPCS)
                Subtract (\_SB.PPCM, \_SB.PPCS, \_SB.NIST)
                Increment (\_SB.NIST)
                Store (\_SB.PPCS, \_PR.CPU0._PPC)
            }

            If (LEqual (\_SB.TZON, 0x03))
            {
                Store (\_SB.PPCM, \_SB.PPCS)
                Store (One, \_SB.NIST)
                Store (\_SB.PPCS, \_PR.CPU0._PPC)
            }
        }

        If (LEqual (\_SB.GSSR, 0x02))
        {
            Subtract (\_SB.PPCM, \_SB.RIST, \_SB.PPCS)
            Store (\_SB.PPCS, \_PR.CPU0._PPC)
        }
    }

    Method (CCRN, 0, Serialized)
    {
        If (TCNT)
        {
            If (And (PDC0, 0x10))
            {
                Notify (\_PR.CPU0, 0x81)
            }

            If (And (PDC1, 0x10))
            {
                Notify (\_PR.CPU1, 0x81)
            }

            If (And (PDC2, 0x10))
            {
                Notify (\_PR.CPU2, 0x81)
            }

            If (And (PDC3, 0x10))
            {
                Notify (\_PR.CPU3, 0x81)
            }

            If (And (PDC4, 0x10))
            {
                Notify (\_PR.CPU4, 0x81)
            }

            If (And (PDC5, 0x10))
            {
                Notify (\_PR.CPU5, 0x81)
            }

            If (And (PDC6, 0x10))
            {
                Notify (\_PR.CPU6, 0x81)
            }

            If (And (PDC7, 0x10))
            {
                Notify (\_PR.CPU7, 0x81)
            }
        }
        Else
        {
            Notify (\_PR.CPU0, 0x81)
        }
    }

    Method (TRAP, 2, Serialized)
    {
        Store (Arg1, SMIF)
        If (LEqual (Arg0, TRTP))
        {
            Store (Zero, TRP0)
        }

        If (LEqual (Arg0, TRTD))
        {
            Store (Arg1, DTSF)
            Store (Zero, TRPD)
            Return (DTSF)
        }

        If (LEqual (Arg0, TRTI))
        {
            Store (Zero, TRPH)
        }

        Return (SMIF)
    }

    Scope (_SB.PCI0)
    {
        Method (_INI, 0, NotSerialized)  // _INI: Initialize
        {
            Store (0x07D0, \OSYS)
            Store (0x07D0, OSYS)
            If (CondRefOf (_OSI, Local0))
            {
                If (_OSI ("Windows 2001"))
                {
                    Store (0x07D1, \OSYS)
                    Store (0x07D1, OSYS)
                }

                If (_OSI ("Windows 2001 SP1"))
                {
                    Store (0x07D1, \OSYS)
                    Store (0x07D1, OSYS)
                }

                If (_OSI ("Windows 2001 SP2"))
                {
                    Store (0x07D2, \OSYS)
                    Store (0x07D2, OSYS)
                }

                If (_OSI ("Windows 2001.1"))
                {
                    Store (0x07D3, \OSYS)
                    Store (0x07D3, OSYS)
                }

                If (_OSI ("Windows 2006"))
                {
                    Store (0x07D6, \OSYS)
                    Store (0x07D6, OSYS)
                }

                If (_OSI ("Windows 2009"))
                {
                    Store (0x07D9, \OSYS)
                    Store (0x07D9, OSYS)
                }

                If (_OSI ("Windows 2012"))
                {
                    Store (0x07DC, \OSYS)
                    Store (0x07DC, OSYS)
                }

                SECS (0xA8)
                Store (Zero, RTYP)
                If (LEqual (\IFFS, One))
                {
                    Store (^^IFFS.FFST, FFBT)
                }

                If (LEqual (\IFFS, One))
                {
                    SECS (0x9D)
                }
                Else
                {
                    SECS (0x9C)
                }
            }
        }

        Method (NHPG, 0, Serialized)
        {
            Store (Zero, ^RP01.HPEX)
            Store (Zero, ^RP02.HPEX)
            Store (Zero, ^RP03.HPEX)
            Store (Zero, ^RP04.HPEX)
            Store (One, ^RP01.HPSX)
            Store (One, ^RP02.HPSX)
            Store (One, ^RP03.HPSX)
            Store (One, ^RP04.HPSX)
        }

        Method (NPME, 0, Serialized)
        {
            Store (Zero, ^RP01.PMEX)
            Store (Zero, ^RP02.PMEX)
            Store (Zero, ^RP03.PMEX)
            Store (Zero, ^RP04.PMEX)
            Store (Zero, ^RP05.PMEX)
            Store (Zero, ^RP06.PMEX)
            Store (Zero, ^RP07.PMEX)
            Store (Zero, ^RP08.PMEX)
            Store (One, ^RP01.PMSX)
            Store (One, ^RP02.PMSX)
            Store (One, ^RP03.PMSX)
            Store (One, ^RP04.PMSX)
            Store (One, ^RP05.PMSX)
            Store (One, ^RP06.PMSX)
            Store (One, ^RP07.PMSX)
            Store (One, ^RP08.PMSX)
        }
    }

    Scope (\)
    {
        Name (PICM, Zero)
        Name (PRWP, Package (0x02)
        {
            Zero, 
            Zero
        })
        Method (GPRW, 2, NotSerialized)
        {
            Store (Arg0, Index (PRWP, Zero))
            Store (ShiftLeft (SS1, One), Local0)
            Or (Local0, ShiftLeft (SS2, 0x02), Local0)
            Or (Local0, ShiftLeft (SS3, 0x03), Local0)
            Or (Local0, ShiftLeft (SS4, 0x04), Local0)
            If (And (ShiftLeft (One, Arg1), Local0))
            {
                Store (Arg1, Index (PRWP, One))
            }
            Else
            {
                ShiftRight (Local0, One, Local0)
                FindSetLeftBit (Local0, Index (PRWP, One))
            }

            Return (PRWP)
        }
    }

    Scope (_TZ)
    {
        Name (ETMD, One)
        Name (THLD, 0x78)
        PowerResource (FN00, 0x00, 0x0000)
        {
            Method (_STA, 0, Serialized)  // _STA: Status
            {
                Return (VFN0)
            }

            Method (_ON, 0, Serialized)  // _ON_: Power On
            {
                Store (One, VFN0)
            }

            Method (_OFF, 0, Serialized)  // _OFF: Power Off
            {
                Store (Zero, VFN0)
            }
        }

        Device (FAN0)
        {
            Name (_HID, EisaId ("PNP0C0B"))  // _HID: Hardware ID
            Name (_UID, Zero)  // _UID: Unique ID
            Name (_PR0, Package (0x01)  // _PR0: Power Resources for D0
            {
                FN00
            })
        }

        PowerResource (FN01, 0x00, 0x0000)
        {
            Method (_STA, 0, Serialized)  // _STA: Status
            {
                Return (VFN1)
            }

            Method (_ON, 0, Serialized)  // _ON_: Power On
            {
                Store (One, VFN1)
            }

            Method (_OFF, 0, Serialized)  // _OFF: Power Off
            {
                Store (Zero, VFN1)
            }
        }

        Device (FAN1)
        {
            Name (_HID, EisaId ("PNP0C0B"))  // _HID: Hardware ID
            Name (_UID, One)  // _UID: Unique ID
            Name (_PR0, Package (0x01)  // _PR0: Power Resources for D0
            {
                FN01
            })
        }

        PowerResource (FN02, 0x00, 0x0000)
        {
            Method (_STA, 0, Serialized)  // _STA: Status
            {
                Return (VFN2)
            }

            Method (_ON, 0, Serialized)  // _ON_: Power On
            {
                Store (One, VFN2)
            }

            Method (_OFF, 0, Serialized)  // _OFF: Power Off
            {
                Store (Zero, VFN2)
            }
        }

        Device (FAN2)
        {
            Name (_HID, EisaId ("PNP0C0B"))  // _HID: Hardware ID
            Name (_UID, 0x02)  // _UID: Unique ID
            Name (_PR0, Package (0x01)  // _PR0: Power Resources for D0
            {
                FN02
            })
        }

        PowerResource (FN03, 0x00, 0x0000)
        {
            Method (_STA, 0, Serialized)  // _STA: Status
            {
                Return (VFN3)
            }

            Method (_ON, 0, Serialized)  // _ON_: Power On
            {
                Store (One, VFN3)
            }

            Method (_OFF, 0, Serialized)  // _OFF: Power Off
            {
                Store (Zero, VFN3)
            }
        }

        Device (FAN3)
        {
            Name (_HID, EisaId ("PNP0C0B"))  // _HID: Hardware ID
            Name (_UID, 0x03)  // _UID: Unique ID
            Name (_PR0, Package (0x01)  // _PR0: Power Resources for D0
            {
                FN03
            })
        }

        PowerResource (FN04, 0x00, 0x0000)
        {
            Method (_STA, 0, Serialized)  // _STA: Status
            {
                Return (VFN4)
            }

            Method (_ON, 0, Serialized)  // _ON_: Power On
            {
                Store (One, VFN4)
            }

            Method (_OFF, 0, Serialized)  // _OFF: Power Off
            {
                Store (Zero, VFN4)
            }
        }

        Device (FAN4)
        {
            Name (_HID, EisaId ("PNP0C0B"))  // _HID: Hardware ID
            Name (_UID, 0x04)  // _UID: Unique ID
            Name (_PR0, Package (0x01)  // _PR0: Power Resources for D0
            {
                FN04
            })
        }

        ThermalZone (TZ00)
        {
            Name (PTMP, 0x0BB8)
            Method (_SCP, 1, Serialized)  // _SCP: Set Cooling Policy
            {
                Store (Arg0, CTYP)
            }

            Method (_CRT, 0, Serialized)  // _CRT: Critical Temperature
            {
                If (CondRefOf (\_PR.ACRT))
                {
                    If (LNotEqual (\_PR.ACRT, Zero))
                    {
                        Return (Add (0x0AAC, Multiply (\_PR.ACRT, 0x0A)))
                    }
                }

                Return (Add (0x0AAC, Multiply (CRTT, 0x0A)))
            }

            Method (_AC0, 0, Serialized)  // _ACx: Active Cooling
            {
                If (CondRefOf (\_PR.AAC0))
                {
                    If (LNotEqual (\_PR.AAC0, Zero))
                    {
                        Return (Add (0x0AAC, Multiply (\_PR.AAC0, 0x0A)))
                    }
                }

                Return (Add (0x0AAC, Multiply (ACTT, 0x0A)))
            }

            Method (_AC1, 0, Serialized)  // _ACx: Active Cooling
            {
                Return (Add (0x0AAC, Multiply (ACT1, 0x0A)))
            }

            Method (_AC2, 0, Serialized)  // _ACx: Active Cooling
            {
                Return (0x0AAC)
            }

            Method (_AC3, 0, Serialized)  // _ACx: Active Cooling
            {
                Return (0x0AAC)
            }

            Method (_AC4, 0, Serialized)  // _ACx: Active Cooling
            {
                Return (0x0AAC)
            }

            Name (_AL0, Package (0x01)  // _ALx: Active List
            {
                FAN0
            })
            Name (_AL1, Package (0x01)  // _ALx: Active List
            {
                FAN1
            })
            Name (_AL2, Package (0x01)  // _ALx: Active List
            {
                FAN2
            })
            Name (_AL3, Package (0x01)  // _ALx: Active List
            {
                FAN3
            })
            Name (_AL4, Package (0x01)  // _ALx: Active List
            {
                FAN4
            })
            Method (_TMP, 0, Serialized)  // _TMP: Temperature
            {
                If (LNot (ETMD))
                {
                    Return (0x0BB8)
                }

                If (LEqual (DTSE, 0x03))
                {
                    Return (Add (0x0B10, Multiply (CRTT, 0x0A)))
                }

                If (LEqual (DTSE, One))
                {
                    If (LEqual (PKGA, One))
                    {
                        Store (PDTS, Local0)
                        Return (Add (0x0AAC, Multiply (Local0, 0x0A)))
                    }

                    Store (DTS1, Local0)
                    If (LGreater (DTS2, Local0))
                    {
                        Store (DTS2, Local0)
                    }

                    If (LGreater (DTS3, Local0))
                    {
                        Store (DTS3, Local0)
                    }

                    If (LGreater (DTS4, Local0))
                    {
                        Store (DTS4, Local0)
                    }

                    Return (Add (0x0AAC, Multiply (Local0, 0x0A)))
                }

                If (ECON)
                {
                    Store (\_SB.PCI0.LPCB.H_EC.CTMP, Local0)
                    If (LNotEqual (Local0, 0xFF))
                    {
                        Return (Add (0x0AAC, Multiply (Local0, 0x0A)))
                    }
                    Else
                    {
                        Return (0x0C1C)
                    }
                }

                Return (0x0BC2)
            }
        }

        ThermalZone (TZ01)
        {
            Name (PTMP, 0x0BB8)
            Method (_SCP, 1, Serialized)  // _SCP: Set Cooling Policy
            {
                Store (Arg0, CTYP)
            }

            Method (_CRT, 0, Serialized)  // _CRT: Critical Temperature
            {
                If (CondRefOf (\_PR.ACRT))
                {
                    If (LNotEqual (\_PR.ACRT, Zero))
                    {
                        Return (Add (0x0AAC, Multiply (\_PR.ACRT, 0x0A)))
                    }
                }

                Return (Add (0x0AAC, Multiply (CRTT, 0x0A)))
            }

            Method (_TMP, 0, Serialized)  // _TMP: Temperature
            {
                If (LNot (ETMD))
                {
                    Return (0x0BCC)
                }

                If (LEqual (DTSE, 0x03))
                {
                    Return (Add (0x0B10, Multiply (CRTT, 0x0A)))
                }

                If (LEqual (DTSE, One))
                {
                    If (LEqual (PKGA, One))
                    {
                        Store (PDTS, Local0)
                        Return (Add (0x0AAC, Multiply (Local0, 0x0A)))
                    }

                    Store (DTS1, Local0)
                    If (LGreater (DTS2, Local0))
                    {
                        Store (DTS2, Local0)
                    }

                    If (LGreater (DTS3, Local0))
                    {
                        Store (DTS3, Local0)
                    }

                    If (LGreater (DTS4, Local0))
                    {
                        Store (DTS4, Local0)
                    }

                    Return (Add (0x0AAC, Multiply (Local0, 0x0A)))
                }

                If (ECON) {}
                Return (0x0BD6)
            }

            Method (_PSL, 0, Serialized)  // _PSL: Passive List
            {
                If (LEqual (TCNT, 0x08))
                {
                    Return (Package (0x08)
                    {
                        \_PR.CPU0, 
                        \_PR.CPU1, 
                        \_PR.CPU2, 
                        \_PR.CPU3, 
                        \_PR.CPU4, 
                        \_PR.CPU5, 
                        \_PR.CPU6, 
                        \_PR.CPU7
                    })
                }

                If (LEqual (TCNT, 0x04))
                {
                    Return (Package (0x04)
                    {
                        \_PR.CPU0, 
                        \_PR.CPU1, 
                        \_PR.CPU2, 
                        \_PR.CPU3
                    })
                }

                If (LEqual (TCNT, 0x02))
                {
                    Return (Package (0x02)
                    {
                        \_PR.CPU0, 
                        \_PR.CPU1
                    })
                }

                Return (Package (0x01)
                {
                    \_PR.CPU0
                })
            }

            Method (_PSV, 0, Serialized)  // _PSV: Passive Temperature
            {
                If (CondRefOf (\_PR.APSV))
                {
                    If (LNotEqual (\_PR.APSV, Zero))
                    {
                        Return (Add (0x0AAC, Multiply (\_PR.APSV, 0x0A)))
                    }
                }

                Return (Add (0x0AAC, Multiply (PSVT, 0x0A)))
            }

            Method (_TC1, 0, Serialized)  // _TC1: Thermal Constant 1
            {
                Return (TC1V)
            }

            Method (_TC2, 0, Serialized)  // _TC2: Thermal Constant 2
            {
                Return (TC2V)
            }

            Method (_TSP, 0, Serialized)  // _TSP: Thermal Sampling Period
            {
                Return (TSPV)
            }
        }
    }

    Scope (_SB.PCI0)
    {
        Device (PDRC)
        {
            Name (_HID, EisaId ("PNP0C02"))  // _HID: Hardware ID
            Name (_UID, One)  // _UID: Unique ID
            Name (BUF0, ResourceTemplate ()
            {
                Memory32Fixed (ReadWrite,
                    0x00000000,         // Address Base
                    0x00004000,         // Address Length
                    _Y10)
                Memory32Fixed (ReadWrite,
                    0x00000000,         // Address Base
                    0x00008000,         // Address Length
                    _Y12)
                Memory32Fixed (ReadWrite,
                    0x00000000,         // Address Base
                    0x00001000,         // Address Length
                    _Y13)
                Memory32Fixed (ReadWrite,
                    0x00000000,         // Address Base
                    0x00001000,         // Address Length
                    _Y14)
                Memory32Fixed (ReadWrite,
                    0x00000000,         // Address Base
                    0x00000000,         // Address Length
                    _Y15)
                Memory32Fixed (ReadWrite,
                    0xFED20000,         // Address Base
                    0x00020000,         // Address Length
                    )
                Memory32Fixed (ReadOnly,
                    0xFED90000,         // Address Base
                    0x00004000,         // Address Length
                    )
                Memory32Fixed (ReadWrite,
                    0xFED45000,         // Address Base
                    0x0004B000,         // Address Length
                    )
                Memory32Fixed (ReadOnly,
                    0xFF000000,         // Address Base
                    0x01000000,         // Address Length
                    )
                Memory32Fixed (ReadOnly,
                    0xFEE00000,         // Address Base
                    0x00100000,         // Address Length
                    )
                Memory32Fixed (ReadWrite,
                    0x00000000,         // Address Base
                    0x00001000,         // Address Length
                    _Y11)
            })
            Method (_CRS, 0, Serialized)  // _CRS: Current Resource Settings
            {
                CreateDWordField (BUF0, \_SB.PCI0.PDRC._Y10._BAS, RBR0)  // _BAS: Base Address
                ShiftLeft (^^LPCB.RCBA, 0x0E, RBR0)
                CreateDWordField (BUF0, \_SB.PCI0.PDRC._Y11._BAS, TBR0)  // _BAS: Base Address
                Store (TBAB, TBR0)
                CreateDWordField (BUF0, \_SB.PCI0.PDRC._Y11._LEN, TBLN)  // _LEN: Length
                If (LEqual (TBAB, Zero))
                {
                    Store (Zero, TBLN)
                }

                CreateDWordField (BUF0, \_SB.PCI0.PDRC._Y12._BAS, MBR0)  // _BAS: Base Address
                ShiftLeft (MHBR, 0x0F, MBR0)
                CreateDWordField (BUF0, \_SB.PCI0.PDRC._Y13._BAS, DBR0)  // _BAS: Base Address
                ShiftLeft (DIBR, 0x0C, DBR0)
                CreateDWordField (BUF0, \_SB.PCI0.PDRC._Y14._BAS, EBR0)  // _BAS: Base Address
                ShiftLeft (EPBR, 0x0C, EBR0)
                CreateDWordField (BUF0, \_SB.PCI0.PDRC._Y15._BAS, XBR0)  // _BAS: Base Address
                ShiftLeft (PXBR, 0x1A, XBR0)
                CreateDWordField (BUF0, \_SB.PCI0.PDRC._Y15._LEN, XSZ0)  // _LEN: Length
                ShiftRight (0x10000000, PXSZ, XSZ0)
                Return (BUF0)
            }
        }
    }

    Method (BRTN, 1, Serialized)
    {
        If (LEqual (And (DID1, 0x0F00), 0x0400))
        {
            Notify (\_SB.PCI0.IGPU.DD01, Arg0)
        }

        If (LEqual (And (DID2, 0x0F00), 0x0400))
        {
            Notify (\_SB.PCI0.IGPU.DD02, Arg0)
        }

        If (LEqual (And (DID3, 0x0F00), 0x0400))
        {
            Notify (\_SB.PCI0.IGPU.DD03, Arg0)
        }

        If (LEqual (And (DID4, 0x0F00), 0x0400))
        {
            Notify (\_SB.PCI0.IGPU.DD04, Arg0)
        }

        If (LEqual (And (DID5, 0x0F00), 0x0400))
        {
            Notify (\_SB.PCI0.IGPU.DD05, Arg0)
        }

        If (LEqual (And (DID6, 0x0F00), 0x0400))
        {
            Notify (\_SB.PCI0.IGPU.DD06, Arg0)
        }

        If (LEqual (And (DID7, 0x0F00), 0x0400))
        {
            Notify (\_SB.PCI0.IGPU.DD07, Arg0)
        }

        If (LEqual (And (DID8, 0x0F00), 0x0400))
        {
            Notify (\_SB.PCI0.IGPU.DD08, Arg0)
        }
    }

    Scope (_GPE)
    {
        Method (_L0B, 0, NotSerialized)  // _Lxx: Level-Triggered GPE
        {
            Notify (\_SB.PCI0.P0P1, 0x02)
        }

        Method (_L09, 0, NotSerialized)  // _Lxx: Level-Triggered GPE
        {
            If (LEqual (RP1D, Zero))
            {
                \_SB.PCI0.RP01.HPME ()
                Notify (\_SB.PCI0.RP01, 0x02)
            }

            If (LEqual (RP2D, Zero))
            {
                \_SB.PCI0.RP02.HPME ()
                Notify (\_SB.PCI0.RP02, 0x02)
            }

            If (LEqual (RP3D, Zero))
            {
                \_SB.PCI0.RP03.HPME ()
                Notify (\_SB.PCI0.RP03, 0x02)
            }

            If (LEqual (RP4D, Zero))
            {
                \_SB.PCI0.RP04.HPME ()
                Notify (\_SB.PCI0.RP04, 0x02)
            }

            If (LEqual (RP5D, Zero))
            {
                \_SB.PCI0.RP05.HPME ()
                Notify (\_SB.PCI0.RP05, 0x02)
            }

            If (LEqual (RP6D, Zero))
            {
                \_SB.PCI0.RP06.HPME ()
                Notify (\_SB.PCI0.RP06, 0x02)
            }

            If (LEqual (RP7D, Zero))
            {
                \_SB.PCI0.RP07.HPME ()
                Notify (\_SB.PCI0.RP07, 0x02)
            }

            If (LEqual (RP8D, Zero))
            {
                \_SB.PCI0.RP08.HPME ()
                Notify (\_SB.PCI0.RP08, 0x02)
            }

            Notify (\_SB.PCI0.PEG0, 0x02)
            Notify (\_SB.PCI0.PEG0.PEGP, 0x02)
            Notify (\_SB.PCI0.PEG1, 0x02)
            Notify (\_SB.PCI0.PEG2, 0x02)
            Notify (\_SB.PCI0.PEG3, 0x02)
        }

        Method (_L0D, 0, NotSerialized)  // _Lxx: Level-Triggered GPE
        {
            Notify (\_SB.PCI0.EH01, 0x02)
            Notify (\_SB.PCI0.EH02, 0x02)
            Notify (\_SB.PCI0.HDEF, 0x02)
            Notify (\_SB.PCI0.GLAN, 0x02)
            Notify (\_SB.PWRB, 0x02)
            Notify (\_SB.PCI0.XHC, 0x02)
            If (LAnd (\_SB.PCI0.XHC.PMES, \_SB.PCI0.XHC.PMES))
            {
                Store (One, \_SB.PCI0.XHC.PMES)
            }
        }

        Method (_L01, 0, NotSerialized)  // _Lxx: Level-Triggered GPE
        {
            Add (L01C, One, L01C)
            P8XH (Zero, One)
            P8XH (One, L01C)
            If (LAnd (LEqual (RP1D, Zero), \_SB.PCI0.RP01.HPSX))
            {
                Sleep (0x64)
                If (\_SB.PCI0.RP01.PDCX)
                {
                    Store (One, \_SB.PCI0.RP01.PDCX)
                    Store (One, \_SB.PCI0.RP01.HPSX)
                    If (LNot (\_SB.PCI0.RP01.PDSX))
                    {
                        Store (Zero, \_SB.PCI0.RP01.L0SE)
                    }

                    Notify (\_SB.PCI0.RP01, Zero)
                }
                Else
                {
                    Store (One, \_SB.PCI0.RP01.HPSX)
                }
            }

            If (LAnd (LEqual (RP2D, Zero), \_SB.PCI0.RP02.HPSX))
            {
                Sleep (0x64)
                If (\_SB.PCI0.RP02.PDCX)
                {
                    Store (One, \_SB.PCI0.RP02.PDCX)
                    Store (One, \_SB.PCI0.RP02.HPSX)
                    If (LNot (\_SB.PCI0.RP02.PDSX))
                    {
                        Store (Zero, \_SB.PCI0.RP02.L0SE)
                    }

                    Notify (\_SB.PCI0.RP02, Zero)
                }
                Else
                {
                    Store (One, \_SB.PCI0.RP02.HPSX)
                }
            }

            If (LAnd (LEqual (RP3D, Zero), \_SB.PCI0.RP03.HPSX))
            {
                Sleep (0x64)
                If (\_SB.PCI0.RP03.PDCX)
                {
                    Store (One, \_SB.PCI0.RP03.PDCX)
                    Store (One, \_SB.PCI0.RP03.HPSX)
                    If (LNot (\_SB.PCI0.RP03.PDSX))
                    {
                        Store (Zero, \_SB.PCI0.RP03.L0SE)
                    }

                    Notify (\_SB.PCI0.RP03, Zero)
                }
                Else
                {
                    Store (One, \_SB.PCI0.RP03.HPSX)
                }
            }

            If (LAnd (LEqual (RP4D, Zero), \_SB.PCI0.RP04.HPSX))
            {
                Sleep (0x64)
                If (\_SB.PCI0.RP04.PDCX)
                {
                    Store (One, \_SB.PCI0.RP04.PDCX)
                    Store (One, \_SB.PCI0.RP04.HPSX)
                    If (LNot (\_SB.PCI0.RP04.PDSX))
                    {
                        Store (Zero, \_SB.PCI0.RP04.L0SE)
                    }

                    Notify (\_SB.PCI0.RP04, Zero)
                }
                Else
                {
                    Store (One, \_SB.PCI0.RP04.HPSX)
                }
            }

            If (LAnd (LEqual (RP5D, Zero), \_SB.PCI0.RP05.HPSX))
            {
                Sleep (0x64)
                If (\_SB.PCI0.RP05.PDCX)
                {
                    Store (One, \_SB.PCI0.RP05.PDCX)
                    Store (One, \_SB.PCI0.RP05.HPSX)
                    If (LNot (\_SB.PCI0.RP05.PDSX))
                    {
                        Store (Zero, \_SB.PCI0.RP05.L0SE)
                    }

                    Notify (\_SB.PCI0.RP05, Zero)
                }
                Else
                {
                    Store (One, \_SB.PCI0.RP05.HPSX)
                }
            }

            If (LAnd (LEqual (RP6D, Zero), \_SB.PCI0.RP06.HPSX))
            {
                Sleep (0x64)
                If (\_SB.PCI0.RP06.PDCX)
                {
                    Store (One, \_SB.PCI0.RP06.PDCX)
                    Store (One, \_SB.PCI0.RP06.HPSX)
                    If (LNot (\_SB.PCI0.RP06.PDSX))
                    {
                        Store (Zero, \_SB.PCI0.RP06.L0SE)
                    }

                    Notify (\_SB.PCI0.RP06, Zero)
                }
                Else
                {
                    Store (One, \_SB.PCI0.RP06.HPSX)
                }
            }

            If (LAnd (LEqual (RP7D, Zero), \_SB.PCI0.RP07.HPSX))
            {
                Sleep (0x64)
                If (\_SB.PCI0.RP07.PDCX)
                {
                    Store (One, \_SB.PCI0.RP07.PDCX)
                    Store (One, \_SB.PCI0.RP07.HPSX)
                    If (LNot (\_SB.PCI0.RP07.PDSX))
                    {
                        Store (Zero, \_SB.PCI0.RP07.L0SE)
                    }
                }
                Else
                {
                    Store (One, \_SB.PCI0.RP07.HPSX)
                }
            }

            If (LAnd (LEqual (RP8D, Zero), \_SB.PCI0.RP08.HPSX))
            {
                Sleep (0x64)
                If (\_SB.PCI0.RP08.PDCX)
                {
                    Store (One, \_SB.PCI0.RP08.PDCX)
                    Store (One, \_SB.PCI0.RP08.HPSX)
                    If (LNot (\_SB.PCI0.RP08.PDSX))
                    {
                        Store (Zero, \_SB.PCI0.RP08.L0SE)
                    }
                }
                Else
                {
                    Store (One, \_SB.PCI0.RP08.HPSX)
                }
            }
        }

        Method (_L02, 0, NotSerialized)  // _Lxx: Level-Triggered GPE
        {
            Store (Zero, GPEC)
            If (CondRefOf (\_SB.PCI0.IEIT.EITV))
            {
                \_SB.PCI0.IEIT.EITV ()
            }

            Notify (\_TZ.TZ00, 0x80)
            Notify (\_TZ.TZ01, 0x80)
            If (CondRefOf (TNOT))
            {
                TNOT ()
            }
        }

        Method (_L06, 0, NotSerialized)  // _Lxx: Level-Triggered GPE
        {
            If (LAnd (\_SB.PCI0.IGPU.GSSE, LNot (GSMI)))
            {
                \_SB.PCI0.IGPU.GSCI ()
            }
        }

        Method (_L07, 0, NotSerialized)  // _Lxx: Level-Triggered GPE
        {
            Store (0x20, \_SB.PCI0.SBUS.HSTS)
        }

        Method (_L1E, 0, NotSerialized)  // _Lxx: Level-Triggered GPE
        {
            Notify (\_SB.PWRB, 0x02)
            Return (Zero)
        }
    }

    Scope (\)
    {
        OperationRegion (IO_T, SystemIO, 0x1000, 0x10)
        Field (IO_T, ByteAcc, NoLock, Preserve)
        {
            TRPI,   16, 
            Offset (0x04), 
            Offset (0x06), 
            Offset (0x08), 
            TRP0,   8, 
            Offset (0x0A), 
            Offset (0x0B), 
            Offset (0x0C), 
            Offset (0x0D), 
            Offset (0x0E), 
            Offset (0x0F), 
            Offset (0x10)
        }

        OperationRegion (IO_D, SystemIO, 0x0810, 0x04)
        Field (IO_D, ByteAcc, NoLock, Preserve)
        {
            TRPD,   8
        }

        OperationRegion (IO_H, SystemIO, 0x1000, 0x04)
        Field (IO_H, ByteAcc, NoLock, Preserve)
        {
            TRPH,   8
        }

        OperationRegion (PMIO, SystemIO, PMBS, 0x80)
        Field (PMIO, ByteAcc, NoLock, Preserve)
        {
            Offset (0x04), 
                ,   10, 
            STYP,   3, 
            Offset (0x28), 
            Offset (0x2A), 
                ,   3, 
            GPE3,   1, 
            Offset (0x3C), 
                ,   1, 
            UPRW,   1, 
            Offset (0x42), 
                ,   1, 
            GPEC,   1
        }

        Field (PMIO, ByteAcc, NoLock, WriteAsZeros)
        {
            Offset (0x20), 
            Offset (0x22), 
                ,   3, 
            GPS3,   1, 
            Offset (0x64), 
                ,   9, 
            SCIS,   1, 
            Offset (0x66)
        }

        OperationRegion (GPIO, SystemIO, GPBS, 0x64)
        Field (GPIO, ByteAcc, NoLock, Preserve)
        {
            GU00,   8, 
            GU01,   8, 
            GU02,   8, 
            GU03,   8, 
            GIO0,   8, 
            GIO1,   8, 
            GIO2,   8, 
            GIO3,   8, 
            Offset (0x0C), 
            GL00,   8, 
            GL01,   8, 
            GL02,   8, 
            GP24,   1, 
                ,   2, 
            GP27,   1, 
            GP28,   1, 
            Offset (0x10), 
            Offset (0x18), 
            GB00,   8, 
            GB01,   8, 
            GB02,   8, 
            GB03,   8, 
            Offset (0x2C), 
            GIV0,   8, 
            GIV1,   8, 
            GIV2,   8, 
            GIV3,   8, 
            GU04,   8, 
            GU05,   8, 
            GU06,   8, 
            GU07,   8, 
            GIO4,   8, 
            GIO5,   8, 
            GIO6,   8, 
            GIO7,   8, 
            GL04,   8, 
            GL05,   8, 
            GL06,   8, 
            GL07,   8, 
            Offset (0x40), 
            GU08,   8, 
            GU09,   8, 
            GU0A,   8, 
            GU0B,   8, 
            GIO8,   8, 
            GIO9,   8, 
            GIOA,   8, 
            GIOB,   8, 
            GL08,   8, 
            GL09,   8, 
            GL0A,   8, 
            GL0B,   8
        }

        OperationRegion (RCRB, SystemMemory, SRCB, 0x4000)
        Field (RCRB, DWordAcc, Lock, Preserve)
        {
            Offset (0x1000), 
            Offset (0x3000), 
            Offset (0x3404), 
            HPAS,   2, 
                ,   5, 
            HPAE,   1, 
            Offset (0x3418), 
                ,   1, 
                ,   1, 
            SATD,   1, 
            SMBD,   1, 
            HDAD,   1, 
            Offset (0x341A), 
            RP1D,   1, 
            RP2D,   1, 
            RP3D,   1, 
            RP4D,   1, 
            RP5D,   1, 
            RP6D,   1, 
            RP7D,   1, 
            RP8D,   1, 
            Offset (0x359C), 
            UP0D,   1, 
            UP1D,   1, 
            UP2D,   1, 
            UP3D,   1, 
            UP4D,   1, 
            UP5D,   1, 
            UP6D,   1, 
            UP7D,   1, 
            UP8D,   1, 
            UP9D,   1, 
            UPAD,   1, 
            UPBD,   1, 
            UPCD,   1, 
            UPDD,   1, 
                ,   1, 
            Offset (0x359E)
        }

        Name (GBF0, Zero)
        Name (GBF1, Zero)
        Name (GBF2, Zero)
    }

    Scope (_SB.PCI0)
    {
        Device (GLAN)
        {
            Name (_ADR, 0x00190000)  // _ADR: Address
            Method (_PRW, 0, NotSerialized)  // _PRW: Power Resources for Wake
            {
                Return (GPRW (0x0D, 0x04))
            }
        }

        Device (EH01)
        {
            Name (_ADR, 0x001D0000)  // _ADR: Address
            OperationRegion (PWKE, PCI_Config, 0x62, 0x04)
            Field (PWKE, DWordAcc, NoLock, Preserve)
            {
                    ,   1, 
                PWUC,   8
            }

            Method (_PSW, 1, NotSerialized)  // _PSW: Power State Wake
            {
                If (Arg0)
                {
                    Store (Ones, PWUC)
                }
                Else
                {
                    Store (Zero, PWUC)
                }
            }

            Method (_S3D, 0, NotSerialized)  // _S3D: S3 Device State
            {
                Return (0x02)
            }

            Method (_S4D, 0, NotSerialized)  // _S4D: S4 Device State
            {
                Return (0x02)
            }

            Device (HUBN)
            {
                Name (_ADR, Zero)  // _ADR: Address
                Device (PR01)
                {
                    Name (_ADR, One)  // _ADR: Address
                    Method (_UPC, 0, Serialized)  // _UPC: USB Port Capabilities
                    {
                        Name (UPCA, Package (0x04)
                        {
                            Zero, 
                            0xFF, 
                            Zero, 
                            Zero
                        })
                        Return (UPCA)
                    }

                    Device (PR11)
                    {
                        Name (_ADR, One)  // _ADR: Address
                        Method (_UPC, 0, Serialized)  // _UPC: USB Port Capabilities
                        {
                            Name (UPCP, Package (0x04)
                            {
                                0xFF, 
                                0xFF, 
                                Zero, 
                                Zero
                            })
                            Return (UPCP)
                        }
                    }

                    Device (PR12)
                    {
                        Name (_ADR, 0x02)  // _ADR: Address
                        Method (_UPC, 0, Serialized)  // _UPC: USB Port Capabilities
                        {
                            Name (UPCP, Package (0x04)
                            {
                                0xFF, 
                                0xFF, 
                                Zero, 
                                Zero
                            })
                            Return (UPCP)
                        }
                    }

                    Device (PR13)
                    {
                        Name (_ADR, 0x03)  // _ADR: Address
                        Method (_UPC, 0, Serialized)  // _UPC: USB Port Capabilities
                        {
                            Name (UPCP, Package (0x04)
                            {
                                0xFF, 
                                0xFF, 
                                Zero, 
                                Zero
                            })
                            Return (UPCP)
                        }
                    }

                    Device (PR14)
                    {
                        Name (_ADR, 0x04)  // _ADR: Address
                        Method (_UPC, 0, Serialized)  // _UPC: USB Port Capabilities
                        {
                            Name (UPCP, Package (0x04)
                            {
                                Zero, 
                                0xFF, 
                                Zero, 
                                Zero
                            })
                            Return (UPCP)
                        }

                        Alias (SBV1, SDGV)
                        Method (_DSM, 4, Serialized)  // _DSM: Device-Specific Method
                        {
                            Name (_T_0, Zero)  // _T_x: Emitted by ASL Compiler
                            If (LEqual (Arg0, Buffer (0x10)
                                    {
                                        /* 0000 */   0x8F, 0x70, 0xFC, 0xA5, 0x75, 0x87, 0xA6, 0x4B,
                                        /* 0008 */   0xBD, 0x0C, 0xBA, 0x90, 0xA1, 0xEC, 0x72, 0xF8
                                    }))
                            {
                                Store (ToInteger (Arg2), _T_0)
                                If (LEqual (_T_0, Zero))
                                {
                                    If (LEqual (Arg1, One))
                                    {
                                        Return (Buffer (One)
                                        {
                                             0x07
                                        })
                                    }
                                    Else
                                    {
                                        Return (Buffer (One)
                                        {
                                             0x00
                                        })
                                    }
                                }
                                Else
                                {
                                    If (LEqual (_T_0, One))
                                    {
                                        If (LEqual (SDGV, 0xFF))
                                        {
                                            Return (Zero)
                                        }
                                        Else
                                        {
                                            Return (One)
                                        }
                                    }
                                    Else
                                    {
                                        If (LEqual (_T_0, 0x02))
                                        {
                                            Return (SDGV)
                                        }
                                    }
                                }
                            }

                            Return (Zero)
                        }
                    }

                    Device (PR15)
                    {
                        Name (_ADR, 0x05)  // _ADR: Address
                        Method (_UPC, 0, Serialized)  // _UPC: USB Port Capabilities
                        {
                            Name (UPCP, Package (0x04)
                            {
                                Zero, 
                                0xFF, 
                                Zero, 
                                Zero
                            })
                            Return (UPCP)
                        }

                        Alias (SBV2, SDGV)
                        Method (_DSM, 4, Serialized)  // _DSM: Device-Specific Method
                        {
                            Name (_T_0, Zero)  // _T_x: Emitted by ASL Compiler
                            If (LEqual (Arg0, Buffer (0x10)
                                    {
                                        /* 0000 */   0x8F, 0x70, 0xFC, 0xA5, 0x75, 0x87, 0xA6, 0x4B,
                                        /* 0008 */   0xBD, 0x0C, 0xBA, 0x90, 0xA1, 0xEC, 0x72, 0xF8
                                    }))
                            {
                                Store (ToInteger (Arg2), _T_0)
                                If (LEqual (_T_0, Zero))
                                {
                                    If (LEqual (Arg1, One))
                                    {
                                        Return (Buffer (One)
                                        {
                                             0x07
                                        })
                                    }
                                    Else
                                    {
                                        Return (Buffer (One)
                                        {
                                             0x00
                                        })
                                    }
                                }
                                Else
                                {
                                    If (LEqual (_T_0, One))
                                    {
                                        If (LEqual (SDGV, 0xFF))
                                        {
                                            Return (Zero)
                                        }
                                        Else
                                        {
                                            Return (One)
                                        }
                                    }
                                    Else
                                    {
                                        If (LEqual (_T_0, 0x02))
                                        {
                                            Return (SDGV)
                                        }
                                    }
                                }
                            }

                            Return (Zero)
                        }
                    }

                    Device (PR16)
                    {
                        Name (_ADR, 0x06)  // _ADR: Address
                        Method (_UPC, 0, Serialized)  // _UPC: USB Port Capabilities
                        {
                            Name (UPCP, Package (0x04)
                            {
                                Zero, 
                                0xFF, 
                                Zero, 
                                Zero
                            })
                            Return (UPCP)
                        }

                        Alias (SBV1, SDGV)
                        Method (_DSM, 4, Serialized)  // _DSM: Device-Specific Method
                        {
                            Name (_T_0, Zero)  // _T_x: Emitted by ASL Compiler
                            If (LEqual (Arg0, Buffer (0x10)
                                    {
                                        /* 0000 */   0x8F, 0x70, 0xFC, 0xA5, 0x75, 0x87, 0xA6, 0x4B,
                                        /* 0008 */   0xBD, 0x0C, 0xBA, 0x90, 0xA1, 0xEC, 0x72, 0xF8
                                    }))
                            {
                                Store (ToInteger (Arg2), _T_0)
                                If (LEqual (_T_0, Zero))
                                {
                                    If (LEqual (Arg1, One))
                                    {
                                        Return (Buffer (One)
                                        {
                                             0x07
                                        })
                                    }
                                    Else
                                    {
                                        Return (Buffer (One)
                                        {
                                             0x00
                                        })
                                    }
                                }
                                Else
                                {
                                    If (LEqual (_T_0, One))
                                    {
                                        If (LEqual (SDGV, 0xFF))
                                        {
                                            Return (Zero)
                                        }
                                        Else
                                        {
                                            Return (One)
                                        }
                                    }
                                    Else
                                    {
                                        If (LEqual (_T_0, 0x02))
                                        {
                                            Return (SDGV)
                                        }
                                    }
                                }
                            }

                            Return (Zero)
                        }
                    }

                    Device (PR17)
                    {
                        Name (_ADR, 0x07)  // _ADR: Address
                        Method (_UPC, 0, Serialized)  // _UPC: USB Port Capabilities
                        {
                            Name (UPCP, Package (0x04)
                            {
                                Zero, 
                                0xFF, 
                                Zero, 
                                Zero
                            })
                            Return (UPCP)
                        }

                        Alias (SBV2, SDGV)
                        Method (_DSM, 4, Serialized)  // _DSM: Device-Specific Method
                        {
                            Name (_T_0, Zero)  // _T_x: Emitted by ASL Compiler
                            If (LEqual (Arg0, Buffer (0x10)
                                    {
                                        /* 0000 */   0x8F, 0x70, 0xFC, 0xA5, 0x75, 0x87, 0xA6, 0x4B,
                                        /* 0008 */   0xBD, 0x0C, 0xBA, 0x90, 0xA1, 0xEC, 0x72, 0xF8
                                    }))
                            {
                                Store (ToInteger (Arg2), _T_0)
                                If (LEqual (_T_0, Zero))
                                {
                                    If (LEqual (Arg1, One))
                                    {
                                        Return (Buffer (One)
                                        {
                                             0x07
                                        })
                                    }
                                    Else
                                    {
                                        Return (Buffer (One)
                                        {
                                             0x00
                                        })
                                    }
                                }
                                Else
                                {
                                    If (LEqual (_T_0, One))
                                    {
                                        If (LEqual (SDGV, 0xFF))
                                        {
                                            Return (Zero)
                                        }
                                        Else
                                        {
                                            Return (One)
                                        }
                                    }
                                    Else
                                    {
                                        If (LEqual (_T_0, 0x02))
                                        {
                                            Return (SDGV)
                                        }
                                    }
                                }
                            }

                            Return (Zero)
                        }
                    }

                    Device (PR18)
                    {
                        Name (_ADR, 0x08)  // _ADR: Address
                        Method (_UPC, 0, Serialized)  // _UPC: USB Port Capabilities
                        {
                            Name (UPCP, Package (0x04)
                            {
                                Zero, 
                                0xFF, 
                                Zero, 
                                Zero
                            })
                            Return (UPCP)
                        }
                    }
                }
            }

            Method (ZPRW, 0, NotSerialized)
            {
                Return (GPRW (0x0D, 0x04))
            }
        }

        Device (EH02)
        {
            Name (_ADR, 0x001A0000)  // _ADR: Address
            OperationRegion (PWKE, PCI_Config, 0x62, 0x04)
            Field (PWKE, DWordAcc, NoLock, Preserve)
            {
                    ,   1, 
                PWUC,   6
            }

            Method (_PSW, 1, NotSerialized)  // _PSW: Power State Wake
            {
                If (Arg0)
                {
                    Store (Ones, PWUC)
                }
                Else
                {
                    Store (Zero, PWUC)
                }
            }

            Method (_S3D, 0, NotSerialized)  // _S3D: S3 Device State
            {
                Return (0x02)
            }

            Method (_S4D, 0, NotSerialized)  // _S4D: S4 Device State
            {
                Return (0x02)
            }

            Device (HUBN)
            {
                Name (_ADR, Zero)  // _ADR: Address
                Device (PR01)
                {
                    Name (_ADR, One)  // _ADR: Address
                    Method (_UPC, 0, Serialized)  // _UPC: USB Port Capabilities
                    {
                        Name (UPCA, Package (0x04)
                        {
                            Zero, 
                            0xFF, 
                            Zero, 
                            Zero
                        })
                        Return (UPCA)
                    }

                    Device (PR11)
                    {
                        Name (_ADR, One)  // _ADR: Address
                        Method (_UPC, 0, Serialized)  // _UPC: USB Port Capabilities
                        {
                            Name (UPCP, Package (0x04)
                            {
                                Zero, 
                                0xFF, 
                                Zero, 
                                Zero
                            })
                            Return (UPCP)
                        }
                    }

                    Device (PR12)
                    {
                        Name (_ADR, 0x02)  // _ADR: Address
                        Method (_UPC, 0, Serialized)  // _UPC: USB Port Capabilities
                        {
                            Name (UPCP, Package (0x04)
                            {
                                0xFF, 
                                0xFF, 
                                Zero, 
                                Zero
                            })
                            Return (UPCP)
                        }

                        Alias (SBV1, SDGV)
                        Method (_DSM, 4, Serialized)  // _DSM: Device-Specific Method
                        {
                            Name (_T_0, Zero)  // _T_x: Emitted by ASL Compiler
                            If (LEqual (Arg0, Buffer (0x10)
                                    {
                                        /* 0000 */   0x8F, 0x70, 0xFC, 0xA5, 0x75, 0x87, 0xA6, 0x4B,
                                        /* 0008 */   0xBD, 0x0C, 0xBA, 0x90, 0xA1, 0xEC, 0x72, 0xF8
                                    }))
                            {
                                Store (ToInteger (Arg2), _T_0)
                                If (LEqual (_T_0, Zero))
                                {
                                    If (LEqual (Arg1, One))
                                    {
                                        Return (Buffer (One)
                                        {
                                             0x07
                                        })
                                    }
                                    Else
                                    {
                                        Return (Buffer (One)
                                        {
                                             0x00
                                        })
                                    }
                                }
                                Else
                                {
                                    If (LEqual (_T_0, One))
                                    {
                                        If (LEqual (SDGV, 0xFF))
                                        {
                                            Return (Zero)
                                        }
                                        Else
                                        {
                                            Return (One)
                                        }
                                    }
                                    Else
                                    {
                                        If (LEqual (_T_0, 0x02))
                                        {
                                            Return (SDGV)
                                        }
                                    }
                                }
                            }

                            Return (Zero)
                        }
                    }

                    Device (PR13)
                    {
                        Name (_ADR, 0x03)  // _ADR: Address
                        Method (_UPC, 0, Serialized)  // _UPC: USB Port Capabilities
                        {
                            Name (UPCP, Package (0x04)
                            {
                                0xFF, 
                                0xFF, 
                                Zero, 
                                Zero
                            })
                            Return (UPCP)
                        }

                        Alias (SBV2, SDGV)
                        Method (_DSM, 4, Serialized)  // _DSM: Device-Specific Method
                        {
                            Name (_T_0, Zero)  // _T_x: Emitted by ASL Compiler
                            If (LEqual (Arg0, Buffer (0x10)
                                    {
                                        /* 0000 */   0x8F, 0x70, 0xFC, 0xA5, 0x75, 0x87, 0xA6, 0x4B,
                                        /* 0008 */   0xBD, 0x0C, 0xBA, 0x90, 0xA1, 0xEC, 0x72, 0xF8
                                    }))
                            {
                                Store (ToInteger (Arg2), _T_0)
                                If (LEqual (_T_0, Zero))
                                {
                                    If (LEqual (Arg1, One))
                                    {
                                        Return (Buffer (One)
                                        {
                                             0x07
                                        })
                                    }
                                    Else
                                    {
                                        Return (Buffer (One)
                                        {
                                             0x00
                                        })
                                    }
                                }
                                Else
                                {
                                    If (LEqual (_T_0, One))
                                    {
                                        If (LEqual (SDGV, 0xFF))
                                        {
                                            Return (Zero)
                                        }
                                        Else
                                        {
                                            Return (One)
                                        }
                                    }
                                    Else
                                    {
                                        If (LEqual (_T_0, 0x02))
                                        {
                                            Return (SDGV)
                                        }
                                    }
                                }
                            }

                            Return (Zero)
                        }
                    }

                    Device (PR14)
                    {
                        Name (_ADR, 0x04)  // _ADR: Address
                        Method (_UPC, 0, Serialized)  // _UPC: USB Port Capabilities
                        {
                            Name (UPCP, Package (0x04)
                            {
                                Zero, 
                                0xFF, 
                                Zero, 
                                Zero
                            })
                            Return (UPCP)
                        }

                        Device (WCAM)
                        {
                            Name (_ADR, 0x04)  // _ADR: Address
                            Name (_PLD, Package (0x01)  // _PLD: Physical Location of Device
                            {
                                Buffer (0x14)
                                {
                                    /* 0000 */   0x82, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                                    /* 0008 */   0x20, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                                    /* 0010 */   0x00, 0x00, 0x00, 0x00
                                    /*           Revision : 02     */
                                    /*        IgnoreColor : 01     */
                                    /*              Color : 000000 */
                                    /*              Width : 0000   */
                                    /*             Height : 0000   */
                                    /*        UserVisible : 00     */
                                    /*               Dock : 00     */
                                    /*                Lid : 00     */
                                    /*              Panel : 04     */
                                    /*   VerticalPosition : 00     */
                                    /* HorizontalPosition : 00     */
                                    /*              Shape : 07     */
                                    /*   GroupOrientation : 00     */
                                    /*         GroupToken : 00     */
                                    /*      GroupPosition : 00     */
                                    /*                Bay : 00     */
                                    /*          Ejectable : 00     */
                                    /*  OspmEjectRequired : 00     */
                                    /*      CabinetNumber : 00     */
                                    /*     CardCageNumber : 00     */
                                    /*          Reference : 00     */
                                    /*           Rotation : 00     */
                                    /*              Order : 00     */
                                    /*     VerticalOffset : 0000   */
                                    /*   HorizontalOffset : 0000   */
                                }
                            })
                        }
                    }

                    Device (PR15)
                    {
                        Name (_ADR, 0x05)  // _ADR: Address
                        Method (_UPC, 0, Serialized)  // _UPC: USB Port Capabilities
                        {
                            Name (UPCP, Package (0x04)
                            {
                                0xFF, 
                                0xFF, 
                                Zero, 
                                Zero
                            })
                            Return (UPCP)
                        }
                    }

                    Device (PR16)
                    {
                        Name (_ADR, 0x06)  // _ADR: Address
                        Method (_UPC, 0, Serialized)  // _UPC: USB Port Capabilities
                        {
                            Name (UPCP, Package (0x04)
                            {
                                0xFF, 
                                0xFF, 
                                Zero, 
                                Zero
                            })
                            Return (UPCP)
                        }
                    }
                }
            }

            Method (ZPRW, 0, NotSerialized)
            {
                Return (GPRW (0x0D, 0x04))
            }
        }

        Device (XHC)
        {
            Name (_ADR, 0x00140000)  // _ADR: Address
            OperationRegion (XPRT, PCI_Config, 0x74, 0x6C)
            Field (XPRT, DWordAcc, NoLock, Preserve)
            {
                Offset (0x01), 
                PMEE,   1, 
                    ,   6, 
                PMES,   1, 
                Offset (0x5C), 
                PR2,    32, 
                PR2M,   32, 
                PR3,    32, 
                PR3M,   32
            }

            Name (XRST, Zero)
            Method (CUID, 1, Serialized)
            {
                If (LEqual (Arg0, Buffer (0x10)
                        {
                            /* 0000 */   0xA9, 0x12, 0x95, 0x7C, 0x05, 0x17, 0xB4, 0x4C,
                            /* 0008 */   0xAF, 0x7D, 0x50, 0x6A, 0x24, 0x23, 0xAB, 0x71
                        }))
                {
                    Return (One)
                }

                Return (Zero)
            }

            Method (POSC, 3, Serialized)
            {
                CreateDWordField (Arg2, Zero, CDW1)
                CreateDWordField (Arg2, 0x08, CDW3)
                If (LNotEqual (Arg1, One))
                {
                    Or (CDW1, 0x08, CDW1)
                }

                If (LEqual (XHCI, Zero))
                {
                    Or (CDW1, 0x02, CDW1)
                }

                If (LNot (And (CDW1, One)))
                {
                    If (And (CDW3, One))
                    {
                        ESEL ()
                    }
                    Else
                    {
                        XSEL ()
                    }
                }

                Return (Arg2)
            }

            Method (XSEL, 0, Serialized)
            {
                If (LOr (LEqual (XHCI, 0x02), LEqual (XHCI, 0x03)))
                {
                    Store (One, XUSB)
                    Store (One, XRST)
                    Store (Zero, Local0)
                    And (PR3, 0xFFFFFFF0, Local0)
                    Or (Local0, XHPM, Local0)
                    And (Local0, PR3M, PR3)
                    Store (Zero, Local0)
                    And (PR2, 0xFFFFFFF0, Local0)
                    Or (Local0, XHPM, Local0)
                    And (Local0, PR2M, PR2)
                }
            }

            Method (ESEL, 0, Serialized)
            {
                If (LOr (LEqual (XHCI, 0x02), LEqual (XHCI, 0x03)))
                {
                    And (PR3, 0xFFFFFFF0, PR3)
                    And (PR2, 0xFFFFFFF0, PR2)
                    Store (Zero, XUSB)
                    Store (Zero, XRST)
                }
            }

            Method (XWAK, 0, Serialized)
            {
                If (LOr (LEqual (XUSB, One), LEqual (XRST, One)))
                {
                    XSEL ()
                }
            }

            Method (_S3D, 0, NotSerialized)  // _S3D: S3 Device State
            {
                Return (0x02)
            }

            Method (_S4D, 0, NotSerialized)  // _S4D: S4 Device State
            {
                Return (0x02)
            }

            Device (RHUB)
            {
                Name (_ADR, Zero)  // _ADR: Address
                Device (HSP1)
                {
                    Name (_ADR, One)  // _ADR: Address
                    Method (_UPC, 0, Serialized)  // _UPC: USB Port Capabilities
                    {
                        Name (UPCP, Package (0x04)
                        {
                            0xFF, 
                            0x03, 
                            Zero, 
                            Zero
                        })
                        If (LNot (And (PR2, One)))
                        {
                            Store (Zero, Index (UPCP, Zero))
                        }

                        Return (UPCP)
                    }

                    Method (_PLD, 0, Serialized)  // _PLD: Physical Location of Device
                    {
                        Name (PLDP, Package (0x01)
                        {
                            Buffer (0x10)
                            {
                                /* 0000 */   0x01, 0xC6, 0x72, 0x00, 0x00, 0x00, 0x00, 0x00,
                                /* 0008 */   0x69, 0x0C, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00
                            }
                        })
                        CreateBitField (DerefOf (Index (PLDP, Zero)), 0x40, VIS)
                        If (LNot (And (PR2, One)))
                        {
                            And (VIS, Zero, VIS)
                        }

                        Return (PLDP)
                    }
                }

                Device (HSP2)
                {
                    Name (_ADR, 0x02)  // _ADR: Address
                    Method (_UPC, 0, Serialized)  // _UPC: USB Port Capabilities
                    {
                        Name (UPCP, Package (0x04)
                        {
                            0xFF, 
                            0x03, 
                            Zero, 
                            Zero
                        })
                        If (LNot (And (PR2, 0x02)))
                        {
                            Store (Zero, Index (UPCP, Zero))
                        }

                        Return (UPCP)
                    }

                    Method (_PLD, 0, Serialized)  // _PLD: Physical Location of Device
                    {
                        Name (PLDP, Package (0x01)
                        {
                            Buffer (0x10)
                            {
                                /* 0000 */   0x01, 0xC6, 0x72, 0x00, 0x00, 0x00, 0x00, 0x00,
                                /* 0008 */   0x69, 0x0C, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00
                            }
                        })
                        CreateBitField (DerefOf (Index (PLDP, Zero)), 0x40, VIS)
                        If (LNot (And (PR2, 0x02)))
                        {
                            And (VIS, Zero, VIS)
                        }

                        Return (PLDP)
                    }
                }

                Device (HSP3)
                {
                    Name (_ADR, 0x03)  // _ADR: Address
                    Method (_UPC, 0, Serialized)  // _UPC: USB Port Capabilities
                    {
                        Name (UPCP, Package (0x04)
                        {
                            0xFF, 
                            0x03, 
                            Zero, 
                            Zero
                        })
                        If (LNot (And (PR2, 0x04)))
                        {
                            Store (Zero, Index (UPCP, Zero))
                        }

                        Return (UPCP)
                    }

                    Method (_PLD, 0, Serialized)  // _PLD: Physical Location of Device
                    {
                        Name (PLDP, Package (0x01)
                        {
                            Buffer (0x10)
                            {
                                /* 0000 */   0x01, 0xC6, 0x72, 0x00, 0x00, 0x00, 0x00, 0x00,
                                /* 0008 */   0x69, 0x0C, 0x80, 0x01, 0x00, 0x00, 0x00, 0x00
                            }
                        })
                        CreateBitField (DerefOf (Index (PLDP, Zero)), 0x40, VIS)
                        If (LNot (And (PR2, 0x04)))
                        {
                            And (VIS, Zero, VIS)
                        }

                        Return (PLDP)
                    }
                }

                Device (HSP4)
                {
                    Name (_ADR, 0x04)  // _ADR: Address
                    Method (_UPC, 0, Serialized)  // _UPC: USB Port Capabilities
                    {
                        Name (UPCP, Package (0x04)
                        {
                            0xFF, 
                            0x03, 
                            Zero, 
                            Zero
                        })
                        If (LNot (And (PR2, 0x08)))
                        {
                            Store (Zero, Index (UPCP, Zero))
                        }

                        Return (UPCP)
                    }

                    Method (_PLD, 0, Serialized)  // _PLD: Physical Location of Device
                    {
                        Name (PLDP, Package (0x01)
                        {
                            Buffer (0x10)
                            {
                                /* 0000 */   0x01, 0xC6, 0x72, 0x00, 0x00, 0x00, 0x00, 0x00,
                                /* 0008 */   0x69, 0x0C, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00
                            }
                        })
                        CreateBitField (DerefOf (Index (PLDP, Zero)), 0x40, VIS)
                        If (LNot (And (PR2, 0x08)))
                        {
                            And (VIS, Zero, VIS)
                        }

                        Return (PLDP)
                    }
                }

                Device (SSP1)
                {
                    Name (_ADR, 0x05)  // _ADR: Address
                    Method (_UPC, 0, Serialized)  // _UPC: USB Port Capabilities
                    {
                        Name (UPCP, Package (0x04)
                        {
                            0xFF, 
                            0x03, 
                            Zero, 
                            Zero
                        })
                        If (LNot (And (PR3, One)))
                        {
                            Store (Zero, Index (UPCP, Zero))
                        }

                        Return (UPCP)
                    }

                    Method (_PLD, 0, Serialized)  // _PLD: Physical Location of Device
                    {
                        Name (PLDP, Package (0x01)
                        {
                            Buffer (0x10)
                            {
                                /* 0000 */   0x01, 0xC6, 0x72, 0x00, 0x00, 0x00, 0x00, 0x00,
                                /* 0008 */   0x69, 0x0C, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00
                            }
                        })
                        CreateBitField (DerefOf (Index (PLDP, Zero)), 0x40, VIS)
                        If (LNot (And (PR3, One)))
                        {
                            And (VIS, Zero, VIS)
                        }

                        Return (PLDP)
                    }
                }

                Device (SSP2)
                {
                    Name (_ADR, 0x06)  // _ADR: Address
                    Method (_UPC, 0, Serialized)  // _UPC: USB Port Capabilities
                    {
                        Name (UPCP, Package (0x04)
                        {
                            0xFF, 
                            0x03, 
                            Zero, 
                            Zero
                        })
                        If (LNot (And (PR3, 0x02)))
                        {
                            Store (Zero, Index (UPCP, Zero))
                        }

                        Return (UPCP)
                    }

                    Method (_PLD, 0, Serialized)  // _PLD: Physical Location of Device
                    {
                        Name (PLDP, Package (0x01)
                        {
                            Buffer (0x10)
                            {
                                /* 0000 */   0x01, 0xC6, 0x72, 0x00, 0x00, 0x00, 0x00, 0x00,
                                /* 0008 */   0x69, 0x0C, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00
                            }
                        })
                        CreateBitField (DerefOf (Index (PLDP, Zero)), 0x40, VIS)
                        If (LNot (And (PR3, 0x02)))
                        {
                            And (VIS, Zero, VIS)
                        }

                        Return (PLDP)
                    }
                }

                Device (SSP3)
                {
                    Name (_ADR, 0x07)  // _ADR: Address
                    Method (_UPC, 0, Serialized)  // _UPC: USB Port Capabilities
                    {
                        Name (UPCP, Package (0x04)
                        {
                            0xFF, 
                            0x03, 
                            Zero, 
                            Zero
                        })
                        If (LNot (And (PR3, 0x04)))
                        {
                            Store (Zero, Index (UPCP, Zero))
                        }

                        Return (UPCP)
                    }

                    Method (_PLD, 0, Serialized)  // _PLD: Physical Location of Device
                    {
                        Name (PLDP, Package (0x01)
                        {
                            Buffer (0x10)
                            {
                                /* 0000 */   0x01, 0xC6, 0x72, 0x00, 0x00, 0x00, 0x00, 0x00,
                                /* 0008 */   0x69, 0x0C, 0x80, 0x01, 0x00, 0x00, 0x00, 0x00
                            }
                        })
                        CreateBitField (DerefOf (Index (PLDP, Zero)), 0x40, VIS)
                        If (LNot (And (PR3, 0x04)))
                        {
                            And (VIS, Zero, VIS)
                        }

                        Return (PLDP)
                    }
                }

                Device (SSP4)
                {
                    Name (_ADR, 0x08)  // _ADR: Address
                    Method (_UPC, 0, Serialized)  // _UPC: USB Port Capabilities
                    {
                        Name (UPCP, Package (0x04)
                        {
                            0xFF, 
                            0x03, 
                            Zero, 
                            Zero
                        })
                        If (LNot (And (PR3, 0x08)))
                        {
                            Store (Zero, Index (UPCP, Zero))
                        }

                        Return (UPCP)
                    }

                    Method (_PLD, 0, Serialized)  // _PLD: Physical Location of Device
                    {
                        Name (PLDP, Package (0x01)
                        {
                            Buffer (0x10)
                            {
                                /* 0000 */   0x01, 0xC6, 0x72, 0x00, 0x00, 0x00, 0x00, 0x00,
                                /* 0008 */   0x69, 0x0C, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00
                            }
                        })
                        CreateBitField (DerefOf (Index (PLDP, Zero)), 0x40, VIS)
                        If (LNot (And (PR3, 0x08)))
                        {
                            And (VIS, Zero, VIS)
                        }

                        Return (PLDP)
                    }
                }
            }

            Method (ZPRW, 0, NotSerialized)
            {
                Return (GPRW (0x0D, 0x04))
            }
        }

        Device (HDEF)
        {
            Name (_ADR, 0x001B0000)  // _ADR: Address
            OperationRegion (HDAR, PCI_Config, 0x4C, 0x10)
            Field (HDAR, WordAcc, NoLock, Preserve)
            {
                DCKA,   1, 
                Offset (0x01), 
                DCKM,   1, 
                    ,   6, 
                DCKS,   1, 
                Offset (0x08), 
                    ,   15, 
                PMES,   1
            }

            Method (_PRW, 0, NotSerialized)  // _PRW: Power Resources for Wake
            {
                Return (GPRW (0x0D, 0x04))
            }
        }

        Device (RP01)
        {
            Name (_ADR, 0x001C0000)  // _ADR: Address
            OperationRegion (PXCS, PCI_Config, 0x40, 0xC0)
            Field (PXCS, AnyAcc, NoLock, Preserve)
            {
                Offset (0x10), 
                L0SE,   1, 
                Offset (0x11), 
                Offset (0x12), 
                    ,   13, 
                LASX,   1, 
                Offset (0x1A), 
                ABPX,   1, 
                    ,   2, 
                PDCX,   1, 
                    ,   2, 
                PDSX,   1, 
                Offset (0x1B), 
                Offset (0x20), 
                Offset (0x22), 
                PSPX,   1, 
                Offset (0x98), 
                    ,   30, 
                HPEX,   1, 
                PMEX,   1
            }

            Field (PXCS, AnyAcc, NoLock, WriteAsZeros)
            {
                Offset (0x9C), 
                    ,   30, 
                HPSX,   1, 
                PMSX,   1
            }

            Device (PXSX)
            {
                Name (_ADR, Zero)  // _ADR: Address
                Name (_PRW, Package (0x02)  // _PRW: Power Resources for Wake
                {
                    0x09, 
                    0x04
                })
            }

            Method (HPME, 0, Serialized)
            {
                If (PMSX)
                {
                    Store (0xC8, Local0)
                    While (Local0)
                    {
                        Store (One, PMSX)
                        If (PMSX)
                        {
                            Decrement (Local0)
                        }
                        Else
                        {
                            Store (Zero, Local0)
                        }
                    }

                    Notify (PXSX, 0x02)
                }
            }

            Method (_PRW, 0, NotSerialized)  // _PRW: Power Resources for Wake
            {
                Return (GPRW (0x09, 0x04))
            }

            Method (_PRT, 0, NotSerialized)  // _PRT: PCI Routing Table
            {
                If (PICM)
                {
                    Return (AR04 ())
                }

                Return (PR04 ())
            }
        }

        Device (RP02)
        {
            Name (_ADR, 0x001C0001)  // _ADR: Address
            OperationRegion (PXCS, PCI_Config, 0x40, 0xC0)
            Field (PXCS, AnyAcc, NoLock, Preserve)
            {
                Offset (0x10), 
                L0SE,   1, 
                Offset (0x11), 
                Offset (0x12), 
                    ,   13, 
                LASX,   1, 
                Offset (0x1A), 
                ABPX,   1, 
                    ,   2, 
                PDCX,   1, 
                    ,   2, 
                PDSX,   1, 
                Offset (0x1B), 
                Offset (0x20), 
                Offset (0x22), 
                PSPX,   1, 
                Offset (0x98), 
                    ,   30, 
                HPEX,   1, 
                PMEX,   1
            }

            Field (PXCS, AnyAcc, NoLock, WriteAsZeros)
            {
                Offset (0x9C), 
                    ,   30, 
                HPSX,   1, 
                PMSX,   1
            }

            Device (PXSX)
            {
                Name (_ADR, Zero)  // _ADR: Address
                Name (_PRW, Package (0x02)  // _PRW: Power Resources for Wake
                {
                    0x09, 
                    0x04
                })
            }

            Method (HPME, 0, Serialized)
            {
                If (PMSX)
                {
                    Store (0xC8, Local0)
                    While (Local0)
                    {
                        Store (One, PMSX)
                        If (PMSX)
                        {
                            Decrement (Local0)
                        }
                        Else
                        {
                            Store (Zero, Local0)
                        }
                    }

                    Notify (PXSX, 0x02)
                }
            }

            Method (_PRW, 0, NotSerialized)  // _PRW: Power Resources for Wake
            {
                Return (GPRW (0x09, 0x04))
            }

            Method (_PRT, 0, NotSerialized)  // _PRT: PCI Routing Table
            {
                If (PICM)
                {
                    Return (AR05 ())
                }

                Return (PR05 ())
            }
        }

        Device (RP03)
        {
            Name (_ADR, 0x001C0002)  // _ADR: Address
            OperationRegion (PXCS, PCI_Config, 0x40, 0xC0)
            Field (PXCS, AnyAcc, NoLock, Preserve)
            {
                Offset (0x10), 
                L0SE,   1, 
                Offset (0x11), 
                Offset (0x12), 
                    ,   13, 
                LASX,   1, 
                Offset (0x1A), 
                ABPX,   1, 
                    ,   2, 
                PDCX,   1, 
                    ,   2, 
                PDSX,   1, 
                Offset (0x1B), 
                Offset (0x20), 
                Offset (0x22), 
                PSPX,   1, 
                Offset (0x98), 
                    ,   30, 
                HPEX,   1, 
                PMEX,   1
            }

            Field (PXCS, AnyAcc, NoLock, WriteAsZeros)
            {
                Offset (0x9C), 
                    ,   30, 
                HPSX,   1, 
                PMSX,   1
            }

            Device (PXSX)
            {
                Name (_ADR, Zero)  // _ADR: Address
                Name (_PRW, Package (0x02)  // _PRW: Power Resources for Wake
                {
                    0x09, 
                    0x04
                })
            }

            Method (HPME, 0, Serialized)
            {
                If (PMSX)
                {
                    Store (0xC8, Local0)
                    While (Local0)
                    {
                        Store (One, PMSX)
                        If (PMSX)
                        {
                            Decrement (Local0)
                        }
                        Else
                        {
                            Store (Zero, Local0)
                        }
                    }

                    Notify (PXSX, 0x02)
                }
            }

            Method (_PRW, 0, NotSerialized)  // _PRW: Power Resources for Wake
            {
                Return (GPRW (0x09, 0x04))
            }

            Method (_PRT, 0, NotSerialized)  // _PRT: PCI Routing Table
            {
                If (PICM)
                {
                    Return (AR06 ())
                }

                Return (PR06 ())
            }
        }

        Device (RP04)
        {
            Name (_ADR, 0x001C0003)  // _ADR: Address
            OperationRegion (PXCS, PCI_Config, 0x40, 0xC0)
            Field (PXCS, AnyAcc, NoLock, Preserve)
            {
                Offset (0x10), 
                L0SE,   1, 
                Offset (0x11), 
                Offset (0x12), 
                    ,   13, 
                LASX,   1, 
                Offset (0x1A), 
                ABPX,   1, 
                    ,   2, 
                PDCX,   1, 
                    ,   2, 
                PDSX,   1, 
                Offset (0x1B), 
                Offset (0x20), 
                Offset (0x22), 
                PSPX,   1, 
                Offset (0x98), 
                    ,   30, 
                HPEX,   1, 
                PMEX,   1
            }

            Field (PXCS, AnyAcc, NoLock, WriteAsZeros)
            {
                Offset (0x9C), 
                    ,   30, 
                HPSX,   1, 
                PMSX,   1
            }

            Device (PXSX)
            {
                Name (_ADR, Zero)  // _ADR: Address
                Name (_PRW, Package (0x02)  // _PRW: Power Resources for Wake
                {
                    0x09, 
                    0x04
                })
            }

            Method (HPME, 0, Serialized)
            {
                If (PMSX)
                {
                    Store (0xC8, Local0)
                    While (Local0)
                    {
                        Store (One, PMSX)
                        If (PMSX)
                        {
                            Decrement (Local0)
                        }
                        Else
                        {
                            Store (Zero, Local0)
                        }
                    }

                    Notify (PXSX, 0x02)
                }
            }

            Method (_PRW, 0, NotSerialized)  // _PRW: Power Resources for Wake
            {
                Return (GPRW (0x09, 0x04))
            }

            Method (_PRT, 0, NotSerialized)  // _PRT: PCI Routing Table
            {
                If (PICM)
                {
                    Return (AR07 ())
                }

                Return (PR07 ())
            }
        }

        Device (RP05)
        {
            Name (_ADR, 0x001C0004)  // _ADR: Address
            OperationRegion (PXCS, PCI_Config, 0x40, 0xC0)
            Field (PXCS, AnyAcc, NoLock, Preserve)
            {
                Offset (0x10), 
                L0SE,   1, 
                Offset (0x11), 
                Offset (0x12), 
                    ,   13, 
                LASX,   1, 
                Offset (0x1A), 
                ABPX,   1, 
                    ,   2, 
                PDCX,   1, 
                    ,   2, 
                PDSX,   1, 
                Offset (0x1B), 
                Offset (0x20), 
                Offset (0x22), 
                PSPX,   1, 
                Offset (0x98), 
                    ,   30, 
                HPEX,   1, 
                PMEX,   1
            }

            Field (PXCS, AnyAcc, NoLock, WriteAsZeros)
            {
                Offset (0x9C), 
                    ,   30, 
                HPSX,   1, 
                PMSX,   1
            }

            Device (PXSX)
            {
                Name (_ADR, Zero)  // _ADR: Address
                Name (_PRW, Package (0x02)  // _PRW: Power Resources for Wake
                {
                    0x09, 
                    0x04
                })
            }

            Method (HPME, 0, Serialized)
            {
                If (PMSX)
                {
                    Store (0xC8, Local0)
                    While (Local0)
                    {
                        Store (One, PMSX)
                        If (PMSX)
                        {
                            Decrement (Local0)
                        }
                        Else
                        {
                            Store (Zero, Local0)
                        }
                    }

                    Notify (PXSX, 0x02)
                }
            }

            Method (_PRW, 0, NotSerialized)  // _PRW: Power Resources for Wake
            {
                Return (GPRW (0x09, 0x04))
            }

            Method (_PRT, 0, NotSerialized)  // _PRT: PCI Routing Table
            {
                If (PICM)
                {
                    Return (AR08 ())
                }

                Return (PR08 ())
            }
        }

        Device (RP06)
        {
            Name (_ADR, 0x001C0005)  // _ADR: Address
            OperationRegion (PXCS, PCI_Config, 0x40, 0xC0)
            Field (PXCS, AnyAcc, NoLock, Preserve)
            {
                Offset (0x10), 
                L0SE,   1, 
                Offset (0x11), 
                Offset (0x12), 
                    ,   13, 
                LASX,   1, 
                Offset (0x1A), 
                ABPX,   1, 
                    ,   2, 
                PDCX,   1, 
                    ,   2, 
                PDSX,   1, 
                Offset (0x1B), 
                Offset (0x20), 
                Offset (0x22), 
                PSPX,   1, 
                Offset (0x98), 
                    ,   30, 
                HPEX,   1, 
                PMEX,   1
            }

            Field (PXCS, AnyAcc, NoLock, WriteAsZeros)
            {
                Offset (0x9C), 
                    ,   30, 
                HPSX,   1, 
                PMSX,   1
            }

            Device (PXSX)
            {
                Name (_ADR, Zero)  // _ADR: Address
                Name (_PRW, Package (0x02)  // _PRW: Power Resources for Wake
                {
                    0x09, 
                    0x04
                })
            }

            Method (HPME, 0, Serialized)
            {
                If (PMSX)
                {
                    Store (0xC8, Local0)
                    While (Local0)
                    {
                        Store (One, PMSX)
                        If (PMSX)
                        {
                            Decrement (Local0)
                        }
                        Else
                        {
                            Store (Zero, Local0)
                        }
                    }

                    Notify (PXSX, 0x02)
                }
            }

            Method (_PRW, 0, NotSerialized)  // _PRW: Power Resources for Wake
            {
                Return (GPRW (0x09, 0x04))
            }

            Method (_PRT, 0, NotSerialized)  // _PRT: PCI Routing Table
            {
                If (PICM)
                {
                    Return (AR09 ())
                }

                Return (PR09 ())
            }
        }

        Device (RP07)
        {
            Name (_ADR, 0x001C0006)  // _ADR: Address
            OperationRegion (PXCS, PCI_Config, 0x40, 0xC0)
            Field (PXCS, AnyAcc, NoLock, Preserve)
            {
                Offset (0x10), 
                L0SE,   1, 
                Offset (0x11), 
                Offset (0x12), 
                    ,   13, 
                LASX,   1, 
                Offset (0x1A), 
                ABPX,   1, 
                    ,   2, 
                PDCX,   1, 
                    ,   2, 
                PDSX,   1, 
                Offset (0x1B), 
                Offset (0x20), 
                Offset (0x22), 
                PSPX,   1, 
                Offset (0x98), 
                    ,   30, 
                HPEX,   1, 
                PMEX,   1
            }

            Field (PXCS, AnyAcc, NoLock, WriteAsZeros)
            {
                Offset (0x9C), 
                    ,   30, 
                HPSX,   1, 
                PMSX,   1
            }

            Device (PXSX)
            {
                Name (_ADR, Zero)  // _ADR: Address
                Name (_PRW, Package (0x02)  // _PRW: Power Resources for Wake
                {
                    0x09, 
                    0x04
                })
            }

            Method (HPME, 0, Serialized)
            {
                If (PMSX)
                {
                    Store (0xC8, Local0)
                    While (Local0)
                    {
                        Store (One, PMSX)
                        If (PMSX)
                        {
                            Decrement (Local0)
                        }
                        Else
                        {
                            Store (Zero, Local0)
                        }
                    }

                    Notify (PXSX, 0x02)
                }
            }

            Method (_PRW, 0, NotSerialized)  // _PRW: Power Resources for Wake
            {
                Return (GPRW (0x09, 0x04))
            }

            Method (_PRT, 0, NotSerialized)  // _PRT: PCI Routing Table
            {
                If (PICM)
                {
                    Return (AR0E)
                }

                Return (PR0E)
            }
        }

        Device (RP08)
        {
            Name (_ADR, 0x001C0007)  // _ADR: Address
            OperationRegion (PXCS, PCI_Config, 0x40, 0xC0)
            Field (PXCS, AnyAcc, NoLock, Preserve)
            {
                Offset (0x10), 
                L0SE,   1, 
                Offset (0x11), 
                Offset (0x12), 
                    ,   13, 
                LASX,   1, 
                Offset (0x1A), 
                ABPX,   1, 
                    ,   2, 
                PDCX,   1, 
                    ,   2, 
                PDSX,   1, 
                Offset (0x1B), 
                Offset (0x20), 
                Offset (0x22), 
                PSPX,   1, 
                Offset (0x98), 
                    ,   30, 
                HPEX,   1, 
                PMEX,   1
            }

            Field (PXCS, AnyAcc, NoLock, WriteAsZeros)
            {
                Offset (0x9C), 
                    ,   30, 
                HPSX,   1, 
                PMSX,   1
            }

            Device (PXSX)
            {
                Name (_ADR, Zero)  // _ADR: Address
                Name (_PRW, Package (0x02)  // _PRW: Power Resources for Wake
                {
                    0x09, 
                    0x04
                })
            }

            Method (HPME, 0, Serialized)
            {
                If (PMSX)
                {
                    Store (0xC8, Local0)
                    While (Local0)
                    {
                        Store (One, PMSX)
                        If (PMSX)
                        {
                            Decrement (Local0)
                        }
                        Else
                        {
                            Store (Zero, Local0)
                        }
                    }

                    Notify (PXSX, 0x02)
                }
            }

            Method (_PRW, 0, NotSerialized)  // _PRW: Power Resources for Wake
            {
                Return (GPRW (0x09, 0x04))
            }

            Method (_PRT, 0, NotSerialized)  // _PRT: PCI Routing Table
            {
                If (PICM)
                {
                    Return (AR0F)
                }

                Return (PR0F)
            }
        }

        Device (SAT0)
        {
            Name (_ADR, 0x001F0002)  // _ADR: Address
            Device (PRID)
            {
                Name (_ADR, Zero)  // _ADR: Address
                Method (_GTM, 0, NotSerialized)  // _GTM: Get Timing Mode
                {
                    Name (PBUF, Buffer (0x14)
                    {
                        /* 0000 */   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                        /* 0008 */   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                        /* 0010 */   0x00, 0x00, 0x00, 0x00
                    })
                    CreateDWordField (PBUF, Zero, PIO0)
                    CreateDWordField (PBUF, 0x04, DMA0)
                    CreateDWordField (PBUF, 0x08, PIO1)
                    CreateDWordField (PBUF, 0x0C, DMA1)
                    CreateDWordField (PBUF, 0x10, FLAG)
                    Store (0x78, PIO0)
                    Store (0x14, DMA0)
                    Store (0x78, PIO1)
                    Store (0x14, DMA1)
                    Store (0x1F, FLAG)
                    Return (PBUF)
                }
            }

            Device (SECD)
            {
                Name (_ADR, One)  // _ADR: Address
                Method (_GTM, 0, NotSerialized)  // _GTM: Get Timing Mode
                {
                    Name (SBUF, Buffer (0x14)
                    {
                        /* 0000 */   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                        /* 0008 */   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                        /* 0010 */   0x00, 0x00, 0x00, 0x00
                    })
                    CreateDWordField (SBUF, Zero, PIO0)
                    CreateDWordField (SBUF, 0x04, DMA0)
                    CreateDWordField (SBUF, 0x08, PIO1)
                    CreateDWordField (SBUF, 0x0C, DMA1)
                    CreateDWordField (SBUF, 0x10, FLAG)
                    Store (0x78, PIO0)
                    Store (0x14, DMA0)
                    Store (0x78, PIO1)
                    Store (0x14, DMA1)
                    Store (0x1F, FLAG)
                    Return (SBUF)
                }
            }
        }

        Device (SAT1)
        {
            Name (_ADR, 0x001F0005)  // _ADR: Address
            Device (PRID)
            {
                Name (_ADR, Zero)  // _ADR: Address
                Method (_GTM, 0, NotSerialized)  // _GTM: Get Timing Mode
                {
                    Name (PBUF, Buffer (0x14)
                    {
                        /* 0000 */   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                        /* 0008 */   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                        /* 0010 */   0x00, 0x00, 0x00, 0x00
                    })
                    CreateDWordField (PBUF, Zero, PIO0)
                    CreateDWordField (PBUF, 0x04, DMA0)
                    CreateDWordField (PBUF, 0x08, PIO1)
                    CreateDWordField (PBUF, 0x0C, DMA1)
                    CreateDWordField (PBUF, 0x10, FLAG)
                    Store (0x78, PIO0)
                    Store (0x14, DMA0)
                    Store (0x78, PIO1)
                    Store (0x14, DMA1)
                    Store (0x1F, FLAG)
                    Return (PBUF)
                }
            }

            Device (SECD)
            {
                Name (_ADR, One)  // _ADR: Address
                Method (_GTM, 0, NotSerialized)  // _GTM: Get Timing Mode
                {
                    Name (SBUF, Buffer (0x14)
                    {
                        /* 0000 */   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                        /* 0008 */   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                        /* 0010 */   0x00, 0x00, 0x00, 0x00
                    })
                    CreateDWordField (SBUF, Zero, PIO0)
                    CreateDWordField (SBUF, 0x04, DMA0)
                    CreateDWordField (SBUF, 0x08, PIO1)
                    CreateDWordField (SBUF, 0x0C, DMA1)
                    CreateDWordField (SBUF, 0x10, FLAG)
                    Store (0x78, PIO0)
                    Store (0x14, DMA0)
                    Store (0x78, PIO1)
                    Store (0x14, DMA1)
                    Store (0x1F, FLAG)
                    Return (SBUF)
                }
            }
        }

        Device (SBUS)
        {
            Name (_ADR, 0x001F0003)  // _ADR: Address
            OperationRegion (SMBP, PCI_Config, 0x40, 0xC0)
            Field (SMBP, DWordAcc, NoLock, Preserve)
            {
                    ,   2, 
                I2CE,   1
            }

            OperationRegion (SMPB, PCI_Config, 0x20, 0x04)
            Field (SMPB, DWordAcc, NoLock, Preserve)
            {
                    ,   5, 
                SBAR,   11
            }

            OperationRegion (SMBI, SystemIO, ShiftLeft (SBAR, 0x05), 0x10)
            Field (SMBI, ByteAcc, NoLock, Preserve)
            {
                HSTS,   8, 
                Offset (0x02), 
                HCON,   8, 
                HCOM,   8, 
                TXSA,   8, 
                DAT0,   8, 
                DAT1,   8, 
                HBDR,   8, 
                PECR,   8, 
                RXSA,   8, 
                SDAT,   16
            }

            Method (SSXB, 2, Serialized)
            {
                If (STRT ())
                {
                    Return (Zero)
                }

                Store (Zero, I2CE)
                Store (0xBF, HSTS)
                Store (Arg0, TXSA)
                Store (Arg1, HCOM)
                Store (0x48, HCON)
                If (COMP ())
                {
                    Or (HSTS, 0xFF, HSTS)
                    Return (One)
                }

                Return (Zero)
            }

            Method (SRXB, 1, Serialized)
            {
                If (STRT ())
                {
                    Return (0xFFFF)
                }

                Store (Zero, I2CE)
                Store (0xBF, HSTS)
                Store (Or (Arg0, One), TXSA)
                Store (0x44, HCON)
                If (COMP ())
                {
                    Or (HSTS, 0xFF, HSTS)
                    Return (DAT0)
                }

                Return (0xFFFF)
            }

            Method (SWRB, 3, Serialized)
            {
                If (STRT ())
                {
                    Return (Zero)
                }

                Store (Zero, I2CE)
                Store (0xBF, HSTS)
                Store (Arg0, TXSA)
                Store (Arg1, HCOM)
                Store (Arg2, DAT0)
                Store (0x48, HCON)
                If (COMP ())
                {
                    Or (HSTS, 0xFF, HSTS)
                    Return (One)
                }

                Return (Zero)
            }

            Method (SRDB, 2, Serialized)
            {
                If (STRT ())
                {
                    Return (0xFFFF)
                }

                Store (Zero, I2CE)
                Store (0xBF, HSTS)
                Store (Or (Arg0, One), TXSA)
                Store (Arg1, HCOM)
                Store (0x48, HCON)
                If (COMP ())
                {
                    Or (HSTS, 0xFF, HSTS)
                    Return (DAT0)
                }

                Return (0xFFFF)
            }

            Method (SWRW, 3, Serialized)
            {
                If (STRT ())
                {
                    Return (Zero)
                }

                Store (Zero, I2CE)
                Store (0xBF, HSTS)
                Store (Arg0, TXSA)
                Store (Arg1, HCOM)
                And (Arg2, 0xFF, DAT1)
                And (ShiftRight (Arg2, 0x08), 0xFF, DAT0)
                Store (0x4C, HCON)
                If (COMP ())
                {
                    Or (HSTS, 0xFF, HSTS)
                    Return (One)
                }

                Return (Zero)
            }

            Method (SRDW, 2, Serialized)
            {
                If (STRT ())
                {
                    Return (0xFFFF)
                }

                Store (Zero, I2CE)
                Store (0xBF, HSTS)
                Store (Or (Arg0, One), TXSA)
                Store (Arg1, HCOM)
                Store (0x4C, HCON)
                If (COMP ())
                {
                    Or (HSTS, 0xFF, HSTS)
                    Return (Or (ShiftLeft (DAT0, 0x08), DAT1))
                }

                Return (0xFFFFFFFF)
            }

            Method (SBLW, 4, Serialized)
            {
                If (STRT ())
                {
                    Return (Zero)
                }

                Store (Arg3, I2CE)
                Store (0xBF, HSTS)
                Store (Arg0, TXSA)
                Store (Arg1, HCOM)
                Store (SizeOf (Arg2), DAT0)
                Store (Zero, Local1)
                Store (DerefOf (Index (Arg2, Zero)), HBDR)
                Store (0x54, HCON)
                While (LGreater (SizeOf (Arg2), Local1))
                {
                    Store (0x0FA0, Local0)
                    While (LAnd (LNot (And (HSTS, 0x80)), Local0))
                    {
                        Decrement (Local0)
                        Stall (0x32)
                    }

                    If (LNot (Local0))
                    {
                        KILL ()
                        Return (Zero)
                    }

                    Store (0x80, HSTS)
                    Increment (Local1)
                    If (LGreater (SizeOf (Arg2), Local1))
                    {
                        Store (DerefOf (Index (Arg2, Local1)), HBDR)
                    }
                }

                If (COMP ())
                {
                    Or (HSTS, 0xFF, HSTS)
                    Return (One)
                }

                Return (Zero)
            }

            Method (SBLR, 3, Serialized)
            {
                Name (TBUF, Buffer (0x0100) {})
                If (STRT ())
                {
                    Return (Zero)
                }

                Store (Arg2, I2CE)
                Store (0xBF, HSTS)
                Store (Or (Arg0, One), TXSA)
                Store (Arg1, HCOM)
                Store (0x54, HCON)
                Store (0x0FA0, Local0)
                While (LAnd (LNot (And (HSTS, 0x80)), Local0))
                {
                    Decrement (Local0)
                    Stall (0x32)
                }

                If (LNot (Local0))
                {
                    KILL ()
                    Return (Zero)
                }

                Store (DAT0, Index (TBUF, Zero))
                Store (0x80, HSTS)
                Store (One, Local1)
                While (LLess (Local1, DerefOf (Index (TBUF, Zero))))
                {
                    Store (0x0FA0, Local0)
                    While (LAnd (LNot (And (HSTS, 0x80)), Local0))
                    {
                        Decrement (Local0)
                        Stall (0x32)
                    }

                    If (LNot (Local0))
                    {
                        KILL ()
                        Return (Zero)
                    }

                    Store (HBDR, Index (TBUF, Local1))
                    Store (0x80, HSTS)
                    Increment (Local1)
                }

                If (COMP ())
                {
                    Or (HSTS, 0xFF, HSTS)
                    Return (TBUF)
                }

                Return (Zero)
            }

            Method (STRT, 0, Serialized)
            {
                Store (0xC8, Local0)
                While (Local0)
                {
                    If (And (HSTS, 0x40))
                    {
                        Decrement (Local0)
                        Sleep (One)
                        If (LEqual (Local0, Zero))
                        {
                            Return (One)
                        }
                    }
                    Else
                    {
                        Store (Zero, Local0)
                    }
                }

                Store (0x0FA0, Local0)
                While (Local0)
                {
                    If (And (HSTS, One))
                    {
                        Decrement (Local0)
                        Stall (0x32)
                        If (LEqual (Local0, Zero))
                        {
                            KILL ()
                        }
                    }
                    Else
                    {
                        Return (Zero)
                    }
                }

                Return (One)
            }

            Method (COMP, 0, Serialized)
            {
                Store (0x0FA0, Local0)
                While (Local0)
                {
                    If (And (HSTS, 0x02))
                    {
                        Return (One)
                    }
                    Else
                    {
                        Decrement (Local0)
                        Stall (0x32)
                        If (LEqual (Local0, Zero))
                        {
                            KILL ()
                        }
                    }
                }

                Return (Zero)
            }

            Method (KILL, 0, Serialized)
            {
                Or (HCON, 0x02, HCON)
                Or (HSTS, 0xFF, HSTS)
            }
        }
    }

    Scope (_SB.PCI0)
    {
        Device (PEG0)
        {
            Name (_ADR, 0x00010000)  // _ADR: Address
            Method (_PRW, 0, NotSerialized)  // _PRW: Power Resources for Wake
            {
                Return (GPRW (0x09, 0x04))
            }

            Method (_PRT, 0, NotSerialized)  // _PRT: PCI Routing Table
            {
                If (PICM)
                {
                    Return (AR02 ())
                }

                Return (PR02 ())
            }

            Device (PEGP)
            {
                Name (_ADR, Zero)  // _ADR: Address
                Method (_PRW, 0, NotSerialized)  // _PRW: Power Resources for Wake
                {
                    Return (GPRW (0x09, 0x04))
                }
            }
        }

        Device (PEG1)
        {
            Name (_ADR, 0x00010001)  // _ADR: Address
            Method (_PRW, 0, NotSerialized)  // _PRW: Power Resources for Wake
            {
                Return (GPRW (0x09, 0x04))
            }

            Method (_PRT, 0, NotSerialized)  // _PRT: PCI Routing Table
            {
                If (PICM)
                {
                    Return (AR0A ())
                }

                Return (PR0A ())
            }
        }

        Device (PEG2)
        {
            Name (_ADR, 0x00010002)  // _ADR: Address
            Method (_PRW, 0, NotSerialized)  // _PRW: Power Resources for Wake
            {
                Return (GPRW (0x09, 0x04))
            }

            Method (_PRT, 0, NotSerialized)  // _PRT: PCI Routing Table
            {
                If (PICM)
                {
                    Return (AR0B ())
                }

                Return (PR0B ())
            }
        }

        Device (PEG3)
        {
            Name (_ADR, 0x00060000)  // _ADR: Address
            Method (_PRW, 0, NotSerialized)  // _PRW: Power Resources for Wake
            {
                Return (GPRW (0x09, 0x04))
            }

            Method (_PRT, 0, NotSerialized)  // _PRT: PCI Routing Table
            {
                If (PICM)
                {
                    Return (AR0C)
                }

                Return (PR0C)
            }
        }

        Device (B0D4)
        {
            Name (_ADR, 0x00040000)  // _ADR: Address
        }

        Device (IGPU)
        {
            Name (_ADR, 0x00020000)  // _ADR: Address
            Method (PCPC, 0, NotSerialized)
            {
            }

            Method (PAPR, 0, NotSerialized)
            {
                If (ECON)
                {
                    Return (0x64)
                }
                Else
                {
                    Return (Zero)
                }
            }

            Method (_DOS, 1, NotSerialized)  // _DOS: Disable Output Switching
            {
                Store (And (Arg0, 0x07), DSEN)
                If (LEqual (And (Arg0, 0x03), Zero))
                {
                    If (CondRefOf (HDOS))
                    {
                        HDOS ()
                    }
                }
            }

            Method (_DOD, 0, NotSerialized)  // _DOD: Display Output Devices
            {
                If (CondRefOf (IDAB))
                {
                    IDAB ()
                }
                Else
                {
                    Store (Zero, NDID)
                    If (LNotEqual (DIDL, Zero))
                    {
                        Store (SDDL (DIDL), DID1)
                    }

                    If (LNotEqual (DDL2, Zero))
                    {
                        Store (SDDL (DDL2), DID2)
                    }

                    If (LNotEqual (DDL3, Zero))
                    {
                        Store (SDDL (DDL3), DID3)
                    }

                    If (LNotEqual (DDL4, Zero))
                    {
                        Store (SDDL (DDL4), DID4)
                    }

                    If (LNotEqual (DDL5, Zero))
                    {
                        Store (SDDL (DDL5), DID5)
                    }

                    If (LNotEqual (DDL6, Zero))
                    {
                        Store (SDDL (DDL6), DID6)
                    }

                    If (LNotEqual (DDL7, Zero))
                    {
                        Store (SDDL (DDL7), DID7)
                    }

                    If (LNotEqual (DDL8, Zero))
                    {
                        Store (SDDL (DDL8), DID8)
                    }
                }

                If (LEqual (NDID, One))
                {
                    Name (TMP1, Package (0x01)
                    {
                        0xFFFFFFFF
                    })
                    Store (Or (0x00010000, DID1), Index (TMP1, Zero))
                    Return (TMP1)
                }

                If (LEqual (NDID, 0x02))
                {
                    Name (TMP2, Package (0x02)
                    {
                        0xFFFFFFFF, 
                        0xFFFFFFFF
                    })
                    Store (Or (0x00010000, DID1), Index (TMP2, Zero))
                    Store (Or (0x00010000, DID2), Index (TMP2, One))
                    Return (TMP2)
                }

                If (LEqual (NDID, 0x03))
                {
                    Name (TMP3, Package (0x03)
                    {
                        0xFFFFFFFF, 
                        0xFFFFFFFF, 
                        0xFFFFFFFF
                    })
                    Store (Or (0x00010000, DID1), Index (TMP3, Zero))
                    Store (Or (0x00010000, DID2), Index (TMP3, One))
                    Store (Or (0x00010000, DID3), Index (TMP3, 0x02))
                    Return (TMP3)
                }

                If (LEqual (NDID, 0x04))
                {
                    Name (TMP4, Package (0x04)
                    {
                        0xFFFFFFFF, 
                        0xFFFFFFFF, 
                        0xFFFFFFFF, 
                        0xFFFFFFFF
                    })
                    Store (Or (0x00010000, DID1), Index (TMP4, Zero))
                    Store (Or (0x00010000, DID2), Index (TMP4, One))
                    Store (Or (0x00010000, DID3), Index (TMP4, 0x02))
                    Store (Or (0x00010000, DID4), Index (TMP4, 0x03))
                    Return (TMP4)
                }

                If (LEqual (NDID, 0x05))
                {
                    Name (TMP5, Package (0x05)
                    {
                        0xFFFFFFFF, 
                        0xFFFFFFFF, 
                        0xFFFFFFFF, 
                        0xFFFFFFFF, 
                        0xFFFFFFFF
                    })
                    Store (Or (0x00010000, DID1), Index (TMP5, Zero))
                    Store (Or (0x00010000, DID2), Index (TMP5, One))
                    Store (Or (0x00010000, DID3), Index (TMP5, 0x02))
                    Store (Or (0x00010000, DID4), Index (TMP5, 0x03))
                    Store (Or (0x00010000, DID5), Index (TMP5, 0x04))
                    Return (TMP5)
                }

                If (LEqual (NDID, 0x06))
                {
                    Name (TMP6, Package (0x06)
                    {
                        0xFFFFFFFF, 
                        0xFFFFFFFF, 
                        0xFFFFFFFF, 
                        0xFFFFFFFF, 
                        0xFFFFFFFF, 
                        0xFFFFFFFF
                    })
                    Store (Or (0x00010000, DID1), Index (TMP6, Zero))
                    Store (Or (0x00010000, DID2), Index (TMP6, One))
                    Store (Or (0x00010000, DID3), Index (TMP6, 0x02))
                    Store (Or (0x00010000, DID4), Index (TMP6, 0x03))
                    Store (Or (0x00010000, DID5), Index (TMP6, 0x04))
                    Store (Or (0x00010000, DID6), Index (TMP6, 0x05))
                    Return (TMP6)
                }

                If (LEqual (NDID, 0x07))
                {
                    Name (TMP7, Package (0x07)
                    {
                        0xFFFFFFFF, 
                        0xFFFFFFFF, 
                        0xFFFFFFFF, 
                        0xFFFFFFFF, 
                        0xFFFFFFFF, 
                        0xFFFFFFFF, 
                        0xFFFFFFFF
                    })
                    Store (Or (0x00010000, DID1), Index (TMP7, Zero))
                    Store (Or (0x00010000, DID2), Index (TMP7, One))
                    Store (Or (0x00010000, DID3), Index (TMP7, 0x02))
                    Store (Or (0x00010000, DID4), Index (TMP7, 0x03))
                    Store (Or (0x00010000, DID5), Index (TMP7, 0x04))
                    Store (Or (0x00010000, DID6), Index (TMP7, 0x05))
                    Store (Or (0x00010000, DID7), Index (TMP7, 0x06))
                    Return (TMP7)
                }

                If (LEqual (NDID, 0x08))
                {
                    Name (TMP8, Package (0x08)
                    {
                        0xFFFFFFFF, 
                        0xFFFFFFFF, 
                        0xFFFFFFFF, 
                        0xFFFFFFFF, 
                        0xFFFFFFFF, 
                        0xFFFFFFFF, 
                        0xFFFFFFFF, 
                        0xFFFFFFFF
                    })
                    Store (Or (0x00010000, DID1), Index (TMP8, Zero))
                    Store (Or (0x00010000, DID2), Index (TMP8, One))
                    Store (Or (0x00010000, DID3), Index (TMP8, 0x02))
                    Store (Or (0x00010000, DID4), Index (TMP8, 0x03))
                    Store (Or (0x00010000, DID5), Index (TMP8, 0x04))
                    Store (Or (0x00010000, DID6), Index (TMP8, 0x05))
                    Store (Or (0x00010000, DID7), Index (TMP8, 0x06))
                    Store (Or (0x00010000, DID8), Index (TMP8, 0x07))
                    Return (TMP8)
                }

                If (LEqual (NDID, 0x09))
                {
                    If (CondRefOf (HWID))
                    {
                        Return (HWID)
                    }
                }

                Return (Package (0x01)
                {
                    0x0400
                })
            }

            Device (DD01)
            {
                Method (_ADR, 0, Serialized)  // _ADR: Address
                {
                    If (LEqual (DID1, Zero))
                    {
                        Return (One)
                    }
                    Else
                    {
                        Return (And (0xFFFF, DID1))
                    }
                }

                Method (_DCS, 0, NotSerialized)  // _DCS: Display Current Status
                {
                    Return (CDDS (DID1))
                }

                Method (_DGS, 0, NotSerialized)  // _DGS: Display Graphics State
                {
                    If (LAnd (LEqual (And (SGMD, 0x7F), One), CondRefOf (SNXD
                        )))
                    {
                        Return (NXD1)
                    }

                    Return (NDDS (DID1))
                }

                Method (_DSS, 1, NotSerialized)  // _DSS: Device Set State
                {
                    If (LEqual (And (Arg0, 0xC0000000), 0xC0000000))
                    {
                        Store (NSTE, CSTE)
                    }
                }
            }

            Device (DD02)
            {
                Method (_ADR, 0, Serialized)  // _ADR: Address
                {
                    If (LEqual (DID2, Zero))
                    {
                        Return (0x02)
                    }
                    Else
                    {
                        Return (And (0xFFFF, DID2))
                    }
                }

                Method (_DCS, 0, NotSerialized)  // _DCS: Display Current Status
                {
                    If (LEqual (LIDS, Zero))
                    {
                        Return (Zero)
                    }

                    Return (CDDS (DID2))
                }

                Method (_DGS, 0, NotSerialized)  // _DGS: Display Graphics State
                {
                    If (LAnd (LEqual (And (SGMD, 0x7F), One), CondRefOf (SNXD
                        )))
                    {
                        Return (NXD2)
                    }

                    Return (NDDS (DID2))
                }

                Method (_DSS, 1, NotSerialized)  // _DSS: Device Set State
                {
                    If (LEqual (And (Arg0, 0xC0000000), 0xC0000000))
                    {
                        Store (NSTE, CSTE)
                    }
                }

                Method (_BCL, 0, NotSerialized)  // _BCL: Brightness Control Levels
                {
                    Or (VDRV, One, VDRV)
                    If (LGreaterEqual (OSYS, 0x07D9))
                    {
                        Return (Package (0x62)
                        {
                            0x64, 
                            0x0A, 
                            0x05, 
                            0x06, 
                            0x07, 
                            0x08, 
                            0x09, 
                            0x0A, 
                            0x0B, 
                            0x0C, 
                            0x0D, 
                            0x0E, 
                            0x0F, 
                            0x10, 
                            0x11, 
                            0x12, 
                            0x13, 
                            0x14, 
                            0x15, 
                            0x16, 
                            0x17, 
                            0x18, 
                            0x19, 
                            0x1A, 
                            0x1B, 
                            0x1C, 
                            0x1D, 
                            0x1E, 
                            0x1F, 
                            0x20, 
                            0x21, 
                            0x22, 
                            0x23, 
                            0x24, 
                            0x25, 
                            0x26, 
                            0x27, 
                            0x28, 
                            0x29, 
                            0x2A, 
                            0x2B, 
                            0x2C, 
                            0x2D, 
                            0x2E, 
                            0x2F, 
                            0x30, 
                            0x31, 
                            0x32, 
                            0x33, 
                            0x34, 
                            0x35, 
                            0x36, 
                            0x37, 
                            0x38, 
                            0x39, 
                            0x3A, 
                            0x3B, 
                            0x3C, 
                            0x3D, 
                            0x3E, 
                            0x3F, 
                            0x40, 
                            0x41, 
                            0x42, 
                            0x43, 
                            0x44, 
                            0x45, 
                            0x46, 
                            0x47, 
                            0x48, 
                            0x49, 
                            0x4A, 
                            0x4B, 
                            0x4C, 
                            0x4D, 
                            0x4E, 
                            0x4F, 
                            0x50, 
                            0x51, 
                            0x52, 
                            0x53, 
                            0x54, 
                            0x55, 
                            0x56, 
                            0x57, 
                            0x58, 
                            0x59, 
                            0x5A, 
                            0x5B, 
                            0x5C, 
                            0x5D, 
                            0x5E, 
                            0x5F, 
                            0x60, 
                            0x61, 
                            0x62, 
                            0x63, 
                            0x64
                        })
                    }
                    Else
                    {
                        If (LCDT)
                        {
                            Return (Package (0x08)
                            {
                                0x64, 
                                0x07, 
                                0x0D, 
                                0x14, 
                                0x1E, 
                                0x2D, 
                                0x3C, 
                                0x50
                            })
                        }
                        Else
                        {
                            Return (Package (0x0A)
                            {
                                0x50, 
                                0x0D, 
                                0x07, 
                                0x0D, 
                                0x14, 
                                0x1E, 
                                0x2D, 
                                0x3C, 
                                0x50, 
                                0x64
                            })
                        }
                    }
                }

                Method (_BCM, 1, NotSerialized)  // _BCM: Brightness Control Method
                {
                    If (LGreaterEqual (OSYS, 0x07D9))
                    {
                        If (LAnd (LGreaterEqual (Arg0, Zero), LLessEqual (Arg0, 0x64)))
                        {
                            Store (\BRTL, Local0)
                            If (LGreater (Local0, Arg0))
                            {
                                Subtract (Local0, Arg0, Local1)
                                If (LGreaterEqual (Local1, 0x17))
                                {
                                    Store (Arg0, Local0)
                                    AINT (One, Local0)
                                }
                                Else
                                {
                                    While (LGreater (Local0, Arg0))
                                    {
                                        Sleep (0x02)
                                        Decrement (Local0)
                                        AINT (One, Local0)
                                    }
                                }
                            }
                            Else
                            {
                                If (LLess (Local0, Arg0))
                                {
                                    Subtract (Arg0, Local0, Local1)
                                    If (LGreaterEqual (Local1, 0x17))
                                    {
                                        Store (Arg0, Local0)
                                        AINT (One, Local0)
                                    }
                                    Else
                                    {
                                        While (LLess (Local0, Arg0))
                                        {
                                            Sleep (0x02)
                                            Increment (Local0)
                                            AINT (One, Local0)
                                        }
                                    }
                                }
                            }

                            Store (Local0, \BRTL)
                        }
                    }
                    Else
                    {
                        If (LAnd (LGreaterEqual (Arg0, Zero), LLessEqual (Arg0, 0x64)))
                        {
                            AINT (One, Arg0)
                            Store (Arg0, \BRTL)
                        }
                    }

                    If (PWRS)
                    {
                        And (GL02, 0xFE, GL02)
                    }
                    Else
                    {
                        If (LGreater (\BRTL, 0x0C))
                        {
                            Or (GL02, One, GL02)
                        }
                        Else
                        {
                            If (LLess (\BRTL, 0x0B))
                            {
                                And (GL02, 0xFE, GL02)
                            }
                        }
                    }
                }

                Method (_BQC, 0, NotSerialized)  // _BQC: Brightness Query Current
                {
                    Return (\BRTL)
                }
            }

            Device (DD03)
            {
                Method (_ADR, 0, Serialized)  // _ADR: Address
                {
                    If (LEqual (DID3, Zero))
                    {
                        Return (0x03)
                    }
                    Else
                    {
                        Return (And (0xFFFF, DID3))
                    }
                }

                Method (_DCS, 0, NotSerialized)  // _DCS: Display Current Status
                {
                    If (LEqual (DID3, Zero))
                    {
                        Return (0x0B)
                    }
                    Else
                    {
                        Return (CDDS (DID3))
                    }
                }

                Method (_DGS, 0, NotSerialized)  // _DGS: Display Graphics State
                {
                    If (LAnd (LEqual (And (SGMD, 0x7F), One), CondRefOf (SNXD
                        )))
                    {
                        Return (NXD3)
                    }

                    Return (NDDS (DID3))
                }

                Method (_DSS, 1, NotSerialized)  // _DSS: Device Set State
                {
                    If (LEqual (And (Arg0, 0xC0000000), 0xC0000000))
                    {
                        Store (NSTE, CSTE)
                    }
                }
            }

            Device (DD04)
            {
                Method (_ADR, 0, Serialized)  // _ADR: Address
                {
                    If (LEqual (DID4, Zero))
                    {
                        Return (0x04)
                    }
                    Else
                    {
                        Return (And (0xFFFF, DID4))
                    }
                }

                Method (_DCS, 0, NotSerialized)  // _DCS: Display Current Status
                {
                    If (LEqual (DID4, Zero))
                    {
                        Return (0x0B)
                    }
                    Else
                    {
                        Return (CDDS (DID4))
                    }
                }

                Method (_DGS, 0, NotSerialized)  // _DGS: Display Graphics State
                {
                    If (LAnd (LEqual (And (SGMD, 0x7F), One), CondRefOf (SNXD
                        )))
                    {
                        Return (NXD4)
                    }

                    Return (NDDS (DID4))
                }

                Method (_DSS, 1, NotSerialized)  // _DSS: Device Set State
                {
                    If (LEqual (And (Arg0, 0xC0000000), 0xC0000000))
                    {
                        Store (NSTE, CSTE)
                    }
                }
            }

            Device (DD05)
            {
                Method (_ADR, 0, Serialized)  // _ADR: Address
                {
                    If (LEqual (DID5, Zero))
                    {
                        Return (0x05)
                    }
                    Else
                    {
                        Return (And (0xFFFF, DID5))
                    }
                }

                Method (_DCS, 0, NotSerialized)  // _DCS: Display Current Status
                {
                    If (LEqual (DID5, Zero))
                    {
                        Return (0x0B)
                    }
                    Else
                    {
                        Return (CDDS (DID5))
                    }
                }

                Method (_DGS, 0, NotSerialized)  // _DGS: Display Graphics State
                {
                    If (LAnd (LEqual (And (SGMD, 0x7F), One), CondRefOf (SNXD
                        )))
                    {
                        Return (NXD5)
                    }

                    Return (NDDS (DID5))
                }

                Method (_DSS, 1, NotSerialized)  // _DSS: Device Set State
                {
                    If (LEqual (And (Arg0, 0xC0000000), 0xC0000000))
                    {
                        Store (NSTE, CSTE)
                    }
                }
            }

            Device (DD06)
            {
                Method (_ADR, 0, Serialized)  // _ADR: Address
                {
                    If (LEqual (DID6, Zero))
                    {
                        Return (0x06)
                    }
                    Else
                    {
                        Return (And (0xFFFF, DID6))
                    }
                }

                Method (_DCS, 0, NotSerialized)  // _DCS: Display Current Status
                {
                    If (LEqual (DID6, Zero))
                    {
                        Return (0x0B)
                    }
                    Else
                    {
                        Return (CDDS (DID6))
                    }
                }

                Method (_DGS, 0, NotSerialized)  // _DGS: Display Graphics State
                {
                    If (LAnd (LEqual (And (SGMD, 0x7F), One), CondRefOf (SNXD
                        )))
                    {
                        Return (NXD6)
                    }

                    Return (NDDS (DID6))
                }

                Method (_DSS, 1, NotSerialized)  // _DSS: Device Set State
                {
                    If (LEqual (And (Arg0, 0xC0000000), 0xC0000000))
                    {
                        Store (NSTE, CSTE)
                    }
                }
            }

            Device (DD07)
            {
                Method (_ADR, 0, Serialized)  // _ADR: Address
                {
                    If (LEqual (DID7, Zero))
                    {
                        Return (0x07)
                    }
                    Else
                    {
                        Return (And (0xFFFF, DID7))
                    }
                }

                Method (_DCS, 0, NotSerialized)  // _DCS: Display Current Status
                {
                    If (LEqual (DID7, Zero))
                    {
                        Return (0x0B)
                    }
                    Else
                    {
                        Return (CDDS (DID7))
                    }
                }

                Method (_DGS, 0, NotSerialized)  // _DGS: Display Graphics State
                {
                    If (LAnd (LEqual (And (SGMD, 0x7F), One), CondRefOf (SNXD
                        )))
                    {
                        Return (NXD7)
                    }

                    Return (NDDS (DID7))
                }

                Method (_DSS, 1, NotSerialized)  // _DSS: Device Set State
                {
                    If (LEqual (And (Arg0, 0xC0000000), 0xC0000000))
                    {
                        Store (NSTE, CSTE)
                    }
                }
            }

            Device (DD08)
            {
                Method (_ADR, 0, Serialized)  // _ADR: Address
                {
                    If (LEqual (DID8, Zero))
                    {
                        Return (0x08)
                    }
                    Else
                    {
                        Return (And (0xFFFF, DID8))
                    }
                }

                Method (_DCS, 0, NotSerialized)  // _DCS: Display Current Status
                {
                    If (LEqual (DID8, Zero))
                    {
                        Return (0x0B)
                    }
                    Else
                    {
                        Return (CDDS (DID8))
                    }
                }

                Method (_DGS, 0, NotSerialized)  // _DGS: Display Graphics State
                {
                    If (LAnd (LEqual (And (SGMD, 0x7F), One), CondRefOf (SNXD
                        )))
                    {
                        Return (NXD8)
                    }

                    Return (NDDS (DID8))
                }

                Method (_DSS, 1, NotSerialized)  // _DSS: Device Set State
                {
                    If (LEqual (And (Arg0, 0xC0000000), 0xC0000000))
                    {
                        Store (NSTE, CSTE)
                    }
                }
            }

            Method (SDDL, 1, NotSerialized)
            {
                Increment (NDID)
                Store (And (Arg0, 0x0F0F), Local0)
                Or (0x80000000, Local0, Local1)
                If (LEqual (DIDL, Local0))
                {
                    Return (Local1)
                }

                If (LEqual (DDL2, Local0))
                {
                    Return (Local1)
                }

                If (LEqual (DDL3, Local0))
                {
                    Return (Local1)
                }

                If (LEqual (DDL4, Local0))
                {
                    Return (Local1)
                }

                If (LEqual (DDL5, Local0))
                {
                    Return (Local1)
                }

                If (LEqual (DDL6, Local0))
                {
                    Return (Local1)
                }

                If (LEqual (DDL7, Local0))
                {
                    Return (Local1)
                }

                If (LEqual (DDL8, Local0))
                {
                    Return (Local1)
                }

                Return (Zero)
            }

            Method (CDDS, 1, NotSerialized)
            {
                Store (And (Arg0, 0x0F0F), Local0)
                If (LEqual (Zero, Local0))
                {
                    Return (0x1D)
                }

                If (LEqual (CADL, Local0))
                {
                    Return (0x1F)
                }

                If (LEqual (CAL2, Local0))
                {
                    Return (0x1F)
                }

                If (LEqual (CAL3, Local0))
                {
                    Return (0x1F)
                }

                If (LEqual (CAL4, Local0))
                {
                    Return (0x1F)
                }

                If (LEqual (CAL5, Local0))
                {
                    Return (0x1F)
                }

                If (LEqual (CAL6, Local0))
                {
                    Return (0x1F)
                }

                If (LEqual (CAL7, Local0))
                {
                    Return (0x1F)
                }

                If (LEqual (CAL8, Local0))
                {
                    Return (0x1F)
                }

                Return (0x1D)
            }

            Method (NDDS, 1, NotSerialized)
            {
                Store (And (Arg0, 0x0F0F), Local0)
                If (LEqual (Zero, Local0))
                {
                    Return (Zero)
                }

                If (LEqual (NADL, Local0))
                {
                    Return (One)
                }

                If (LEqual (NDL2, Local0))
                {
                    Return (One)
                }

                If (LEqual (NDL3, Local0))
                {
                    Return (One)
                }

                If (LEqual (NDL4, Local0))
                {
                    Return (One)
                }

                If (LEqual (NDL5, Local0))
                {
                    Return (One)
                }

                If (LEqual (NDL6, Local0))
                {
                    Return (One)
                }

                If (LEqual (NDL7, Local0))
                {
                    Return (One)
                }

                If (LEqual (NDL8, Local0))
                {
                    Return (One)
                }

                Return (Zero)
            }

            Scope (^^PCI0)
            {
                OperationRegion (MCHP, PCI_Config, 0x40, 0xC0)
                Field (MCHP, AnyAcc, NoLock, Preserve)
                {
                    Offset (0x60), 
                    TASM,   10, 
                    Offset (0x62)
                }
            }

            OperationRegion (IGDP, PCI_Config, 0x40, 0xC0)
            Field (IGDP, AnyAcc, NoLock, Preserve)
            {
                Offset (0x12), 
                    ,   1, 
                GIVD,   1, 
                    ,   2, 
                GUMA,   3, 
                Offset (0x14), 
                    ,   4, 
                GMFN,   1, 
                Offset (0x18), 
                Offset (0xA4), 
                ASLE,   8, 
                Offset (0xA8), 
                GSSE,   1, 
                GSSB,   14, 
                GSES,   1, 
                Offset (0xB0), 
                    ,   12, 
                CDVL,   1, 
                Offset (0xB2), 
                Offset (0xB5), 
                LBPC,   8, 
                Offset (0xBC), 
                ASLS,   32
            }

            OperationRegion (IGDM, SystemMemory, ASLB, 0x2000)
            Field (IGDM, AnyAcc, NoLock, Preserve)
            {
                SIGN,   128, 
                SIZE,   32, 
                OVER,   32, 
                SVER,   256, 
                VVER,   128, 
                GVER,   128, 
                MBOX,   32, 
                DMOD,   32, 
                Offset (0x100), 
                DRDY,   32, 
                CSTS,   32, 
                CEVT,   32, 
                Offset (0x120), 
                DIDL,   32, 
                DDL2,   32, 
                DDL3,   32, 
                DDL4,   32, 
                DDL5,   32, 
                DDL6,   32, 
                DDL7,   32, 
                DDL8,   32, 
                CPDL,   32, 
                CPL2,   32, 
                CPL3,   32, 
                CPL4,   32, 
                CPL5,   32, 
                CPL6,   32, 
                CPL7,   32, 
                CPL8,   32, 
                CADL,   32, 
                CAL2,   32, 
                CAL3,   32, 
                CAL4,   32, 
                CAL5,   32, 
                CAL6,   32, 
                CAL7,   32, 
                CAL8,   32, 
                NADL,   32, 
                NDL2,   32, 
                NDL3,   32, 
                NDL4,   32, 
                NDL5,   32, 
                NDL6,   32, 
                NDL7,   32, 
                NDL8,   32, 
                ASLP,   32, 
                TIDX,   32, 
                CHPD,   32, 
                CLID,   32, 
                CDCK,   32, 
                SXSW,   32, 
                EVTS,   32, 
                CNOT,   32, 
                NRDY,   32, 
                Offset (0x200), 
                SCIE,   1, 
                GEFC,   4, 
                GXFC,   3, 
                GESF,   8, 
                Offset (0x204), 
                PARM,   32, 
                DSLP,   32, 
                Offset (0x300), 
                ARDY,   32, 
                ASLC,   32, 
                TCHE,   32, 
                ALSI,   32, 
                BCLP,   32, 
                PFIT,   32, 
                CBLV,   32, 
                BCLM,   320, 
                CPFM,   32, 
                EPFM,   32, 
                PLUT,   592, 
                PFMB,   32, 
                CCDV,   32, 
                PCFT,   32, 
                Offset (0x400), 
                GVD1,   49152, 
                PHED,   32, 
                BDDC,   2048
            }

            Name (DBTB, Package (0x15)
            {
                Zero, 
                0x07, 
                0x38, 
                0x01C0, 
                0x0E00, 
                0x3F, 
                0x01C7, 
                0x0E07, 
                0x01F8, 
                0x0E38, 
                0x0FC0, 
                Zero, 
                Zero, 
                Zero, 
                Zero, 
                Zero, 
                0x7000, 
                0x7007, 
                0x7038, 
                0x71C0, 
                0x7E00
            })
            Name (CDCT, Package (0x05)
            {
                Package (0x02)
                {
                    0xE4, 
                    0x0140
                }, 

                Package (0x02)
                {
                    0xDE, 
                    0x014D
                }, 

                Package (0x02)
                {
                    0xDE, 
                    0x014D
                }, 

                Package (0x02)
                {
                    Zero, 
                    Zero
                }, 

                Package (0x02)
                {
                    0xDE, 
                    0x014D
                }
            })
            Name (SUCC, One)
            Name (NVLD, 0x02)
            Name (CRIT, 0x04)
            Name (NCRT, 0x06)
            Method (GSCI, 0, Serialized)
            {
                Method (GBDA, 0, Serialized)
                {
                    If (LEqual (GESF, Zero))
                    {
                        Store (0x0679, PARM)
                        Store (Zero, GESF)
                        Return (SUCC)
                    }

                    If (LEqual (GESF, One))
                    {
                        Store (0x0240, PARM)
                        Store (Zero, GESF)
                        Return (SUCC)
                    }

                    If (LEqual (GESF, 0x04))
                    {
                        And (PARM, 0xEFFF0000, PARM)
                        And (PARM, ShiftLeft (DerefOf (Index (DBTB, IBTT)), 0x10), 
                            PARM)
                        Or (IBTT, PARM, PARM)
                        Store (Zero, GESF)
                        Return (SUCC)
                    }

                    If (LEqual (GESF, 0x05))
                    {
                        Store (IPSC, PARM)
                        Or (PARM, ShiftLeft (IPAT, 0x08), PARM)
                        Add (PARM, 0x0100, PARM)
                        Or (PARM, ShiftLeft (LIDS, 0x10), PARM)
                        Add (PARM, 0x00010000, PARM)
                        Or (PARM, ShiftLeft (IBIA, 0x14), PARM)
                        Store (Zero, GESF)
                        Return (SUCC)
                    }

                    If (LEqual (GESF, 0x06))
                    {
                        Store (ITVF, PARM)
                        Or (PARM, ShiftLeft (ITVM, 0x04), PARM)
                        Store (Zero, GESF)
                        Return (SUCC)
                    }

                    If (LEqual (GESF, 0x07))
                    {
                        Store (GIVD, PARM)
                        XOr (PARM, One, PARM)
                        Or (PARM, ShiftLeft (GMFN, One), PARM)
                        Or (PARM, 0x1800, PARM)
                        Or (PARM, ShiftLeft (IDMS, 0x11), PARM)
                        Or (ShiftLeft (DerefOf (Index (DerefOf (Index (CDCT, HVCO)), CDVL
                            )), 0x15), PARM, PARM)
                        Store (One, GESF)
                        Return (SUCC)
                    }

                    If (LEqual (GESF, 0x0A))
                    {
                        Store (Zero, PARM)
                        If (ISSC)
                        {
                            Or (PARM, 0x03, PARM)
                        }

                        Store (Zero, GESF)
                        Return (SUCC)
                    }

                    If (LEqual (GESF, 0x0B))
                    {
                        Store (KSV0, PARM)
                        Store (KSV1, GESF)
                        Return (SUCC)
                    }

                    Store (Zero, GESF)
                    Return (CRIT)
                }

                Method (SBCB, 0, Serialized)
                {
                    If (LEqual (GESF, Zero))
                    {
                        Store (Zero, PARM)
                        Store (0x000F87FD, PARM)
                        Store (Zero, GESF)
                        Return (SUCC)
                    }

                    If (LEqual (GESF, One))
                    {
                        Store (Zero, GESF)
                        Store (Zero, PARM)
                        Return (SUCC)
                    }

                    If (LEqual (GESF, 0x03))
                    {
                        Store (Zero, GESF)
                        Store (Zero, PARM)
                        Return (SUCC)
                    }

                    If (LEqual (GESF, 0x04))
                    {
                        Store (Zero, GESF)
                        Store (Zero, PARM)
                        Return (SUCC)
                    }

                    If (LEqual (GESF, 0x05))
                    {
                        Store (Zero, GESF)
                        Store (Zero, PARM)
                        Return (SUCC)
                    }

                    If (LEqual (GESF, 0x06))
                    {
                        Store (And (PARM, 0x0F), ITVF)
                        Store (ShiftRight (And (PARM, 0xF0), 0x04), ITVM)
                        Store (Zero, GESF)
                        Store (Zero, PARM)
                        Return (SUCC)
                    }

                    If (LEqual (GESF, 0x07))
                    {
                        If (LEqual (PARM, Zero))
                        {
                            Store (CLID, Local0)
                            If (And (0x80000000, Local0))
                            {
                                And (CLID, 0x0F, CLID)
                                GLID (CLID)
                            }
                        }

                        Store (Zero, GESF)
                        Store (Zero, PARM)
                        Return (SUCC)
                    }

                    If (LEqual (GESF, 0x08))
                    {
                        Store (Zero, GESF)
                        Store (Zero, PARM)
                        Return (SUCC)
                    }

                    If (LEqual (GESF, 0x09))
                    {
                        And (PARM, 0xFF, IBTT)
                        Store (Zero, GESF)
                        Store (Zero, PARM)
                        Return (SUCC)
                    }

                    If (LEqual (GESF, 0x0A))
                    {
                        And (PARM, 0xFF, IPSC)
                        If (And (ShiftRight (PARM, 0x08), 0xFF))
                        {
                            And (ShiftRight (PARM, 0x08), 0xFF, IPAT)
                            Decrement (IPAT)
                        }

                        And (ShiftRight (PARM, 0x14), 0x07, IBIA)
                        Store (Zero, GESF)
                        Store (Zero, PARM)
                        Return (SUCC)
                    }

                    If (LEqual (GESF, 0x0B))
                    {
                        And (ShiftRight (PARM, One), One, IF1E)
                        If (And (PARM, 0x0001E000))
                        {
                            And (ShiftRight (PARM, 0x0D), 0x0F, IDMS)
                        }
                        Else
                        {
                            And (ShiftRight (PARM, 0x11), 0x0F, IDMS)
                        }

                        Store (Zero, GESF)
                        Store (Zero, PARM)
                        Return (SUCC)
                    }

                    If (LEqual (GESF, 0x10))
                    {
                        Store (Zero, GESF)
                        Store (Zero, PARM)
                        Return (SUCC)
                    }

                    If (LEqual (GESF, 0x11))
                    {
                        Store (ShiftLeft (LIDS, 0x08), PARM)
                        Add (PARM, 0x0100, PARM)
                        Store (Zero, GESF)
                        Return (SUCC)
                    }

                    If (LEqual (GESF, 0x12))
                    {
                        If (And (PARM, One))
                        {
                            If (LEqual (ShiftRight (PARM, One), One))
                            {
                                Store (One, ISSC)
                            }
                            Else
                            {
                                Store (Zero, GESF)
                                Return (CRIT)
                            }
                        }
                        Else
                        {
                            Store (Zero, ISSC)
                        }

                        Store (Zero, GESF)
                        Store (Zero, PARM)
                        Return (SUCC)
                    }

                    If (LEqual (GESF, 0x13))
                    {
                        Store (Zero, GESF)
                        Store (Zero, PARM)
                        Return (SUCC)
                    }

                    If (LEqual (GESF, 0x14))
                    {
                        And (PARM, 0x0F, PAVP)
                        Store (Zero, GESF)
                        Store (Zero, PARM)
                        Return (SUCC)
                    }

                    Store (Zero, GESF)
                    Return (SUCC)
                }

                If (LEqual (GEFC, 0x04))
                {
                    Store (GBDA (), GXFC)
                }

                If (LEqual (GEFC, 0x06))
                {
                    Store (SBCB (), GXFC)
                }

                Store (Zero, GEFC)
                Store (One, SCIS)
                Store (Zero, GSSE)
                Store (Zero, SCIE)
                Return (Zero)
            }

            Method (PDRD, 0, NotSerialized)
            {
                If (LNot (DRDY))
                {
                    Sleep (ASLP)
                }

                Return (LNot (DRDY))
            }

            Method (PSTS, 0, NotSerialized)
            {
                If (LGreater (CSTS, 0x02))
                {
                    Sleep (ASLP)
                }

                Return (LEqual (CSTS, 0x03))
            }

            Method (GNOT, 2, NotSerialized)
            {
                If (PDRD ())
                {
                    Return (One)
                }

                Store (Arg0, CEVT)
                Store (0x03, CSTS)
                If (LAnd (LEqual (CHPD, Zero), LEqual (Arg1, Zero)))
                {
                    If (LOr (LGreater (OSYS, 0x07D0), LLess (OSYS, 0x07D6)))
                    {
                        Notify (PCI0, Arg1)
                    }
                    Else
                    {
                        Notify (IGPU, Arg1)
                    }
                }

                If (CondRefOf (HNOT))
                {
                    HNOT (Arg0)
                }
                Else
                {
                    Notify (IGPU, 0x80)
                }

                Return (Zero)
            }

            Method (GHDS, 1, NotSerialized)
            {
                Store (Arg0, TIDX)
                Return (GNOT (One, Zero))
            }

            Method (GLID, 1, NotSerialized)
            {
                If (LEqual (Arg0, One))
                {
                    Store (0x03, CLID)
                }
                Else
                {
                    Store (Arg0, CLID)
                }

                Return (GNOT (0x02, Zero))
            }

            Method (GDCK, 1, NotSerialized)
            {
                Store (Arg0, CDCK)
                Return (GNOT (0x04, Zero))
            }

            Method (PARD, 0, NotSerialized)
            {
                If (LNot (ARDY))
                {
                    Sleep (ASLP)
                }

                Return (LNot (ARDY))
            }

            Method (AINT, 2, NotSerialized)
            {
                If (LNot (And (TCHE, ShiftLeft (One, Arg0))))
                {
                    Return (One)
                }

                If (PARD ())
                {
                    Return (One)
                }

                If (LEqual (Arg0, 0x02))
                {
                    If (CPFM)
                    {
                        And (CPFM, 0x0F, Local0)
                        And (EPFM, 0x0F, Local1)
                        If (LEqual (Local0, One))
                        {
                            If (And (Local1, 0x06))
                            {
                                Store (0x06, PFIT)
                            }
                            Else
                            {
                                If (And (Local1, 0x08))
                                {
                                    Store (0x08, PFIT)
                                }
                                Else
                                {
                                    Store (One, PFIT)
                                }
                            }
                        }

                        If (LEqual (Local0, 0x06))
                        {
                            If (And (Local1, 0x08))
                            {
                                Store (0x08, PFIT)
                            }
                            Else
                            {
                                If (And (Local1, One))
                                {
                                    Store (One, PFIT)
                                }
                                Else
                                {
                                    Store (0x06, PFIT)
                                }
                            }
                        }

                        If (LEqual (Local0, 0x08))
                        {
                            If (And (Local1, One))
                            {
                                Store (One, PFIT)
                            }
                            Else
                            {
                                If (And (Local1, 0x06))
                                {
                                    Store (0x06, PFIT)
                                }
                                Else
                                {
                                    Store (0x08, PFIT)
                                }
                            }
                        }
                    }
                    Else
                    {
                        XOr (PFIT, 0x07, PFIT)
                    }

                    Or (PFIT, 0x80000000, PFIT)
                    Store (0x04, ASLC)
                }
                Else
                {
                    If (LEqual (Arg0, One))
                    {
                        Store (Divide (Multiply (Arg1, 0xFF), 0x64, ), BCLP)
                        Or (BCLP, 0x80000000, BCLP)
                        Store (0x02, ASLC)
                    }
                    Else
                    {
                        If (LEqual (Arg0, Zero))
                        {
                            Store (Arg1, ALSI)
                            Store (One, ASLC)
                        }
                        Else
                        {
                            Return (One)
                        }
                    }
                }

                Store (One, ASLE)
                Return (Zero)
            }

            Method (SCIP, 0, NotSerialized)
            {
                If (LNotEqual (OVER, Zero))
                {
                    Return (LNot (GSMI))
                }

                Return (Zero)
            }

            Device (^^MEM2)
            {
                Name (_HID, EisaId ("PNP0C01"))  // _HID: Hardware ID
                Name (_UID, 0x02)  // _UID: Unique ID
                Name (CRS1, ResourceTemplate ()
                {
                    Memory32Fixed (ReadWrite,
                        0x20000000,         // Address Base
                        0x00200000,         // Address Length
                        )
                    Memory32Fixed (ReadWrite,
                        0x40000000,         // Address Base
                        0x00200000,         // Address Length
                        )
                })
                Name (CRS2, ResourceTemplate ()
                {
                    Memory32Fixed (ReadWrite,
                        0x20000000,         // Address Base
                        0x00200000,         // Address Length
                        )
                    Memory32Fixed (ReadWrite,
                        0x40004000,         // Address Base
                        0x00001000,         // Address Length
                        )
                })
                Method (_STA, 0, NotSerialized)  // _STA: Status
                {
                    If (IGDS)
                    {
                        If (LOr (LEqual (And (PNHM, 0x0FFF0FF0), 0x000206A0), LEqual (And (
                            PNHM, 0x0FFF0FFF), 0x000306A0)))
                        {
                            Return (0x0F)
                        }
                    }

                    Return (Zero)
                }

                Method (_CRS, 0, NotSerialized)  // _CRS: Current Resource Settings
                {
                    If (LOr (LEqual (And (PNHM, 0x0FFF0FF0), 0x000206A0), LEqual (And (
                        PNHM, 0x0FFF0FFF), 0x000306A0)))
                    {
                        Return (CRS1)
                    }

                    Return (CRS2)
                }
            }
        }
    }

    Scope (_SB)
    {
        OperationRegion (SNVS, SystemMemory, 0xDAF9EF18, 0x91)
        Field (SNVS, AnyAcc, NoLock, Preserve)
        {
            SECI,   8, 
            DB00,   8, 
            DW00,   16, 
            OSYS,   16, 
            Offset (0x20), 
            Offset (0x40), 
            BFCC,   16, 
            Offset (0x50), 
            PVFN,   8, 
            IGDS,   8, 
            TLST,   8, 
            CADL,   8, 
            PADL,   8, 
            CSTE,   16, 
            NSTE,   16, 
            SSTE,   16, 
            NDID,   8, 
            BRTL,   8, 
            LCDT,   8, 
            VDRV,   8, 
            Offset (0x60), 
            PSVT,   8, 
            TC1V,   8, 
            TC2V,   8, 
            TSPV,   8, 
            CRTT,   8, 
            ACTT,   8, 
            Offset (0x70), 
            MPEN,   8, 
            PPCS,   8, 
            PPCM,   8, 
            PCP0,   8, 
            PCP1,   8, 
            GSSR,   8, 
            DIAG,   8, 
            TZON,   8, 
            NIST,   8, 
            RIST,   8, 
            RCST,   8, 
            CCST,   8, 
            RCNT,   8, 
            C3SU,   8, 
            CTUR,   8, 
            Offset (0x80), 
            DCKS,   8, 
            PDKS,   8, 
            SMCP,   8, 
            N207,   8, 
            COMA,   8, 
            N217,   8, 
            COMB,   8, 
            RTYP,   8, 
            KBLL,   8, 
            HBAT,   8, 
            TPAD,   8, 
            KBST,   8, 
            KBTO,   8, 
            NVGF,   8, 
            FFBF,   8, 
            FFBT,   16
        }

        Mutex (MSEC, 0x00)
        OperationRegion (SECT, SystemIO, 0x5000, 0x04)
        Field (SECT, ByteAcc, NoLock, Preserve)
        {
            TRPS,   8
        }

        Method (SECS, 1, Serialized)
        {
            Acquire (MSEC, 0xFFFF)
            Store (Arg0, SECI)
            Store (Zero, TRPS)
            Release (MSEC)
        }

        Method (SECB, 2, Serialized)
        {
            Acquire (MSEC, 0xFFFF)
            Store (Arg0, SECI)
            Store (Arg1, DB00)
            Store (Zero, TRPS)
            Store (DB00, Local0)
            Release (MSEC)
            Return (Local0)
        }

        Method (SECW, 3, Serialized)
        {
            Acquire (MSEC, 0xFFFF)
            Store (Arg0, SECI)
            Store (Arg1, DB00)
            Store (Arg2, DW00)
            Store (Zero, TRPS)
            Store (DW00, Local1)
            Release (MSEC)
            Return (Local1)
        }

        Method (STRP, 2, Serialized)
        {
            Acquire (MSEC, 0xFFFF)
            Store (Arg0, SECI)
            Store (Arg1, PVFN)
            Store (Zero, TRPS)
            Release (MSEC)
            Return (SECI)
        }
    }

    OperationRegion (SAWB, SystemMemory, 0xDAF7BDC0, 0x10)
    Field (SAWB, AnyAcc, Lock, Preserve)
    {
        MFUN,   16, 
        SFUN,   16, 
        COMF,   8, 
        PAR0,   8, 
        PAR1,   8, 
        PAR2,   8, 
        PAR3,   8, 
        PAR4,   8, 
        PAR5,   8, 
        PAR6,   8, 
        PAR7,   8, 
        PAR8,   8, 
        PAR9,   8, 
        PARX,   8
    }

    Name (AWSM, 0xDD)
    Mutex (MTEX, 0x00)
    Method (SAWS, 0, NotSerialized)
    {
        Acquire (MTEX, 0xFFFF)
        Store (AWSM, \_SB.SMIT)
        Release (MTEX)
    }

    Scope (_SB.PCI0)
    {
        Device (AMW0)
        {
            Name (_HID, "PNP0C14")  // _HID: Hardware ID
            Name (_UID, Zero)  // _UID: Unique ID
            Name (_WDG, Buffer (0x28)
            {
                /* 0000 */   0xBA, 0x47, 0x6C, 0xC1, 0xE3, 0x50, 0x4A, 0x44,
                /* 0008 */   0xAF, 0x3A, 0xB1, 0xC3, 0x48, 0x38, 0x00, 0x00,
                /* 0010 */   0x30, 0x30, 0x01, 0x01, 0xBA, 0x47, 0x6C, 0xC1,
                /* 0018 */   0xE3, 0x50, 0x4A, 0x44, 0xAF, 0x3A, 0xB1, 0xC3,
                /* 0020 */   0x48, 0x38, 0x00, 0x01, 0x30, 0x30, 0x01, 0x02
            })
            Method (WQ00, 1, NotSerialized)
            {
                Return (0x10)
            }

            Method (WM00, 3, NotSerialized)
            {
                Store (Arg2, Local0)
                CreateWordField (Local0, Zero, MNFU)
                CreateWordField (Local0, 0x02, SBFU)
                CreateByteField (Local0, 0x04, CFLG)
                CreateByteField (Local0, 0x05, CDB0)
                CreateByteField (Local0, 0x06, CDB1)
                CreateByteField (Local0, 0x07, CDB2)
                CreateByteField (Local0, 0x08, CDB3)
                CreateByteField (Local0, 0x09, CDB4)
                CreateByteField (Local0, 0x0A, CDB5)
                CreateByteField (Local0, 0x0B, CDB6)
                CreateByteField (Local0, 0x0C, CDB7)
                CreateByteField (Local0, 0x0D, CDB8)
                CreateByteField (Local0, 0x0E, CDB9)
                Store (CDB0, PAR0)
                Store (CDB1, PAR1)
                Store (CDB2, PAR2)
                Store (CDB3, PAR3)
                Store (CDB4, PAR4)
                Store (CDB5, PAR5)
                Store (CDB6, PAR6)
                Store (CDB7, PAR7)
                Store (CDB8, PAR8)
                Store (CDB9, PAR9)
                Store (MNFU, MFUN)
                Store (SBFU, SFUN)
                SAWS ()
                Store (PAR0, CDB0)
                Store (PAR1, CDB1)
                Store (PAR2, CDB2)
                Store (PAR3, CDB3)
                Store (PAR4, CDB4)
                Store (PAR5, CDB5)
                Store (PAR6, CDB6)
                Store (PAR7, CDB7)
                Store (PAR8, CDB8)
                Store (PAR9, CDB9)
                Store (COMF, CFLG)
                Return (Local0)
            }
        }
    }

    Name (_S0, Package (0x04)  // _S0_: S0 System State
    {
        Zero, 
        Zero, 
        Zero, 
        Zero
    })
    If (SS3)
    {
        Name (_S3, Package (0x04)  // _S3_: S3 System State
        {
            0x05, 
            Zero, 
            Zero, 
            Zero
        })
    }

    If (LOr (LEqual (IFFS, Zero), LEqual (OSYS, 0x07DC)))
    {
        If (SS4)
        {
            Name (_S4, Package (0x04)  // _S4_: S4 System State
            {
                0x06, 
                Zero, 
                Zero, 
                Zero
            })
        }
    }

    Name (_S5, Package (0x04)  // _S5_: S5 System State
    {
        0x07, 
        Zero, 
        Zero, 
        Zero
    })
    Method (PTS, 1, NotSerialized)
    {
        If (Arg0) {}
    }

    Method (WAK, 1, NotSerialized)
    {
    }

    Method (B1B4, 4, NotSerialized)
    {
        Store (Arg3, Local0)
        Or (Arg2, ShiftLeft (Local0, 0x08), Local0)
        Or (Arg1, ShiftLeft (Local0, 0x08), Local0)
        Or (Arg0, ShiftLeft (Local0, 0x08), Local0)
        Return (Local0)
    }

    Method (B1B2, 2, NotSerialized)
    {
        Return (Or (Arg0, ShiftLeft (Arg1, 0x08)))
    }
}

