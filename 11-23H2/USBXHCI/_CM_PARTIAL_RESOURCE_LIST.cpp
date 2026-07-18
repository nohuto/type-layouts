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

struct _unnamed_300// Size=0xc (Id=300)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _unnamed_301// Size=0x10 (Id=301)
{
    unsigned short Level;// Offset=0x0 Size=0x2
    unsigned short Group;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_302// Size=0x10 (Id=302)
{
    unsigned short Group;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_303// Size=0x10 (Id=303)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_302 Raw;// Offset=0x0 Size=0x10
        struct _unnamed_301 Translated;// Offset=0x0 Size=0x10
    };
};

struct _unnamed_304// Size=0xc (Id=304)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long Port;// Offset=0x4 Size=0x4
    unsigned long Reserved1;// Offset=0x8 Size=0x4
};

struct _unnamed_305// Size=0xc (Id=305)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long RequestLine;// Offset=0x4 Size=0x4
    unsigned char TransferWidth;// Offset=0x8 Size=0x1
    unsigned char Reserved1;// Offset=0x9 Size=0x1
    unsigned char Reserved2;// Offset=0xa Size=0x1
    unsigned char Reserved3;// Offset=0xb Size=0x1
};

struct _unnamed_291// Size=0xc (Id=291)
{
    unsigned long Data[3];// Offset=0x0 Size=0xc
};

struct _unnamed_306// Size=0xc (Id=306)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned long Reserved;// Offset=0x8 Size=0x4
};

struct _unnamed_307// Size=0xc (Id=307)
{
    unsigned long DataSize;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Reserved2;// Offset=0x8 Size=0x4
};

struct _unnamed_308// Size=0xc (Id=308)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length40;// Offset=0x8 Size=0x4
};

struct _unnamed_309// Size=0xc (Id=309)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length48;// Offset=0x8 Size=0x4
};

struct _unnamed_310// Size=0xc (Id=310)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length64;// Offset=0x8 Size=0x4
};

struct _unnamed_297// Size=0xc (Id=297)
{
    unsigned char Class;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char Reserved1;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned long IdLowPart;// Offset=0x4 Size=0x4
    unsigned long IdHighPart;// Offset=0x8 Size=0x4
};

union _unnamed_311// Size=0x10 (Id=311)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_300 Generic;// Offset=0x0 Size=0xc
        struct _unnamed_300 Port;// Offset=0x0 Size=0xc
        struct _unnamed_301 Interrupt;// Offset=0x0 Size=0x10
        struct _unnamed_303 MessageInterrupt;// Offset=0x0 Size=0x10
        struct _unnamed_300 Memory;// Offset=0x0 Size=0xc
        struct _unnamed_304 Dma;// Offset=0x0 Size=0xc
        struct _unnamed_305 DmaV3;// Offset=0x0 Size=0xc
        struct _unnamed_291 DevicePrivate;// Offset=0x0 Size=0xc
        struct _unnamed_306 BusNumber;// Offset=0x0 Size=0xc
        struct _unnamed_307 DeviceSpecificData;// Offset=0x0 Size=0xc
        struct _unnamed_308 Memory40;// Offset=0x0 Size=0xc
        struct _unnamed_309 Memory48;// Offset=0x0 Size=0xc
        struct _unnamed_310 Memory64;// Offset=0x0 Size=0xc
        struct _unnamed_297 Connection;// Offset=0x0 Size=0xc
    };
};

struct _CM_PARTIAL_RESOURCE_DESCRIPTOR// Size=0x14 (Id=312)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char ShareDisposition;// Offset=0x1 Size=0x1
    unsigned short Flags;// Offset=0x2 Size=0x2
    union _unnamed_311 u;// Offset=0x4 Size=0x10
};

struct _CM_PARTIAL_RESOURCE_LIST// Size=0x1c (Id=1054)
{
    unsigned short Version;// Offset=0x0 Size=0x2
    unsigned short Revision;// Offset=0x2 Size=0x2
    unsigned long Count;// Offset=0x4 Size=0x4
    struct _CM_PARTIAL_RESOURCE_DESCRIPTOR PartialDescriptors[1];// Offset=0x8 Size=0x14
};
