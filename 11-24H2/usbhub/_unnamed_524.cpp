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

struct _unnamed_513// Size=0xc (Id=513)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _unnamed_514// Size=0x10 (Id=514)
{
    unsigned long Level;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_515// Size=0x10 (Id=515)
{
    unsigned short Reserved;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_516// Size=0x10 (Id=516)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_515 Raw;// Offset=0x0 Size=0x10
        struct _unnamed_514 Translated;// Offset=0x0 Size=0x10
    };
};

struct _unnamed_517// Size=0xc (Id=517)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long Port;// Offset=0x4 Size=0x4
    unsigned long Reserved1;// Offset=0x8 Size=0x4
};

struct _unnamed_518// Size=0xc (Id=518)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long RequestLine;// Offset=0x4 Size=0x4
    unsigned char TransferWidth;// Offset=0x8 Size=0x1
    unsigned char Reserved1;// Offset=0x9 Size=0x1
    unsigned char Reserved2;// Offset=0xa Size=0x1
    unsigned char Reserved3;// Offset=0xb Size=0x1
};

struct _unnamed_484// Size=0xc (Id=484)
{
    unsigned long Data[3];// Offset=0x0 Size=0xc
};

struct _unnamed_519// Size=0xc (Id=519)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned long Reserved;// Offset=0x8 Size=0x4
};

struct _unnamed_520// Size=0xc (Id=520)
{
    unsigned long DataSize;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Reserved2;// Offset=0x8 Size=0x4
};

struct _unnamed_521// Size=0xc (Id=521)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length40;// Offset=0x8 Size=0x4
};

struct _unnamed_522// Size=0xc (Id=522)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length48;// Offset=0x8 Size=0x4
};

struct _unnamed_523// Size=0xc (Id=523)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length64;// Offset=0x8 Size=0x4
};

struct _unnamed_490// Size=0xc (Id=490)
{
    unsigned char Class;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char Reserved1;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned long IdLowPart;// Offset=0x4 Size=0x4
    unsigned long IdHighPart;// Offset=0x8 Size=0x4
};

union _unnamed_524// Size=0x10 (Id=524)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_513 Generic;// Offset=0x0 Size=0xc
        struct _unnamed_513 Port;// Offset=0x0 Size=0xc
        struct _unnamed_514 Interrupt;// Offset=0x0 Size=0x10
        struct _unnamed_516 MessageInterrupt;// Offset=0x0 Size=0x10
        struct _unnamed_513 Memory;// Offset=0x0 Size=0xc
        struct _unnamed_517 Dma;// Offset=0x0 Size=0xc
        struct _unnamed_518 DmaV3;// Offset=0x0 Size=0xc
        struct _unnamed_484 DevicePrivate;// Offset=0x0 Size=0xc
        struct _unnamed_519 BusNumber;// Offset=0x0 Size=0xc
        struct _unnamed_520 DeviceSpecificData;// Offset=0x0 Size=0xc
        struct _unnamed_521 Memory40;// Offset=0x0 Size=0xc
        struct _unnamed_522 Memory48;// Offset=0x0 Size=0xc
        struct _unnamed_523 Memory64;// Offset=0x0 Size=0xc
        struct _unnamed_490 Connection;// Offset=0x0 Size=0xc
    };
};
