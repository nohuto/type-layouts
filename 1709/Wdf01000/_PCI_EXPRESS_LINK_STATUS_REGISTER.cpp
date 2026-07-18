union _PCI_EXPRESS_LINK_STATUS_REGISTER// Size=0x2 (Id=3048)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short LinkSpeed:4;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x4
        unsigned short LinkWidth:6;// Offset=0x0 Size=0x2 BitOffset=0x4 BitSize=0x6
        unsigned short Undefined:1;// Offset=0x0 Size=0x2 BitOffset=0xa BitSize=0x1
        unsigned short LinkTraining:1;// Offset=0x0 Size=0x2 BitOffset=0xb BitSize=0x1
        unsigned short SlotClockConfig:1;// Offset=0x0 Size=0x2 BitOffset=0xc BitSize=0x1
        unsigned short DataLinkLayerActive:1;// Offset=0x0 Size=0x2 BitOffset=0xd BitSize=0x1
        unsigned short Rsvd:2;// Offset=0x0 Size=0x2 BitOffset=0xe BitSize=0x2
    };
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};
