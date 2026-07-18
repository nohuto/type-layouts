union _PCI_EXPRESS_TPH_REQUESTER_CONTROL_REGISTER// Size=0x4 (Id=2924)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long StModeSelect:3;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x3
        unsigned long Rsvd:5;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x5
        unsigned long TphRequesterEnable:2;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x2
        unsigned long Rsvd2:22;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x16
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};
