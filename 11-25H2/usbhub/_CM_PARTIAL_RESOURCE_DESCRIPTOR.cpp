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

struct _unnamed_508// Size=0xc (Id=508)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _unnamed_509// Size=0x10 (Id=509)
{
    unsigned long Level;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_510// Size=0x10 (Id=510)
{
    unsigned short Reserved;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_511// Size=0x10 (Id=511)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_510 Raw;// Offset=0x0 Size=0x10
        struct _unnamed_509 Translated;// Offset=0x0 Size=0x10
    };
};

struct _unnamed_512// Size=0xc (Id=512)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long Port;// Offset=0x4 Size=0x4
    unsigned long Reserved1;// Offset=0x8 Size=0x4
};

struct _unnamed_513// Size=0xc (Id=513)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long RequestLine;// Offset=0x4 Size=0x4
    unsigned char TransferWidth;// Offset=0x8 Size=0x1
    unsigned char Reserved1;// Offset=0x9 Size=0x1
    unsigned char Reserved2;// Offset=0xa Size=0x1
    unsigned char Reserved3;// Offset=0xb Size=0x1
};

struct _unnamed_479// Size=0xc (Id=479)
{
    unsigned long Data[3];// Offset=0x0 Size=0xc
};

struct _unnamed_514// Size=0xc (Id=514)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned long Reserved;// Offset=0x8 Size=0x4
};

struct _unnamed_515// Size=0xc (Id=515)
{
    unsigned long DataSize;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Reserved2;// Offset=0x8 Size=0x4
};

struct _unnamed_516// Size=0xc (Id=516)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length40;// Offset=0x8 Size=0x4
};

struct _unnamed_517// Size=0xc (Id=517)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length48;// Offset=0x8 Size=0x4
};

struct _unnamed_518// Size=0xc (Id=518)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length64;// Offset=0x8 Size=0x4
};

struct _unnamed_485// Size=0xc (Id=485)
{
    unsigned char Class;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char Reserved1;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned long IdLowPart;// Offset=0x4 Size=0x4
    unsigned long IdHighPart;// Offset=0x8 Size=0x4
};

union _unnamed_519// Size=0x10 (Id=519)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_508 Generic;// Offset=0x0 Size=0xc
        struct _unnamed_508 Port;// Offset=0x0 Size=0xc
        struct _unnamed_509 Interrupt;// Offset=0x0 Size=0x10
        struct _unnamed_511 MessageInterrupt;// Offset=0x0 Size=0x10
        struct _unnamed_508 Memory;// Offset=0x0 Size=0xc
        struct _unnamed_512 Dma;// Offset=0x0 Size=0xc
        struct _unnamed_513 DmaV3;// Offset=0x0 Size=0xc
        struct _unnamed_479 DevicePrivate;// Offset=0x0 Size=0xc
        struct _unnamed_514 BusNumber;// Offset=0x0 Size=0xc
        struct _unnamed_515 DeviceSpecificData;// Offset=0x0 Size=0xc
        struct _unnamed_516 Memory40;// Offset=0x0 Size=0xc
        struct _unnamed_517 Memory48;// Offset=0x0 Size=0xc
        struct _unnamed_518 Memory64;// Offset=0x0 Size=0xc
        struct _unnamed_485 Connection;// Offset=0x0 Size=0xc
    };
};

struct _CM_PARTIAL_RESOURCE_DESCRIPTOR// Size=0x14 (Id=520)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char ShareDisposition;// Offset=0x1 Size=0x1
    unsigned short Flags;// Offset=0x2 Size=0x2
    union _unnamed_519 u;// Offset=0x4 Size=0x10
};
