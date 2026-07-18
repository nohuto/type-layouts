enum _DMA_WIDTH
{
    Width8Bits=0,
    Width16Bits=1,
    Width32Bits=2,
    Width64Bits=3,
    WidthNoWrap=4,
    MaximumDmaWidth=5
};

enum _DMA_SPEED
{
    Compatible=0,
    TypeA=1,
    TypeB=2,
    TypeC=3,
    TypeF=4,
    MaximumDmaSpeed=5
};

struct _NDIS_DMA_DESCRIPTION// Size=0x14 (Id=1681)
{
    unsigned char DemandMode;// Offset=0x0 Size=0x1
    unsigned char AutoInitialize;// Offset=0x1 Size=0x1
    unsigned char DmaChannelSpecified;// Offset=0x2 Size=0x1
    enum _DMA_WIDTH DmaWidth;// Offset=0x4 Size=0x4
    enum _DMA_SPEED DmaSpeed;// Offset=0x8 Size=0x4
    unsigned long DmaPort;// Offset=0xc Size=0x4
    unsigned long DmaChannel;// Offset=0x10 Size=0x4
};
