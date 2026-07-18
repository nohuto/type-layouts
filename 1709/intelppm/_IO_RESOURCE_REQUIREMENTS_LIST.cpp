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

struct _unnamed_31// Size=0x8 (Id=31)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=61)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_31 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _unnamed_262// Size=0x18 (Id=262)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    unsigned long Alignment;// Offset=0x4 Size=0x4
    union _LARGE_INTEGER MinimumAddress;// Offset=0x8 Size=0x8
    union _LARGE_INTEGER MaximumAddress;// Offset=0x10 Size=0x8
};

enum _IRQ_PRIORITY
{
    IrqPriorityUndefined=0,
    IrqPriorityLow=1,
    IrqPriorityNormal=2,
    IrqPriorityHigh=3
};

struct _unnamed_264// Size=0x18 (Id=264)
{
    unsigned long MinimumVector;// Offset=0x0 Size=0x4
    unsigned long MaximumVector;// Offset=0x4 Size=0x4
    unsigned short AffinityPolicy;// Offset=0x8 Size=0x2
    unsigned short Group;// Offset=0xa Size=0x2
    enum _IRQ_PRIORITY PriorityPolicy;// Offset=0xc Size=0x4
    unsigned long long TargetedProcessors;// Offset=0x10 Size=0x8
};

struct _unnamed_265// Size=0x8 (Id=265)
{
    unsigned long MinimumChannel;// Offset=0x0 Size=0x4
    unsigned long MaximumChannel;// Offset=0x4 Size=0x4
};

struct _unnamed_266// Size=0x10 (Id=266)
{
    unsigned long RequestLine;// Offset=0x0 Size=0x4
    unsigned long Reserved;// Offset=0x4 Size=0x4
    unsigned long Channel;// Offset=0x8 Size=0x4
    unsigned long TransferWidth;// Offset=0xc Size=0x4
};

struct _unnamed_267// Size=0xc (Id=267)
{
    unsigned long Data[3];// Offset=0x0 Size=0xc
};

struct _unnamed_268// Size=0x10 (Id=268)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    unsigned long MinBusNumber;// Offset=0x4 Size=0x4
    unsigned long MaxBusNumber;// Offset=0x8 Size=0x4
    unsigned long Reserved;// Offset=0xc Size=0x4
};

struct _unnamed_269// Size=0xc (Id=269)
{
    unsigned long Priority;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Reserved2;// Offset=0x8 Size=0x4
};

struct _unnamed_270// Size=0x18 (Id=270)
{
    unsigned long Length40;// Offset=0x0 Size=0x4
    unsigned long Alignment40;// Offset=0x4 Size=0x4
    union _LARGE_INTEGER MinimumAddress;// Offset=0x8 Size=0x8
    union _LARGE_INTEGER MaximumAddress;// Offset=0x10 Size=0x8
};

struct _unnamed_271// Size=0x18 (Id=271)
{
    unsigned long Length48;// Offset=0x0 Size=0x4
    unsigned long Alignment48;// Offset=0x4 Size=0x4
    union _LARGE_INTEGER MinimumAddress;// Offset=0x8 Size=0x8
    union _LARGE_INTEGER MaximumAddress;// Offset=0x10 Size=0x8
};

struct _unnamed_272// Size=0x18 (Id=272)
{
    unsigned long Length64;// Offset=0x0 Size=0x4
    unsigned long Alignment64;// Offset=0x4 Size=0x4
    union _LARGE_INTEGER MinimumAddress;// Offset=0x8 Size=0x8
    union _LARGE_INTEGER MaximumAddress;// Offset=0x10 Size=0x8
};

struct _unnamed_273// Size=0xc (Id=273)
{
    unsigned char Class;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char Reserved1;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned long IdLowPart;// Offset=0x4 Size=0x4
    unsigned long IdHighPart;// Offset=0x8 Size=0x4
};

union _unnamed_274// Size=0x18 (Id=274)
{
    union // Size=0x18 (Id=0)
    {
        struct _unnamed_262 Port;// Offset=0x0 Size=0x18
        struct _unnamed_262 Memory;// Offset=0x0 Size=0x18
        struct _unnamed_264 Interrupt;// Offset=0x0 Size=0x18
        struct _unnamed_265 Dma;// Offset=0x0 Size=0x8
        struct _unnamed_266 DmaV3;// Offset=0x0 Size=0x10
        struct _unnamed_262 Generic;// Offset=0x0 Size=0x18
        struct _unnamed_267 DevicePrivate;// Offset=0x0 Size=0xc
        struct _unnamed_268 BusNumber;// Offset=0x0 Size=0x10
        struct _unnamed_269 ConfigData;// Offset=0x0 Size=0xc
        struct _unnamed_270 Memory40;// Offset=0x0 Size=0x18
        struct _unnamed_271 Memory48;// Offset=0x0 Size=0x18
        struct _unnamed_272 Memory64;// Offset=0x0 Size=0x18
        struct _unnamed_273 Connection;// Offset=0x0 Size=0xc
    };
};

struct _IO_RESOURCE_DESCRIPTOR// Size=0x20 (Id=275)
{
    unsigned char Option;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char ShareDisposition;// Offset=0x2 Size=0x1
    unsigned char Spare1;// Offset=0x3 Size=0x1
    unsigned short Flags;// Offset=0x4 Size=0x2
    unsigned short Spare2;// Offset=0x6 Size=0x2
    union _unnamed_274 u;// Offset=0x8 Size=0x18
};

struct _IO_RESOURCE_LIST// Size=0x28 (Id=607)
{
    unsigned short Version;// Offset=0x0 Size=0x2
    unsigned short Revision;// Offset=0x2 Size=0x2
    unsigned long Count;// Offset=0x4 Size=0x4
    struct _IO_RESOURCE_DESCRIPTOR Descriptors[1];// Offset=0x8 Size=0x20
};

struct _IO_RESOURCE_REQUIREMENTS_LIST// Size=0x48 (Id=469)
{
    unsigned long ListSize;// Offset=0x0 Size=0x4
    enum _INTERFACE_TYPE InterfaceType;// Offset=0x4 Size=0x4
    unsigned long BusNumber;// Offset=0x8 Size=0x4
    unsigned long SlotNumber;// Offset=0xc Size=0x4
    unsigned long Reserved[3];// Offset=0x10 Size=0xc
    unsigned long AlternativeLists;// Offset=0x1c Size=0x4
    struct _IO_RESOURCE_LIST List[1];// Offset=0x20 Size=0x28
};
