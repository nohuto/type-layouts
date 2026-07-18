struct _anonymous_31// Size=0x8 (Id=31)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=32)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _anonymous_31 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _anonymous_285// Size=0xc (Id=285)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _anonymous_286// Size=0x10 (Id=286)
{
    unsigned short Level;// Offset=0x0 Size=0x2
    unsigned short Group;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _anonymous_287// Size=0x10 (Id=287)
{
    unsigned short Group;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _anonymous_288// Size=0x10 (Id=288)
{
    union // Size=0x10 (Id=0)
    {
        struct _anonymous_287 Raw;// Offset=0x0 Size=0x10
        struct _anonymous_286 Translated;// Offset=0x0 Size=0x10
    };
};

struct _anonymous_289// Size=0xc (Id=289)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long Port;// Offset=0x4 Size=0x4
    unsigned long Reserved1;// Offset=0x8 Size=0x4
};

struct _anonymous_290// Size=0xc (Id=290)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long RequestLine;// Offset=0x4 Size=0x4
    unsigned char TransferWidth;// Offset=0x8 Size=0x1
    unsigned char Reserved1;// Offset=0x9 Size=0x1
    unsigned char Reserved2;// Offset=0xa Size=0x1
    unsigned char Reserved3;// Offset=0xb Size=0x1
};

struct _anonymous_276// Size=0xc (Id=276)
{
    unsigned long Data[3];// Offset=0x0 Size=0xc
};

struct _anonymous_291// Size=0xc (Id=291)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned long Reserved;// Offset=0x8 Size=0x4
};

struct _anonymous_292// Size=0xc (Id=292)
{
    unsigned long DataSize;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Reserved2;// Offset=0x8 Size=0x4
};

struct _anonymous_293// Size=0xc (Id=293)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length40;// Offset=0x8 Size=0x4
};

struct _anonymous_294// Size=0xc (Id=294)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length48;// Offset=0x8 Size=0x4
};

struct _anonymous_295// Size=0xc (Id=295)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length64;// Offset=0x8 Size=0x4
};

struct _anonymous_282// Size=0xc (Id=282)
{
    unsigned char Class;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char Reserved1;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned long IdLowPart;// Offset=0x4 Size=0x4
    unsigned long IdHighPart;// Offset=0x8 Size=0x4
};

union _anonymous_296// Size=0x10 (Id=296)
{
    union // Size=0x10 (Id=0)
    {
        struct _anonymous_285 Generic;// Offset=0x0 Size=0xc
        struct _anonymous_285 Port;// Offset=0x0 Size=0xc
        struct _anonymous_286 Interrupt;// Offset=0x0 Size=0x10
        struct _anonymous_288 MessageInterrupt;// Offset=0x0 Size=0x10
        struct _anonymous_285 Memory;// Offset=0x0 Size=0xc
        struct _anonymous_289 Dma;// Offset=0x0 Size=0xc
        struct _anonymous_290 DmaV3;// Offset=0x0 Size=0xc
        struct _anonymous_276 DevicePrivate;// Offset=0x0 Size=0xc
        struct _anonymous_291 BusNumber;// Offset=0x0 Size=0xc
        struct _anonymous_292 DeviceSpecificData;// Offset=0x0 Size=0xc
        struct _anonymous_293 Memory40;// Offset=0x0 Size=0xc
        struct _anonymous_294 Memory48;// Offset=0x0 Size=0xc
        struct _anonymous_295 Memory64;// Offset=0x0 Size=0xc
        struct _anonymous_282 Connection;// Offset=0x0 Size=0xc
    };
};
