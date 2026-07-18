struct _PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER// Size=0x4 (Id=3457)
{
    unsigned short CapabilityID;// Offset=0x0 Size=0x2
    struct // Size=0x2 (Id=0)
    {
        unsigned short Version:4;// Offset=0x2 Size=0x2 BitOffset=0x0 BitSize=0x4
        unsigned short Next:12;// Offset=0x2 Size=0x2 BitOffset=0x4 BitSize=0xc
    };
};

struct _PCI_EXPRESS_LINK_CONTROL3// Size=0x4 (Id=2799)
{
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long PerformEq:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long LinkEqIntEn:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long Reserved:30;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1e
        };
        unsigned long AsULONG;// Offset=0x0 Size=0x4
    };
};

struct _PCI_EXPRESS_LANE_ERROR_STATUS// Size=0x4 (Id=1688)
{
    unsigned long LaneBitmap;// Offset=0x0 Size=0x4
};

struct _PCI_EXPRESS_SECONDARY_CAPABILITY// Size=0xc (Id=1725)
{
    struct _PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;// Offset=0x0 Size=0x4
    struct _PCI_EXPRESS_LINK_CONTROL3 LinkControl3;// Offset=0x4 Size=0x4
    struct _PCI_EXPRESS_LANE_ERROR_STATUS LaneErrorStatus;// Offset=0x8 Size=0x4
};
