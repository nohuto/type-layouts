union _LARGE_INTEGER// Size=0x8 (Id=1084)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct <unnamed-type-u>// Size=0x8 (Id=13869)
    {
        unsigned long LowPart;// Offset=0x0 Size=0x4
        long HighPart;// Offset=0x4 Size=0x4
    };
    struct _LARGE_INTEGER::<unnamed-type-u> u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _unnamed_51// Size=0x18 (Id=51)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    unsigned long Alignment;// Offset=0x4 Size=0x4
    union _LARGE_INTEGER MinimumAddress;// Offset=0x8 Size=0x8
    union _LARGE_INTEGER MaximumAddress;// Offset=0x10 Size=0x8
};

enum _IRQ_DEVICE_POLICY
{
    IrqPolicyMachineDefault=0,
    IrqPolicyAllCloseProcessors=1,
    IrqPolicyOneCloseProcessor=2,
    IrqPolicyAllProcessorsInMachine=3,
    IrqPolicySpecifiedProcessors=4,
    IrqPolicySpreadMessagesAcrossAllProcessors=5,
    IrqPolicyAllProcessorsInMachineWhenSteered=6
};

enum _IRQ_PRIORITY
{
    IrqPriorityUndefined=0,
    IrqPriorityLow=1,
    IrqPriorityNormal=2,
    IrqPriorityHigh=3
};

struct _unnamed_53// Size=0x18 (Id=53)
{
    unsigned long MinimumVector;// Offset=0x0 Size=0x4
    unsigned long MaximumVector;// Offset=0x4 Size=0x4
    enum _IRQ_DEVICE_POLICY AffinityPolicy;// Offset=0x8 Size=0x4
    enum _IRQ_PRIORITY PriorityPolicy;// Offset=0xc Size=0x4
    unsigned long long TargetedProcessors;// Offset=0x10 Size=0x8
};

struct _unnamed_54// Size=0x8 (Id=54)
{
    unsigned long MinimumChannel;// Offset=0x0 Size=0x4
    unsigned long MaximumChannel;// Offset=0x4 Size=0x4
};

struct _unnamed_56// Size=0x10 (Id=56)
{
    unsigned long RequestLine;// Offset=0x0 Size=0x4
    unsigned long Reserved;// Offset=0x4 Size=0x4
    unsigned long Channel;// Offset=0x8 Size=0x4
    unsigned long TransferWidth;// Offset=0xc Size=0x4
};

struct _unnamed_24// Size=0xc (Id=24)
{
    unsigned long Data[3];// Offset=0x0 Size=0xc
};

struct _unnamed_58// Size=0x10 (Id=58)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    unsigned long MinBusNumber;// Offset=0x4 Size=0x4
    unsigned long MaxBusNumber;// Offset=0x8 Size=0x4
    unsigned long Reserved;// Offset=0xc Size=0x4
};

struct _unnamed_60// Size=0xc (Id=60)
{
    unsigned long Priority;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Reserved2;// Offset=0x8 Size=0x4
};

struct _unnamed_61// Size=0x18 (Id=61)
{
    unsigned long Length40;// Offset=0x0 Size=0x4
    unsigned long Alignment40;// Offset=0x4 Size=0x4
    union _LARGE_INTEGER MinimumAddress;// Offset=0x8 Size=0x8
    union _LARGE_INTEGER MaximumAddress;// Offset=0x10 Size=0x8
};

struct _unnamed_63// Size=0x18 (Id=63)
{
    unsigned long Length48;// Offset=0x0 Size=0x4
    unsigned long Alignment48;// Offset=0x4 Size=0x4
    union _LARGE_INTEGER MinimumAddress;// Offset=0x8 Size=0x8
    union _LARGE_INTEGER MaximumAddress;// Offset=0x10 Size=0x8
};

struct _unnamed_65// Size=0x18 (Id=65)
{
    unsigned long Length64;// Offset=0x0 Size=0x4
    unsigned long Alignment64;// Offset=0x4 Size=0x4
    union _LARGE_INTEGER MinimumAddress;// Offset=0x8 Size=0x8
    union _LARGE_INTEGER MaximumAddress;// Offset=0x10 Size=0x8
};

