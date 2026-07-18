union _LARGE_INTEGER// Size=0x8 (Id=258)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct <unnamed-type-u>// Size=0x8 (Id=11990)
    {
        unsigned long LowPart;// Offset=0x0 Size=0x4
        long HighPart;// Offset=0x4 Size=0x4
    };
    struct _LARGE_INTEGER::<unnamed-type-u> u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _unnamed_11// Size=0xc (Id=11)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _unnamed_12// Size=0x10 (Id=12)
{
    unsigned long Level;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_13// Size=0x10 (Id=13)
{
    unsigned short Reserved;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_14// Size=0x10 (Id=14)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_13 Raw;// Offset=0x0 Size=0x10
        struct _unnamed_12 Translated;// Offset=0x0 Size=0x10
    };
};

struct _unnamed_15// Size=0xc (Id=15)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long Port;// Offset=0x4 Size=0x4
    unsigned long Reserved1;// Offset=0x8 Size=0x4
};

struct _unnamed_16// Size=0xc (Id=16)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long RequestLine;// Offset=0x4 Size=0x4
    unsigned char TransferWidth;// Offset=0x8 Size=0x1
    unsigned char Reserved1;// Offset=0x9 Size=0x1
    unsigned char Reserved2;// Offset=0xa Size=0x1
    unsigned char Reserved3;// Offset=0xb Size=0x1
};

struct _unnamed_17// Size=0xc (Id=17)
{
    unsigned long Data[3];// Offset=0x0 Size=0xc
};

struct _unnamed_18// Size=0xc (Id=18)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned long Reserved;// Offset=0x8 Size=0x4
};

struct _unnamed_19// Size=0xc (Id=19)
{
    unsigned long DataSize;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Reserved2;// Offset=0x8 Size=0x4
};

struct _unnamed_20// Size=0xc (Id=20)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length40;// Offset=0x8 Size=0x4
};

struct _unnamed_21// Size=0xc (Id=21)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length48;// Offset=0x8 Size=0x4
};

struct _unnamed_22// Size=0xc (Id=22)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length64;// Offset=0x8 Size=0x4
};

struct _unnamed_23// Size=0xc (Id=23)
{
    unsigned char Class;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char Reserved1;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned long IdLowPart;// Offset=0x4 Size=0x4
    unsigned long IdHighPart;// Offset=0x8 Size=0x4
};

union _unnamed_24// Size=0x10 (Id=24)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_11 Generic;// Offset=0x0 Size=0xc
        struct _unnamed_11 Port;// Offset=0x0 Size=0xc
        struct _unnamed_12 Interrupt;// Offset=0x0 Size=0x10
        struct _unnamed_14 MessageInterrupt;// Offset=0x0 Size=0x10
        struct _unnamed_11 Memory;// Offset=0x0 Size=0xc
        struct _unnamed_15 Dma;// Offset=0x0 Size=0xc
        struct _unnamed_16 DmaV3;// Offset=0x0 Size=0xc
        struct _unnamed_17 DevicePrivate;// Offset=0x0 Size=0xc
        struct _unnamed_18 BusNumber;// Offset=0x0 Size=0xc
        struct _unnamed_19 DeviceSpecificData;// Offset=0x0 Size=0xc
        struct _unnamed_20 Memory40;// Offset=0x0 Size=0xc
        struct _unnamed_21 Memory48;// Offset=0x0 Size=0xc
        struct _unnamed_22 Memory64;// Offset=0x0 Size=0xc
        struct _unnamed_23 Connection;// Offset=0x0 Size=0xc
    };
};

struct _CM_PARTIAL_RESOURCE_DESCRIPTOR// Size=0x14 (Id=25)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char ShareDisposition;// Offset=0x1 Size=0x1
    unsigned short Flags;// Offset=0x2 Size=0x2
    union _unnamed_24 u;// Offset=0x4 Size=0x10
};
