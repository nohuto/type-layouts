struct _unnamed_41// Size=0x8 (Id=41)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=247)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_41 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _unnamed_817// Size=0x18 (Id=817)
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

struct _unnamed_819// Size=0x18 (Id=819)
{
    unsigned long MinimumVector;// Offset=0x0 Size=0x4
    unsigned long MaximumVector;// Offset=0x4 Size=0x4
    unsigned short AffinityPolicy;// Offset=0x8 Size=0x2
    unsigned short Group;// Offset=0xa Size=0x2
    enum _IRQ_PRIORITY PriorityPolicy;// Offset=0xc Size=0x4
    unsigned long long TargetedProcessors;// Offset=0x10 Size=0x8
};

struct _unnamed_820// Size=0x8 (Id=820)
{
    unsigned long MinimumChannel;// Offset=0x0 Size=0x4
    unsigned long MaximumChannel;// Offset=0x4 Size=0x4
};

struct _unnamed_821// Size=0x10 (Id=821)
{
    unsigned long RequestLine;// Offset=0x0 Size=0x4
    unsigned long Reserved;// Offset=0x4 Size=0x4
    unsigned long Channel;// Offset=0x8 Size=0x4
    unsigned long TransferWidth;// Offset=0xc Size=0x4
};

struct _unnamed_822// Size=0xc (Id=822)
{
    unsigned long Data[3];// Offset=0x0 Size=0xc
};

struct _unnamed_823// Size=0x10 (Id=823)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    unsigned long MinBusNumber;// Offset=0x4 Size=0x4
    unsigned long MaxBusNumber;// Offset=0x8 Size=0x4
    unsigned long Reserved;// Offset=0xc Size=0x4
};

struct _unnamed_824// Size=0xc (Id=824)
{
    unsigned long Priority;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Reserved2;// Offset=0x8 Size=0x4
};

struct _unnamed_825// Size=0x18 (Id=825)
{
    unsigned long Length40;// Offset=0x0 Size=0x4
    unsigned long Alignment40;// Offset=0x4 Size=0x4
    union _LARGE_INTEGER MinimumAddress;// Offset=0x8 Size=0x8
    union _LARGE_INTEGER MaximumAddress;// Offset=0x10 Size=0x8
};

struct _unnamed_826// Size=0x18 (Id=826)
{
    unsigned long Length48;// Offset=0x0 Size=0x4
    unsigned long Alignment48;// Offset=0x4 Size=0x4
    union _LARGE_INTEGER MinimumAddress;// Offset=0x8 Size=0x8
    union _LARGE_INTEGER MaximumAddress;// Offset=0x10 Size=0x8
};

struct _unnamed_827// Size=0x18 (Id=827)
{
    unsigned long Length64;// Offset=0x0 Size=0x4
    unsigned long Alignment64;// Offset=0x4 Size=0x4
    union _LARGE_INTEGER MinimumAddress;// Offset=0x8 Size=0x8
    union _LARGE_INTEGER MaximumAddress;// Offset=0x10 Size=0x8
};

struct _unnamed_828// Size=0xc (Id=828)
{
    unsigned char Class;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char Reserved1;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned long IdLowPart;// Offset=0x4 Size=0x4
    unsigned long IdHighPart;// Offset=0x8 Size=0x4
};

union _unnamed_829// Size=0x18 (Id=829)
{
    union // Size=0x18 (Id=0)
    {
        struct _unnamed_817 Port;// Offset=0x0 Size=0x18
        struct _unnamed_817 Memory;// Offset=0x0 Size=0x18
        struct _unnamed_819 Interrupt;// Offset=0x0 Size=0x18
        struct _unnamed_820 Dma;// Offset=0x0 Size=0x8
        struct _unnamed_821 DmaV3;// Offset=0x0 Size=0x10
        struct _unnamed_817 Generic;// Offset=0x0 Size=0x18
        struct _unnamed_822 DevicePrivate;// Offset=0x0 Size=0xc
        struct _unnamed_823 BusNumber;// Offset=0x0 Size=0x10
        struct _unnamed_824 ConfigData;// Offset=0x0 Size=0xc
        struct _unnamed_825 Memory40;// Offset=0x0 Size=0x18
        struct _unnamed_826 Memory48;// Offset=0x0 Size=0x18
        struct _unnamed_827 Memory64;// Offset=0x0 Size=0x18
        struct _unnamed_828 Connection;// Offset=0x0 Size=0xc
    };
};
