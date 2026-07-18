struct _PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER// Size=0x4 (Id=3876)
{
    unsigned short CapabilityID;// Offset=0x0 Size=0x2
    struct // Size=0x2 (Id=0)
    {
        unsigned short Version:4;// Offset=0x2 Size=0x2 BitOffset=0x0 BitSize=0x4
        unsigned short Next:12;// Offset=0x2 Size=0x2 BitOffset=0x4 BitSize=0xc
    };
};

union _PCI_EXPRESS_DESIGNATED_VENDOR_SPECIFIC_HEADER_1// Size=0x4 (Id=2206)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long DvsecVendorId:16;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x10
        unsigned long DvsecVersion:4;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x4
        unsigned long DvsecLength:12;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0xc
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

union _PCI_EXPRESS_DESIGNATED_VENDOR_SPECIFIC_HEADER_2// Size=0x2 (Id=3710)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short DvsecId:16;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x10
    };
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};

struct _PCI_EXPRESS_DESIGNATED_VENDOR_SPECIFIC_CAPABILITY// Size=0xc (Id=3453)
{
    struct _PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;// Offset=0x0 Size=0x4
    union _PCI_EXPRESS_DESIGNATED_VENDOR_SPECIFIC_HEADER_1 DvsecHeader1;// Offset=0x4 Size=0x4
    union _PCI_EXPRESS_DESIGNATED_VENDOR_SPECIFIC_HEADER_2 DvsecHeader2;// Offset=0x8 Size=0x2
    unsigned short DvsecRegisters[1];// Offset=0xa Size=0x2
};
