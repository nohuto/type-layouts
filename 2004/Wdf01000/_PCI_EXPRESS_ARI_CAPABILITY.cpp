struct _PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER// Size=0x4 (Id=2982)
{
    unsigned short CapabilityID;// Offset=0x0 Size=0x2
    struct // Size=0x2 (Id=0)
    {
        unsigned short Version:4;// Offset=0x2 Size=0x2 BitOffset=0x0 BitSize=0x4
        unsigned short Next:12;// Offset=0x2 Size=0x2 BitOffset=0x4 BitSize=0xc
    };
};

struct _PCI_EXPRESS_ARI_CAPABILITY_REGISTER// Size=0x2 (Id=1801)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short MfvcFunctionGroupsCapability:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short AcsFunctionGroupsCapability:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short Reserved:6;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0x6
        unsigned short NextFunctionNumber:8;// Offset=0x0 Size=0x2 BitOffset=0x8 BitSize=0x8
    };
};

struct _PCI_EXPRESS_ARI_CONTROL_REGISTER// Size=0x2 (Id=1694)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short MfvcFunctionGroupsEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short AcsFunctionGroupsEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short Reserved1:2;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0x2
        unsigned short FunctionGroup:3;// Offset=0x0 Size=0x2 BitOffset=0x4 BitSize=0x3
        unsigned short Reserved2:9;// Offset=0x0 Size=0x2 BitOffset=0x7 BitSize=0x9
    };
};

struct _PCI_EXPRESS_ARI_CAPABILITY// Size=0x8 (Id=2318)
{
    struct _PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;// Offset=0x0 Size=0x4
    struct _PCI_EXPRESS_ARI_CAPABILITY_REGISTER Capability;// Offset=0x4 Size=0x2
    struct _PCI_EXPRESS_ARI_CONTROL_REGISTER Control;// Offset=0x6 Size=0x2
};
