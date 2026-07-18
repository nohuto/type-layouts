struct _DMA_ADAPTER_INFO_V1// Size=0x14 (Id=1402)
{
    unsigned long ReadDmaCounterAvailable;// Offset=0x0 Size=0x4
    unsigned long ScatterGatherLimit;// Offset=0x4 Size=0x4
    unsigned long DmaAddressWidth;// Offset=0x8 Size=0x4
    unsigned long Flags;// Offset=0xc Size=0x4
    unsigned long MinimumTransferUnit;// Offset=0x10 Size=0x4
};

struct _DMA_ADAPTER_INFO::_unnamed_1258// Size=0x18 (Id=1258)
{
    unsigned long Version;// Offset=0x0 Size=0x4
    struct _DMA_ADAPTER_INFO_V1 V1;// Offset=0x4 Size=0x14
};
