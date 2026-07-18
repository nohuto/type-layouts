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

struct _unnamed_238// Size=0xc (Id=238)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _unnamed_239// Size=0x10 (Id=239)
{
    unsigned long Level;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_240// Size=0x10 (Id=240)
{
    unsigned short Reserved;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_241// Size=0x10 (Id=241)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_240 Raw;// Offset=0x0 Size=0x10
        struct _unnamed_239 Translated;// Offset=0x0 Size=0x10
    };
};

struct _unnamed_242// Size=0xc (Id=242)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long Port;// Offset=0x4 Size=0x4
    unsigned long Reserved1;// Offset=0x8 Size=0x4
};

struct _unnamed_243// Size=0xc (Id=243)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long RequestLine;// Offset=0x4 Size=0x4
    unsigned char TransferWidth;// Offset=0x8 Size=0x1
    unsigned char Reserved1;// Offset=0x9 Size=0x1
    unsigned char Reserved2;// Offset=0xa Size=0x1
    unsigned char Reserved3;// Offset=0xb Size=0x1
};

struct _unnamed_229// Size=0xc (Id=229)
{
    unsigned long Data[3];// Offset=0x0 Size=0xc
};

struct _unnamed_244// Size=0xc (Id=244)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned long Reserved;// Offset=0x8 Size=0x4
};

struct _unnamed_245// Size=0xc (Id=245)
{
    unsigned long DataSize;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Reserved2;// Offset=0x8 Size=0x4
};

struct _unnamed_246// Size=0xc (Id=246)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length40;// Offset=0x8 Size=0x4
};

struct _unnamed_247// Size=0xc (Id=247)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length48;// Offset=0x8 Size=0x4
};

struct _unnamed_248// Size=0xc (Id=248)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length64;// Offset=0x8 Size=0x4
};

struct _unnamed_235// Size=0xc (Id=235)
{
    unsigned char Class;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char Reserved1;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned long IdLowPart;// Offset=0x4 Size=0x4
    unsigned long IdHighPart;// Offset=0x8 Size=0x4
};

union _unnamed_249// Size=0x10 (Id=249)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_238 Generic;// Offset=0x0 Size=0xc
        struct _unnamed_238 Port;// Offset=0x0 Size=0xc
        struct _unnamed_239 Interrupt;// Offset=0x0 Size=0x10
        struct _unnamed_241 MessageInterrupt;// Offset=0x0 Size=0x10
        struct _unnamed_238 Memory;// Offset=0x0 Size=0xc
        struct _unnamed_242 Dma;// Offset=0x0 Size=0xc
        struct _unnamed_243 DmaV3;// Offset=0x0 Size=0xc
        struct _unnamed_229 DevicePrivate;// Offset=0x0 Size=0xc
        struct _unnamed_244 BusNumber;// Offset=0x0 Size=0xc
        struct _unnamed_245 DeviceSpecificData;// Offset=0x0 Size=0xc
        struct _unnamed_246 Memory40;// Offset=0x0 Size=0xc
        struct _unnamed_247 Memory48;// Offset=0x0 Size=0xc
        struct _unnamed_248 Memory64;// Offset=0x0 Size=0xc
        struct _unnamed_235 Connection;// Offset=0x0 Size=0xc
    };
};

struct _CM_PARTIAL_RESOURCE_DESCRIPTOR// Size=0x14 (Id=250)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char ShareDisposition;// Offset=0x1 Size=0x1
    unsigned short Flags;// Offset=0x2 Size=0x2
    union _unnamed_249 u;// Offset=0x4 Size=0x10
};