struct _unnamed_33// Size=0xc (Id=33)
{
    unsigned char Class;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char Reserved1;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned long IdLowPart;// Offset=0x4 Size=0x4
    unsigned long IdHighPart;// Offset=0x8 Size=0x4
};

union _unnamed_67// Size=0x18 (Id=67)
{
    union // Size=0x18 (Id=0)
    {
        struct _unnamed_51 Port;// Offset=0x0 Size=0x18
        struct _unnamed_51 Memory;// Offset=0x0 Size=0x18
        struct _unnamed_53 Interrupt;// Offset=0x0 Size=0x18
        struct _unnamed_54 Dma;// Offset=0x0 Size=0x8
        struct _unnamed_56 DmaV3;// Offset=0x0 Size=0x10
        struct _unnamed_51 Generic;// Offset=0x0 Size=0x18
        struct _unnamed_24 DevicePrivate;// Offset=0x0 Size=0xc
        struct _unnamed_58 BusNumber;// Offset=0x0 Size=0x10
        struct _unnamed_60 ConfigData;// Offset=0x0 Size=0xc
        struct _unnamed_61 Memory40;// Offset=0x0 Size=0x18
        struct _unnamed_63 Memory48;// Offset=0x0 Size=0x18
        struct _unnamed_65 Memory64;// Offset=0x0 Size=0x18
        struct _unnamed_33 Connection;// Offset=0x0 Size=0xc
    };
};

