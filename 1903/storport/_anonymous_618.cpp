struct _anonymous_10// Size=0x8 (Id=10)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=11)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _anonymous_10 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _anonymous_608// Size=0x18 (Id=608)
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

struct _anonymous_610// Size=0x18 (Id=610)
{
    unsigned long MinimumVector;// Offset=0x0 Size=0x4
    unsigned long MaximumVector;// Offset=0x4 Size=0x4
    unsigned short AffinityPolicy;// Offset=0x8 Size=0x2
    unsigned short Group;// Offset=0xa Size=0x2
    enum _IRQ_PRIORITY PriorityPolicy;// Offset=0xc Size=0x4
    unsigned long long TargetedProcessors;// Offset=0x10 Size=0x8
};

struct _anonymous_611// Size=0x8 (Id=611)
{
    unsigned long MinimumChannel;// Offset=0x0 Size=0x4
    unsigned long MaximumChannel;// Offset=0x4 Size=0x4
};

struct _anonymous_612// Size=0x10 (Id=612)
{
    unsigned long RequestLine;// Offset=0x0 Size=0x4
    unsigned long Reserved;// Offset=0x4 Size=0x4
    unsigned long Channel;// Offset=0x8 Size=0x4
    unsigned long TransferWidth;// Offset=0xc Size=0x4
};

struct _anonymous_583// Size=0xc (Id=583)
{
    unsigned long Data[3];// Offset=0x0 Size=0xc
};

struct _anonymous_613// Size=0x10 (Id=613)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    unsigned long MinBusNumber;// Offset=0x4 Size=0x4
    unsigned long MaxBusNumber;// Offset=0x8 Size=0x4
    unsigned long Reserved;// Offset=0xc Size=0x4
};

struct _anonymous_614// Size=0xc (Id=614)
{
    unsigned long Priority;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Reserved2;// Offset=0x8 Size=0x4
};

struct _anonymous_615// Size=0x18 (Id=615)
{
    unsigned long Length40;// Offset=0x0 Size=0x4
    unsigned long Alignment40;// Offset=0x4 Size=0x4
    union _LARGE_INTEGER MinimumAddress;// Offset=0x8 Size=0x8
    union _LARGE_INTEGER MaximumAddress;// Offset=0x10 Size=0x8
};

struct _anonymous_616// Size=0x18 (Id=616)
{
    unsigned long Length48;// Offset=0x0 Size=0x4
    unsigned long Alignment48;// Offset=0x4 Size=0x4
    union _LARGE_INTEGER MinimumAddress;// Offset=0x8 Size=0x8
    union _LARGE_INTEGER MaximumAddress;// Offset=0x10 Size=0x8
};

struct _anonymous_617// Size=0x18 (Id=617)
{
    unsigned long Length64;// Offset=0x0 Size=0x4
    unsigned long Alignment64;// Offset=0x4 Size=0x4
    union _LARGE_INTEGER MinimumAddress;// Offset=0x8 Size=0x8
    union _LARGE_INTEGER MaximumAddress;// Offset=0x10 Size=0x8
};

struct _anonymous_589// Size=0xc (Id=589)
{
    unsigned char Class;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char Reserved1;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned long IdLowPart;// Offset=0x4 Size=0x4
    unsigned long IdHighPart;// Offset=0x8 Size=0x4
};

union _anonymous_618// Size=0x18 (Id=618)
{
    union // Size=0x18 (Id=0)
    {
        struct _anonymous_608 Port;// Offset=0x0 Size=0x18
        struct _anonymous_608 Memory;// Offset=0x0 Size=0x18
        struct _anonymous_610 Interrupt;// Offset=0x0 Size=0x18
        struct _anonymous_611 Dma;// Offset=0x0 Size=0x8
        struct _anonymous_612 DmaV3;// Offset=0x0 Size=0x10
        struct _anonymous_608 Generic;// Offset=0x0 Size=0x18
        struct _anonymous_583 DevicePrivate;// Offset=0x0 Size=0xc
        struct _anonymous_613 BusNumber;// Offset=0x0 Size=0x10
        struct _anonymous_614 ConfigData;// Offset=0x0 Size=0xc
        struct _anonymous_615 Memory40;// Offset=0x0 Size=0x18
        struct _anonymous_616 Memory48;// Offset=0x0 Size=0x18
        struct _anonymous_617 Memory64;// Offset=0x0 Size=0x18
        struct _anonymous_589 Connection;// Offset=0x0 Size=0xc
    };
};
