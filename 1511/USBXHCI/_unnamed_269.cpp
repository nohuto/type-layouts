struct _unnamed_28// Size=0x8 (Id=28)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=58)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_28 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _unnamed_258// Size=0xc (Id=258)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _unnamed_259// Size=0x10 (Id=259)
{
    unsigned short Level;// Offset=0x0 Size=0x2
    unsigned short Group;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_260// Size=0x10 (Id=260)
{
    unsigned short Group;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_261// Size=0x10 (Id=261)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_260 Raw;// Offset=0x0 Size=0x10
        struct _unnamed_259 Translated;// Offset=0x0 Size=0x10
    };
};

struct _unnamed_262// Size=0xc (Id=262)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long Port;// Offset=0x4 Size=0x4
    unsigned long Reserved1;// Offset=0x8 Size=0x4
};

struct _unnamed_263// Size=0xc (Id=263)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long RequestLine;// Offset=0x4 Size=0x4
    unsigned char TransferWidth;// Offset=0x8 Size=0x1
    unsigned char Reserved1;// Offset=0x9 Size=0x1
    unsigned char Reserved2;// Offset=0xa Size=0x1
    unsigned char Reserved3;// Offset=0xb Size=0x1
};

struct _unnamed_249// Size=0xc (Id=249)
{
    unsigned long Data[3];// Offset=0x0 Size=0xc
};

struct _unnamed_264// Size=0xc (Id=264)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned long Reserved;// Offset=0x8 Size=0x4
};

struct _unnamed_265// Size=0xc (Id=265)
{
    unsigned long DataSize;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Reserved2;// Offset=0x8 Size=0x4
};

struct _unnamed_266// Size=0xc (Id=266)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length40;// Offset=0x8 Size=0x4
};

struct _unnamed_267// Size=0xc (Id=267)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length48;// Offset=0x8 Size=0x4
};

struct _unnamed_268// Size=0xc (Id=268)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length64;// Offset=0x8 Size=0x4
};

struct _unnamed_255// Size=0xc (Id=255)
{
    unsigned char Class;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char Reserved1;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned long IdLowPart;// Offset=0x4 Size=0x4
    unsigned long IdHighPart;// Offset=0x8 Size=0x4
};

union _unnamed_269// Size=0x10 (Id=269)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_258 Generic;// Offset=0x0 Size=0xc
        struct _unnamed_258 Port;// Offset=0x0 Size=0xc
        struct _unnamed_259 Interrupt;// Offset=0x0 Size=0x10
        struct _unnamed_261 MessageInterrupt;// Offset=0x0 Size=0x10
        struct _unnamed_258 Memory;// Offset=0x0 Size=0xc
        struct _unnamed_262 Dma;// Offset=0x0 Size=0xc
        struct _unnamed_263 DmaV3;// Offset=0x0 Size=0xc
        struct _unnamed_249 DevicePrivate;// Offset=0x0 Size=0xc
        struct _unnamed_264 BusNumber;// Offset=0x0 Size=0xc
        struct _unnamed_265 DeviceSpecificData;// Offset=0x0 Size=0xc
        struct _unnamed_266 Memory40;// Offset=0x0 Size=0xc
        struct _unnamed_267 Memory48;// Offset=0x0 Size=0xc
        struct _unnamed_268 Memory64;// Offset=0x0 Size=0xc
        struct _unnamed_255 Connection;// Offset=0x0 Size=0xc
    };
};
