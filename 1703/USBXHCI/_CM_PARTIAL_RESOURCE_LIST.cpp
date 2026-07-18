struct _unnamed_30// Size=0x8 (Id=30)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=31)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_30 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _unnamed_260// Size=0xc (Id=260)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _unnamed_261// Size=0x10 (Id=261)
{
    unsigned short Level;// Offset=0x0 Size=0x2
    unsigned short Group;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_262// Size=0x10 (Id=262)
{
    unsigned short Group;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_263// Size=0x10 (Id=263)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_262 Raw;// Offset=0x0 Size=0x10
        struct _unnamed_261 Translated;// Offset=0x0 Size=0x10
    };
};

struct _unnamed_264// Size=0xc (Id=264)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long Port;// Offset=0x4 Size=0x4
    unsigned long Reserved1;// Offset=0x8 Size=0x4
};

struct _unnamed_265// Size=0xc (Id=265)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long RequestLine;// Offset=0x4 Size=0x4
    unsigned char TransferWidth;// Offset=0x8 Size=0x1
    unsigned char Reserved1;// Offset=0x9 Size=0x1
    unsigned char Reserved2;// Offset=0xa Size=0x1
    unsigned char Reserved3;// Offset=0xb Size=0x1
};

struct _unnamed_251// Size=0xc (Id=251)
{
    unsigned long Data[3];// Offset=0x0 Size=0xc
};

struct _unnamed_266// Size=0xc (Id=266)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned long Reserved;// Offset=0x8 Size=0x4
};

struct _unnamed_267// Size=0xc (Id=267)
{
    unsigned long DataSize;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Reserved2;// Offset=0x8 Size=0x4
};

struct _unnamed_268// Size=0xc (Id=268)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length40;// Offset=0x8 Size=0x4
};

struct _unnamed_269// Size=0xc (Id=269)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length48;// Offset=0x8 Size=0x4
};

struct _unnamed_270// Size=0xc (Id=270)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length64;// Offset=0x8 Size=0x4
};

struct _unnamed_257// Size=0xc (Id=257)
{
    unsigned char Class;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char Reserved1;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned long IdLowPart;// Offset=0x4 Size=0x4
    unsigned long IdHighPart;// Offset=0x8 Size=0x4
};

union _unnamed_271// Size=0x10 (Id=271)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_260 Generic;// Offset=0x0 Size=0xc
        struct _unnamed_260 Port;// Offset=0x0 Size=0xc
        struct _unnamed_261 Interrupt;// Offset=0x0 Size=0x10
        struct _unnamed_263 MessageInterrupt;// Offset=0x0 Size=0x10
        struct _unnamed_260 Memory;// Offset=0x0 Size=0xc
        struct _unnamed_264 Dma;// Offset=0x0 Size=0xc
        struct _unnamed_265 DmaV3;// Offset=0x0 Size=0xc
        struct _unnamed_251 DevicePrivate;// Offset=0x0 Size=0xc
        struct _unnamed_266 BusNumber;// Offset=0x0 Size=0xc
        struct _unnamed_267 DeviceSpecificData;// Offset=0x0 Size=0xc
        struct _unnamed_268 Memory40;// Offset=0x0 Size=0xc
        struct _unnamed_269 Memory48;// Offset=0x0 Size=0xc
        struct _unnamed_270 Memory64;// Offset=0x0 Size=0xc
        struct _unnamed_257 Connection;// Offset=0x0 Size=0xc
    };
};

struct _CM_PARTIAL_RESOURCE_DESCRIPTOR// Size=0x14 (Id=272)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char ShareDisposition;// Offset=0x1 Size=0x1
    unsigned short Flags;// Offset=0x2 Size=0x2
    union _unnamed_271 u;// Offset=0x4 Size=0x10
};

struct _CM_PARTIAL_RESOURCE_LIST// Size=0x1c (Id=826)
{
    unsigned short Version;// Offset=0x0 Size=0x2
    unsigned short Revision;// Offset=0x2 Size=0x2
    unsigned long Count;// Offset=0x4 Size=0x4
    struct _CM_PARTIAL_RESOURCE_DESCRIPTOR PartialDescriptors[1];// Offset=0x8 Size=0x14
};
