enum _DMA_COMMON_BUFFER_EXTENDED_CONFIGURATION_TYPE
{
    CommonBufferConfigTypeLogicalAddressLimits=0,
    CommonBufferConfigTypeSubSection=1,
    CommonBufferConfigTypeHardwareAccessPermissions=2,
    CommonBufferConfigTypeMax=3
};

struct _unnamed_10// Size=0x8 (Id=10)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=11)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_10 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _unnamed_260// Size=0x10 (Id=260)
{
    union _LARGE_INTEGER MinimumAddress;// Offset=0x0 Size=0x8
    union _LARGE_INTEGER MaximumAddress;// Offset=0x8 Size=0x8
};

struct _unnamed_261// Size=0x10 (Id=261)
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

struct _DMA_COMMON_BUFFER_EXTENDED_CONFIGURATION// Size=0x28 (Id=263)
{
    enum _DMA_COMMON_BUFFER_EXTENDED_CONFIGURATION_TYPE ConfigType;// Offset=0x0 Size=0x4
    union // Size=0x18 (Id=0)
    {
        struct _unnamed_260 LogicalAddressLimits;// Offset=0x8 Size=0x10
        struct _unnamed_261 SubSection;// Offset=0x8 Size=0x10
        enum _DMA_COMMON_BUFFER_EXTENDED_CONFIGURATION_ACCESS_TYPE HardwareAccessType;// Offset=0x8 Size=0x4
        unsigned long long Reserved[4];// Offset=0x8 Size=0x20
    };
};
