struct _anonymous_10// Size=0x8 (Id=10)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=11)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _anonymous_10 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _anonymous_509// Size=0xc (Id=509)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _anonymous_510// Size=0x10 (Id=510)
{
    unsigned long Level;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _anonymous_511// Size=0x10 (Id=511)
{
    unsigned short Reserved;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _anonymous_512// Size=0x10 (Id=512)
{
    union // Size=0x10 (Id=0)
    {
        struct _anonymous_511 Raw;// Offset=0x0 Size=0x10
        struct _anonymous_510 Translated;// Offset=0x0 Size=0x10
    };
};

struct _anonymous_513// Size=0xc (Id=513)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long Port;// Offset=0x4 Size=0x4
    unsigned long Reserved1;// Offset=0x8 Size=0x4
};

struct _anonymous_514// Size=0xc (Id=514)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long RequestLine;// Offset=0x4 Size=0x4
    unsigned char TransferWidth;// Offset=0x8 Size=0x1
    unsigned char Reserved1;// Offset=0x9 Size=0x1
    unsigned char Reserved2;// Offset=0xa Size=0x1
    unsigned char Reserved3;// Offset=0xb Size=0x1
};

struct _anonymous_482// Size=0xc (Id=482)
{
    unsigned long Data[3];// Offset=0x0 Size=0xc
};

struct _anonymous_515// Size=0xc (Id=515)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned long Reserved;// Offset=0x8 Size=0x4
};

struct _anonymous_516// Size=0xc (Id=516)
{
    unsigned long DataSize;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Reserved2;// Offset=0x8 Size=0x4
};

struct _anonymous_517// Size=0xc (Id=517)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length40;// Offset=0x8 Size=0x4
};

struct _anonymous_518// Size=0xc (Id=518)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length48;// Offset=0x8 Size=0x4
};

struct _anonymous_519// Size=0xc (Id=519)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length64;// Offset=0x8 Size=0x4
};

struct _anonymous_488// Size=0xc (Id=488)
{
    unsigned char Class;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char Reserved1;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned long IdLowPart;// Offset=0x4 Size=0x4
    unsigned long IdHighPart;// Offset=0x8 Size=0x4
};

union _anonymous_520// Size=0x10 (Id=520)
{
    union // Size=0x10 (Id=0)
    {
        struct _anonymous_509 Generic;// Offset=0x0 Size=0xc
        struct _anonymous_509 Port;// Offset=0x0 Size=0xc
        struct _anonymous_510 Interrupt;// Offset=0x0 Size=0x10
        struct _anonymous_512 MessageInterrupt;// Offset=0x0 Size=0x10
        struct _anonymous_509 Memory;// Offset=0x0 Size=0xc
        struct _anonymous_513 Dma;// Offset=0x0 Size=0xc
        struct _anonymous_514 DmaV3;// Offset=0x0 Size=0xc
        struct _anonymous_482 DevicePrivate;// Offset=0x0 Size=0xc
        struct _anonymous_515 BusNumber;// Offset=0x0 Size=0xc
        struct _anonymous_516 DeviceSpecificData;// Offset=0x0 Size=0xc
        struct _anonymous_517 Memory40;// Offset=0x0 Size=0xc
        struct _anonymous_518 Memory48;// Offset=0x0 Size=0xc
        struct _anonymous_519 Memory64;// Offset=0x0 Size=0xc
        struct _anonymous_488 Connection;// Offset=0x0 Size=0xc
    };
};
