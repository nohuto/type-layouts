struct _unnamed_31// Size=0x8 (Id=31)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=62)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_31 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _unnamed_274// Size=0xc (Id=274)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _unnamed_275// Size=0x10 (Id=275)
{
    unsigned short Level;// Offset=0x0 Size=0x2
    unsigned short Group;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_276// Size=0x10 (Id=276)
{
    unsigned short Group;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_277// Size=0x10 (Id=277)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_276 Raw;// Offset=0x0 Size=0x10
        struct _unnamed_275 Translated;// Offset=0x0 Size=0x10
    };
};

struct _unnamed_278// Size=0xc (Id=278)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long Port;// Offset=0x4 Size=0x4
    unsigned long Reserved1;// Offset=0x8 Size=0x4
};

struct _unnamed_279// Size=0xc (Id=279)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long RequestLine;// Offset=0x4 Size=0x4
    unsigned char TransferWidth;// Offset=0x8 Size=0x1
    unsigned char Reserved1;// Offset=0x9 Size=0x1
    unsigned char Reserved2;// Offset=0xa Size=0x1
    unsigned char Reserved3;// Offset=0xb Size=0x1
};

struct _unnamed_265// Size=0xc (Id=265)
{
    unsigned long Data[3];// Offset=0x0 Size=0xc
};

struct _unnamed_280// Size=0xc (Id=280)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned long Reserved;// Offset=0x8 Size=0x4
};

struct _unnamed_281// Size=0xc (Id=281)
{
    unsigned long DataSize;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Reserved2;// Offset=0x8 Size=0x4
};

struct _unnamed_282// Size=0xc (Id=282)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length40;// Offset=0x8 Size=0x4
};

struct _unnamed_283// Size=0xc (Id=283)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length48;// Offset=0x8 Size=0x4
};

struct _unnamed_284// Size=0xc (Id=284)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length64;// Offset=0x8 Size=0x4
};

struct _unnamed_271// Size=0xc (Id=271)
{
    unsigned char Class;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char Reserved1;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned long IdLowPart;// Offset=0x4 Size=0x4
    unsigned long IdHighPart;// Offset=0x8 Size=0x4
};

union _unnamed_285// Size=0x10 (Id=285)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_274 Generic;// Offset=0x0 Size=0xc
        struct _unnamed_274 Port;// Offset=0x0 Size=0xc
        struct _unnamed_275 Interrupt;// Offset=0x0 Size=0x10
        struct _unnamed_277 MessageInterrupt;// Offset=0x0 Size=0x10
        struct _unnamed_274 Memory;// Offset=0x0 Size=0xc
        struct _unnamed_278 Dma;// Offset=0x0 Size=0xc
        struct _unnamed_279 DmaV3;// Offset=0x0 Size=0xc
        struct _unnamed_265 DevicePrivate;// Offset=0x0 Size=0xc
        struct _unnamed_280 BusNumber;// Offset=0x0 Size=0xc
        struct _unnamed_281 DeviceSpecificData;// Offset=0x0 Size=0xc
        struct _unnamed_282 Memory40;// Offset=0x0 Size=0xc
        struct _unnamed_283 Memory48;// Offset=0x0 Size=0xc
        struct _unnamed_284 Memory64;// Offset=0x0 Size=0xc
        struct _unnamed_271 Connection;// Offset=0x0 Size=0xc
    };
};

struct _CM_PARTIAL_RESOURCE_DESCRIPTOR// Size=0x14 (Id=286)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char ShareDisposition;// Offset=0x1 Size=0x1
    unsigned short Flags;// Offset=0x2 Size=0x2
    union _unnamed_285 u;// Offset=0x4 Size=0x10
};

struct _CM_PARTIAL_RESOURCE_LIST// Size=0x1c (Id=920)
{
    unsigned short Version;// Offset=0x0 Size=0x2
    unsigned short Revision;// Offset=0x2 Size=0x2
    unsigned long Count;// Offset=0x4 Size=0x4
    struct _CM_PARTIAL_RESOURCE_DESCRIPTOR PartialDescriptors[1];// Offset=0x8 Size=0x14
};
