enum _DMA_COMMON_BUFFER_EXTENDED_CONFIGURATION_TYPE
{
    CommonBufferConfigTypeLogicalAddressLimits=0,
    CommonBufferConfigTypeSubSection=1,
    CommonBufferConfigTypeHardwareAccessPermissions=2,
    CommonBufferConfigTypeMax=3
};

enum _DMA_COMMON_BUFFER_EXTENDED_CONFIGURATION_ACCESS_TYPE
{
    CommonBufferHardwareAccessReadOnly=0,
    CommonBufferHardwareAccessWriteOnly=1,
    CommonBufferHardwareAccessReadWrite=2,
    CommonBufferHardwareAccessMax=3
};

struct _DMA_COMMON_BUFFER_EXTENDED_CONFIGURATION// Size=0x28 (Id=823)
{
    enum _DMA_COMMON_BUFFER_EXTENDED_CONFIGURATION_TYPE ConfigType;// Offset=0x0 Size=0x4
    union // Size=0x18 (Id=0)
    {
        struct _DMA_COMMON_BUFFER_EXTENDED_CONFIGURATION::_unnamed_825::<unnamed-type-LogicalAddressLimits> LogicalAddressLimits;// Offset=0x8 Size=0x10
        struct _DMA_COMMON_BUFFER_EXTENDED_CONFIGURATION::_unnamed_826::<unnamed-type-SubSection> SubSection;// Offset=0x8 Size=0x10
        enum _DMA_COMMON_BUFFER_EXTENDED_CONFIGURATION_ACCESS_TYPE HardwareAccessType;// Offset=0x8 Size=0x4
        unsigned long long Reserved[4];// Offset=0x8 Size=0x20
    };
};
