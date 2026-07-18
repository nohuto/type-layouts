union _LARGE_INTEGER// Size=0x8 (Id=91)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct <unnamed-type-u>// Size=0x8 (Id=5380)
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

union _DMA_COMMON_BUFFER_EXTENDED_CONFIGURATION::_unnamed_824// Size=0x20 (Id=824)
{
    struct <unnamed-type-LogicalAddressLimits>// Size=0x10 (Id=3126)
    {
        union _LARGE_INTEGER MinimumAddress;// Offset=0x0 Size=0x8
        union _LARGE_INTEGER MaximumAddress;// Offset=0x8 Size=0x8
    };
    struct _DMA_COMMON_BUFFER_EXTENDED_CONFIGURATION::_unnamed_825::<unnamed-type-LogicalAddressLimits> LogicalAddressLimits;// Offset=0x0 Size=0x10
    struct <unnamed-type-SubSection>// Size=0x10 (Id=3130)
    {
        unsigned long long Offset;// Offset=0x0 Size=0x8
        unsigned long Length;// Offset=0x8 Size=0x4
    };
    struct _DMA_COMMON_BUFFER_EXTENDED_CONFIGURATION::_unnamed_826::<unnamed-type-SubSection> SubSection;// Offset=0x0 Size=0x10
    enum _DMA_COMMON_BUFFER_EXTENDED_CONFIGURATION_ACCESS_TYPE HardwareAccessType;// Offset=0x0 Size=0x4
    unsigned long long Reserved[4];// Offset=0x0 Size=0x20
};
