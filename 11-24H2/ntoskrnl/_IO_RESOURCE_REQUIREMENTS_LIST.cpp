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

struct _unnamed_9// Size=0x8 (Id=9)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=252)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_9 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _unnamed_352// Size=0x18 (Id=352)
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

struct _unnamed_354// Size=0x18 (Id=354)
{
    unsigned long MinimumVector;// Offset=0x0 Size=0x4
    unsigned long MaximumVector;// Offset=0x4 Size=0x4
    unsigned short AffinityPolicy;// Offset=0x8 Size=0x2
    unsigned short Group;// Offset=0xa Size=0x2
    enum _IRQ_PRIORITY PriorityPolicy;// Offset=0xc Size=0x4
    unsigned long long TargetedProcessors;// Offset=0x10 Size=0x8
};

struct _unnamed_355// Size=0x8 (Id=355)
{
    unsigned long MinimumChannel;// Offset=0x0 Size=0x4
    unsigned long MaximumChannel;// Offset=0x4 Size=0x4
};

struct _unnamed_356// Size=0x10 (Id=356)
{
    unsigned long RequestLine;// Offset=0x0 Size=0x4
    unsigned long Reserved;// Offset=0x4 Size=0x4
    unsigned long Channel;// Offset=0x8 Size=0x4
    unsigned long TransferWidth;// Offset=0xc Size=0x4
};

struct _unnamed_357// Size=0xc (Id=357)
{
    unsigned long Data[3];// Offset=0x0 Size=0xc
};

struct _unnamed_358// Size=0x10 (Id=358)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    unsigned long MinBusNumber;// Offset=0x4 Size=0x4
    unsigned long MaxBusNumber;// Offset=0x8 Size=0x4
    unsigned long Reserved;// Offset=0xc Size=0x4
};

struct _unnamed_359// Size=0xc (Id=359)
{
    unsigned long Priority;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Reserved2;// Offset=0x8 Size=0x4
};

struct _unnamed_360// Size=0x18 (Id=360)
{
    unsigned long Length40;// Offset=0x0 Size=0x4
    unsigned long Alignment40;// Offset=0x4 Size=0x4
    union _LARGE_INTEGER MinimumAddress;// Offset=0x8 Size=0x8
    union _LARGE_INTEGER MaximumAddress;// Offset=0x10 Size=0x8
};

struct _unnamed_361// Size=0x18 (Id=361)
{
    unsigned long Length48;// Offset=0x0 Size=0x4
    unsigned long Alignment48;// Offset=0x4 Size=0x4
    union _LARGE_INTEGER MinimumAddress;// Offset=0x8 Size=0x8
    union _LARGE_INTEGER MaximumAddress;// Offset=0x10 Size=0x8
};

struct _unnamed_362// Size=0x18 (Id=362)
{
    unsigned long Length64;// Offset=0x0 Size=0x4
    unsigned long Alignment64;// Offset=0x4 Size=0x4
    union _LARGE_INTEGER MinimumAddress;// Offset=0x8 Size=0x8
    union _LARGE_INTEGER MaximumAddress;// Offset=0x10 Size=0x8
};

struct _unnamed_363// Size=0xc (Id=363)
{
    unsigned char Class;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char Reserved1;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned long IdLowPart;// Offset=0x4 Size=0x4
    unsigned long IdHighPart;// Offset=0x8 Size=0x4
};

union _unnamed_364// Size=0x18 (Id=364)
{
    union // Size=0x18 (Id=0)
    {
        struct _unnamed_352 Port;// Offset=0x0 Size=0x18
        struct _unnamed_352 Memory;// Offset=0x0 Size=0x18
        struct _unnamed_354 Interrupt;// Offset=0x0 Size=0x18
        struct _unnamed_355 Dma;// Offset=0x0 Size=0x8
        struct _unnamed_356 DmaV3;// Offset=0x0 Size=0x10
        struct _unnamed_352 Generic;// Offset=0x0 Size=0x18
        struct _unnamed_357 DevicePrivate;// Offset=0x0 Size=0xc
        struct _unnamed_358 BusNumber;// Offset=0x0 Size=0x10
        struct _unnamed_359 ConfigData;// Offset=0x0 Size=0xc
        struct _unnamed_360 Memory40;// Offset=0x0 Size=0x18
        struct _unnamed_361 Memory48;// Offset=0x0 Size=0x18
        struct _unnamed_362 Memory64;// Offset=0x0 Size=0x18
        struct _unnamed_363 Connection;// Offset=0x0 Size=0xc
    };
};

struct _IO_RESOURCE_DESCRIPTOR// Size=0x20 (Id=365)
{
    unsigned char Option;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char ShareDisposition;// Offset=0x2 Size=0x1
    unsigned char Spare1;// Offset=0x3 Size=0x1
    unsigned short Flags;// Offset=0x4 Size=0x2
    unsigned short Spare2;// Offset=0x6 Size=0x2
    union _unnamed_364 u;// Offset=0x8 Size=0x18
};

struct _IO_RESOURCE_LIST// Size=0x28 (Id=318)
{
    unsigned short Version;// Offset=0x0 Size=0x2
    unsigned short Revision;// Offset=0x2 Size=0x2
    unsigned long Count;// Offset=0x4 Size=0x4
    struct _IO_RESOURCE_DESCRIPTOR Descriptors[1];// Offset=0x8 Size=0x20
};

struct _IO_RESOURCE_REQUIREMENTS_LIST// Size=0x48 (Id=218)
{
    unsigned long ListSize;// Offset=0x0 Size=0x4
    enum _INTERFACE_TYPE InterfaceType;// Offset=0x4 Size=0x4
    unsigned long BusNumber;// Offset=0x8 Size=0x4
    unsigned long SlotNumber;// Offset=0xc Size=0x4
    unsigned long Reserved[3];// Offset=0x10 Size=0xc
    unsigned long AlternativeLists;// Offset=0x1c Size=0x4
    struct _IO_RESOURCE_LIST List[1];// Offset=0x20 Size=0x28
};
