union _LARGE_INTEGER// Size=0x8 (Id=58)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct <unnamed-type-u>// Size=0x8 (Id=4217)
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

union _DMA_COMMON_BUFFER_EXTENDED_CONFIGURATION::_unnamed_276// Size=0x20 (Id=276)
{
    struct <unnamed-type-LogicalAddressLimits>// Size=0x10 (Id=2115)
    {
        union _LARGE_INTEGER MinimumAddress;// Offset=0x0 Size=0x8
        union _LARGE_INTEGER MaximumAddress;// Offset=0x8 Size=0x8
    };
    struct _DMA_COMMON_BUFFER_EXTENDED_CONFIGURATION::_unnamed_277::<unnamed-type-LogicalAddressLimits> LogicalAddressLimits;// Offset=0x0 Size=0x10
    struct <unnamed-type-SubSection>// Size=0x10 (Id=2119)
    {
        unsigned long long Offset;// Offset=0x0 Size=0x8
        unsigned long Length;// Offset=0x8 Size=0x4
    };
    struct _DMA_COMMON_BUFFER_EXTENDED_CONFIGURATION::_unnamed_278::<unnamed-type-SubSection> SubSection;// Offset=0x0 Size=0x10
    enum _DMA_COMMON_BUFFER_EXTENDED_CONFIGURATION_ACCESS_TYPE HardwareAccessType;// Offset=0x0 Size=0x4
    unsigned long long Reserved[4];// Offset=0x0 Size=0x20
};
