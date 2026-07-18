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

struct _unnamed_247// Size=0xc (Id=247)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _unnamed_248// Size=0x10 (Id=248)
{
    unsigned long Level;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_249// Size=0x10 (Id=249)
{
    unsigned short Reserved;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_250// Size=0x10 (Id=250)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_249 Raw;// Offset=0x0 Size=0x10
        struct _unnamed_248 Translated;// Offset=0x0 Size=0x10
    };
};

struct _unnamed_251// Size=0xc (Id=251)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long Port;// Offset=0x4 Size=0x4
    unsigned long Reserved1;// Offset=0x8 Size=0x4
};

struct _unnamed_252// Size=0xc (Id=252)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long RequestLine;// Offset=0x4 Size=0x4
    unsigned char TransferWidth;// Offset=0x8 Size=0x1
    unsigned char Reserved1;// Offset=0x9 Size=0x1
    unsigned char Reserved2;// Offset=0xa Size=0x1
    unsigned char Reserved3;// Offset=0xb Size=0x1
};

struct _unnamed_238// Size=0xc (Id=238)
{
    unsigned long Data[3];// Offset=0x0 Size=0xc
};

struct _unnamed_253// Size=0xc (Id=253)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned long Reserved;// Offset=0x8 Size=0x4
};

struct _unnamed_254// Size=0xc (Id=254)
{
    unsigned long DataSize;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Reserved2;// Offset=0x8 Size=0x4
};

struct _unnamed_255// Size=0xc (Id=255)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length40;// Offset=0x8 Size=0x4
};

struct _unnamed_256// Size=0xc (Id=256)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length48;// Offset=0x8 Size=0x4
};

struct _unnamed_257// Size=0xc (Id=257)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length64;// Offset=0x8 Size=0x4
};

struct _unnamed_244// Size=0xc (Id=244)
{
    unsigned char Class;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char Reserved1;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned long IdLowPart;// Offset=0x4 Size=0x4
    unsigned long IdHighPart;// Offset=0x8 Size=0x4
};

union _unnamed_258// Size=0x10 (Id=258)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_247 Generic;// Offset=0x0 Size=0xc
        struct _unnamed_247 Port;// Offset=0x0 Size=0xc
        struct _unnamed_248 Interrupt;// Offset=0x0 Size=0x10
        struct _unnamed_250 MessageInterrupt;// Offset=0x0 Size=0x10
        struct _unnamed_247 Memory;// Offset=0x0 Size=0xc
        struct _unnamed_251 Dma;// Offset=0x0 Size=0xc
        struct _unnamed_252 DmaV3;// Offset=0x0 Size=0xc
        struct _unnamed_238 DevicePrivate;// Offset=0x0 Size=0xc
        struct _unnamed_253 BusNumber;// Offset=0x0 Size=0xc
        struct _unnamed_254 DeviceSpecificData;// Offset=0x0 Size=0xc
        struct _unnamed_255 Memory40;// Offset=0x0 Size=0xc
        struct _unnamed_256 Memory48;// Offset=0x0 Size=0xc
        struct _unnamed_257 Memory64;// Offset=0x0 Size=0xc
        struct _unnamed_244 Connection;// Offset=0x0 Size=0xc
    };
};

struct _CM_PARTIAL_RESOURCE_DESCRIPTOR// Size=0x14 (Id=259)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char ShareDisposition;// Offset=0x1 Size=0x1
    unsigned short Flags;// Offset=0x2 Size=0x2
    union _unnamed_258 u;// Offset=0x4 Size=0x10
};

struct _CM_PARTIAL_RESOURCE_LIST// Size=0x1c (Id=881)
{
    unsigned short Version;// Offset=0x0 Size=0x2
    unsigned short Revision;// Offset=0x2 Size=0x2
    unsigned long Count;// Offset=0x4 Size=0x4
    struct _CM_PARTIAL_RESOURCE_DESCRIPTOR PartialDescriptors[1];// Offset=0x8 Size=0x14
};
