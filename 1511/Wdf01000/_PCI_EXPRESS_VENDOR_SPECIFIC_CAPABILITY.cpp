struct _PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER// Size=0x4 (Id=1754)
{
    unsigned short CapabilityID;// Offset=0x0 Size=0x2
    struct // Size=0x2 (Id=0)
    {
        unsigned short Version:4;// Offset=0x2 Size=0x2 BitOffset=0x0 BitSize=0x4
        unsigned short Next:12;// Offset=0x2 Size=0x2 BitOffset=0x4 BitSize=0xc
    };
};

struct _PCI_EXPRESS_VENDOR_SPECIFIC_CAPABILITY// Size=0x8 (Id=1795)
{
    struct _PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;// Offset=0x0 Size=0x4
    unsigned short VsecId;// Offset=0x4 Size=0x2
    struct // Size=0x2 (Id=0)
    {
        unsigned short VsecRev:4;// Offset=0x6 Size=0x2 BitOffset=0x0 BitSize=0x4
        unsigned short VsecLength:12;// Offset=0x6 Size=0x2 BitOffset=0x4 BitSize=0xc
    };
};
