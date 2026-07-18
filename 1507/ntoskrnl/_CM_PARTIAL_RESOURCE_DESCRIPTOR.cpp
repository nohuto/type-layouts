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

struct _unnamed_903// Size=0xc (Id=903)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _unnamed_904// Size=0x10 (Id=904)
{
    unsigned short Level;// Offset=0x0 Size=0x2
    unsigned short Group;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_905// Size=0x10 (Id=905)
{
    unsigned short Group;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_906// Size=0x10 (Id=906)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_905 Raw;// Offset=0x0 Size=0x10
        struct _unnamed_904 Translated;// Offset=0x0 Size=0x10
    };
};

struct _unnamed_907// Size=0xc (Id=907)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long Port;// Offset=0x4 Size=0x4
    unsigned long Reserved1;// Offset=0x8 Size=0x4
};

struct _unnamed_908// Size=0xc (Id=908)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long RequestLine;// Offset=0x4 Size=0x4
    unsigned char TransferWidth;// Offset=0x8 Size=0x1
    unsigned char Reserved1;// Offset=0x9 Size=0x1
    unsigned char Reserved2;// Offset=0xa Size=0x1
    unsigned char Reserved3;// Offset=0xb Size=0x1
};

struct _unnamed_756// Size=0xc (Id=756)
{
    unsigned long Data[3];// Offset=0x0 Size=0xc
};

struct _unnamed_909// Size=0xc (Id=909)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned long Reserved;// Offset=0x8 Size=0x4
};

struct _unnamed_910// Size=0xc (Id=910)
{
    unsigned long DataSize;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Reserved2;// Offset=0x8 Size=0x4
};

struct _unnamed_911// Size=0xc (Id=911)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length40;// Offset=0x8 Size=0x4
};

struct _unnamed_912// Size=0xc (Id=912)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length48;// Offset=0x8 Size=0x4
};

struct _unnamed_913// Size=0xc (Id=913)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length64;// Offset=0x8 Size=0x4
};

struct _unnamed_762// Size=0xc (Id=762)
{
    unsigned char Class;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char Reserved1;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned long IdLowPart;// Offset=0x4 Size=0x4
    unsigned long IdHighPart;// Offset=0x8 Size=0x4
};

union _unnamed_914// Size=0x10 (Id=914)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_903 Generic;// Offset=0x0 Size=0xc
        struct _unnamed_903 Port;// Offset=0x0 Size=0xc
        struct _unnamed_904 Interrupt;// Offset=0x0 Size=0x10
        struct _unnamed_906 MessageInterrupt;// Offset=0x0 Size=0x10
        struct _unnamed_903 Memory;// Offset=0x0 Size=0xc
        struct _unnamed_907 Dma;// Offset=0x0 Size=0xc
        struct _unnamed_908 DmaV3;// Offset=0x0 Size=0xc
        struct _unnamed_756 DevicePrivate;// Offset=0x0 Size=0xc
        struct _unnamed_909 BusNumber;// Offset=0x0 Size=0xc
        struct _unnamed_910 DeviceSpecificData;// Offset=0x0 Size=0xc
        struct _unnamed_911 Memory40;// Offset=0x0 Size=0xc
        struct _unnamed_912 Memory48;// Offset=0x0 Size=0xc
        struct _unnamed_913 Memory64;// Offset=0x0 Size=0xc
        struct _unnamed_762 Connection;// Offset=0x0 Size=0xc
    };
};

struct _CM_PARTIAL_RESOURCE_DESCRIPTOR// Size=0x14 (Id=915)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char ShareDisposition;// Offset=0x1 Size=0x1
    unsigned short Flags;// Offset=0x2 Size=0x2
    union _unnamed_914 u;// Offset=0x4 Size=0x10
};
