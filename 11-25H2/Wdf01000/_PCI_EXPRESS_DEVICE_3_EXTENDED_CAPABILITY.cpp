struct _PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER// Size=0x4 (Id=3876)
{
    unsigned short CapabilityID;// Offset=0x0 Size=0x2
    struct // Size=0x2 (Id=0)
    {
        unsigned short Version:4;// Offset=0x2 Size=0x2 BitOffset=0x0 BitSize=0x4
        unsigned short Next:12;// Offset=0x2 Size=0x2 BitOffset=0x4 BitSize=0xc
    };
};

union _PCI_EXPRESS_DEVICE_CAPABILITIES_3_REGISTER// Size=0x4 (Id=803)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long DmwrRequestRoutingSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Rsvd:31;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1f
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

union _PCI_EXPRESS_DEVICE_CONTROL_3_REGISTER// Size=0x4 (Id=2976)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long DmwrRequesterEnable:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Rsvd:31;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1f
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

struct _PCI_EXPRESS_DEVICE_3_EXTENDED_CAPABILITY// Size=0xc (Id=357)
{
    struct _PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;// Offset=0x0 Size=0x4
    union _PCI_EXPRESS_DEVICE_CAPABILITIES_3_REGISTER Capability;// Offset=0x4 Size=0x4
    union _PCI_EXPRESS_DEVICE_CONTROL_3_REGISTER Control;// Offset=0x8 Size=0x4
};
