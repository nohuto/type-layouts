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

struct _unnamed_619// Size=0xc (Id=619)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _unnamed_620// Size=0x10 (Id=620)
{
    unsigned short Level;// Offset=0x0 Size=0x2
    unsigned short Group;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_621// Size=0x10 (Id=621)
{
    unsigned short Group;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_622// Size=0x10 (Id=622)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_621 Raw;// Offset=0x0 Size=0x10
        struct _unnamed_620 Translated;// Offset=0x0 Size=0x10
    };
};

struct _unnamed_623// Size=0xc (Id=623)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long Port;// Offset=0x4 Size=0x4
    unsigned long Reserved1;// Offset=0x8 Size=0x4
};

struct _unnamed_624// Size=0xc (Id=624)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long RequestLine;// Offset=0x4 Size=0x4
    unsigned char TransferWidth;// Offset=0x8 Size=0x1
    unsigned char Reserved1;// Offset=0x9 Size=0x1
    unsigned char Reserved2;// Offset=0xa Size=0x1
    unsigned char Reserved3;// Offset=0xb Size=0x1
};

struct _unnamed_531// Size=0xc (Id=531)
{
    unsigned long Data[3];// Offset=0x0 Size=0xc
};

struct _unnamed_625// Size=0xc (Id=625)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned long Reserved;// Offset=0x8 Size=0x4
};

struct _unnamed_626// Size=0xc (Id=626)
{
    unsigned long DataSize;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Reserved2;// Offset=0x8 Size=0x4
};

struct _unnamed_627// Size=0xc (Id=627)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length40;// Offset=0x8 Size=0x4
};

struct _unnamed_628// Size=0xc (Id=628)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length48;// Offset=0x8 Size=0x4
};

struct _unnamed_629// Size=0xc (Id=629)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length64;// Offset=0x8 Size=0x4
};

struct _unnamed_537// Size=0xc (Id=537)
{
    unsigned char Class;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char Reserved1;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned long IdLowPart;// Offset=0x4 Size=0x4
    unsigned long IdHighPart;// Offset=0x8 Size=0x4
};

union _unnamed_630// Size=0x10 (Id=630)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_619 Generic;// Offset=0x0 Size=0xc
        struct _unnamed_619 Port;// Offset=0x0 Size=0xc
        struct _unnamed_620 Interrupt;// Offset=0x0 Size=0x10
        struct _unnamed_622 MessageInterrupt;// Offset=0x0 Size=0x10
        struct _unnamed_619 Memory;// Offset=0x0 Size=0xc
        struct _unnamed_623 Dma;// Offset=0x0 Size=0xc
        struct _unnamed_624 DmaV3;// Offset=0x0 Size=0xc
        struct _unnamed_531 DevicePrivate;// Offset=0x0 Size=0xc
        struct _unnamed_625 BusNumber;// Offset=0x0 Size=0xc
        struct _unnamed_626 DeviceSpecificData;// Offset=0x0 Size=0xc
        struct _unnamed_627 Memory40;// Offset=0x0 Size=0xc
        struct _unnamed_628 Memory48;// Offset=0x0 Size=0xc
        struct _unnamed_629 Memory64;// Offset=0x0 Size=0xc
        struct _unnamed_537 Connection;// Offset=0x0 Size=0xc
    };
};
