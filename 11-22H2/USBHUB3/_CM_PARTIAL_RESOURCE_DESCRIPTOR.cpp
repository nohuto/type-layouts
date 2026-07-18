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

struct _unnamed_245// Size=0xc (Id=245)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _unnamed_246// Size=0x10 (Id=246)
{
    unsigned long Level;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_247// Size=0x10 (Id=247)
{
    unsigned short Reserved;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_248// Size=0x10 (Id=248)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_247 Raw;// Offset=0x0 Size=0x10
        struct _unnamed_246 Translated;// Offset=0x0 Size=0x10
    };
};

struct _unnamed_249// Size=0xc (Id=249)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long Port;// Offset=0x4 Size=0x4
    unsigned long Reserved1;// Offset=0x8 Size=0x4
};

struct _unnamed_250// Size=0xc (Id=250)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long RequestLine;// Offset=0x4 Size=0x4
    unsigned char TransferWidth;// Offset=0x8 Size=0x1
    unsigned char Reserved1;// Offset=0x9 Size=0x1
    unsigned char Reserved2;// Offset=0xa Size=0x1
    unsigned char Reserved3;// Offset=0xb Size=0x1
};

struct _unnamed_236// Size=0xc (Id=236)
{
    unsigned long Data[3];// Offset=0x0 Size=0xc
};

struct _unnamed_251// Size=0xc (Id=251)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned long Reserved;// Offset=0x8 Size=0x4
};

struct _unnamed_252// Size=0xc (Id=252)
{
    unsigned long DataSize;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Reserved2;// Offset=0x8 Size=0x4
};

struct _unnamed_253// Size=0xc (Id=253)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length40;// Offset=0x8 Size=0x4
};

struct _unnamed_254// Size=0xc (Id=254)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length48;// Offset=0x8 Size=0x4
};

struct _unnamed_255// Size=0xc (Id=255)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length64;// Offset=0x8 Size=0x4
};

struct _unnamed_242// Size=0xc (Id=242)
{
    unsigned char Class;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char Reserved1;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned long IdLowPart;// Offset=0x4 Size=0x4
    unsigned long IdHighPart;// Offset=0x8 Size=0x4
};

union _unnamed_256// Size=0x10 (Id=256)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_245 Generic;// Offset=0x0 Size=0xc
        struct _unnamed_245 Port;// Offset=0x0 Size=0xc
        struct _unnamed_246 Interrupt;// Offset=0x0 Size=0x10
        struct _unnamed_248 MessageInterrupt;// Offset=0x0 Size=0x10
        struct _unnamed_245 Memory;// Offset=0x0 Size=0xc
        struct _unnamed_249 Dma;// Offset=0x0 Size=0xc
        struct _unnamed_250 DmaV3;// Offset=0x0 Size=0xc
        struct _unnamed_236 DevicePrivate;// Offset=0x0 Size=0xc
        struct _unnamed_251 BusNumber;// Offset=0x0 Size=0xc
        struct _unnamed_252 DeviceSpecificData;// Offset=0x0 Size=0xc
        struct _unnamed_253 Memory40;// Offset=0x0 Size=0xc
        struct _unnamed_254 Memory48;// Offset=0x0 Size=0xc
        struct _unnamed_255 Memory64;// Offset=0x0 Size=0xc
        struct _unnamed_242 Connection;// Offset=0x0 Size=0xc
    };
};

struct _CM_PARTIAL_RESOURCE_DESCRIPTOR// Size=0x14 (Id=257)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char ShareDisposition;// Offset=0x1 Size=0x1
    unsigned short Flags;// Offset=0x2 Size=0x2
    union _unnamed_256 u;// Offset=0x4 Size=0x10
};
