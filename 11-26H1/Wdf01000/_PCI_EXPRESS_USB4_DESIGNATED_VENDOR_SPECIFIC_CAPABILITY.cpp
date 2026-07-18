struct _PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER// Size=0x4 (Id=3996)
{
    unsigned short CapabilityID;// Offset=0x0 Size=0x2
    struct // Size=0x2 (Id=0)
    {
        unsigned short Version:4;// Offset=0x2 Size=0x2 BitOffset=0x0 BitSize=0x4
        unsigned short Next:12;// Offset=0x2 Size=0x2 BitOffset=0x4 BitSize=0xc
    };
};

union _PCI_EXPRESS_DESIGNATED_VENDOR_SPECIFIC_HEADER_1// Size=0x4 (Id=2230)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long DvsecVendorId:16;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x10
        unsigned long DvsecVersion:4;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x4
        unsigned long DvsecLength:12;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0xc
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

union _PCI_EXPRESS_DESIGNATED_VENDOR_SPECIFIC_HEADER_2// Size=0x2 (Id=3822)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short DvsecId:16;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x10
    };
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};

union _PCI_EXPRESS_USB4_DESIGNATED_VENDOR_SPECIFIC_HEADER// Size=0x2 (Id=4103)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short PortType:3;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x3
        unsigned short Reserved:13;// Offset=0x0 Size=0x2 BitOffset=0x3 BitSize=0xd
    };
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};

union _PCI_EXPRESS_USB4_DESIGNATED_VENDOR_SPECIFIC_PORT_ATTRIBUTES// Size=0x8 (Id=3551)
{
    union // Size=0x8 (Id=0)
    {
        struct _PCI_EXPRESS_USB4_DESIGNATED_VENDOR_SPECIFIC_PORT_ATTRIBUTES::_unnamed_3977::<unnamed-type-type0> type0;// Offset=0x0 Size=0x8
        struct _PCI_EXPRESS_USB4_DESIGNATED_VENDOR_SPECIFIC_PORT_ATTRIBUTES::_unnamed_3976::<unnamed-type-type1> type1;// Offset=0x0 Size=0x8
        struct _PCI_EXPRESS_USB4_DESIGNATED_VENDOR_SPECIFIC_PORT_ATTRIBUTES::_unnamed_3975::<unnamed-type-type2> type2;// Offset=0x0 Size=0x4
        unsigned long AsULONG;// Offset=0x0 Size=0x4
    };
};

struct _PCI_EXPRESS_USB4_DESIGNATED_VENDOR_SPECIFIC_CAPABILITY// Size=0x14 (Id=3002)
{
    struct _PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;// Offset=0x0 Size=0x4
    union _PCI_EXPRESS_DESIGNATED_VENDOR_SPECIFIC_HEADER_1 DvsecHeader1;// Offset=0x4 Size=0x4
    union _PCI_EXPRESS_DESIGNATED_VENDOR_SPECIFIC_HEADER_2 DvsecHeader2;// Offset=0x8 Size=0x2
    union _PCI_EXPRESS_USB4_DESIGNATED_VENDOR_SPECIFIC_HEADER DvsecHeader3;// Offset=0xa Size=0x2
    union _PCI_EXPRESS_USB4_DESIGNATED_VENDOR_SPECIFIC_PORT_ATTRIBUTES PortSpecificAttributes;// Offset=0xc Size=0x8
};
