struct _PCI_AGP_CONTROL// Size=0x4 (Id=3656)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Rsvd1:7;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x7
        unsigned long GTLB_Enable:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long AP_Enable:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long CAL_Disable:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long Rsvd2:22;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x16
    };
};
