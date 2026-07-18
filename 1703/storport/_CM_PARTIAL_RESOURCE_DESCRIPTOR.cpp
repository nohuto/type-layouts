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

struct _unnamed_533// Size=0xc (Id=533)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _unnamed_534// Size=0x10 (Id=534)
{
    unsigned short Level;// Offset=0x0 Size=0x2
    unsigned short Group;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_535// Size=0x10 (Id=535)
{
    unsigned short Group;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_536// Size=0x10 (Id=536)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_535 Raw;// Offset=0x0 Size=0x10
        struct _unnamed_534 Translated;// Offset=0x0 Size=0x10
    };
};

struct _unnamed_537// Size=0xc (Id=537)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long Port;// Offset=0x4 Size=0x4
    unsigned long Reserved1;// Offset=0x8 Size=0x4
};

struct _unnamed_538// Size=0xc (Id=538)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long RequestLine;// Offset=0x4 Size=0x4
    unsigned char TransferWidth;// Offset=0x8 Size=0x1
    unsigned char Reserved1;// Offset=0x9 Size=0x1
    unsigned char Reserved2;// Offset=0xa Size=0x1
    unsigned char Reserved3;// Offset=0xb Size=0x1
};

struct _unnamed_539// Size=0xc (Id=539)
{
    unsigned long Data[3];// Offset=0x0 Size=0xc
};

struct _unnamed_540// Size=0xc (Id=540)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned long Reserved;// Offset=0x8 Size=0x4
};

struct _unnamed_541// Size=0xc (Id=541)
{
    unsigned long DataSize;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Reserved2;// Offset=0x8 Size=0x4
};

struct _unnamed_542// Size=0xc (Id=542)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length40;// Offset=0x8 Size=0x4
};

struct _unnamed_543// Size=0xc (Id=543)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length48;// Offset=0x8 Size=0x4
};

struct _unnamed_544// Size=0xc (Id=544)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length64;// Offset=0x8 Size=0x4
};

struct _unnamed_545// Size=0xc (Id=545)
{
    unsigned char Class;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char Reserved1;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned long IdLowPart;// Offset=0x4 Size=0x4
    unsigned long IdHighPart;// Offset=0x8 Size=0x4
};

union _unnamed_546// Size=0x10 (Id=546)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_533 Generic;// Offset=0x0 Size=0xc
        struct _unnamed_533 Port;// Offset=0x0 Size=0xc
        struct _unnamed_534 Interrupt;// Offset=0x0 Size=0x10
        struct _unnamed_536 MessageInterrupt;// Offset=0x0 Size=0x10
        struct _unnamed_533 Memory;// Offset=0x0 Size=0xc
        struct _unnamed_537 Dma;// Offset=0x0 Size=0xc
        struct _unnamed_538 DmaV3;// Offset=0x0 Size=0xc
        struct _unnamed_539 DevicePrivate;// Offset=0x0 Size=0xc
        struct _unnamed_540 BusNumber;// Offset=0x0 Size=0xc
        struct _unnamed_541 DeviceSpecificData;// Offset=0x0 Size=0xc
        struct _unnamed_542 Memory40;// Offset=0x0 Size=0xc
        struct _unnamed_543 Memory48;// Offset=0x0 Size=0xc
        struct _unnamed_544 Memory64;// Offset=0x0 Size=0xc
        struct _unnamed_545 Connection;// Offset=0x0 Size=0xc
    };
};

struct _CM_PARTIAL_RESOURCE_DESCRIPTOR// Size=0x14 (Id=547)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char ShareDisposition;// Offset=0x1 Size=0x1
    unsigned short Flags;// Offset=0x2 Size=0x2
    union _unnamed_546 u;// Offset=0x4 Size=0x10
};
