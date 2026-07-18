struct _PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER// Size=0x4 (Id=1727)
{
    unsigned short CapabilityID;// Offset=0x0 Size=0x2
    struct // Size=0x2 (Id=0)
    {
        unsigned short Version:4;// Offset=0x2 Size=0x2 BitOffset=0x0 BitSize=0x4
        unsigned short Next:12;// Offset=0x2 Size=0x2 BitOffset=0x4 BitSize=0xc
    };
};

struct _PCI_EXPRESS_ATS_CAPABILITY_REGISTER// Size=0x2 (Id=2873)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short InvalidateQueueDepth:5;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x5
        unsigned short PageAlignedRequest:1;// Offset=0x0 Size=0x2 BitOffset=0x5 BitSize=0x1
        unsigned short GlobalInvalidateSupported:1;// Offset=0x0 Size=0x2 BitOffset=0x6 BitSize=0x1
        unsigned short Reserved:9;// Offset=0x0 Size=0x2 BitOffset=0x7 BitSize=0x9
    };
};

struct _PCI_EXPRESS_ATS_CONTROL_REGISTER// Size=0x2 (Id=2906)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short SmallestTransactionUnit:5;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x5
        unsigned short Reserved:10;// Offset=0x0 Size=0x2 BitOffset=0x5 BitSize=0xa
        unsigned short Enable:1;// Offset=0x0 Size=0x2 BitOffset=0xf BitSize=0x1
    };
};

struct _PCI_EXPRESS_ATS_CAPABILITY// Size=0x8 (Id=1812)
{
    struct _PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;// Offset=0x0 Size=0x4
    struct _PCI_EXPRESS_ATS_CAPABILITY_REGISTER Capability;// Offset=0x4 Size=0x2
    struct _PCI_EXPRESS_ATS_CONTROL_REGISTER Control;// Offset=0x6 Size=0x2
};
