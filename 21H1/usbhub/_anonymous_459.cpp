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

struct _anonymous_448// Size=0xc (Id=448)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _anonymous_449// Size=0x10 (Id=449)
{
    unsigned long Level;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _anonymous_450// Size=0x10 (Id=450)
{
    unsigned short Reserved;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _anonymous_451// Size=0x10 (Id=451)
{
    union // Size=0x10 (Id=0)
    {
        struct _anonymous_450 Raw;// Offset=0x0 Size=0x10
        struct _anonymous_449 Translated;// Offset=0x0 Size=0x10
    };
};

struct _anonymous_452// Size=0xc (Id=452)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long Port;// Offset=0x4 Size=0x4
    unsigned long Reserved1;// Offset=0x8 Size=0x4
};

struct _anonymous_453// Size=0xc (Id=453)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long RequestLine;// Offset=0x4 Size=0x4
    unsigned char TransferWidth;// Offset=0x8 Size=0x1
    unsigned char Reserved1;// Offset=0x9 Size=0x1
    unsigned char Reserved2;// Offset=0xa Size=0x1
    unsigned char Reserved3;// Offset=0xb Size=0x1
};

struct _anonymous_421// Size=0xc (Id=421)
{
    unsigned long Data[3];// Offset=0x0 Size=0xc
};

struct _anonymous_454// Size=0xc (Id=454)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned long Reserved;// Offset=0x8 Size=0x4
};

struct _anonymous_455// Size=0xc (Id=455)
{
    unsigned long DataSize;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Reserved2;// Offset=0x8 Size=0x4
};

struct _anonymous_456// Size=0xc (Id=456)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length40;// Offset=0x8 Size=0x4
};

struct _anonymous_457// Size=0xc (Id=457)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length48;// Offset=0x8 Size=0x4
};

struct _anonymous_458// Size=0xc (Id=458)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length64;// Offset=0x8 Size=0x4
};

struct _anonymous_427// Size=0xc (Id=427)
{
    unsigned char Class;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char Reserved1;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned long IdLowPart;// Offset=0x4 Size=0x4
    unsigned long IdHighPart;// Offset=0x8 Size=0x4
};

union _anonymous_459// Size=0x10 (Id=459)
{
    union // Size=0x10 (Id=0)
    {
        struct _anonymous_448 Generic;// Offset=0x0 Size=0xc
        struct _anonymous_448 Port;// Offset=0x0 Size=0xc
        struct _anonymous_449 Interrupt;// Offset=0x0 Size=0x10
        struct _anonymous_451 MessageInterrupt;// Offset=0x0 Size=0x10
        struct _anonymous_448 Memory;// Offset=0x0 Size=0xc
        struct _anonymous_452 Dma;// Offset=0x0 Size=0xc
        struct _anonymous_453 DmaV3;// Offset=0x0 Size=0xc
        struct _anonymous_421 DevicePrivate;// Offset=0x0 Size=0xc
        struct _anonymous_454 BusNumber;// Offset=0x0 Size=0xc
        struct _anonymous_455 DeviceSpecificData;// Offset=0x0 Size=0xc
        struct _anonymous_456 Memory40;// Offset=0x0 Size=0xc
        struct _anonymous_457 Memory48;// Offset=0x0 Size=0xc
        struct _anonymous_458 Memory64;// Offset=0x0 Size=0xc
        struct _anonymous_427 Connection;// Offset=0x0 Size=0xc
    };
};
