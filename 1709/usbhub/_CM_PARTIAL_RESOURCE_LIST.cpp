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

struct _unnamed_409// Size=0xc (Id=409)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _unnamed_410// Size=0x10 (Id=410)
{
    unsigned long Level;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_411// Size=0x10 (Id=411)
{
    unsigned short Reserved;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_412// Size=0x10 (Id=412)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_411 Raw;// Offset=0x0 Size=0x10
        struct _unnamed_410 Translated;// Offset=0x0 Size=0x10
    };
};

struct _unnamed_413// Size=0xc (Id=413)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long Port;// Offset=0x4 Size=0x4
    unsigned long Reserved1;// Offset=0x8 Size=0x4
};

struct _unnamed_414// Size=0xc (Id=414)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long RequestLine;// Offset=0x4 Size=0x4
    unsigned char TransferWidth;// Offset=0x8 Size=0x1
    unsigned char Reserved1;// Offset=0x9 Size=0x1
    unsigned char Reserved2;// Offset=0xa Size=0x1
    unsigned char Reserved3;// Offset=0xb Size=0x1
};

struct _unnamed_382// Size=0xc (Id=382)
{
    unsigned long Data[3];// Offset=0x0 Size=0xc
};

struct _unnamed_415// Size=0xc (Id=415)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned long Reserved;// Offset=0x8 Size=0x4
};

struct _unnamed_416// Size=0xc (Id=416)
{
    unsigned long DataSize;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Reserved2;// Offset=0x8 Size=0x4
};

struct _unnamed_417// Size=0xc (Id=417)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length40;// Offset=0x8 Size=0x4
};

struct _unnamed_418// Size=0xc (Id=418)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length48;// Offset=0x8 Size=0x4
};

struct _unnamed_419// Size=0xc (Id=419)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length64;// Offset=0x8 Size=0x4
};

struct _unnamed_388// Size=0xc (Id=388)
{
    unsigned char Class;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char Reserved1;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned long IdLowPart;// Offset=0x4 Size=0x4
    unsigned long IdHighPart;// Offset=0x8 Size=0x4
};

union _unnamed_420// Size=0x10 (Id=420)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_409 Generic;// Offset=0x0 Size=0xc
        struct _unnamed_409 Port;// Offset=0x0 Size=0xc
        struct _unnamed_410 Interrupt;// Offset=0x0 Size=0x10
        struct _unnamed_412 MessageInterrupt;// Offset=0x0 Size=0x10
        struct _unnamed_409 Memory;// Offset=0x0 Size=0xc
        struct _unnamed_413 Dma;// Offset=0x0 Size=0xc
        struct _unnamed_414 DmaV3;// Offset=0x0 Size=0xc
        struct _unnamed_382 DevicePrivate;// Offset=0x0 Size=0xc
        struct _unnamed_415 BusNumber;// Offset=0x0 Size=0xc
        struct _unnamed_416 DeviceSpecificData;// Offset=0x0 Size=0xc
        struct _unnamed_417 Memory40;// Offset=0x0 Size=0xc
        struct _unnamed_418 Memory48;// Offset=0x0 Size=0xc
        struct _unnamed_419 Memory64;// Offset=0x0 Size=0xc
        struct _unnamed_388 Connection;// Offset=0x0 Size=0xc
    };
};

struct _CM_PARTIAL_RESOURCE_DESCRIPTOR// Size=0x14 (Id=421)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char ShareDisposition;// Offset=0x1 Size=0x1
    unsigned short Flags;// Offset=0x2 Size=0x2
    union _unnamed_420 u;// Offset=0x4 Size=0x10
};

struct _CM_PARTIAL_RESOURCE_LIST// Size=0x1c (Id=408)
{
    unsigned short Version;// Offset=0x0 Size=0x2
    unsigned short Revision;// Offset=0x2 Size=0x2
    unsigned long Count;// Offset=0x4 Size=0x4
    struct _CM_PARTIAL_RESOURCE_DESCRIPTOR PartialDescriptors[1];// Offset=0x8 Size=0x14
};
