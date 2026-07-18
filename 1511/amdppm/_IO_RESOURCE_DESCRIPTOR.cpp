struct _unnamed_28// Size=0x8 (Id=28)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=29)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_28 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _unnamed_255// Size=0x18 (Id=255)
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

struct _unnamed_257// Size=0x18 (Id=257)
{
    unsigned long MinimumVector;// Offset=0x0 Size=0x4
    unsigned long MaximumVector;// Offset=0x4 Size=0x4
    unsigned short AffinityPolicy;// Offset=0x8 Size=0x2
    unsigned short Group;// Offset=0xa Size=0x2
    enum _IRQ_PRIORITY PriorityPolicy;// Offset=0xc Size=0x4
    unsigned long long TargetedProcessors;// Offset=0x10 Size=0x8
};

struct _unnamed_258// Size=0x8 (Id=258)
{
    unsigned long MinimumChannel;// Offset=0x0 Size=0x4
    unsigned long MaximumChannel;// Offset=0x4 Size=0x4
};

struct _unnamed_259// Size=0x10 (Id=259)
{
    unsigned long RequestLine;// Offset=0x0 Size=0x4
    unsigned long Reserved;// Offset=0x4 Size=0x4
    unsigned long Channel;// Offset=0x8 Size=0x4
    unsigned long TransferWidth;// Offset=0xc Size=0x4
};

struct _unnamed_260// Size=0xc (Id=260)
{
    unsigned long Data[3];// Offset=0x0 Size=0xc
};

struct _unnamed_261// Size=0x10 (Id=261)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    unsigned long MinBusNumber;// Offset=0x4 Size=0x4
    unsigned long MaxBusNumber;// Offset=0x8 Size=0x4
    unsigned long Reserved;// Offset=0xc Size=0x4
};

struct _unnamed_262// Size=0xc (Id=262)
{
    unsigned long Priority;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Reserved2;// Offset=0x8 Size=0x4
};

struct _unnamed_263// Size=0x18 (Id=263)
{
    unsigned long Length40;// Offset=0x0 Size=0x4
    unsigned long Alignment40;// Offset=0x4 Size=0x4
    union _LARGE_INTEGER MinimumAddress;// Offset=0x8 Size=0x8
    union _LARGE_INTEGER MaximumAddress;// Offset=0x10 Size=0x8
};

struct _unnamed_264// Size=0x18 (Id=264)
{
    unsigned long Length48;// Offset=0x0 Size=0x4
    unsigned long Alignment48;// Offset=0x4 Size=0x4
    union _LARGE_INTEGER MinimumAddress;// Offset=0x8 Size=0x8
    union _LARGE_INTEGER MaximumAddress;// Offset=0x10 Size=0x8
};

struct _unnamed_265// Size=0x18 (Id=265)
{
    unsigned long Length64;// Offset=0x0 Size=0x4
    unsigned long Alignment64;// Offset=0x4 Size=0x4
    union _LARGE_INTEGER MinimumAddress;// Offset=0x8 Size=0x8
    union _LARGE_INTEGER MaximumAddress;// Offset=0x10 Size=0x8
};

struct _unnamed_266// Size=0xc (Id=266)
{
    unsigned char Class;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char Reserved1;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned long IdLowPart;// Offset=0x4 Size=0x4
    unsigned long IdHighPart;// Offset=0x8 Size=0x4
};

union _unnamed_267// Size=0x18 (Id=267)
{
    union // Size=0x18 (Id=0)
    {
        struct _unnamed_255 Port;// Offset=0x0 Size=0x18
        struct _unnamed_255 Memory;// Offset=0x0 Size=0x18
        struct _unnamed_257 Interrupt;// Offset=0x0 Size=0x18
        struct _unnamed_258 Dma;// Offset=0x0 Size=0x8
        struct _unnamed_259 DmaV3;// Offset=0x0 Size=0x10
        struct _unnamed_255 Generic;// Offset=0x0 Size=0x18
        struct _unnamed_260 DevicePrivate;// Offset=0x0 Size=0xc
        struct _unnamed_261 BusNumber;// Offset=0x0 Size=0x10
        struct _unnamed_262 ConfigData;// Offset=0x0 Size=0xc
        struct _unnamed_263 Memory40;// Offset=0x0 Size=0x18
        struct _unnamed_264 Memory48;// Offset=0x0 Size=0x18
        struct _unnamed_265 Memory64;// Offset=0x0 Size=0x18
        struct _unnamed_266 Connection;// Offset=0x0 Size=0xc
    };
};

struct _IO_RESOURCE_DESCRIPTOR// Size=0x20 (Id=268)
{
    unsigned char Option;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char ShareDisposition;// Offset=0x2 Size=0x1
    unsigned char Spare1;// Offset=0x3 Size=0x1
    unsigned short Flags;// Offset=0x4 Size=0x2
    unsigned short Spare2;// Offset=0x6 Size=0x2
    union _unnamed_267 u;// Offset=0x8 Size=0x18
};
