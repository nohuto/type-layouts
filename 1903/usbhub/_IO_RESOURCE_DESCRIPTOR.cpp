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

struct _anonymous_386// Size=0x18 (Id=386)
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

struct _anonymous_389// Size=0x18 (Id=389)
{
    unsigned long MinimumVector;// Offset=0x0 Size=0x4
    unsigned long MaximumVector;// Offset=0x4 Size=0x4
    enum _IRQ_DEVICE_POLICY AffinityPolicy;// Offset=0x8 Size=0x4
    enum _IRQ_PRIORITY PriorityPolicy;// Offset=0xc Size=0x4
    unsigned long long TargetedProcessors;// Offset=0x10 Size=0x8
};

struct _anonymous_390// Size=0x8 (Id=390)
{
    unsigned long MinimumChannel;// Offset=0x0 Size=0x4
    unsigned long MaximumChannel;// Offset=0x4 Size=0x4
};

struct _anonymous_391// Size=0x10 (Id=391)
{
    unsigned long RequestLine;// Offset=0x0 Size=0x4
    unsigned long Reserved;// Offset=0x4 Size=0x4
    unsigned long Channel;// Offset=0x8 Size=0x4
    unsigned long TransferWidth;// Offset=0xc Size=0x4
};

struct _anonymous_392// Size=0xc (Id=392)
{
    unsigned long Data[3];// Offset=0x0 Size=0xc
};

struct _anonymous_393// Size=0x10 (Id=393)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    unsigned long MinBusNumber;// Offset=0x4 Size=0x4
    unsigned long MaxBusNumber;// Offset=0x8 Size=0x4
    unsigned long Reserved;// Offset=0xc Size=0x4
};

struct _anonymous_394// Size=0xc (Id=394)
{
    unsigned long Priority;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Reserved2;// Offset=0x8 Size=0x4
};

struct _anonymous_395// Size=0x18 (Id=395)
{
    unsigned long Length40;// Offset=0x0 Size=0x4
    unsigned long Alignment40;// Offset=0x4 Size=0x4
    union _LARGE_INTEGER MinimumAddress;// Offset=0x8 Size=0x8
    union _LARGE_INTEGER MaximumAddress;// Offset=0x10 Size=0x8
};

struct _anonymous_396// Size=0x18 (Id=396)
{
    unsigned long Length48;// Offset=0x0 Size=0x4
    unsigned long Alignment48;// Offset=0x4 Size=0x4
    union _LARGE_INTEGER MinimumAddress;// Offset=0x8 Size=0x8
    union _LARGE_INTEGER MaximumAddress;// Offset=0x10 Size=0x8
};

struct _anonymous_397// Size=0x18 (Id=397)
{
    unsigned long Length64;// Offset=0x0 Size=0x4
    unsigned long Alignment64;// Offset=0x4 Size=0x4
    union _LARGE_INTEGER MinimumAddress;// Offset=0x8 Size=0x8
    union _LARGE_INTEGER MaximumAddress;// Offset=0x10 Size=0x8
};

struct _anonymous_398// Size=0xc (Id=398)
{
    unsigned char Class;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char Reserved1;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned long IdLowPart;// Offset=0x4 Size=0x4
    unsigned long IdHighPart;// Offset=0x8 Size=0x4
};

union _anonymous_399// Size=0x18 (Id=399)
{
    union // Size=0x18 (Id=0)
    {
        struct _anonymous_386 Port;// Offset=0x0 Size=0x18
        struct _anonymous_386 Memory;// Offset=0x0 Size=0x18
        struct _anonymous_389 Interrupt;// Offset=0x0 Size=0x18
        struct _anonymous_390 Dma;// Offset=0x0 Size=0x8
        struct _anonymous_391 DmaV3;// Offset=0x0 Size=0x10
        struct _anonymous_386 Generic;// Offset=0x0 Size=0x18
        struct _anonymous_392 DevicePrivate;// Offset=0x0 Size=0xc
        struct _anonymous_393 BusNumber;// Offset=0x0 Size=0x10
        struct _anonymous_394 ConfigData;// Offset=0x0 Size=0xc
        struct _anonymous_395 Memory40;// Offset=0x0 Size=0x18
        struct _anonymous_396 Memory48;// Offset=0x0 Size=0x18
        struct _anonymous_397 Memory64;// Offset=0x0 Size=0x18
        struct _anonymous_398 Connection;// Offset=0x0 Size=0xc
    };
};

struct _IO_RESOURCE_DESCRIPTOR// Size=0x20 (Id=400)
{
    unsigned char Option;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char ShareDisposition;// Offset=0x2 Size=0x1
    unsigned char Spare1;// Offset=0x3 Size=0x1
    unsigned short Flags;// Offset=0x4 Size=0x2
    unsigned short Spare2;// Offset=0x6 Size=0x2
    union _anonymous_399 u;// Offset=0x8 Size=0x18
};
