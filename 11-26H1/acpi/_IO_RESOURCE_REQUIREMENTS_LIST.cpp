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

struct _unnamed_46// Size=0x8 (Id=46)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=299)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_46 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _unnamed_712// Size=0x18 (Id=712)
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

struct _unnamed_714// Size=0x18 (Id=714)
{
    unsigned long MinimumVector;// Offset=0x0 Size=0x4
    unsigned long MaximumVector;// Offset=0x4 Size=0x4
    unsigned short AffinityPolicy;// Offset=0x8 Size=0x2
    unsigned short Group;// Offset=0xa Size=0x2
    enum _IRQ_PRIORITY PriorityPolicy;// Offset=0xc Size=0x4
    unsigned long long TargetedProcessors;// Offset=0x10 Size=0x8
};

struct _unnamed_715// Size=0x8 (Id=715)
{
    unsigned long MinimumChannel;// Offset=0x0 Size=0x4
    unsigned long MaximumChannel;// Offset=0x4 Size=0x4
};

struct _unnamed_716// Size=0x10 (Id=716)
{
    unsigned long RequestLine;// Offset=0x0 Size=0x4
    unsigned long Reserved;// Offset=0x4 Size=0x4
    unsigned long Channel;// Offset=0x8 Size=0x4
    unsigned long TransferWidth;// Offset=0xc Size=0x4
};

struct _unnamed_717// Size=0xc (Id=717)
{
    unsigned long Data[3];// Offset=0x0 Size=0xc
};

struct _unnamed_718// Size=0x10 (Id=718)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    unsigned long MinBusNumber;// Offset=0x4 Size=0x4
    unsigned long MaxBusNumber;// Offset=0x8 Size=0x4
    unsigned long Reserved;// Offset=0xc Size=0x4
};

struct _unnamed_719// Size=0xc (Id=719)
{
    unsigned long Priority;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Reserved2;// Offset=0x8 Size=0x4
};

struct _unnamed_720// Size=0x18 (Id=720)
{
    unsigned long Length40;// Offset=0x0 Size=0x4
    unsigned long Alignment40;// Offset=0x4 Size=0x4
    union _LARGE_INTEGER MinimumAddress;// Offset=0x8 Size=0x8
    union _LARGE_INTEGER MaximumAddress;// Offset=0x10 Size=0x8
};

struct _unnamed_721// Size=0x18 (Id=721)
{
    unsigned long Length48;// Offset=0x0 Size=0x4
    unsigned long Alignment48;// Offset=0x4 Size=0x4
    union _LARGE_INTEGER MinimumAddress;// Offset=0x8 Size=0x8
    union _LARGE_INTEGER MaximumAddress;// Offset=0x10 Size=0x8
};

struct _unnamed_722// Size=0x18 (Id=722)
{
    unsigned long Length64;// Offset=0x0 Size=0x4
    unsigned long Alignment64;// Offset=0x4 Size=0x4
    union _LARGE_INTEGER MinimumAddress;// Offset=0x8 Size=0x8
    union _LARGE_INTEGER MaximumAddress;// Offset=0x10 Size=0x8
};

struct _unnamed_723// Size=0xc (Id=723)
{
    unsigned char Class;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char Reserved1;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned long IdLowPart;// Offset=0x4 Size=0x4
    unsigned long IdHighPart;// Offset=0x8 Size=0x4
};

union _unnamed_724// Size=0x18 (Id=724)
{
    union // Size=0x18 (Id=0)
    {
        struct _unnamed_712 Port;// Offset=0x0 Size=0x18
        struct _unnamed_712 Memory;// Offset=0x0 Size=0x18
        struct _unnamed_714 Interrupt;// Offset=0x0 Size=0x18
        struct _unnamed_715 Dma;// Offset=0x0 Size=0x8
        struct _unnamed_716 DmaV3;// Offset=0x0 Size=0x10
        struct _unnamed_712 Generic;// Offset=0x0 Size=0x18
        struct _unnamed_717 DevicePrivate;// Offset=0x0 Size=0xc
        struct _unnamed_718 BusNumber;// Offset=0x0 Size=0x10
        struct _unnamed_719 ConfigData;// Offset=0x0 Size=0xc
        struct _unnamed_720 Memory40;// Offset=0x0 Size=0x18
        struct _unnamed_721 Memory48;// Offset=0x0 Size=0x18
        struct _unnamed_722 Memory64;// Offset=0x0 Size=0x18
        struct _unnamed_723 Connection;// Offset=0x0 Size=0xc
    };
};

struct _IO_RESOURCE_DESCRIPTOR// Size=0x20 (Id=725)
{
    unsigned char Option;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char ShareDisposition;// Offset=0x2 Size=0x1
    unsigned char Spare1;// Offset=0x3 Size=0x1
    unsigned short Flags;// Offset=0x4 Size=0x2
    unsigned short Spare2;// Offset=0x6 Size=0x2
    union _unnamed_724 u;// Offset=0x8 Size=0x18
};

struct _IO_RESOURCE_LIST// Size=0x28 (Id=677)
{
    unsigned short Version;// Offset=0x0 Size=0x2
    unsigned short Revision;// Offset=0x2 Size=0x2
    unsigned long Count;// Offset=0x4 Size=0x4
    struct _IO_RESOURCE_DESCRIPTOR Descriptors[1];// Offset=0x8 Size=0x20
};

struct _IO_RESOURCE_REQUIREMENTS_LIST// Size=0x48 (Id=438)
{
    unsigned long ListSize;// Offset=0x0 Size=0x4
    enum _INTERFACE_TYPE InterfaceType;// Offset=0x4 Size=0x4
    unsigned long BusNumber;// Offset=0x8 Size=0x4
    unsigned long SlotNumber;// Offset=0xc Size=0x4
    unsigned long Reserved[3];// Offset=0x10 Size=0xc
    unsigned long AlternativeLists;// Offset=0x1c Size=0x4
    struct _IO_RESOURCE_LIST List[1];// Offset=0x20 Size=0x28
};
