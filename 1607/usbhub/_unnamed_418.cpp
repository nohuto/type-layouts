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

struct _unnamed_407// Size=0xc (Id=407)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _unnamed_408// Size=0x10 (Id=408)
{
    unsigned long Level;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_409// Size=0x10 (Id=409)
{
    unsigned short Reserved;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_410// Size=0x10 (Id=410)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_409 Raw;// Offset=0x0 Size=0x10
        struct _unnamed_408 Translated;// Offset=0x0 Size=0x10
    };
};

struct _unnamed_411// Size=0xc (Id=411)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long Port;// Offset=0x4 Size=0x4
    unsigned long Reserved1;// Offset=0x8 Size=0x4
};

struct _unnamed_412// Size=0xc (Id=412)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long RequestLine;// Offset=0x4 Size=0x4
    unsigned char TransferWidth;// Offset=0x8 Size=0x1
    unsigned char Reserved1;// Offset=0x9 Size=0x1
    unsigned char Reserved2;// Offset=0xa Size=0x1
    unsigned char Reserved3;// Offset=0xb Size=0x1
};

struct _unnamed_380// Size=0xc (Id=380)
{
    unsigned long Data[3];// Offset=0x0 Size=0xc
};

struct _unnamed_413// Size=0xc (Id=413)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned long Reserved;// Offset=0x8 Size=0x4
};

struct _unnamed_414// Size=0xc (Id=414)
{
    unsigned long DataSize;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Reserved2;// Offset=0x8 Size=0x4
};

struct _unnamed_415// Size=0xc (Id=415)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length40;// Offset=0x8 Size=0x4
};

struct _unnamed_416// Size=0xc (Id=416)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length48;// Offset=0x8 Size=0x4
};

struct _unnamed_417// Size=0xc (Id=417)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length64;// Offset=0x8 Size=0x4
};

struct _unnamed_386// Size=0xc (Id=386)
{
    unsigned char Class;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char Reserved1;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned long IdLowPart;// Offset=0x4 Size=0x4
    unsigned long IdHighPart;// Offset=0x8 Size=0x4
};

union _unnamed_418// Size=0x10 (Id=418)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_407 Generic;// Offset=0x0 Size=0xc
        struct _unnamed_407 Port;// Offset=0x0 Size=0xc
        struct _unnamed_408 Interrupt;// Offset=0x0 Size=0x10
        struct _unnamed_410 MessageInterrupt;// Offset=0x0 Size=0x10
        struct _unnamed_407 Memory;// Offset=0x0 Size=0xc
        struct _unnamed_411 Dma;// Offset=0x0 Size=0xc
        struct _unnamed_412 DmaV3;// Offset=0x0 Size=0xc
        struct _unnamed_380 DevicePrivate;// Offset=0x0 Size=0xc
        struct _unnamed_413 BusNumber;// Offset=0x0 Size=0xc
        struct _unnamed_414 DeviceSpecificData;// Offset=0x0 Size=0xc
        struct _unnamed_415 Memory40;// Offset=0x0 Size=0xc
        struct _unnamed_416 Memory48;// Offset=0x0 Size=0xc
        struct _unnamed_417 Memory64;// Offset=0x0 Size=0xc
        struct _unnamed_386 Connection;// Offset=0x0 Size=0xc
    };
};
