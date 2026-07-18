struct _anonymous_31// Size=0x8 (Id=31)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=32)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _anonymous_31 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _anonymous_678// Size=0xc (Id=678)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _anonymous_679// Size=0x10 (Id=679)
{
    unsigned short Level;// Offset=0x0 Size=0x2
    unsigned short Group;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _anonymous_680// Size=0x10 (Id=680)
{
    unsigned short Group;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _anonymous_681// Size=0x10 (Id=681)
{
    union // Size=0x10 (Id=0)
    {
        struct _anonymous_680 Raw;// Offset=0x0 Size=0x10
        struct _anonymous_679 Translated;// Offset=0x0 Size=0x10
    };
};

struct _anonymous_682// Size=0xc (Id=682)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long Port;// Offset=0x4 Size=0x4
    unsigned long Reserved1;// Offset=0x8 Size=0x4
};

struct _anonymous_683// Size=0xc (Id=683)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long RequestLine;// Offset=0x4 Size=0x4
    unsigned char TransferWidth;// Offset=0x8 Size=0x1
    unsigned char Reserved1;// Offset=0x9 Size=0x1
    unsigned char Reserved2;// Offset=0xa Size=0x1
    unsigned char Reserved3;// Offset=0xb Size=0x1
};

struct _anonymous_584// Size=0xc (Id=584)
{
    unsigned long Data[3];// Offset=0x0 Size=0xc
};

struct _anonymous_684// Size=0xc (Id=684)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned long Reserved;// Offset=0x8 Size=0x4
};

struct _anonymous_685// Size=0xc (Id=685)
{
    unsigned long DataSize;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Reserved2;// Offset=0x8 Size=0x4
};

struct _anonymous_686// Size=0xc (Id=686)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length40;// Offset=0x8 Size=0x4
};

struct _anonymous_687// Size=0xc (Id=687)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length48;// Offset=0x8 Size=0x4
};

struct _anonymous_688// Size=0xc (Id=688)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length64;// Offset=0x8 Size=0x4
};

struct _anonymous_590// Size=0xc (Id=590)
{
    unsigned char Class;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char Reserved1;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned long IdLowPart;// Offset=0x4 Size=0x4
    unsigned long IdHighPart;// Offset=0x8 Size=0x4
};

union _anonymous_689// Size=0x10 (Id=689)
{
    union // Size=0x10 (Id=0)
    {
        struct _anonymous_678 Generic;// Offset=0x0 Size=0xc
        struct _anonymous_678 Port;// Offset=0x0 Size=0xc
        struct _anonymous_679 Interrupt;// Offset=0x0 Size=0x10
        struct _anonymous_681 MessageInterrupt;// Offset=0x0 Size=0x10
        struct _anonymous_678 Memory;// Offset=0x0 Size=0xc
        struct _anonymous_682 Dma;// Offset=0x0 Size=0xc
        struct _anonymous_683 DmaV3;// Offset=0x0 Size=0xc
        struct _anonymous_584 DevicePrivate;// Offset=0x0 Size=0xc
        struct _anonymous_684 BusNumber;// Offset=0x0 Size=0xc
        struct _anonymous_685 DeviceSpecificData;// Offset=0x0 Size=0xc
        struct _anonymous_686 Memory40;// Offset=0x0 Size=0xc
        struct _anonymous_687 Memory48;// Offset=0x0 Size=0xc
        struct _anonymous_688 Memory64;// Offset=0x0 Size=0xc
        struct _anonymous_590 Connection;// Offset=0x0 Size=0xc
    };
};

struct _CM_PARTIAL_RESOURCE_DESCRIPTOR// Size=0x14 (Id=690)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char ShareDisposition;// Offset=0x1 Size=0x1
    unsigned short Flags;// Offset=0x2 Size=0x2
    union _anonymous_689 u;// Offset=0x4 Size=0x10
};
