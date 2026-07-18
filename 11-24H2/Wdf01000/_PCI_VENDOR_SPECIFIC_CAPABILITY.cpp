struct _PCI_CAPABILITIES_HEADER// Size=0x2 (Id=3810)
{
    unsigned char CapabilityID;// Offset=0x0 Size=0x1
    unsigned char Next;// Offset=0x1 Size=0x1
};

struct _PCI_VENDOR_SPECIFIC_CAPABILITY// Size=0x4 (Id=3789)
{
    struct _PCI_CAPABILITIES_HEADER Header;// Offset=0x0 Size=0x2
    unsigned char VscLength;// Offset=0x2 Size=0x1
    unsigned char VendorSpecific;// Offset=0x3 Size=0x1
};
