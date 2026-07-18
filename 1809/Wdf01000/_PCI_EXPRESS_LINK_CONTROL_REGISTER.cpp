union _PCI_EXPRESS_LINK_CONTROL_REGISTER// Size=0x2 (Id=4352)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short ActiveStatePMControl:2;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x2
        unsigned short Rsvd1:1;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0x1
        unsigned short ReadCompletionBoundary:1;// Offset=0x0 Size=0x2 BitOffset=0x3 BitSize=0x1
        unsigned short LinkDisable:1;// Offset=0x0 Size=0x2 BitOffset=0x4 BitSize=0x1
        unsigned short RetrainLink:1;// Offset=0x0 Size=0x2 BitOffset=0x5 BitSize=0x1
        unsigned short CommonClockConfig:1;// Offset=0x0 Size=0x2 BitOffset=0x6 BitSize=0x1
        unsigned short ExtendedSynch:1;// Offset=0x0 Size=0x2 BitOffset=0x7 BitSize=0x1
        unsigned short EnableClockPowerManagement:1;// Offset=0x0 Size=0x2 BitOffset=0x8 BitSize=0x1
        unsigned short Rsvd2:7;// Offset=0x0 Size=0x2 BitOffset=0x9 BitSize=0x7
    };
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};
