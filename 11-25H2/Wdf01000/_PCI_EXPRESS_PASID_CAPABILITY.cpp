struct _PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER// Size=0x4 (Id=3876)
{
    unsigned short CapabilityID;// Offset=0x0 Size=0x2
    struct // Size=0x2 (Id=0)
    {
        unsigned short Version:4;// Offset=0x2 Size=0x2 BitOffset=0x0 BitSize=0x4
        unsigned short Next:12;// Offset=0x2 Size=0x2 BitOffset=0x4 BitSize=0xc
    };
};

union _PCI_EXPRESS_PASID_CAPABILITY_REGISTER// Size=0x2 (Id=2854)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short Rsvd:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short ExecutePermissionSupported:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short PrivilegedModeSupported:1;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0x1
        unsigned short Rsvd2:5;// Offset=0x0 Size=0x2 BitOffset=0x3 BitSize=0x5
        unsigned short MaxPASIDWidth:5;// Offset=0x0 Size=0x2 BitOffset=0x8 BitSize=0x5
        unsigned short Rsvd3:3;// Offset=0x0 Size=0x2 BitOffset=0xd BitSize=0x3
    };
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};

union _PCI_EXPRESS_PASID_CONTROL_REGISTER// Size=0x2 (Id=1270)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short PASIDEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short ExecutePermissionEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short PrivilegedModeEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0x1
        unsigned short Rsvd:13;// Offset=0x0 Size=0x2 BitOffset=0x3 BitSize=0xd
    };
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};

struct _PCI_EXPRESS_PASID_CAPABILITY// Size=0x8 (Id=3587)
{
    struct _PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;// Offset=0x0 Size=0x4
    union _PCI_EXPRESS_PASID_CAPABILITY_REGISTER Capability;// Offset=0x4 Size=0x2
    union _PCI_EXPRESS_PASID_CONTROL_REGISTER Control;// Offset=0x6 Size=0x2
};
