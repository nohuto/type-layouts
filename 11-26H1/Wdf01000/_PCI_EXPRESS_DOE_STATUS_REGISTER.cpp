union _PCI_EXPRESS_DOE_STATUS_REGISTER// Size=0x4 (Id=1016)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long DoeBusy:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long DoeInterruptStatus:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long DoeError:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long AsyncStatus:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long AtAttention:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long Rsvd:26;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1a
        unsigned long DataObjectReady:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};
