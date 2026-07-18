struct _unnamed_119// Size=0x8 (Id=119)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=120)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_119 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _unnamed_13// Size=0xc (Id=13)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _unnamed_14// Size=0x10 (Id=14)
{
    unsigned long Level;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_15// Size=0x10 (Id=15)
{
    unsigned short Reserved;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_16// Size=0x10 (Id=16)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_15 Raw;// Offset=0x0 Size=0x10
        struct _unnamed_14 Translated;// Offset=0x0 Size=0x10
    };
};

struct _unnamed_17// Size=0xc (Id=17)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long Port;// Offset=0x4 Size=0x4
    unsigned long Reserved1;// Offset=0x8 Size=0x4
};

struct _unnamed_18// Size=0xc (Id=18)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long RequestLine;// Offset=0x4 Size=0x4
    unsigned char TransferWidth;// Offset=0x8 Size=0x1
    unsigned char Reserved1;// Offset=0x9 Size=0x1
    unsigned char Reserved2;// Offset=0xa Size=0x1
    unsigned char Reserved3;// Offset=0xb Size=0x1
};

struct _unnamed_19// Size=0xc (Id=19)
{
    unsigned long Data[3];// Offset=0x0 Size=0xc
};

struct _unnamed_20// Size=0xc (Id=20)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned long Reserved;// Offset=0x8 Size=0x4
};

struct _unnamed_21// Size=0xc (Id=21)
{
    unsigned long DataSize;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Reserved2;// Offset=0x8 Size=0x4
};

struct _unnamed_22// Size=0xc (Id=22)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length40;// Offset=0x8 Size=0x4
};

struct _unnamed_23// Size=0xc (Id=23)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length48;// Offset=0x8 Size=0x4
};

struct _unnamed_24// Size=0xc (Id=24)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length64;// Offset=0x8 Size=0x4
};

struct _unnamed_25// Size=0xc (Id=25)
{
    unsigned char Class;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char Reserved1;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned long IdLowPart;// Offset=0x4 Size=0x4
    unsigned long IdHighPart;// Offset=0x8 Size=0x4
};

union _unnamed_26// Size=0x10 (Id=26)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_13 Generic;// Offset=0x0 Size=0xc
        struct _unnamed_13 Port;// Offset=0x0 Size=0xc
        struct _unnamed_14 Interrupt;// Offset=0x0 Size=0x10
        struct _unnamed_16 MessageInterrupt;// Offset=0x0 Size=0x10
        struct _unnamed_13 Memory;// Offset=0x0 Size=0xc
        struct _unnamed_17 Dma;// Offset=0x0 Size=0xc
        struct _unnamed_18 DmaV3;// Offset=0x0 Size=0xc
        struct _unnamed_19 DevicePrivate;// Offset=0x0 Size=0xc
        struct _unnamed_20 BusNumber;// Offset=0x0 Size=0xc
        struct _unnamed_21 DeviceSpecificData;// Offset=0x0 Size=0xc
        struct _unnamed_22 Memory40;// Offset=0x0 Size=0xc
        struct _unnamed_23 Memory48;// Offset=0x0 Size=0xc
        struct _unnamed_24 Memory64;// Offset=0x0 Size=0xc
        struct _unnamed_25 Connection;// Offset=0x0 Size=0xc
    };
};
