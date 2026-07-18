struct _DMA_TRANSFER_INFO_V1// Size=0xc (Id=884)
{
    unsigned long MapRegisterCount;// Offset=0x0 Size=0x4
    unsigned long ScatterGatherElementCount;// Offset=0x4 Size=0x4
    unsigned long ScatterGatherListSize;// Offset=0x8 Size=0x4
};

struct _DMA_TRANSFER_INFO_V2// Size=0x10 (Id=807)
{
    unsigned long MapRegisterCount;// Offset=0x0 Size=0x4
    unsigned long ScatterGatherElementCount;// Offset=0x4 Size=0x4
    unsigned long ScatterGatherListSize;// Offset=0x8 Size=0x4
    unsigned long LogicalPageCount;// Offset=0xc Size=0x4
};

union _DMA_TRANSFER_INFO::_anonymous_1032// Size=0x10 (Id=1032)
{
    struct _DMA_TRANSFER_INFO_V1 V1;// Offset=0x0 Size=0xc
    struct _DMA_TRANSFER_INFO_V2 V2;// Offset=0x0 Size=0x10
};
