union _LARGE_INTEGER// Size=0x8 (Id=38)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct <unnamed-type-u>// Size=0x8 (Id=5284)
    {
        unsigned long LowPart;// Offset=0x0 Size=0x4
        long HighPart;// Offset=0x4 Size=0x4
    };
    struct _LARGE_INTEGER::<unnamed-type-u> u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

enum _IRQ_PRIORITY
{
    IrqPriorityUndefined=0,
    IrqPriorityLow=1,
    IrqPriorityNormal=2,
    IrqPriorityHigh=3
};

struct _IO_RESOURCE_DESCRIPTOR// Size=0x20 (Id=1959)
{
    union // Size=0x8 (Id=0)
    {
        unsigned char Option;// Offset=0x0 Size=0x1
        unsigned char Type;// Offset=0x1 Size=0x1
        unsigned char ShareDisposition;// Offset=0x2 Size=0x1
        unsigned char Spare1;// Offset=0x3 Size=0x1
        unsigned short Flags;// Offset=0x4 Size=0x2
        unsigned short Spare2;// Offset=0x6 Size=0x2
        union <unnamed-type-u>// Size=0x18 (Id=3861)
        {
            struct <unnamed-type-Port>// Size=0x18 (Id=3862)
            {
                unsigned long Length;// Offset=0x0 Size=0x4
                unsigned long Alignment;// Offset=0x4 Size=0x4
                union _LARGE_INTEGER MinimumAddress;// Offset=0x8 Size=0x8
                union _LARGE_INTEGER MaximumAddress;// Offset=0x10 Size=0x8
            };
            struct _IO_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-Port> Port;// Offset=0x0 Size=0x18
            struct <unnamed-type-Memory>// Size=0x18 (Id=3868)
            {
                unsigned long Length;// Offset=0x0 Size=0x4
                unsigned long Alignment;// Offset=0x4 Size=0x4
                union _LARGE_INTEGER MinimumAddress;// Offset=0x8 Size=0x8
                union _LARGE_INTEGER MaximumAddress;// Offset=0x10 Size=0x8
            };
            struct _IO_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-Memory> Memory;// Offset=0x0 Size=0x18
            struct <unnamed-type-Interrupt>// Size=0x18 (Id=3874)
            {
                unsigned long MinimumVector;// Offset=0x0 Size=0x4
                unsigned long MaximumVector;// Offset=0x4 Size=0x4
                unsigned short AffinityPolicy;// Offset=0x8 Size=0x2
                unsigned short Group;// Offset=0xa Size=0x2
                enum _IRQ_PRIORITY PriorityPolicy;// Offset=0xc Size=0x4
                unsigned long long TargetedProcessors;// Offset=0x10 Size=0x8
            };
            struct _IO_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-Interrupt> Interrupt;// Offset=0x0 Size=0x18
            struct <unnamed-type-Dma>// Size=0x8 (Id=3882)
            {
                unsigned long MinimumChannel;// Offset=0x0 Size=0x4
                unsigned long MaximumChannel;// Offset=0x4 Size=0x4
            };
            struct _IO_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-Dma> Dma;// Offset=0x0 Size=0x8
            struct <unnamed-type-DmaV3>// Size=0x10 (Id=3886)
            {
                unsigned long RequestLine;// Offset=0x0 Size=0x4
                unsigned long Reserved;// Offset=0x4 Size=0x4
                unsigned long Channel;// Offset=0x8 Size=0x4
                unsigned long TransferWidth;// Offset=0xc Size=0x4
            };
            struct _IO_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-DmaV3> DmaV3;// Offset=0x0 Size=0x10
            struct <unnamed-type-Generic>// Size=0x18 (Id=3892)
            {
                unsigned long Length;// Offset=0x0 Size=0x4
                unsigned long Alignment;// Offset=0x4 Size=0x4
                union _LARGE_INTEGER MinimumAddress;// Offset=0x8 Size=0x8
                union _LARGE_INTEGER MaximumAddress;// Offset=0x10 Size=0x8
            };
            struct _IO_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-Generic> Generic;// Offset=0x0 Size=0x18
            struct <unnamed-type-DevicePrivate>// Size=0xc (Id=3898)
            {
                unsigned long Data[3];// Offset=0x0 Size=0xc
            };
            struct _IO_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-DevicePrivate> DevicePrivate;// Offset=0x0 Size=0xc
            struct <unnamed-type-BusNumber>// Size=0x10 (Id=3901)
            {
                unsigned long Length;// Offset=0x0 Size=0x4
                unsigned long MinBusNumber;// Offset=0x4 Size=0x4
                unsigned long MaxBusNumber;// Offset=0x8 Size=0x4
                unsigned long Reserved;// Offset=0xc Size=0x4
            };
            struct _IO_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-BusNumber> BusNumber;// Offset=0x0 Size=0x10
            struct <unnamed-type-ConfigData>// Size=0xc (Id=3907)
            {
                unsigned long Priority;// Offset=0x0 Size=0x4
                unsigned long Reserved1;// Offset=0x4 Size=0x4
                unsigned long Reserved2;// Offset=0x8 Size=0x4
            };
            struct _IO_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-ConfigData> ConfigData;// Offset=0x0 Size=0xc
            struct <unnamed-type-Memory40>// Size=0x18 (Id=3912)
            {
                unsigned long Length40;// Offset=0x0 Size=0x4
                unsigned long Alignment40;// Offset=0x4 Size=0x4
                union _LARGE_INTEGER MinimumAddress;// Offset=0x8 Size=0x8
                union _LARGE_INTEGER MaximumAddress;// Offset=0x10 Size=0x8
            };
            struct _IO_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-Memory40> Memory40;// Offset=0x0 Size=0x18
            struct <unnamed-type-Memory48>// Size=0x18 (Id=3918)
            {
                unsigned long Length48;// Offset=0x0 Size=0x4
                unsigned long Alignment48;// Offset=0x4 Size=0x4
                union _LARGE_INTEGER MinimumAddress;// Offset=0x8 Size=0x8
                union _LARGE_INTEGER MaximumAddress;// Offset=0x10 Size=0x8
            };
            struct _IO_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-Memory48> Memory48;// Offset=0x0 Size=0x18
            struct <unnamed-type-Memory64>// Size=0x18 (Id=3924)
            {
                unsigned long Length64;// Offset=0x0 Size=0x4
                unsigned long Alignment64;// Offset=0x4 Size=0x4
                union _LARGE_INTEGER MinimumAddress;// Offset=0x8 Size=0x8
                union _LARGE_INTEGER MaximumAddress;// Offset=0x10 Size=0x8
            };
            struct _IO_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-Memory64> Memory64;// Offset=0x0 Size=0x18
            struct <unnamed-type-Connection>// Size=0xc (Id=3930)
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
