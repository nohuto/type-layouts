struct _DMA_TRANSFER_INFO_V1// Size=0xc (Id=512)
{
    unsigned long MapRegisterCount;// Offset=0x0 Size=0x4
    unsigned long ScatterGatherElementCount;// Offset=0x4 Size=0x4
    unsigned long ScatterGatherListSize;// Offset=0x8 Size=0x4
};

struct _DMA_TRANSFER_INFO_V2// Size=0x10 (Id=483)
{
    unsigned long MapRegisterCount;// Offset=0x0 Size=0x4
    unsigned long ScatterGatherElementCount;// Offset=0x4 Size=0x4
    unsigned long ScatterGatherListSize;// Offset=0x8 Size=0x4
    unsigned long LogicalPageCount;// Offset=0xc Size=0x4
};

struct _DMA_TRANSFER_INFO// Size=0x14 (Id=481)
{
    unsigned long Version;// Offset=0x0 Size=0x4
    union // Size=0xc (Id=0)
    {
        struct _DMA_TRANSFER_INFO_V1 V1;// Offset=0x4 Size=0xc
        struct _DMA_TRANSFER_INFO_V2 V2;// Offset=0x4 Size=0x10
    };
};
