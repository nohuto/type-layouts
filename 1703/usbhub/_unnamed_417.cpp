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

struct _unnamed_406// Size=0xc (Id=406)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _unnamed_407// Size=0x10 (Id=407)
{
    unsigned long Level;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_408// Size=0x10 (Id=408)
{
    unsigned short Reserved;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_409// Size=0x10 (Id=409)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_408 Raw;// Offset=0x0 Size=0x10
        struct _unnamed_407 Translated;// Offset=0x0 Size=0x10
    };
};

struct _unnamed_410// Size=0xc (Id=410)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long Port;// Offset=0x4 Size=0x4
    unsigned long Reserved1;// Offset=0x8 Size=0x4
};

struct _unnamed_411// Size=0xc (Id=411)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long RequestLine;// Offset=0x4 Size=0x4
    unsigned char TransferWidth;// Offset=0x8 Size=0x1
    unsigned char Reserved1;// Offset=0x9 Size=0x1
    unsigned char Reserved2;// Offset=0xa Size=0x1
    unsigned char Reserved3;// Offset=0xb Size=0x1
};

struct _unnamed_379// Size=0xc (Id=379)
{
    unsigned long Data[3];// Offset=0x0 Size=0xc
};

struct _unnamed_412// Size=0xc (Id=412)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned long Reserved;// Offset=0x8 Size=0x4
};

struct _unnamed_413// Size=0xc (Id=413)
{
    unsigned long DataSize;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Reserved2;// Offset=0x8 Size=0x4
};

struct _unnamed_414// Size=0xc (Id=414)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length40;// Offset=0x8 Size=0x4
};

struct _unnamed_415// Size=0xc (Id=415)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length48;// Offset=0x8 Size=0x4
};

struct _unnamed_416// Size=0xc (Id=416)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length64;// Offset=0x8 Size=0x4
};

struct _unnamed_385// Size=0xc (Id=385)
{
    unsigned char Class;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char Reserved1;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned long IdLowPart;// Offset=0x4 Size=0x4
    unsigned long IdHighPart;// Offset=0x8 Size=0x4
};

union _unnamed_417// Size=0x10 (Id=417)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_406 Generic;// Offset=0x0 Size=0xc
        struct _unnamed_406 Port;// Offset=0x0 Size=0xc
        struct _unnamed_407 Interrupt;// Offset=0x0 Size=0x10
        struct _unnamed_409 MessageInterrupt;// Offset=0x0 Size=0x10
        struct _unnamed_406 Memory;// Offset=0x0 Size=0xc
        struct _unnamed_410 Dma;// Offset=0x0 Size=0xc
        struct _unnamed_411 DmaV3;// Offset=0x0 Size=0xc
        struct _unnamed_379 DevicePrivate;// Offset=0x0 Size=0xc
        struct _unnamed_412 BusNumber;// Offset=0x0 Size=0xc
        struct _unnamed_413 DeviceSpecificData;// Offset=0x0 Size=0xc
        struct _unnamed_414 Memory40;// Offset=0x0 Size=0xc
        struct _unnamed_415 Memory48;// Offset=0x0 Size=0xc
        struct _unnamed_416 Memory64;// Offset=0x0 Size=0xc
        struct _unnamed_385 Connection;// Offset=0x0 Size=0xc
    };
};
