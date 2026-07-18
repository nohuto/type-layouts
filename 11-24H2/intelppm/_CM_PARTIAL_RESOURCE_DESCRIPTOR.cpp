struct _unnamed_47// Size=0x8 (Id=47)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=183)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_47 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _unnamed_306// Size=0xc (Id=306)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _unnamed_307// Size=0x10 (Id=307)
{
    unsigned short Level;// Offset=0x0 Size=0x2
    unsigned short Group;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_308// Size=0x10 (Id=308)
{
    unsigned short Group;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_309// Size=0x10 (Id=309)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_308 Raw;// Offset=0x0 Size=0x10
        struct _unnamed_307 Translated;// Offset=0x0 Size=0x10
    };
};

struct _unnamed_310// Size=0xc (Id=310)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long Port;// Offset=0x4 Size=0x4
    unsigned long Reserved1;// Offset=0x8 Size=0x4
};

struct _unnamed_311// Size=0xc (Id=311)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long RequestLine;// Offset=0x4 Size=0x4
    unsigned char TransferWidth;// Offset=0x8 Size=0x1
    unsigned char Reserved1;// Offset=0x9 Size=0x1
    unsigned char Reserved2;// Offset=0xa Size=0x1
    unsigned char Reserved3;// Offset=0xb Size=0x1
};

struct _unnamed_297// Size=0xc (Id=297)
{
    unsigned long Data[3];// Offset=0x0 Size=0xc
};

struct _unnamed_312// Size=0xc (Id=312)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned long Reserved;// Offset=0x8 Size=0x4
};

struct _unnamed_313// Size=0xc (Id=313)
{
    unsigned long DataSize;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Reserved2;// Offset=0x8 Size=0x4
};

struct _unnamed_314// Size=0xc (Id=314)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length40;// Offset=0x8 Size=0x4
};

struct _unnamed_315// Size=0xc (Id=315)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length48;// Offset=0x8 Size=0x4
};

struct _unnamed_316// Size=0xc (Id=316)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length64;// Offset=0x8 Size=0x4
};

struct _unnamed_303// Size=0xc (Id=303)
{
    unsigned char Class;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char Reserved1;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned long IdLowPart;// Offset=0x4 Size=0x4
    unsigned long IdHighPart;// Offset=0x8 Size=0x4
};

union _unnamed_317// Size=0x10 (Id=317)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_306 Generic;// Offset=0x0 Size=0xc
        struct _unnamed_306 Port;// Offset=0x0 Size=0xc
        struct _unnamed_307 Interrupt;// Offset=0x0 Size=0x10
        struct _unnamed_309 MessageInterrupt;// Offset=0x0 Size=0x10
        struct _unnamed_306 Memory;// Offset=0x0 Size=0xc
        struct _unnamed_310 Dma;// Offset=0x0 Size=0xc
        struct _unnamed_311 DmaV3;// Offset=0x0 Size=0xc
        struct _unnamed_297 DevicePrivate;// Offset=0x0 Size=0xc
        struct _unnamed_312 BusNumber;// Offset=0x0 Size=0xc
        struct _unnamed_313 DeviceSpecificData;// Offset=0x0 Size=0xc
        struct _unnamed_314 Memory40;// Offset=0x0 Size=0xc
        struct _unnamed_315 Memory48;// Offset=0x0 Size=0xc
        struct _unnamed_316 Memory64;// Offset=0x0 Size=0xc
        struct _unnamed_303 Connection;// Offset=0x0 Size=0xc
    };
};

struct _CM_PARTIAL_RESOURCE_DESCRIPTOR// Size=0x14 (Id=318)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char ShareDisposition;// Offset=0x1 Size=0x1
    unsigned short Flags;// Offset=0x2 Size=0x2
    union _unnamed_317 u;// Offset=0x4 Size=0x10
};
