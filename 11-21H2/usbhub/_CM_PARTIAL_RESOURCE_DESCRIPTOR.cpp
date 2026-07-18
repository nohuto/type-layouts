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

struct _unnamed_453// Size=0xc (Id=453)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _unnamed_454// Size=0x10 (Id=454)
{
    unsigned long Level;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_455// Size=0x10 (Id=455)
{
    unsigned short Reserved;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_456// Size=0x10 (Id=456)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_455 Raw;// Offset=0x0 Size=0x10
        struct _unnamed_454 Translated;// Offset=0x0 Size=0x10
    };
};

struct _unnamed_457// Size=0xc (Id=457)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long Port;// Offset=0x4 Size=0x4
    unsigned long Reserved1;// Offset=0x8 Size=0x4
};

struct _unnamed_458// Size=0xc (Id=458)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long RequestLine;// Offset=0x4 Size=0x4
    unsigned char TransferWidth;// Offset=0x8 Size=0x1
    unsigned char Reserved1;// Offset=0x9 Size=0x1
    unsigned char Reserved2;// Offset=0xa Size=0x1
    unsigned char Reserved3;// Offset=0xb Size=0x1
};

struct _unnamed_426// Size=0xc (Id=426)
{
    unsigned long Data[3];// Offset=0x0 Size=0xc
};

struct _unnamed_459// Size=0xc (Id=459)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned long Reserved;// Offset=0x8 Size=0x4
};

struct _unnamed_460// Size=0xc (Id=460)
{
    unsigned long DataSize;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Reserved2;// Offset=0x8 Size=0x4
};

struct _unnamed_461// Size=0xc (Id=461)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length40;// Offset=0x8 Size=0x4
};

struct _unnamed_462// Size=0xc (Id=462)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length48;// Offset=0x8 Size=0x4
};

struct _unnamed_463// Size=0xc (Id=463)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length64;// Offset=0x8 Size=0x4
};

struct _unnamed_432// Size=0xc (Id=432)
{
    unsigned char Class;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char Reserved1;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned long IdLowPart;// Offset=0x4 Size=0x4
    unsigned long IdHighPart;// Offset=0x8 Size=0x4
};

union _unnamed_464// Size=0x10 (Id=464)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_453 Generic;// Offset=0x0 Size=0xc
        struct _unnamed_453 Port;// Offset=0x0 Size=0xc
        struct _unnamed_454 Interrupt;// Offset=0x0 Size=0x10
        struct _unnamed_456 MessageInterrupt;// Offset=0x0 Size=0x10
        struct _unnamed_453 Memory;// Offset=0x0 Size=0xc
        struct _unnamed_457 Dma;// Offset=0x0 Size=0xc
        struct _unnamed_458 DmaV3;// Offset=0x0 Size=0xc
        struct _unnamed_426 DevicePrivate;// Offset=0x0 Size=0xc
        struct _unnamed_459 BusNumber;// Offset=0x0 Size=0xc
        struct _unnamed_460 DeviceSpecificData;// Offset=0x0 Size=0xc
        struct _unnamed_461 Memory40;// Offset=0x0 Size=0xc
        struct _unnamed_462 Memory48;// Offset=0x0 Size=0xc
        struct _unnamed_463 Memory64;// Offset=0x0 Size=0xc
        struct _unnamed_432 Connection;// Offset=0x0 Size=0xc
    };
};

struct _CM_PARTIAL_RESOURCE_DESCRIPTOR// Size=0x14 (Id=465)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char ShareDisposition;// Offset=0x1 Size=0x1
    unsigned short Flags;// Offset=0x2 Size=0x2
    union _unnamed_464 u;// Offset=0x4 Size=0x10
};
