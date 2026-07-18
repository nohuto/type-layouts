enum _DMA_WIDTH
{
    Width8Bits=0,
    Width16Bits=1,
    Width32Bits=2,
    Width64Bits=3,
    WidthNoWrap=4,
    MaximumDmaWidth=5
};

struct _unnamed_30// Size=0x8 (Id=30)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=31)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_30 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _WDF_DMA_SYSTEM_PROFILE_CONFIG// Size=0x20 (Id=315)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    unsigned char DemandMode;// Offset=0x4 Size=0x1
    unsigned char LoopedTransfer;// Offset=0x5 Size=0x1
    enum _DMA_WIDTH DmaWidth;// Offset=0x8 Size=0x4
    union _LARGE_INTEGER DeviceAddress;// Offset=0x10 Size=0x8
    struct _CM_PARTIAL_RESOURCE_DESCRIPTOR * DmaDescriptor;// Offset=0x18 Size=0x8
};
