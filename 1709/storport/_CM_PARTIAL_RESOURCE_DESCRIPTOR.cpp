struct _unnamed_10// Size=0x8 (Id=10)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=11)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_10 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _unnamed_555// Size=0xc (Id=555)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _unnamed_556// Size=0x10 (Id=556)
{
    unsigned short Level;// Offset=0x0 Size=0x2
    unsigned short Group;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_557// Size=0x10 (Id=557)
{
    unsigned short Group;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_558// Size=0x10 (Id=558)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_557 Raw;// Offset=0x0 Size=0x10
        struct _unnamed_556 Translated;// Offset=0x0 Size=0x10
    };
};

struct _unnamed_559// Size=0xc (Id=559)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long Port;// Offset=0x4 Size=0x4
    unsigned long Reserved1;// Offset=0x8 Size=0x4
};

struct _unnamed_560// Size=0xc (Id=560)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long RequestLine;// Offset=0x4 Size=0x4
    unsigned char TransferWidth;// Offset=0x8 Size=0x1
    unsigned char Reserved1;// Offset=0x9 Size=0x1
    unsigned char Reserved2;// Offset=0xa Size=0x1
    unsigned char Reserved3;// Offset=0xb Size=0x1
};

struct _unnamed_561// Size=0xc (Id=561)
{
    unsigned long Data[3];// Offset=0x0 Size=0xc
};

struct _unnamed_562// Size=0xc (Id=562)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned long Reserved;// Offset=0x8 Size=0x4
};

struct _unnamed_563// Size=0xc (Id=563)
{
    unsigned long DataSize;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Reserved2;// Offset=0x8 Size=0x4
};

struct _unnamed_564// Size=0xc (Id=564)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length40;// Offset=0x8 Size=0x4
};

struct _unnamed_565// Size=0xc (Id=565)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length48;// Offset=0x8 Size=0x4
};

struct _unnamed_566// Size=0xc (Id=566)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length64;// Offset=0x8 Size=0x4
};

struct _unnamed_567// Size=0xc (Id=567)
{
    unsigned char Class;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char Reserved1;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned long IdLowPart;// Offset=0x4 Size=0x4
    unsigned long IdHighPart;// Offset=0x8 Size=0x4
};

union _unnamed_568// Size=0x10 (Id=568)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_555 Generic;// Offset=0x0 Size=0xc
        struct _unnamed_555 Port;// Offset=0x0 Size=0xc
        struct _unnamed_556 Interrupt;// Offset=0x0 Size=0x10
        struct _unnamed_558 MessageInterrupt;// Offset=0x0 Size=0x10
        struct _unnamed_555 Memory;// Offset=0x0 Size=0xc
        struct _unnamed_559 Dma;// Offset=0x0 Size=0xc
        struct _unnamed_560 DmaV3;// Offset=0x0 Size=0xc
        struct _unnamed_561 DevicePrivate;// Offset=0x0 Size=0xc
        struct _unnamed_562 BusNumber;// Offset=0x0 Size=0xc
        struct _unnamed_563 DeviceSpecificData;// Offset=0x0 Size=0xc
        struct _unnamed_564 Memory40;// Offset=0x0 Size=0xc
        struct _unnamed_565 Memory48;// Offset=0x0 Size=0xc
        struct _unnamed_566 Memory64;// Offset=0x0 Size=0xc
        struct _unnamed_567 Connection;// Offset=0x0 Size=0xc
    };
};

struct _CM_PARTIAL_RESOURCE_DESCRIPTOR// Size=0x14 (Id=569)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char ShareDisposition;// Offset=0x1 Size=0x1
    unsigned short Flags;// Offset=0x2 Size=0x2
    union _unnamed_568 u;// Offset=0x4 Size=0x10
};
