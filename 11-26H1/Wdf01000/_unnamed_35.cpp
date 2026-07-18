union _LARGE_INTEGER// Size=0x8 (Id=1084)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct <unnamed-type-u>// Size=0x8 (Id=13869)
    {
        unsigned long LowPart;// Offset=0x0 Size=0x4
        long HighPart;// Offset=0x4 Size=0x4
    };
    struct _LARGE_INTEGER::<unnamed-type-u> u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _unnamed_18// Size=0xc (Id=18)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _unnamed_19// Size=0x10 (Id=19)
{
    unsigned long Level;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_20// Size=0x10 (Id=20)
{
    unsigned short Reserved;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_21// Size=0x10 (Id=21)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_20 Raw;// Offset=0x0 Size=0x10
        struct _unnamed_19 Translated;// Offset=0x0 Size=0x10
    };
};

struct _unnamed_22// Size=0xc (Id=22)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long Port;// Offset=0x4 Size=0x4
    unsigned long Reserved1;// Offset=0x8 Size=0x4
};

struct _unnamed_23// Size=0xc (Id=23)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long RequestLine;// Offset=0x4 Size=0x4
    unsigned char TransferWidth;// Offset=0x8 Size=0x1
    unsigned char Reserved1;// Offset=0x9 Size=0x1
    unsigned char Reserved2;// Offset=0xa Size=0x1
    unsigned char Reserved3;// Offset=0xb Size=0x1
};

struct _unnamed_24// Size=0xc (Id=24)
{
    unsigned long Data[3];// Offset=0x0 Size=0xc
};

struct _unnamed_25// Size=0xc (Id=25)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned long Reserved;// Offset=0x8 Size=0x4
};

struct _unnamed_27// Size=0xc (Id=27)
{
    unsigned long DataSize;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Reserved2;// Offset=0x8 Size=0x4
};

struct _unnamed_29// Size=0xc (Id=29)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length40;// Offset=0x8 Size=0x4
};

struct _unnamed_30// Size=0xc (Id=30)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length48;// Offset=0x8 Size=0x4
};

struct _unnamed_32// Size=0xc (Id=32)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length64;// Offset=0x8 Size=0x4
};

struct _unnamed_33// Size=0xc (Id=33)
{
    unsigned char Class;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char Reserved1;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned long IdLowPart;// Offset=0x4 Size=0x4
    unsigned long IdHighPart;// Offset=0x8 Size=0x4
};

union _unnamed_35// Size=0x10 (Id=35)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_18 Generic;// Offset=0x0 Size=0xc
        struct _unnamed_18 Port;// Offset=0x0 Size=0xc
        struct _unnamed_19 Interrupt;// Offset=0x0 Size=0x10
        struct _unnamed_21 MessageInterrupt;// Offset=0x0 Size=0x10
        struct _unnamed_18 Memory;// Offset=0x0 Size=0xc
        struct _unnamed_22 Dma;// Offset=0x0 Size=0xc
        struct _unnamed_23 DmaV3;// Offset=0x0 Size=0xc
        struct _unnamed_24 DevicePrivate;// Offset=0x0 Size=0xc
        struct _unnamed_25 BusNumber;// Offset=0x0 Size=0xc
        struct _unnamed_27 DeviceSpecificData;// Offset=0x0 Size=0xc
        struct _unnamed_29 Memory40;// Offset=0x0 Size=0xc
        struct _unnamed_30 Memory48;// Offset=0x0 Size=0xc
        struct _unnamed_32 Memory64;// Offset=0x0 Size=0xc
        struct _unnamed_33 Connection;// Offset=0x0 Size=0xc
    };
};
