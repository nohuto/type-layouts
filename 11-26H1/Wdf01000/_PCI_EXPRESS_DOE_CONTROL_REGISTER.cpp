union _PCI_EXPRESS_DOE_CONTROL_REGISTER// Size=0x4 (Id=3006)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long DoeAbort:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long DoeInterruptEnable:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long AttentionNotNeeded:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long AsyncEnable:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long Rsvd:27;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1b
        unsigned long DoeGo:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};
