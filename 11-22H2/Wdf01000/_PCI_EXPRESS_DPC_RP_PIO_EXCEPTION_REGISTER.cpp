union _PCI_EXPRESS_DPC_RP_PIO_EXCEPTION_REGISTER// Size=0x4 (Id=2000)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long CfgURCpl:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long CfgCACpl:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long CfgCTO:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long Reserved1:5;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x5
        unsigned long IoURCpl:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long IoCACpl:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long IoCTO:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long Reserved2:5;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x5
        unsigned long MemURCpl:1;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned long MemCACpl:1;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x1
        unsigned long MemCTO:1;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x1
        unsigned long Reserved3:13;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0xd
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};
