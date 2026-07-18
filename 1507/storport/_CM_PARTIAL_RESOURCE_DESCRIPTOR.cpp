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

struct _unnamed_420// Size=0xc (Id=420)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _unnamed_421// Size=0x10 (Id=421)
{
    unsigned short Level;// Offset=0x0 Size=0x2
    unsigned short Group;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_422// Size=0x10 (Id=422)
{
    unsigned short Group;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_423// Size=0x10 (Id=423)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_422 Raw;// Offset=0x0 Size=0x10
        struct _unnamed_421 Translated;// Offset=0x0 Size=0x10
    };
};

struct _unnamed_424// Size=0xc (Id=424)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long Port;// Offset=0x4 Size=0x4
    unsigned long Reserved1;// Offset=0x8 Size=0x4
};

struct _unnamed_425// Size=0xc (Id=425)
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

struct _unnamed_427// Size=0xc (Id=427)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned long Reserved;// Offset=0x8 Size=0x4
};

struct _unnamed_428// Size=0xc (Id=428)
{
    unsigned long DataSize;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Reserved2;// Offset=0x8 Size=0x4
};

struct _unnamed_429// Size=0xc (Id=429)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length40;// Offset=0x8 Size=0x4
};

struct _unnamed_430// Size=0xc (Id=430)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length48;// Offset=0x8 Size=0x4
};

struct _unnamed_431// Size=0xc (Id=431)
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

union _unnamed_433// Size=0x10 (Id=433)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_420 Generic;// Offset=0x0 Size=0xc
        struct _unnamed_420 Port;// Offset=0x0 Size=0xc
        struct _unnamed_421 Interrupt;// Offset=0x0 Size=0x10
        struct _unnamed_423 MessageInterrupt;// Offset=0x0 Size=0x10
        struct _unnamed_420 Memory;// Offset=0x0 Size=0xc
        struct _unnamed_424 Dma;// Offset=0x0 Size=0xc
        struct _unnamed_425 DmaV3;// Offset=0x0 Size=0xc
        struct _unnamed_426 DevicePrivate;// Offset=0x0 Size=0xc
        struct _unnamed_427 BusNumber;// Offset=0x0 Size=0xc
        struct _unnamed_428 DeviceSpecificData;// Offset=0x0 Size=0xc
        struct _unnamed_429 Memory40;// Offset=0x0 Size=0xc
        struct _unnamed_430 Memory48;// Offset=0x0 Size=0xc
        struct _unnamed_431 Memory64;// Offset=0x0 Size=0xc
        struct _unnamed_432 Connection;// Offset=0x0 Size=0xc
    };
};

struct _CM_PARTIAL_RESOURCE_DESCRIPTOR// Size=0x14 (Id=434)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char ShareDisposition;// Offset=0x1 Size=0x1
    unsigned short Flags;// Offset=0x2 Size=0x2
    union _unnamed_433 u;// Offset=0x4 Size=0x10
};
