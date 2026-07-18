struct _unnamed_45// Size=0x8 (Id=45)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=46)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_45 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _unnamed_302// Size=0xc (Id=302)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _unnamed_303// Size=0x10 (Id=303)
{
    unsigned short Level;// Offset=0x0 Size=0x2
    unsigned short Group;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_304// Size=0x10 (Id=304)
{
    unsigned short Group;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_305// Size=0x10 (Id=305)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_304 Raw;// Offset=0x0 Size=0x10
        struct _unnamed_303 Translated;// Offset=0x0 Size=0x10
    };
};

struct _unnamed_306// Size=0xc (Id=306)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long Port;// Offset=0x4 Size=0x4
    unsigned long Reserved1;// Offset=0x8 Size=0x4
};

struct _unnamed_307// Size=0xc (Id=307)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long RequestLine;// Offset=0x4 Size=0x4
    unsigned char TransferWidth;// Offset=0x8 Size=0x1
    unsigned char Reserved1;// Offset=0x9 Size=0x1
    unsigned char Reserved2;// Offset=0xa Size=0x1
    unsigned char Reserved3;// Offset=0xb Size=0x1
};

struct _unnamed_293// Size=0xc (Id=293)
{
    unsigned long Data[3];// Offset=0x0 Size=0xc
};

struct _unnamed_308// Size=0xc (Id=308)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned long Reserved;// Offset=0x8 Size=0x4
};

struct _unnamed_309// Size=0xc (Id=309)
{
    unsigned long DataSize;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Reserved2;// Offset=0x8 Size=0x4
};

struct _unnamed_310// Size=0xc (Id=310)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length40;// Offset=0x8 Size=0x4
};

struct _unnamed_311// Size=0xc (Id=311)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length48;// Offset=0x8 Size=0x4
};

struct _unnamed_312// Size=0xc (Id=312)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length64;// Offset=0x8 Size=0x4
};

struct _unnamed_299// Size=0xc (Id=299)
{
    unsigned char Class;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char Reserved1;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned long IdLowPart;// Offset=0x4 Size=0x4
    unsigned long IdHighPart;// Offset=0x8 Size=0x4
};

union _unnamed_313// Size=0x10 (Id=313)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_302 Generic;// Offset=0x0 Size=0xc
        struct _unnamed_302 Port;// Offset=0x0 Size=0xc
        struct _unnamed_303 Interrupt;// Offset=0x0 Size=0x10
        struct _unnamed_305 MessageInterrupt;// Offset=0x0 Size=0x10
        struct _unnamed_302 Memory;// Offset=0x0 Size=0xc
        struct _unnamed_306 Dma;// Offset=0x0 Size=0xc
        struct _unnamed_307 DmaV3;// Offset=0x0 Size=0xc
        struct _unnamed_293 DevicePrivate;// Offset=0x0 Size=0xc
        struct _unnamed_308 BusNumber;// Offset=0x0 Size=0xc
        struct _unnamed_309 DeviceSpecificData;// Offset=0x0 Size=0xc
        struct _unnamed_310 Memory40;// Offset=0x0 Size=0xc
        struct _unnamed_311 Memory48;// Offset=0x0 Size=0xc
        struct _unnamed_312 Memory64;// Offset=0x0 Size=0xc
        struct _unnamed_299 Connection;// Offset=0x0 Size=0xc
    };
};
