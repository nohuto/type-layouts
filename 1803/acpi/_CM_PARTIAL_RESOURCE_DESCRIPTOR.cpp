struct _unnamed_31// Size=0x8 (Id=31)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=32)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_31 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _unnamed_654// Size=0xc (Id=654)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _unnamed_655// Size=0x10 (Id=655)
{
    unsigned short Level;// Offset=0x0 Size=0x2
    unsigned short Group;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_656// Size=0x10 (Id=656)
{
    unsigned short Group;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_657// Size=0x10 (Id=657)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_656 Raw;// Offset=0x0 Size=0x10
        struct _unnamed_655 Translated;// Offset=0x0 Size=0x10
    };
};

struct _unnamed_658// Size=0xc (Id=658)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long Port;// Offset=0x4 Size=0x4
    unsigned long Reserved1;// Offset=0x8 Size=0x4
};

struct _unnamed_659// Size=0xc (Id=659)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long RequestLine;// Offset=0x4 Size=0x4
    unsigned char TransferWidth;// Offset=0x8 Size=0x1
    unsigned char Reserved1;// Offset=0x9 Size=0x1
    unsigned char Reserved2;// Offset=0xa Size=0x1
    unsigned char Reserved3;// Offset=0xb Size=0x1
};

struct _unnamed_563// Size=0xc (Id=563)
{
    unsigned long Data[3];// Offset=0x0 Size=0xc
};

struct _unnamed_660// Size=0xc (Id=660)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned long Reserved;// Offset=0x8 Size=0x4
};

struct _unnamed_661// Size=0xc (Id=661)
{
    unsigned long DataSize;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Reserved2;// Offset=0x8 Size=0x4
};

struct _unnamed_662// Size=0xc (Id=662)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length40;// Offset=0x8 Size=0x4
};

struct _unnamed_663// Size=0xc (Id=663)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length48;// Offset=0x8 Size=0x4
};

struct _unnamed_664// Size=0xc (Id=664)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length64;// Offset=0x8 Size=0x4
};

struct _unnamed_569// Size=0xc (Id=569)
{
    unsigned char Class;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char Reserved1;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned long IdLowPart;// Offset=0x4 Size=0x4
    unsigned long IdHighPart;// Offset=0x8 Size=0x4
};

union _unnamed_665// Size=0x10 (Id=665)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_654 Generic;// Offset=0x0 Size=0xc
        struct _unnamed_654 Port;// Offset=0x0 Size=0xc
        struct _unnamed_655 Interrupt;// Offset=0x0 Size=0x10
        struct _unnamed_657 MessageInterrupt;// Offset=0x0 Size=0x10
        struct _unnamed_654 Memory;// Offset=0x0 Size=0xc
        struct _unnamed_658 Dma;// Offset=0x0 Size=0xc
        struct _unnamed_659 DmaV3;// Offset=0x0 Size=0xc
        struct _unnamed_563 DevicePrivate;// Offset=0x0 Size=0xc
        struct _unnamed_660 BusNumber;// Offset=0x0 Size=0xc
        struct _unnamed_661 DeviceSpecificData;// Offset=0x0 Size=0xc
        struct _unnamed_662 Memory40;// Offset=0x0 Size=0xc
        struct _unnamed_663 Memory48;// Offset=0x0 Size=0xc
        struct _unnamed_664 Memory64;// Offset=0x0 Size=0xc
        struct _unnamed_569 Connection;// Offset=0x0 Size=0xc
    };
};

struct _CM_PARTIAL_RESOURCE_DESCRIPTOR// Size=0x14 (Id=666)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char ShareDisposition;// Offset=0x1 Size=0x1
    unsigned short Flags;// Offset=0x2 Size=0x2
    union _unnamed_665 u;// Offset=0x4 Size=0x10
};
