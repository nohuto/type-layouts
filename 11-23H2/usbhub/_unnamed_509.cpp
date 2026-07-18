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

struct _unnamed_498// Size=0xc (Id=498)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _unnamed_499// Size=0x10 (Id=499)
{
    unsigned long Level;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_500// Size=0x10 (Id=500)
{
    unsigned short Reserved;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_501// Size=0x10 (Id=501)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_500 Raw;// Offset=0x0 Size=0x10
        struct _unnamed_499 Translated;// Offset=0x0 Size=0x10
    };
};

struct _unnamed_502// Size=0xc (Id=502)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long Port;// Offset=0x4 Size=0x4
    unsigned long Reserved1;// Offset=0x8 Size=0x4
};

struct _unnamed_503// Size=0xc (Id=503)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long RequestLine;// Offset=0x4 Size=0x4
    unsigned char TransferWidth;// Offset=0x8 Size=0x1
    unsigned char Reserved1;// Offset=0x9 Size=0x1
    unsigned char Reserved2;// Offset=0xa Size=0x1
    unsigned char Reserved3;// Offset=0xb Size=0x1
};

struct _unnamed_469// Size=0xc (Id=469)
{
    unsigned long Data[3];// Offset=0x0 Size=0xc
};

struct _unnamed_504// Size=0xc (Id=504)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned long Reserved;// Offset=0x8 Size=0x4
};

struct _unnamed_505// Size=0xc (Id=505)
{
    unsigned long DataSize;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Reserved2;// Offset=0x8 Size=0x4
};

struct _unnamed_506// Size=0xc (Id=506)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length40;// Offset=0x8 Size=0x4
};

struct _unnamed_507// Size=0xc (Id=507)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length48;// Offset=0x8 Size=0x4
};

struct _unnamed_508// Size=0xc (Id=508)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length64;// Offset=0x8 Size=0x4
};

struct _unnamed_475// Size=0xc (Id=475)
{
    unsigned char Class;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char Reserved1;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned long IdLowPart;// Offset=0x4 Size=0x4
    unsigned long IdHighPart;// Offset=0x8 Size=0x4
};

union _unnamed_509// Size=0x10 (Id=509)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_498 Generic;// Offset=0x0 Size=0xc
        struct _unnamed_498 Port;// Offset=0x0 Size=0xc
        struct _unnamed_499 Interrupt;// Offset=0x0 Size=0x10
        struct _unnamed_501 MessageInterrupt;// Offset=0x0 Size=0x10
        struct _unnamed_498 Memory;// Offset=0x0 Size=0xc
        struct _unnamed_502 Dma;// Offset=0x0 Size=0xc
        struct _unnamed_503 DmaV3;// Offset=0x0 Size=0xc
        struct _unnamed_469 DevicePrivate;// Offset=0x0 Size=0xc
        struct _unnamed_504 BusNumber;// Offset=0x0 Size=0xc
        struct _unnamed_505 DeviceSpecificData;// Offset=0x0 Size=0xc
        struct _unnamed_506 Memory40;// Offset=0x0 Size=0xc
        struct _unnamed_507 Memory48;// Offset=0x0 Size=0xc
        struct _unnamed_508 Memory64;// Offset=0x0 Size=0xc
        struct _unnamed_475 Connection;// Offset=0x0 Size=0xc
    };
};
