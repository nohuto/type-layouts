struct _DMA_TRANSFER_INFO_V1// Size=0xc (Id=957)
{
    unsigned long MapRegisterCount;// Offset=0x0 Size=0x4
    unsigned long ScatterGatherElementCount;// Offset=0x4 Size=0x4
    unsigned long ScatterGatherListSize;// Offset=0x8 Size=0x4
};

union _DMA_TRANSFER_INFO::_unnamed_632// Size=0xc (Id=632)
{
    struct _DMA_TRANSFER_INFO_V1 V1;// Offset=0x0 Size=0xc
};
