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

struct _unnamed_372// Size=0xc (Id=372)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _unnamed_373// Size=0x10 (Id=373)
{
    unsigned short Level;// Offset=0x0 Size=0x2
    unsigned short Group;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_374// Size=0x10 (Id=374)
{
    unsigned short Group;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_375// Size=0x10 (Id=375)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_374 Raw;// Offset=0x0 Size=0x10
        struct _unnamed_373 Translated;// Offset=0x0 Size=0x10
    };
};

struct _unnamed_376// Size=0xc (Id=376)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long Port;// Offset=0x4 Size=0x4
    unsigned long Reserved1;// Offset=0x8 Size=0x4
};

struct _unnamed_377// Size=0xc (Id=377)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long RequestLine;// Offset=0x4 Size=0x4
    unsigned char TransferWidth;// Offset=0x8 Size=0x1
    unsigned char Reserved1;// Offset=0x9 Size=0x1
    unsigned char Reserved2;// Offset=0xa Size=0x1
    unsigned char Reserved3;// Offset=0xb Size=0x1
};

struct _unnamed_378// Size=0xc (Id=378)
{
    unsigned long Data[3];// Offset=0x0 Size=0xc
};

struct _unnamed_379// Size=0xc (Id=379)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned long Reserved;// Offset=0x8 Size=0x4
};

struct _unnamed_380// Size=0xc (Id=380)
{
    unsigned long DataSize;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Reserved2;// Offset=0x8 Size=0x4
};

struct _unnamed_381// Size=0xc (Id=381)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length40;// Offset=0x8 Size=0x4
};

struct _unnamed_382// Size=0xc (Id=382)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length48;// Offset=0x8 Size=0x4
};

struct _unnamed_383// Size=0xc (Id=383)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length64;// Offset=0x8 Size=0x4
};

struct _unnamed_384// Size=0xc (Id=384)
{
    unsigned char Class;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char Reserved1;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned long IdLowPart;// Offset=0x4 Size=0x4
    unsigned long IdHighPart;// Offset=0x8 Size=0x4
};

union _unnamed_385// Size=0x10 (Id=385)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_372 Generic;// Offset=0x0 Size=0xc
        struct _unnamed_372 Port;// Offset=0x0 Size=0xc
        struct _unnamed_373 Interrupt;// Offset=0x0 Size=0x10
        struct _unnamed_375 MessageInterrupt;// Offset=0x0 Size=0x10
        struct _unnamed_372 Memory;// Offset=0x0 Size=0xc
        struct _unnamed_376 Dma;// Offset=0x0 Size=0xc
        struct _unnamed_377 DmaV3;// Offset=0x0 Size=0xc
        struct _unnamed_378 DevicePrivate;// Offset=0x0 Size=0xc
        struct _unnamed_379 BusNumber;// Offset=0x0 Size=0xc
        struct _unnamed_380 DeviceSpecificData;// Offset=0x0 Size=0xc
        struct _unnamed_381 Memory40;// Offset=0x0 Size=0xc
        struct _unnamed_382 Memory48;// Offset=0x0 Size=0xc
        struct _unnamed_383 Memory64;// Offset=0x0 Size=0xc
        struct _unnamed_384 Connection;// Offset=0x0 Size=0xc
    };
};
