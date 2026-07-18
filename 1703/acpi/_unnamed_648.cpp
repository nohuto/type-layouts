struct _unnamed_30// Size=0x8 (Id=30)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=227)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_30 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _unnamed_637// Size=0xc (Id=637)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _unnamed_638// Size=0x10 (Id=638)
{
    unsigned short Level;// Offset=0x0 Size=0x2
    unsigned short Group;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_639// Size=0x10 (Id=639)
{
    unsigned short Group;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_640// Size=0x10 (Id=640)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_639 Raw;// Offset=0x0 Size=0x10
        struct _unnamed_638 Translated;// Offset=0x0 Size=0x10
    };
};

struct _unnamed_641// Size=0xc (Id=641)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long Port;// Offset=0x4 Size=0x4
    unsigned long Reserved1;// Offset=0x8 Size=0x4
};

struct _unnamed_642// Size=0xc (Id=642)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long RequestLine;// Offset=0x4 Size=0x4
    unsigned char TransferWidth;// Offset=0x8 Size=0x1
    unsigned char Reserved1;// Offset=0x9 Size=0x1
    unsigned char Reserved2;// Offset=0xa Size=0x1
    unsigned char Reserved3;// Offset=0xb Size=0x1
};

struct _unnamed_549// Size=0xc (Id=549)
{
    unsigned long Data[3];// Offset=0x0 Size=0xc
};

struct _unnamed_643// Size=0xc (Id=643)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned long Reserved;// Offset=0x8 Size=0x4
};

struct _unnamed_644// Size=0xc (Id=644)
{
    unsigned long DataSize;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Reserved2;// Offset=0x8 Size=0x4
};

struct _unnamed_645// Size=0xc (Id=645)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length40;// Offset=0x8 Size=0x4
};

struct _unnamed_646// Size=0xc (Id=646)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length48;// Offset=0x8 Size=0x4
};

struct _unnamed_647// Size=0xc (Id=647)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length64;// Offset=0x8 Size=0x4
};

struct _unnamed_555// Size=0xc (Id=555)
{
    unsigned char Class;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char Reserved1;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned long IdLowPart;// Offset=0x4 Size=0x4
    unsigned long IdHighPart;// Offset=0x8 Size=0x4
};

union _unnamed_648// Size=0x10 (Id=648)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_637 Generic;// Offset=0x0 Size=0xc
        struct _unnamed_637 Port;// Offset=0x0 Size=0xc
        struct _unnamed_638 Interrupt;// Offset=0x0 Size=0x10
        struct _unnamed_640 MessageInterrupt;// Offset=0x0 Size=0x10
        struct _unnamed_637 Memory;// Offset=0x0 Size=0xc
        struct _unnamed_641 Dma;// Offset=0x0 Size=0xc
        struct _unnamed_642 DmaV3;// Offset=0x0 Size=0xc
        struct _unnamed_549 DevicePrivate;// Offset=0x0 Size=0xc
        struct _unnamed_643 BusNumber;// Offset=0x0 Size=0xc
        struct _unnamed_644 DeviceSpecificData;// Offset=0x0 Size=0xc
        struct _unnamed_645 Memory40;// Offset=0x0 Size=0xc
        struct _unnamed_646 Memory48;// Offset=0x0 Size=0xc
        struct _unnamed_647 Memory64;// Offset=0x0 Size=0xc
        struct _unnamed_555 Connection;// Offset=0x0 Size=0xc
    };
};
