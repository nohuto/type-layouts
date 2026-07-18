struct _unnamed_28// Size=0x8 (Id=28)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=67)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_28 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _unnamed_413// Size=0xc (Id=413)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _unnamed_414// Size=0x10 (Id=414)
{
    unsigned short Level;// Offset=0x0 Size=0x2
    unsigned short Group;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_415// Size=0x10 (Id=415)
{
    unsigned short Group;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_416// Size=0x10 (Id=416)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_415 Raw;// Offset=0x0 Size=0x10
        struct _unnamed_414 Translated;// Offset=0x0 Size=0x10
    };
};

struct _unnamed_417// Size=0xc (Id=417)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long Port;// Offset=0x4 Size=0x4
    unsigned long Reserved1;// Offset=0x8 Size=0x4
};

struct _unnamed_418// Size=0xc (Id=418)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long RequestLine;// Offset=0x4 Size=0x4
    unsigned char TransferWidth;// Offset=0x8 Size=0x1
    unsigned char Reserved1;// Offset=0x9 Size=0x1
    unsigned char Reserved2;// Offset=0xa Size=0x1
    unsigned char Reserved3;// Offset=0xb Size=0x1
};

struct _unnamed_419// Size=0xc (Id=419)
{
    unsigned long Data[3];// Offset=0x0 Size=0xc
};

struct _unnamed_420// Size=0xc (Id=420)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned long Reserved;// Offset=0x8 Size=0x4
};

struct _unnamed_421// Size=0xc (Id=421)
{
    unsigned long DataSize;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Reserved2;// Offset=0x8 Size=0x4
};

struct _unnamed_422// Size=0xc (Id=422)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length40;// Offset=0x8 Size=0x4
};

struct _unnamed_423// Size=0xc (Id=423)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length48;// Offset=0x8 Size=0x4
};

struct _unnamed_424// Size=0xc (Id=424)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length64;// Offset=0x8 Size=0x4
};

struct _unnamed_425// Size=0xc (Id=425)
{
    unsigned char Class;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char Reserved1;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned long IdLowPart;// Offset=0x4 Size=0x4
    unsigned long IdHighPart;// Offset=0x8 Size=0x4
};

union _unnamed_426// Size=0x10 (Id=426)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_413 Generic;// Offset=0x0 Size=0xc
        struct _unnamed_413 Port;// Offset=0x0 Size=0xc
        struct _unnamed_414 Interrupt;// Offset=0x0 Size=0x10
        struct _unnamed_416 MessageInterrupt;// Offset=0x0 Size=0x10
        struct _unnamed_413 Memory;// Offset=0x0 Size=0xc
        struct _unnamed_417 Dma;// Offset=0x0 Size=0xc
        struct _unnamed_418 DmaV3;// Offset=0x0 Size=0xc
        struct _unnamed_419 DevicePrivate;// Offset=0x0 Size=0xc
        struct _unnamed_420 BusNumber;// Offset=0x0 Size=0xc
        struct _unnamed_421 DeviceSpecificData;// Offset=0x0 Size=0xc
        struct _unnamed_422 Memory40;// Offset=0x0 Size=0xc
        struct _unnamed_423 Memory48;// Offset=0x0 Size=0xc
        struct _unnamed_424 Memory64;// Offset=0x0 Size=0xc
        struct _unnamed_425 Connection;// Offset=0x0 Size=0xc
    };
};

struct _CM_PARTIAL_RESOURCE_DESCRIPTOR// Size=0x14 (Id=427)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char ShareDisposition;// Offset=0x1 Size=0x1
    unsigned short Flags;// Offset=0x2 Size=0x2
    union _unnamed_426 u;// Offset=0x4 Size=0x10
};
