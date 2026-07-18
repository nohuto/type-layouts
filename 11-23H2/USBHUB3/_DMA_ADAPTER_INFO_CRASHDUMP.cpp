enum _INTERFACE_TYPE
{
    InterfaceTypeUndefined=-1,
    Internal=0,
    Isa=1,
    Eisa=2,
    MicroChannel=3,
    TurboChannel=4,
    PCIBus=5,
    VMEBus=6,
    NuBus=7,
    PCMCIABus=8,
    CBus=9,
    MPIBus=10,
    MPSABus=11,
    ProcessorInternal=12,
    InternalPowerBus=13,
    PNPISABus=14,
    PNPBus=15,
    Vmcs=16,
    ACPIBus=17,
    MaximumInterfaceType=18
};

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

struct _unnamed_10// Size=0x8 (Id=10)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=11)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_10 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _DEVICE_DESCRIPTION// Size=0x40 (Id=850)
{
    unsigned long Version;// Offset=0x0 Size=0x4
    unsigned char Master;// Offset=0x4 Size=0x1
    unsigned char ScatterGather;// Offset=0x5 Size=0x1
    unsigned char DemandMode;// Offset=0x6 Size=0x1
    unsigned char AutoInitialize;// Offset=0x7 Size=0x1
    unsigned char Dma32BitAddresses;// Offset=0x8 Size=0x1
    unsigned char IgnoreCount;// Offset=0x9 Size=0x1
    unsigned char Reserved1;// Offset=0xa Size=0x1
    unsigned char Dma64BitAddresses;// Offset=0xb Size=0x1
    unsigned long BusNumber;// Offset=0xc Size=0x4
    unsigned long DmaChannel;// Offset=0x10 Size=0x4
    enum _INTERFACE_TYPE InterfaceType;// Offset=0x14 Size=0x4
    enum _DMA_WIDTH DmaWidth;// Offset=0x18 Size=0x4
    enum _DMA_SPEED DmaSpeed;// Offset=0x1c Size=0x4
    unsigned long MaximumLength;// Offset=0x20 Size=0x4
    unsigned long DmaPort;// Offset=0x24 Size=0x4
    unsigned long DmaAddressWidth;// Offset=0x28 Size=0x4
    unsigned long DmaControllerInstance;// Offset=0x2c Size=0x4
    unsigned long DmaRequestLine;// Offset=0x30 Size=0x4
    union _LARGE_INTEGER DeviceAddress;// Offset=0x38 Size=0x8
};

struct _DMA_ADAPTER_INFO_CRASHDUMP// Size=0x50 (Id=809)
{
    struct _DEVICE_DESCRIPTION DeviceDescription;// Offset=0x0 Size=0x40
    unsigned long long DeviceIdSize;// Offset=0x40 Size=0x8
    void * DeviceId;// Offset=0x48 Size=0x8
};
