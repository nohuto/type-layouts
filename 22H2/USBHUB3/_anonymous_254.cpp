struct _anonymous_10// Size=0x8 (Id=10)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=11)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _anonymous_10 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _anonymous_243// Size=0xc (Id=243)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _anonymous_244// Size=0x10 (Id=244)
{
    unsigned long Level;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _anonymous_245// Size=0x10 (Id=245)
{
    unsigned short Reserved;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _anonymous_246// Size=0x10 (Id=246)
{
    union // Size=0x10 (Id=0)
    {
        struct _anonymous_245 Raw;// Offset=0x0 Size=0x10
        struct _anonymous_244 Translated;// Offset=0x0 Size=0x10
    };
};

struct _anonymous_247// Size=0xc (Id=247)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long Port;// Offset=0x4 Size=0x4
    unsigned long Reserved1;// Offset=0x8 Size=0x4
};

struct _anonymous_248// Size=0xc (Id=248)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long RequestLine;// Offset=0x4 Size=0x4
    unsigned char TransferWidth;// Offset=0x8 Size=0x1
    unsigned char Reserved1;// Offset=0x9 Size=0x1
    unsigned char Reserved2;// Offset=0xa Size=0x1
    unsigned char Reserved3;// Offset=0xb Size=0x1
};

struct _anonymous_234// Size=0xc (Id=234)
{
    unsigned long Data[3];// Offset=0x0 Size=0xc
};

struct _anonymous_249// Size=0xc (Id=249)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned long Reserved;// Offset=0x8 Size=0x4
};

struct _anonymous_250// Size=0xc (Id=250)
{
    unsigned long DataSize;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Reserved2;// Offset=0x8 Size=0x4
};

struct _anonymous_251// Size=0xc (Id=251)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length40;// Offset=0x8 Size=0x4
};

struct _anonymous_252// Size=0xc (Id=252)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length48;// Offset=0x8 Size=0x4
};

struct _anonymous_253// Size=0xc (Id=253)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length64;// Offset=0x8 Size=0x4
};

struct _anonymous_240// Size=0xc (Id=240)
{
    unsigned char Class;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char Reserved1;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned long IdLowPart;// Offset=0x4 Size=0x4
    unsigned long IdHighPart;// Offset=0x8 Size=0x4
};

union _anonymous_254// Size=0x10 (Id=254)
{
    union // Size=0x10 (Id=0)
    {
        struct _anonymous_243 Generic;// Offset=0x0 Size=0xc
        struct _anonymous_243 Port;// Offset=0x0 Size=0xc
        struct _anonymous_244 Interrupt;// Offset=0x0 Size=0x10
        struct _anonymous_246 MessageInterrupt;// Offset=0x0 Size=0x10
        struct _anonymous_243 Memory;// Offset=0x0 Size=0xc
        struct _anonymous_247 Dma;// Offset=0x0 Size=0xc
        struct _anonymous_248 DmaV3;// Offset=0x0 Size=0xc
        struct _anonymous_234 DevicePrivate;// Offset=0x0 Size=0xc
        struct _anonymous_249 BusNumber;// Offset=0x0 Size=0xc
        struct _anonymous_250 DeviceSpecificData;// Offset=0x0 Size=0xc
        struct _anonymous_251 Memory40;// Offset=0x0 Size=0xc
        struct _anonymous_252 Memory48;// Offset=0x0 Size=0xc
        struct _anonymous_253 Memory64;// Offset=0x0 Size=0xc
        struct _anonymous_240 Connection;// Offset=0x0 Size=0xc
    };
};
