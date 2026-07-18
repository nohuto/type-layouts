struct _PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER// Size=0x4 (Id=3898)
{
    unsigned short CapabilityID;// Offset=0x0 Size=0x2
    struct // Size=0x2 (Id=0)
    {
        unsigned short Version:4;// Offset=0x2 Size=0x2 BitOffset=0x0 BitSize=0x4
        unsigned short Next:12;// Offset=0x2 Size=0x2 BitOffset=0x4 BitSize=0xc
    };
};

union _PCI_EXPRESS_SRIOV_CAPS// Size=0x4 (Id=3826)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long VFMigrationCapable:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved1:20;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x14
        unsigned long VFMigrationInterruptNumber:11;// Offset=0x0 Size=0x4 BitOffset=0x15 BitSize=0xb
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

union _PCI_EXPRESS_SRIOV_CONTROL// Size=0x2 (Id=3450)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short VFEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short VFMigrationEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short VFMigrationInterruptEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0x1
        unsigned short VFMemorySpaceEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x3 BitSize=0x1
        unsigned short ARICapableHierarchy:1;// Offset=0x0 Size=0x2 BitOffset=0x4 BitSize=0x1
        unsigned short Reserved1:11;// Offset=0x0 Size=0x2 BitOffset=0x5 BitSize=0xb
    };
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};

union _PCI_EXPRESS_SRIOV_STATUS// Size=0x2 (Id=3950)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short VFMigrationStatus:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short Reserved1:15;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0xf
    };
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};

union _PCI_EXPRESS_SRIOV_MIGRATION_STATE_ARRAY// Size=0x4 (Id=3062)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long VFMigrationStateBIR:3;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x3
        unsigned long VFMigrationStateOffset:29;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1d
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

struct _PCI_EXPRESS_SRIOV_CAPABILITY// Size=0x40 (Id=2470)
{
    struct _PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;// Offset=0x0 Size=0x4
    union _PCI_EXPRESS_SRIOV_CAPS SRIOVCapabilities;// Offset=0x4 Size=0x4
    union _PCI_EXPRESS_SRIOV_CONTROL SRIOVControl;// Offset=0x8 Size=0x2
    union _PCI_EXPRESS_SRIOV_STATUS SRIOVStatus;// Offset=0xa Size=0x2
    unsigned short InitialVFs;// Offset=0xc Size=0x2
    unsigned short TotalVFs;// Offset=0xe Size=0x2
    unsigned short NumVFs;// Offset=0x10 Size=0x2
    unsigned char FunctionDependencyLink;// Offset=0x12 Size=0x1
    unsigned char RsvdP1;// Offset=0x13 Size=0x1
    unsigned short FirstVFOffset;// Offset=0x14 Size=0x2
    unsigned short VFStride;// Offset=0x16 Size=0x2
    unsigned short RsvdP2;// Offset=0x18 Size=0x2
    unsigned short VFDeviceId;// Offset=0x1a Size=0x2
    unsigned long SupportedPageSizes;// Offset=0x1c Size=0x4
    unsigned long SystemPageSize;// Offset=0x20 Size=0x4
    unsigned long BaseAddresses[6];// Offset=0x24 Size=0x18
    union _PCI_EXPRESS_SRIOV_MIGRATION_STATE_ARRAY VFMigrationStateArrayOffset;// Offset=0x3c Size=0x4
};
