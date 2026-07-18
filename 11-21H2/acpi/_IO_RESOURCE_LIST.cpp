struct _unnamed_44// Size=0x8 (Id=44)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=102)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_44 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _unnamed_663// Size=0x18 (Id=663)
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

struct _unnamed_665// Size=0x18 (Id=665)
{
    unsigned long MinimumVector;// Offset=0x0 Size=0x4
    unsigned long MaximumVector;// Offset=0x4 Size=0x4
    unsigned short AffinityPolicy;// Offset=0x8 Size=0x2
    unsigned short Group;// Offset=0xa Size=0x2
    enum _IRQ_PRIORITY PriorityPolicy;// Offset=0xc Size=0x4
    unsigned long long TargetedProcessors;// Offset=0x10 Size=0x8
};

struct _unnamed_666// Size=0x8 (Id=666)
{
    unsigned long MinimumChannel;// Offset=0x0 Size=0x4
    unsigned long MaximumChannel;// Offset=0x4 Size=0x4
};

struct _unnamed_667// Size=0x10 (Id=667)
{
    unsigned long RequestLine;// Offset=0x0 Size=0x4
    unsigned long Reserved;// Offset=0x4 Size=0x4
    unsigned long Channel;// Offset=0x8 Size=0x4
    unsigned long TransferWidth;// Offset=0xc Size=0x4
};

struct _unnamed_668// Size=0xc (Id=668)
{
    unsigned long Data[3];// Offset=0x0 Size=0xc
};

struct _unnamed_669// Size=0x10 (Id=669)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    unsigned long MinBusNumber;// Offset=0x4 Size=0x4
    unsigned long MaxBusNumber;// Offset=0x8 Size=0x4
    unsigned long Reserved;// Offset=0xc Size=0x4
};

struct _unnamed_670// Size=0xc (Id=670)
{
    unsigned long Priority;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Reserved2;// Offset=0x8 Size=0x4
};

struct _unnamed_671// Size=0x18 (Id=671)
{
    unsigned long Length40;// Offset=0x0 Size=0x4
    unsigned long Alignment40;// Offset=0x4 Size=0x4
    union _LARGE_INTEGER MinimumAddress;// Offset=0x8 Size=0x8
    union _LARGE_INTEGER MaximumAddress;// Offset=0x10 Size=0x8
};

struct _unnamed_672// Size=0x18 (Id=672)
{
    unsigned long Length48;// Offset=0x0 Size=0x4
    unsigned long Alignment48;// Offset=0x4 Size=0x4
    union _LARGE_INTEGER MinimumAddress;// Offset=0x8 Size=0x8
    union _LARGE_INTEGER MaximumAddress;// Offset=0x10 Size=0x8
};

struct _unnamed_673// Size=0x18 (Id=673)
{
    unsigned long Length64;// Offset=0x0 Size=0x4
    unsigned long Alignment64;// Offset=0x4 Size=0x4
    union _LARGE_INTEGER MinimumAddress;// Offset=0x8 Size=0x8
    union _LARGE_INTEGER MaximumAddress;// Offset=0x10 Size=0x8
};

struct _unnamed_674// Size=0xc (Id=674)
{
    unsigned char Class;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char Reserved1;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned long IdLowPart;// Offset=0x4 Size=0x4
    unsigned long IdHighPart;// Offset=0x8 Size=0x4
};

union _unnamed_675// Size=0x18 (Id=675)
{
    union // Size=0x18 (Id=0)
    {
        struct _unnamed_663 Port;// Offset=0x0 Size=0x18
        struct _unnamed_663 Memory;// Offset=0x0 Size=0x18
        struct _unnamed_665 Interrupt;// Offset=0x0 Size=0x18
        struct _unnamed_666 Dma;// Offset=0x0 Size=0x8
        struct _unnamed_667 DmaV3;// Offset=0x0 Size=0x10
        struct _unnamed_663 Generic;// Offset=0x0 Size=0x18
        struct _unnamed_668 DevicePrivate;// Offset=0x0 Size=0xc
        struct _unnamed_669 BusNumber;// Offset=0x0 Size=0x10
        struct _unnamed_670 ConfigData;// Offset=0x0 Size=0xc
        struct _unnamed_671 Memory40;// Offset=0x0 Size=0x18
        struct _unnamed_672 Memory48;// Offset=0x0 Size=0x18
        struct _unnamed_673 Memory64;// Offset=0x0 Size=0x18
        struct _unnamed_674 Connection;// Offset=0x0 Size=0xc
    };
};

struct _IO_RESOURCE_DESCRIPTOR// Size=0x20 (Id=676)
{
    unsigned char Option;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char ShareDisposition;// Offset=0x2 Size=0x1
    unsigned char Spare1;// Offset=0x3 Size=0x1
    unsigned short Flags;// Offset=0x4 Size=0x2
    unsigned short Spare2;// Offset=0x6 Size=0x2
    union _unnamed_675 u;// Offset=0x8 Size=0x18
};

struct _IO_RESOURCE_LIST// Size=0x28 (Id=631)
{
    unsigned short Version;// Offset=0x0 Size=0x2
    unsigned short Revision;// Offset=0x2 Size=0x2
    unsigned long Count;// Offset=0x4 Size=0x4
    struct _IO_RESOURCE_DESCRIPTOR Descriptors[1];// Offset=0x8 Size=0x20
};
