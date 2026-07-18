enum _DMA_COMMON_BUFFER_EXTENDED_CONFIGURATION_TYPE
{
    CommonBufferConfigTypeLogicalAddressLimits=0,
    CommonBufferConfigTypeSubSection=1,
    CommonBufferConfigTypeHardwareAccessPermissions=2,
    CommonBufferConfigTypeMax=3
};

struct _unnamed_45// Size=0x8 (Id=45)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=75)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_45 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _unnamed_480// Size=0x10 (Id=480)
{
    union _LARGE_INTEGER MinimumAddress;// Offset=0x0 Size=0x8
    union _LARGE_INTEGER MaximumAddress;// Offset=0x8 Size=0x8
};

struct _unnamed_481// Size=0x10 (Id=481)
{
    unsigned long long Offset;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

enum _DMA_COMMON_BUFFER_EXTENDED_CONFIGURATION_ACCESS_TYPE
{
    CommonBufferHardwareAccessReadOnly=0,
    CommonBufferHardwareAccessWriteOnly=1,
    CommonBufferHardwareAccessReadWrite=2,
    CommonBufferHardwareAccessMax=3
};

struct _DMA_COMMON_BUFFER_EXTENDED_CONFIGURATION// Size=0x28 (Id=483)
{
    enum _DMA_COMMON_BUFFER_EXTENDED_CONFIGURATION_TYPE ConfigType;// Offset=0x0 Size=0x4
    union // Size=0x18 (Id=0)
    {
        struct _unnamed_480 LogicalAddressLimits;// Offset=0x8 Size=0x10
        struct _unnamed_481 SubSection;// Offset=0x8 Size=0x10
        enum _DMA_COMMON_BUFFER_EXTENDED_CONFIGURATION_ACCESS_TYPE HardwareAccessType;// Offset=0x8 Size=0x4
        unsigned long long Reserved[4];// Offset=0x8 Size=0x20
    };
};
