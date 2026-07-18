struct _anonymous_31// Size=0x8 (Id=31)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=83)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _anonymous_31 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _anonymous_1623// Size=0x18 (Id=1623)
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

struct _anonymous_1625// Size=0x18 (Id=1625)
{
    unsigned long MinimumVector;// Offset=0x0 Size=0x4
    unsigned long MaximumVector;// Offset=0x4 Size=0x4
    unsigned short AffinityPolicy;// Offset=0x8 Size=0x2
    unsigned short Group;// Offset=0xa Size=0x2
    enum _IRQ_PRIORITY PriorityPolicy;// Offset=0xc Size=0x4
    unsigned long long TargetedProcessors;// Offset=0x10 Size=0x8
};

struct _anonymous_1626// Size=0x8 (Id=1626)
{
    unsigned long MinimumChannel;// Offset=0x0 Size=0x4
    unsigned long MaximumChannel;// Offset=0x4 Size=0x4
};

struct _anonymous_1627// Size=0x10 (Id=1627)
{
    unsigned long RequestLine;// Offset=0x0 Size=0x4
    unsigned long Reserved;// Offset=0x4 Size=0x4
    unsigned long Channel;// Offset=0x8 Size=0x4
    unsigned long TransferWidth;// Offset=0xc Size=0x4
};

struct _anonymous_1628// Size=0xc (Id=1628)
{
    unsigned long Data[3];// Offset=0x0 Size=0xc
};

struct _anonymous_1629// Size=0x10 (Id=1629)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    unsigned long MinBusNumber;// Offset=0x4 Size=0x4
    unsigned long MaxBusNumber;// Offset=0x8 Size=0x4
    unsigned long Reserved;// Offset=0xc Size=0x4
};

struct _anonymous_1630// Size=0xc (Id=1630)
{
    unsigned long Priority;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Reserved2;// Offset=0x8 Size=0x4
};

struct _anonymous_1631// Size=0x18 (Id=1631)
{
    unsigned long Length40;// Offset=0x0 Size=0x4
    unsigned long Alignment40;// Offset=0x4 Size=0x4
    union _LARGE_INTEGER MinimumAddress;// Offset=0x8 Size=0x8
    union _LARGE_INTEGER MaximumAddress;// Offset=0x10 Size=0x8
};

struct _anonymous_1632// Size=0x18 (Id=1632)
{
    unsigned long Length48;// Offset=0x0 Size=0x4
    unsigned long Alignment48;// Offset=0x4 Size=0x4
    union _LARGE_INTEGER MinimumAddress;// Offset=0x8 Size=0x8
    union _LARGE_INTEGER MaximumAddress;// Offset=0x10 Size=0x8
};

struct _anonymous_1633// Size=0x18 (Id=1633)
{
    unsigned long Length64;// Offset=0x0 Size=0x4
    unsigned long Alignment64;// Offset=0x4 Size=0x4
    union _LARGE_INTEGER MinimumAddress;// Offset=0x8 Size=0x8
    union _LARGE_INTEGER MaximumAddress;// Offset=0x10 Size=0x8
};

struct _anonymous_1634// Size=0xc (Id=1634)
{
    unsigned char Class;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char Reserved1;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned long IdLowPart;// Offset=0x4 Size=0x4
    unsigned long IdHighPart;// Offset=0x8 Size=0x4
};

union _anonymous_1635// Size=0x18 (Id=1635)
{
    union // Size=0x18 (Id=0)
    {
        struct _anonymous_1623 Port;// Offset=0x0 Size=0x18
        struct _anonymous_1623 Memory;// Offset=0x0 Size=0x18
        struct _anonymous_1625 Interrupt;// Offset=0x0 Size=0x18
        struct _anonymous_1626 Dma;// Offset=0x0 Size=0x8
        struct _anonymous_1627 DmaV3;// Offset=0x0 Size=0x10
        struct _anonymous_1623 Generic;// Offset=0x0 Size=0x18
        struct _anonymous_1628 DevicePrivate;// Offset=0x0 Size=0xc
        struct _anonymous_1629 BusNumber;// Offset=0x0 Size=0x10
        struct _anonymous_1630 ConfigData;// Offset=0x0 Size=0xc
        struct _anonymous_1631 Memory40;// Offset=0x0 Size=0x18
        struct _anonymous_1632 Memory48;// Offset=0x0 Size=0x18
        struct _anonymous_1633 Memory64;// Offset=0x0 Size=0x18
        struct _anonymous_1634 Connection;// Offset=0x0 Size=0xc
    };
};