struct _IO_RESOURCE_DESCRIPTOR// Size=0x20 (Id=1825)
{
    union // Size=0x8 (Id=0)
    {
        unsigned char Option;// Offset=0x0 Size=0x1
        unsigned char Type;// Offset=0x1 Size=0x1
        unsigned char ShareDisposition;// Offset=0x2 Size=0x1
        unsigned char Spare1;// Offset=0x3 Size=0x1
        unsigned short Flags;// Offset=0x4 Size=0x2
        unsigned short Spare2;// Offset=0x6 Size=0x2
        union <unnamed-type-u>// Size=0x18 (Id=10826)
        {
            struct <unnamed-type-Port>// Size=0x18 (Id=10827)
            {
                unsigned long Length;// Offset=0x0 Size=0x4
                unsigned long Alignment;// Offset=0x4 Size=0x4
                union _LARGE_INTEGER MinimumAddress;// Offset=0x8 Size=0x8
                union _LARGE_INTEGER MaximumAddress;// Offset=0x10 Size=0x8
            };
            struct _IO_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-Port> Port;// Offset=0x0 Size=0x18
            struct <unnamed-type-Memory>// Size=0x18 (Id=10833)
            {
                unsigned long Length;// Offset=0x0 Size=0x4
                unsigned long Alignment;// Offset=0x4 Size=0x4
                union _LARGE_INTEGER MinimumAddress;// Offset=0x8 Size=0x8
                union _LARGE_INTEGER MaximumAddress;// Offset=0x10 Size=0x8
            };
            struct _IO_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-Memory> Memory;// Offset=0x0 Size=0x18
            struct <unnamed-type-Interrupt>// Size=0x18 (Id=10839)
            {
                unsigned long MinimumVector;// Offset=0x0 Size=0x4
                unsigned long MaximumVector;// Offset=0x4 Size=0x4
                enum _IRQ_DEVICE_POLICY AffinityPolicy;// Offset=0x8 Size=0x4
                enum _IRQ_PRIORITY PriorityPolicy;// Offset=0xc Size=0x4
                unsigned long long TargetedProcessors;// Offset=0x10 Size=0x8
            };
            struct _IO_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-Interrupt> Interrupt;// Offset=0x0 Size=0x18
            struct <unnamed-type-Dma>// Size=0x8 (Id=10846)
            {
                unsigned long MinimumChannel;// Offset=0x0 Size=0x4
                unsigned long MaximumChannel;// Offset=0x4 Size=0x4
            };
            struct _IO_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-Dma> Dma;// Offset=0x0 Size=0x8
            struct <unnamed-type-DmaV3>// Size=0x10 (Id=10850)
            {
                unsigned long RequestLine;// Offset=0x0 Size=0x4
                unsigned long Reserved;// Offset=0x4 Size=0x4
                unsigned long Channel;// Offset=0x8 Size=0x4
                unsigned long TransferWidth;// Offset=0xc Size=0x4
            };
            struct _IO_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-DmaV3> DmaV3;// Offset=0x0 Size=0x10
            struct <unnamed-type-Generic>// Size=0x18 (Id=10856)
            {
                unsigned long Length;// Offset=0x0 Size=0x4
                unsigned long Alignment;// Offset=0x4 Size=0x4
                union _LARGE_INTEGER MinimumAddress;// Offset=0x8 Size=0x8
                union _LARGE_INTEGER MaximumAddress;// Offset=0x10 Size=0x8
            };
            struct _IO_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-Generic> Generic;// Offset=0x0 Size=0x18
            struct <unnamed-type-DevicePrivate>// Size=0xc (Id=10862)
            {
                unsigned long Data[3];// Offset=0x0 Size=0xc
            };
            struct _IO_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-DevicePrivate> DevicePrivate;// Offset=0x0 Size=0xc
            struct <unnamed-type-BusNumber>// Size=0x10 (Id=10865)
            {
                unsigned long Length;// Offset=0x0 Size=0x4
                unsigned long MinBusNumber;// Offset=0x4 Size=0x4
                unsigned long MaxBusNumber;// Offset=0x8 Size=0x4
                unsigned long Reserved;// Offset=0xc Size=0x4
            };
            struct _IO_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-BusNumber> BusNumber;// Offset=0x0 Size=0x10
            struct <unnamed-type-ConfigData>// Size=0xc (Id=10871)
            {
                unsigned long Priority;// Offset=0x0 Size=0x4
                unsigned long Reserved1;// Offset=0x4 Size=0x4
                unsigned long Reserved2;// Offset=0x8 Size=0x4
            };
            struct _IO_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-ConfigData> ConfigData;// Offset=0x0 Size=0xc
            struct <unnamed-type-Memory40>// Size=0x18 (Id=10876)
            {
                unsigned long Length40;// Offset=0x0 Size=0x4
                unsigned long Alignment40;// Offset=0x4 Size=0x4
                union _LARGE_INTEGER MinimumAddress;// Offset=0x8 Size=0x8
                union _LARGE_INTEGER MaximumAddress;// Offset=0x10 Size=0x8
            };
            struct _IO_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-Memory40> Memory40;// Offset=0x0 Size=0x18
            struct <unnamed-type-Memory48>// Size=0x18 (Id=10882)
            {
                unsigned long Length48;// Offset=0x0 Size=0x4
                unsigned long Alignment48;// Offset=0x4 Size=0x4
                union _LARGE_INTEGER MinimumAddress;// Offset=0x8 Size=0x8
                union _LARGE_INTEGER MaximumAddress;// Offset=0x10 Size=0x8
            };
            struct _IO_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-Memory48> Memory48;// Offset=0x0 Size=0x18
            struct <unnamed-type-Memory64>// Size=0x18 (Id=10888)
            {
                unsigned long Length64;// Offset=0x0 Size=0x4
                unsigned long Alignment64;// Offset=0x4 Size=0x4
                union _LARGE_INTEGER MinimumAddress;// Offset=0x8 Size=0x8
                union _LARGE_INTEGER MaximumAddress;// Offset=0x10 Size=0x8
            };
            struct _IO_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-Memory64> Memory64;// Offset=0x0 Size=0x18
            struct <unnamed-type-Connection>// Size=0xc (Id=10894)
            {
                unsigned char Class;// Offset=0x0 Size=0x1
                unsigned char Type;// Offset=0x1 Size=0x1
                unsigned char Reserved1;// Offset=0x2 Size=0x1
                unsigned char Reserved2;// Offset=0x3 Size=0x1
                unsigned long IdLowPart;// Offset=0x4 Size=0x4
                unsigned long IdHighPart;// Offset=0x8 Size=0x4
            };
            struct _IO_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-Connection> Connection;// Offset=0x0 Size=0xc
        };
    };
    union _IO_RESOURCE_DESCRIPTOR::<unnamed-type-u> u;// Offset=0x8 Size=0x18
};
