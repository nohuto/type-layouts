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

struct _anonymous_282// Size=0xc (Id=282)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _anonymous_283// Size=0x10 (Id=283)
{
    unsigned short Level;// Offset=0x0 Size=0x2
    unsigned short Group;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _anonymous_284// Size=0x10 (Id=284)
{
    unsigned short Group;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _anonymous_285// Size=0x10 (Id=285)
{
    union // Size=0x10 (Id=0)
    {
        struct _anonymous_284 Raw;// Offset=0x0 Size=0x10
        struct _anonymous_283 Translated;// Offset=0x0 Size=0x10
    };
};

struct _anonymous_286// Size=0xc (Id=286)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long Port;// Offset=0x4 Size=0x4
    unsigned long Reserved1;// Offset=0x8 Size=0x4
};

struct _anonymous_287// Size=0xc (Id=287)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long RequestLine;// Offset=0x4 Size=0x4
    unsigned char TransferWidth;// Offset=0x8 Size=0x1
    unsigned char Reserved1;// Offset=0x9 Size=0x1
    unsigned char Reserved2;// Offset=0xa Size=0x1
    unsigned char Reserved3;// Offset=0xb Size=0x1
};

struct _anonymous_273// Size=0xc (Id=273)
{
    unsigned long Data[3];// Offset=0x0 Size=0xc
};

struct _anonymous_288// Size=0xc (Id=288)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned long Reserved;// Offset=0x8 Size=0x4
};

struct _anonymous_289// Size=0xc (Id=289)
{
    unsigned long DataSize;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Reserved2;// Offset=0x8 Size=0x4
};

struct _anonymous_290// Size=0xc (Id=290)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length40;// Offset=0x8 Size=0x4
};

struct _anonymous_291// Size=0xc (Id=291)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length48;// Offset=0x8 Size=0x4
};

struct _anonymous_292// Size=0xc (Id=292)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length64;// Offset=0x8 Size=0x4
};

struct _anonymous_279// Size=0xc (Id=279)
{
    unsigned char Class;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char Reserved1;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned long IdLowPart;// Offset=0x4 Size=0x4
    unsigned long IdHighPart;// Offset=0x8 Size=0x4
};

union _anonymous_293// Size=0x10 (Id=293)
{
    union // Size=0x10 (Id=0)
    {
        struct _anonymous_282 Generic;// Offset=0x0 Size=0xc
        struct _anonymous_282 Port;// Offset=0x0 Size=0xc
        struct _anonymous_283 Interrupt;// Offset=0x0 Size=0x10
        struct _anonymous_285 MessageInterrupt;// Offset=0x0 Size=0x10
        struct _anonymous_282 Memory;// Offset=0x0 Size=0xc
        struct _anonymous_286 Dma;// Offset=0x0 Size=0xc
        struct _anonymous_287 DmaV3;// Offset=0x0 Size=0xc
        struct _anonymous_273 DevicePrivate;// Offset=0x0 Size=0xc
        struct _anonymous_288 BusNumber;// Offset=0x0 Size=0xc
        struct _anonymous_289 DeviceSpecificData;// Offset=0x0 Size=0xc
        struct _anonymous_290 Memory40;// Offset=0x0 Size=0xc
        struct _anonymous_291 Memory48;// Offset=0x0 Size=0xc
        struct _anonymous_292 Memory64;// Offset=0x0 Size=0xc
        struct _anonymous_279 Connection;// Offset=0x0 Size=0xc
    };
};

struct _CM_PARTIAL_RESOURCE_DESCRIPTOR// Size=0x14 (Id=294)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char ShareDisposition;// Offset=0x1 Size=0x1
    unsigned short Flags;// Offset=0x2 Size=0x2
    union _anonymous_293 u;// Offset=0x4 Size=0x10
};

struct _CM_PARTIAL_RESOURCE_LIST// Size=0x1c (Id=713)
{
    unsigned short Version;// Offset=0x0 Size=0x2
    unsigned short Revision;// Offset=0x2 Size=0x2
    unsigned long Count;// Offset=0x4 Size=0x4
    struct _CM_PARTIAL_RESOURCE_DESCRIPTOR PartialDescriptors[1];// Offset=0x8 Size=0x14
};
