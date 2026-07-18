struct _PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER// Size=0x4 (Id=3898)
{
    unsigned short CapabilityID;// Offset=0x0 Size=0x2
    struct // Size=0x2 (Id=0)
    {
        unsigned short Version:4;// Offset=0x2 Size=0x2 BitOffset=0x0 BitSize=0x4
        unsigned short Next:12;// Offset=0x2 Size=0x2 BitOffset=0x4 BitSize=0xc
    };
};

union _PCI_EXPRESS_DESIGNATED_VENDOR_SPECIFIC_HEADER_1// Size=0x4 (Id=2407)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long DvsecVendorId:16;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x10
        unsigned long DvsecVersion:4;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x4
        unsigned long DvsecLength:12;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0xc
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

union _PCI_EXPRESS_DESIGNATED_VENDOR_SPECIFIC_HEADER_2// Size=0x2 (Id=3731)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short DvsecId:16;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x10
    };
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};

union _PCI_EXPRESS_CXL_DVSEC_CAPABILITY_REGISTER_V11// Size=0x2 (Id=3635)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short CacheCapable:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short IoCapable:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short MemCapable:1;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0x1
        unsigned short MemHwInitMode:1;// Offset=0x0 Size=0x2 BitOffset=0x3 BitSize=0x1
        unsigned short HdmCount:2;// Offset=0x0 Size=0x2 BitOffset=0x4 BitSize=0x2
        unsigned short Reserved0:8;// Offset=0x0 Size=0x2 BitOffset=0x6 BitSize=0x8
        unsigned short ViralCapable:1;// Offset=0x0 Size=0x2 BitOffset=0xe BitSize=0x1
        unsigned short Reserved1:1;// Offset=0x0 Size=0x2 BitOffset=0xf BitSize=0x1
    };
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};

union _PCI_EXPRESS_CXL_DVSEC_CONTROL_REGISTER// Size=0x2 (Id=3136)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short CacheEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short IoEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short MemEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0x1
        unsigned short CacheSFCoverage:5;// Offset=0x0 Size=0x2 BitOffset=0x3 BitSize=0x5
        unsigned short CacheSFGranularity:3;// Offset=0x0 Size=0x2 BitOffset=0x8 BitSize=0x3
        unsigned short CacheCleanEviction:1;// Offset=0x0 Size=0x2 BitOffset=0xb BitSize=0x1
        unsigned short Reserved0:2;// Offset=0x0 Size=0x2 BitOffset=0xc BitSize=0x2
        unsigned short ViralEnable:1;// Offset=0x0 Size=0x2 BitOffset=0xe BitSize=0x1
        unsigned short Reserved1:1;// Offset=0x0 Size=0x2 BitOffset=0xf BitSize=0x1
    };
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};

union _PCI_EXPRESS_CXL_DVSEC_STATUS_REGISTER// Size=0x2 (Id=3670)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short Reserved0:14;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0xe
        unsigned short ViralStatus:1;// Offset=0x0 Size=0x2 BitOffset=0xe BitSize=0x1
        unsigned short Reserved1:1;// Offset=0x0 Size=0x2 BitOffset=0xf BitSize=0x1
    };
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};

union _PCI_EXPRESS_CXL_DVSEC_LOCK_REGISTER// Size=0x2 (Id=473)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short ConfigLock:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short Reserved:15;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0xf
    };
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};

struct _PCI_EXPRESS_CXL_DVSEC_RANGE_SIZE_HIGH_REGISTER// Size=0x4 (Id=2623)
{
    unsigned long MemSizeHigh;// Offset=0x0 Size=0x4
};

union _PCI_EXPRESS_CXL_DVSEC_RANGE_SIZE_LOW_REGISTER_V11// Size=0x4 (Id=3625)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long MemInfoValid:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long MemActive:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long MediaType:3;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x3
        unsigned long MemClass:3;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x3
        unsigned long DesiredInterleave:3;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x3
        unsigned long Reserved:17;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x11
        unsigned long MemSizeLow:4;// Offset=0x0 Size=0x4 BitOffset=0x1c BitSize=0x4
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

struct _PCI_EXPRESS_CXL_DVSEC_RANGE_BASE_HIGH_REGISTER// Size=0x4 (Id=3257)
{
    unsigned long MemBaseHigh;// Offset=0x0 Size=0x4
};

union _PCI_EXPRESS_CXL_DVSEC_RANGE_BASE_LOW_REGISTER// Size=0x4 (Id=2402)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Reserved:28;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1c
        unsigned long MemBaseLow:4;// Offset=0x0 Size=0x4 BitOffset=0x1c BitSize=0x4
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

struct _PCI_EXPRESS_CXL_DVSEC_CAPABILITY_V11// Size=0x38 (Id=2858)
{
    struct _PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;// Offset=0x0 Size=0x4
    union _PCI_EXPRESS_DESIGNATED_VENDOR_SPECIFIC_HEADER_1 DvsecHeader1;// Offset=0x4 Size=0x4
    union _PCI_EXPRESS_DESIGNATED_VENDOR_SPECIFIC_HEADER_2 DvsecHeader2;// Offset=0x8 Size=0x2
    union _PCI_EXPRESS_CXL_DVSEC_CAPABILITY_REGISTER_V11 Capability;// Offset=0xa Size=0x2
    union _PCI_EXPRESS_CXL_DVSEC_CONTROL_REGISTER Control;// Offset=0xc Size=0x2
    union _PCI_EXPRESS_CXL_DVSEC_STATUS_REGISTER Status;// Offset=0xe Size=0x2
    unsigned short Control2;// Offset=0x10 Size=0x2
    unsigned short Status2;// Offset=0x12 Size=0x2
    union _PCI_EXPRESS_CXL_DVSEC_LOCK_REGISTER Lock;// Offset=0x14 Size=0x2
    unsigned short Reserved;// Offset=0x16 Size=0x2
    struct _PCI_EXPRESS_CXL_DVSEC_RANGE_SIZE_HIGH_REGISTER Range1SizeHigh;// Offset=0x18 Size=0x4
    union _PCI_EXPRESS_CXL_DVSEC_RANGE_SIZE_LOW_REGISTER_V11 Range1SizeLow;// Offset=0x1c Size=0x4
    struct _PCI_EXPRESS_CXL_DVSEC_RANGE_BASE_HIGH_REGISTER Range1BaseHigh;// Offset=0x20 Size=0x4
    union _PCI_EXPRESS_CXL_DVSEC_RANGE_BASE_LOW_REGISTER Range1BaseLow;// Offset=0x24 Size=0x4
    struct _PCI_EXPRESS_CXL_DVSEC_RANGE_SIZE_HIGH_REGISTER Range2SizeHigh;// Offset=0x28 Size=0x4
    union _PCI_EXPRESS_CXL_DVSEC_RANGE_SIZE_LOW_REGISTER_V11 Range2SizeLow;// Offset=0x2c Size=0x4
    struct _PCI_EXPRESS_CXL_DVSEC_RANGE_BASE_HIGH_REGISTER Range2BaseHigh;// Offset=0x30 Size=0x4
    union _PCI_EXPRESS_CXL_DVSEC_RANGE_BASE_LOW_REGISTER Range2BaseLow;// Offset=0x34 Size=0x4
};
