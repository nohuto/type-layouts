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

struct _unnamed_216// Size=0x18 (Id=216)
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
    IrqPolicySpreadMessagesAcrossAllProcessors=5
};

enum _IRQ_PRIORITY
{
    IrqPriorityUndefined=0,
    IrqPriorityLow=1,
    IrqPriorityNormal=2,
    IrqPriorityHigh=3
};

struct _unnamed_219// Size=0x18 (Id=219)
{
    unsigned long MinimumVector;// Offset=0x0 Size=0x4
    unsigned long MaximumVector;// Offset=0x4 Size=0x4
    enum _IRQ_DEVICE_POLICY AffinityPolicy;// Offset=0x8 Size=0x4
    enum _IRQ_PRIORITY PriorityPolicy;// Offset=0xc Size=0x4
    unsigned long long TargetedProcessors;// Offset=0x10 Size=0x8
};

struct _unnamed_220// Size=0x8 (Id=220)
{
    unsigned long MinimumChannel;// Offset=0x0 Size=0x4
    unsigned long MaximumChannel;// Offset=0x4 Size=0x4
};

struct _unnamed_221// Size=0x10 (Id=221)
{
    unsigned long RequestLine;// Offset=0x0 Size=0x4
    unsigned long Reserved;// Offset=0x4 Size=0x4
    unsigned long Channel;// Offset=0x8 Size=0x4
    unsigned long TransferWidth;// Offset=0xc Size=0x4
};

struct _unnamed_222// Size=0xc (Id=222)
{
    unsigned long Data[3];// Offset=0x0 Size=0xc
};

struct _unnamed_223// Size=0x10 (Id=223)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    unsigned long MinBusNumber;// Offset=0x4 Size=0x4
    unsigned long MaxBusNumber;// Offset=0x8 Size=0x4
    unsigned long Reserved;// Offset=0xc Size=0x4
};

struct _unnamed_224// Size=0xc (Id=224)
{
    unsigned long Priority;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Reserved2;// Offset=0x8 Size=0x4
};

struct _unnamed_225// Size=0x18 (Id=225)
{
    unsigned long Length40;// Offset=0x0 Size=0x4
    unsigned long Alignment40;// Offset=0x4 Size=0x4
    union _LARGE_INTEGER MinimumAddress;// Offset=0x8 Size=0x8
    union _LARGE_INTEGER MaximumAddress;// Offset=0x10 Size=0x8
};

struct _unnamed_226// Size=0x18 (Id=226)
{
    unsigned long Length48;// Offset=0x0 Size=0x4
    unsigned long Alignment48;// Offset=0x4 Size=0x4
    union _LARGE_INTEGER MinimumAddress;// Offset=0x8 Size=0x8
    union _LARGE_INTEGER MaximumAddress;// Offset=0x10 Size=0x8
};

struct _unnamed_227// Size=0x18 (Id=227)
{
    unsigned long Length64;// Offset=0x0 Size=0x4
    unsigned long Alignment64;// Offset=0x4 Size=0x4
    union _LARGE_INTEGER MinimumAddress;// Offset=0x8 Size=0x8
    union _LARGE_INTEGER MaximumAddress;// Offset=0x10 Size=0x8
};

struct _unnamed_228// Size=0xc (Id=228)
{
    unsigned char Class;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char Reserved1;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned long IdLowPart;// Offset=0x4 Size=0x4
    unsigned long IdHighPart;// Offset=0x8 Size=0x4
};

union _unnamed_229// Size=0x18 (Id=229)
{
    union // Size=0x18 (Id=0)
    {
        struct _unnamed_216 Port;// Offset=0x0 Size=0x18
        struct _unnamed_216 Memory;// Offset=0x0 Size=0x18
        struct _unnamed_219 Interrupt;// Offset=0x0 Size=0x18
        struct _unnamed_220 Dma;// Offset=0x0 Size=0x8
        struct _unnamed_221 DmaV3;// Offset=0x0 Size=0x10
        struct _unnamed_216 Generic;// Offset=0x0 Size=0x18
        struct _unnamed_222 DevicePrivate;// Offset=0x0 Size=0xc
        struct _unnamed_223 BusNumber;// Offset=0x0 Size=0x10
        struct _unnamed_224 ConfigData;// Offset=0x0 Size=0xc
        struct _unnamed_225 Memory40;// Offset=0x0 Size=0x18
        struct _unnamed_226 Memory48;// Offset=0x0 Size=0x18
        struct _unnamed_227 Memory64;// Offset=0x0 Size=0x18
        struct _unnamed_228 Connection;// Offset=0x0 Size=0xc
    };
};
