struct _PCI_AGP_ISOCH_STATUS// Size=0x4 (Id=3158)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long ErrorCode:2;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x2
        unsigned long Rsvd1:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long Isoch_L:3;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x3
        unsigned long Isoch_Y:2;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x2
        unsigned long Isoch_N:8;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x8
        unsigned long Rsvd2:16;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x10
    };
};
