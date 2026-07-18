union _LARGE_INTEGER// Size=0x8 (Id=156)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct <unnamed-type-u>// Size=0x8 (Id=5909)
    {
        unsigned long LowPart;// Offset=0x0 Size=0x4
        long HighPart;// Offset=0x4 Size=0x4
    };
    struct _LARGE_INTEGER::<unnamed-type-u> u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

enum _DMA_COMMON_BUFFER_EXTENDED_CONFIGURATION_ACCESS_TYPE
{
    CommonBufferHardwareAccessReadOnly=0,
    CommonBufferHardwareAccessWriteOnly=1,
    CommonBufferHardwareAccessReadWrite=2,
    CommonBufferHardwareAccessMax=3
};

union _DMA_COMMON_BUFFER_EXTENDED_CONFIGURATION::_unnamed_922// Size=0x20 (Id=922)
{
    struct <unnamed-type-LogicalAddressLimits>// Size=0x10 (Id=3454)
    {
        union _LARGE_INTEGER MinimumAddress;// Offset=0x0 Size=0x8
        union _LARGE_INTEGER MaximumAddress;// Offset=0x8 Size=0x8
    };
    struct _DMA_COMMON_BUFFER_EXTENDED_CONFIGURATION::_unnamed_923::<unnamed-type-LogicalAddressLimits> LogicalAddressLimits;// Offset=0x0 Size=0x10
    struct <unnamed-type-SubSection>// Size=0x10 (Id=3458)
    {
        unsigned long long Offset;// Offset=0x0 Size=0x8
        unsigned long Length;// Offset=0x8 Size=0x4
    };
    struct _DMA_COMMON_BUFFER_EXTENDED_CONFIGURATION::_unnamed_924::<unnamed-type-SubSection> SubSection;// Offset=0x0 Size=0x10
    enum _DMA_COMMON_BUFFER_EXTENDED_CONFIGURATION_ACCESS_TYPE HardwareAccessType;// Offset=0x0 Size=0x4
    unsigned long long Reserved[4];// Offset=0x0 Size=0x20
};
