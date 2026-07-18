struct _PCI_AGP_ISOCH_STATUS// Size=0x4 (Id=3289)
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

struct _PCI_AGP_APERTURE_PAGE_SIZE// Size=0x2 (Id=843)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short PageSizeMask:11;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0xb
        unsigned short Rsvd1:1;// Offset=0x0 Size=0x2 BitOffset=0xb BitSize=0x1
        unsigned short PageSizeSelect:4;// Offset=0x0 Size=0x2 BitOffset=0xc BitSize=0x4
    };
};

struct _PCI_AGP_ISOCH_COMMAND// Size=0x2 (Id=3219)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short Rsvd1:6;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x6
        unsigned short Isoch_Y:2;// Offset=0x0 Size=0x2 BitOffset=0x6 BitSize=0x2
        unsigned short Isoch_N:8;// Offset=0x0 Size=0x2 BitOffset=0x8 BitSize=0x8
    };
};

struct PCI_AGP_EXTENDED_CAPABILITY// Size=0x18 (Id=3917)
{
    struct _PCI_AGP_ISOCH_STATUS IsochStatus;// Offset=0x0 Size=0x4
    struct _PCI_AGP_CONTROL AgpControl;// Offset=0x4 Size=0x4
    unsigned short ApertureSize;// Offset=0x8 Size=0x2
    struct _PCI_AGP_APERTURE_PAGE_SIZE AperturePageSize;// Offset=0xa Size=0x2
    unsigned long GartLow;// Offset=0xc Size=0x4
    unsigned long GartHigh;// Offset=0x10 Size=0x4
    struct _PCI_AGP_ISOCH_COMMAND IsochCommand;// Offset=0x14 Size=0x2
};
