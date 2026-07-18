struct _unnamed_31// Size=0x8 (Id=31)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=78)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_31 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _unnamed_693// Size=0xc (Id=693)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _unnamed_694// Size=0x10 (Id=694)
{
    unsigned short Level;// Offset=0x0 Size=0x2
    unsigned short Group;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_695// Size=0x10 (Id=695)
{
    unsigned short Group;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_696// Size=0x10 (Id=696)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_695 Raw;// Offset=0x0 Size=0x10
        struct _unnamed_694 Translated;// Offset=0x0 Size=0x10
    };
};

struct _unnamed_697// Size=0xc (Id=697)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long Port;// Offset=0x4 Size=0x4
    unsigned long Reserved1;// Offset=0x8 Size=0x4
};

struct _unnamed_698// Size=0xc (Id=698)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long RequestLine;// Offset=0x4 Size=0x4
    unsigned char TransferWidth;// Offset=0x8 Size=0x1
    unsigned char Reserved1;// Offset=0x9 Size=0x1
    unsigned char Reserved2;// Offset=0xa Size=0x1
    unsigned char Reserved3;// Offset=0xb Size=0x1
};

struct _unnamed_634// Size=0xc (Id=634)
{
    unsigned long Data[3];// Offset=0x0 Size=0xc
};

struct _unnamed_699// Size=0xc (Id=699)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned long Reserved;// Offset=0x8 Size=0x4
};

struct _unnamed_700// Size=0xc (Id=700)
{
    unsigned long DataSize;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Reserved2;// Offset=0x8 Size=0x4
};

struct _unnamed_701// Size=0xc (Id=701)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length40;// Offset=0x8 Size=0x4
};

struct _unnamed_702// Size=0xc (Id=702)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length48;// Offset=0x8 Size=0x4
};

struct _unnamed_703// Size=0xc (Id=703)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length64;// Offset=0x8 Size=0x4
};

struct _unnamed_640// Size=0xc (Id=640)
{
    unsigned char Class;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char Reserved1;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned long IdLowPart;// Offset=0x4 Size=0x4
    unsigned long IdHighPart;// Offset=0x8 Size=0x4
};

union _unnamed_704// Size=0x10 (Id=704)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_693 Generic;// Offset=0x0 Size=0xc
        struct _unnamed_693 Port;// Offset=0x0 Size=0xc
        struct _unnamed_694 Interrupt;// Offset=0x0 Size=0x10
        struct _unnamed_696 MessageInterrupt;// Offset=0x0 Size=0x10
        struct _unnamed_693 Memory;// Offset=0x0 Size=0xc
        struct _unnamed_697 Dma;// Offset=0x0 Size=0xc
        struct _unnamed_698 DmaV3;// Offset=0x0 Size=0xc
        struct _unnamed_634 DevicePrivate;// Offset=0x0 Size=0xc
        struct _unnamed_699 BusNumber;// Offset=0x0 Size=0xc
        struct _unnamed_700 DeviceSpecificData;// Offset=0x0 Size=0xc
        struct _unnamed_701 Memory40;// Offset=0x0 Size=0xc
        struct _unnamed_702 Memory48;// Offset=0x0 Size=0xc
        struct _unnamed_703 Memory64;// Offset=0x0 Size=0xc
        struct _unnamed_640 Connection;// Offset=0x0 Size=0xc
    };
};
