enum _STOR_DMA_WIDTH
{
    DmaUnknown=0,
    Dma32Bit=1,
    Dma64BitScatterGather=2,
    Dma64Bit=3
};

enum _STOR_DMA_VERSION
{
    StorDmaVersionUnknown=0,
    StorDmaVersion1=1,
    StorDmaVersion2=2,
    StorDmaVersion3=3
};

struct _RAID_DMA_ADAPTER// Size=0x20 (Id=227)
{
    struct _DMA_ADAPTER * DmaAdapter;// Offset=0x0 Size=0x8
    unsigned char DmarCompatible;// Offset=0x8 Size=0x1
    unsigned long NumberOfMapRegisters;// Offset=0xc Size=0x4
    void * MapRegisterBase;// Offset=0x10 Size=0x8
    enum _STOR_DMA_WIDTH Width;// Offset=0x18 Size=0x4
    enum _STOR_DMA_VERSION DmaVersion;// Offset=0x1c Size=0x4
};
