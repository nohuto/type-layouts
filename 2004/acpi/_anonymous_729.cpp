struct _anonymous_32// Size=0x8 (Id=32)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=33)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _anonymous_32 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _anonymous_718// Size=0xc (Id=718)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _anonymous_719// Size=0x10 (Id=719)
{
    unsigned short Level;// Offset=0x0 Size=0x2
    unsigned short Group;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _anonymous_720// Size=0x10 (Id=720)
{
    unsigned short Group;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _anonymous_721// Size=0x10 (Id=721)
{
    union // Size=0x10 (Id=0)
    {
        struct _anonymous_720 Raw;// Offset=0x0 Size=0x10
        struct _anonymous_719 Translated;// Offset=0x0 Size=0x10
    };
};

struct _anonymous_722// Size=0xc (Id=722)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long Port;// Offset=0x4 Size=0x4
    unsigned long Reserved1;// Offset=0x8 Size=0x4
};

struct _anonymous_723// Size=0xc (Id=723)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long RequestLine;// Offset=0x4 Size=0x4
    unsigned char TransferWidth;// Offset=0x8 Size=0x1
    unsigned char Reserved1;// Offset=0x9 Size=0x1
    unsigned char Reserved2;// Offset=0xa Size=0x1
    unsigned char Reserved3;// Offset=0xb Size=0x1
};

struct _anonymous_625// Size=0xc (Id=625)
{
    unsigned long Data[3];// Offset=0x0 Size=0xc
};

struct _anonymous_724// Size=0xc (Id=724)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned long Reserved;// Offset=0x8 Size=0x4
};

struct _anonymous_725// Size=0xc (Id=725)
{
    unsigned long DataSize;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Reserved2;// Offset=0x8 Size=0x4
};

struct _anonymous_726// Size=0xc (Id=726)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length40;// Offset=0x8 Size=0x4
};

struct _anonymous_727// Size=0xc (Id=727)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length48;// Offset=0x8 Size=0x4
};

struct _anonymous_728// Size=0xc (Id=728)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length64;// Offset=0x8 Size=0x4
};

struct _anonymous_631// Size=0xc (Id=631)
{
    unsigned char Class;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char Reserved1;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned long IdLowPart;// Offset=0x4 Size=0x4
    unsigned long IdHighPart;// Offset=0x8 Size=0x4
};

union _anonymous_729// Size=0x10 (Id=729)
{
    union // Size=0x10 (Id=0)
    {
        struct _anonymous_718 Generic;// Offset=0x0 Size=0xc
        struct _anonymous_718 Port;// Offset=0x0 Size=0xc
        struct _anonymous_719 Interrupt;// Offset=0x0 Size=0x10
        struct _anonymous_721 MessageInterrupt;// Offset=0x0 Size=0x10
        struct _anonymous_718 Memory;// Offset=0x0 Size=0xc
        struct _anonymous_722 Dma;// Offset=0x0 Size=0xc
        struct _anonymous_723 DmaV3;// Offset=0x0 Size=0xc
        struct _anonymous_625 DevicePrivate;// Offset=0x0 Size=0xc
        struct _anonymous_724 BusNumber;// Offset=0x0 Size=0xc
        struct _anonymous_725 DeviceSpecificData;// Offset=0x0 Size=0xc
        struct _anonymous_726 Memory40;// Offset=0x0 Size=0xc
        struct _anonymous_727 Memory48;// Offset=0x0 Size=0xc
        struct _anonymous_728 Memory64;// Offset=0x0 Size=0xc
        struct _anonymous_631 Connection;// Offset=0x0 Size=0xc
    };
};
