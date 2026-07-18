struct _unnamed_28// Size=0x8 (Id=28)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=72)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_28 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _unnamed_612// Size=0xc (Id=612)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _unnamed_613// Size=0x10 (Id=613)
{
    unsigned short Level;// Offset=0x0 Size=0x2
    unsigned short Group;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_614// Size=0x10 (Id=614)
{
    unsigned short Group;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_615// Size=0x10 (Id=615)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_614 Raw;// Offset=0x0 Size=0x10
        struct _unnamed_613 Translated;// Offset=0x0 Size=0x10
    };
};

struct _unnamed_616// Size=0xc (Id=616)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long Port;// Offset=0x4 Size=0x4
    unsigned long Reserved1;// Offset=0x8 Size=0x4
};

struct _unnamed_617// Size=0xc (Id=617)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long RequestLine;// Offset=0x4 Size=0x4
    unsigned char TransferWidth;// Offset=0x8 Size=0x1
    unsigned char Reserved1;// Offset=0x9 Size=0x1
    unsigned char Reserved2;// Offset=0xa Size=0x1
    unsigned char Reserved3;// Offset=0xb Size=0x1
};

struct _unnamed_563// Size=0xc (Id=563)
{
    unsigned long Data[3];// Offset=0x0 Size=0xc
};

struct _unnamed_618// Size=0xc (Id=618)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned long Reserved;// Offset=0x8 Size=0x4
};

struct _unnamed_619// Size=0xc (Id=619)
{
    unsigned long DataSize;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Reserved2;// Offset=0x8 Size=0x4
};

struct _unnamed_620// Size=0xc (Id=620)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length40;// Offset=0x8 Size=0x4
};

struct _unnamed_621// Size=0xc (Id=621)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length48;// Offset=0x8 Size=0x4
};

struct _unnamed_622// Size=0xc (Id=622)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length64;// Offset=0x8 Size=0x4
};

struct _unnamed_569// Size=0xc (Id=569)
{
    unsigned char Class;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char Reserved1;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned long IdLowPart;// Offset=0x4 Size=0x4
    unsigned long IdHighPart;// Offset=0x8 Size=0x4
};

union _unnamed_623// Size=0x10 (Id=623)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_612 Generic;// Offset=0x0 Size=0xc
        struct _unnamed_612 Port;// Offset=0x0 Size=0xc
        struct _unnamed_613 Interrupt;// Offset=0x0 Size=0x10
        struct _unnamed_615 MessageInterrupt;// Offset=0x0 Size=0x10
        struct _unnamed_612 Memory;// Offset=0x0 Size=0xc
        struct _unnamed_616 Dma;// Offset=0x0 Size=0xc
        struct _unnamed_617 DmaV3;// Offset=0x0 Size=0xc
        struct _unnamed_563 DevicePrivate;// Offset=0x0 Size=0xc
        struct _unnamed_618 BusNumber;// Offset=0x0 Size=0xc
        struct _unnamed_619 DeviceSpecificData;// Offset=0x0 Size=0xc
        struct _unnamed_620 Memory40;// Offset=0x0 Size=0xc
        struct _unnamed_621 Memory48;// Offset=0x0 Size=0xc
        struct _unnamed_622 Memory64;// Offset=0x0 Size=0xc
        struct _unnamed_569 Connection;// Offset=0x0 Size=0xc
    };
};

struct _CM_PARTIAL_RESOURCE_DESCRIPTOR// Size=0x14 (Id=624)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char ShareDisposition;// Offset=0x1 Size=0x1
    unsigned short Flags;// Offset=0x2 Size=0x2
    union _unnamed_623 u;// Offset=0x4 Size=0x10
};
