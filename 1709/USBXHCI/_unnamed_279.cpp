struct _unnamed_31// Size=0x8 (Id=31)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=32)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_31 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _unnamed_268// Size=0xc (Id=268)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _unnamed_269// Size=0x10 (Id=269)
{
    unsigned short Level;// Offset=0x0 Size=0x2
    unsigned short Group;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_270// Size=0x10 (Id=270)
{
    unsigned short Group;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_271// Size=0x10 (Id=271)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_270 Raw;// Offset=0x0 Size=0x10
        struct _unnamed_269 Translated;// Offset=0x0 Size=0x10
    };
};

struct _unnamed_272// Size=0xc (Id=272)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long Port;// Offset=0x4 Size=0x4
    unsigned long Reserved1;// Offset=0x8 Size=0x4
};

struct _unnamed_273// Size=0xc (Id=273)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long RequestLine;// Offset=0x4 Size=0x4
    unsigned char TransferWidth;// Offset=0x8 Size=0x1
    unsigned char Reserved1;// Offset=0x9 Size=0x1
    unsigned char Reserved2;// Offset=0xa Size=0x1
    unsigned char Reserved3;// Offset=0xb Size=0x1
};

struct _unnamed_259// Size=0xc (Id=259)
{
    unsigned long Data[3];// Offset=0x0 Size=0xc
};

struct _unnamed_274// Size=0xc (Id=274)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned long Reserved;// Offset=0x8 Size=0x4
};

struct _unnamed_275// Size=0xc (Id=275)
{
    unsigned long DataSize;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Reserved2;// Offset=0x8 Size=0x4
};

struct _unnamed_276// Size=0xc (Id=276)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length40;// Offset=0x8 Size=0x4
};

struct _unnamed_277// Size=0xc (Id=277)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length48;// Offset=0x8 Size=0x4
};

struct _unnamed_278// Size=0xc (Id=278)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length64;// Offset=0x8 Size=0x4
};

struct _unnamed_265// Size=0xc (Id=265)
{
    unsigned char Class;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char Reserved1;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned long IdLowPart;// Offset=0x4 Size=0x4
    unsigned long IdHighPart;// Offset=0x8 Size=0x4
};

union _unnamed_279// Size=0x10 (Id=279)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_268 Generic;// Offset=0x0 Size=0xc
        struct _unnamed_268 Port;// Offset=0x0 Size=0xc
        struct _unnamed_269 Interrupt;// Offset=0x0 Size=0x10
        struct _unnamed_271 MessageInterrupt;// Offset=0x0 Size=0x10
        struct _unnamed_268 Memory;// Offset=0x0 Size=0xc
        struct _unnamed_272 Dma;// Offset=0x0 Size=0xc
        struct _unnamed_273 DmaV3;// Offset=0x0 Size=0xc
        struct _unnamed_259 DevicePrivate;// Offset=0x0 Size=0xc
        struct _unnamed_274 BusNumber;// Offset=0x0 Size=0xc
        struct _unnamed_275 DeviceSpecificData;// Offset=0x0 Size=0xc
        struct _unnamed_276 Memory40;// Offset=0x0 Size=0xc
        struct _unnamed_277 Memory48;// Offset=0x0 Size=0xc
        struct _unnamed_278 Memory64;// Offset=0x0 Size=0xc
        struct _unnamed_265 Connection;// Offset=0x0 Size=0xc
    };
};
