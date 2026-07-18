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

struct _unnamed_318// Size=0xc (Id=318)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _unnamed_319// Size=0x10 (Id=319)
{
    unsigned long Level;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_320// Size=0x10 (Id=320)
{
    unsigned short Reserved;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_321// Size=0x10 (Id=321)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_320 Raw;// Offset=0x0 Size=0x10
        struct _unnamed_319 Translated;// Offset=0x0 Size=0x10
    };
};

struct _unnamed_322// Size=0xc (Id=322)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long Port;// Offset=0x4 Size=0x4
    unsigned long Reserved1;// Offset=0x8 Size=0x4
};

struct _unnamed_323// Size=0xc (Id=323)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long RequestLine;// Offset=0x4 Size=0x4
    unsigned char TransferWidth;// Offset=0x8 Size=0x1
    unsigned char Reserved1;// Offset=0x9 Size=0x1
    unsigned char Reserved2;// Offset=0xa Size=0x1
    unsigned char Reserved3;// Offset=0xb Size=0x1
};

struct _unnamed_324// Size=0xc (Id=324)
{
    unsigned long Data[3];// Offset=0x0 Size=0xc
};

struct _unnamed_325// Size=0xc (Id=325)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned long Reserved;// Offset=0x8 Size=0x4
};

struct _unnamed_326// Size=0xc (Id=326)
{
    unsigned long DataSize;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Reserved2;// Offset=0x8 Size=0x4
};

struct _unnamed_327// Size=0xc (Id=327)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length40;// Offset=0x8 Size=0x4
};

struct _unnamed_328// Size=0xc (Id=328)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length48;// Offset=0x8 Size=0x4
};

struct _unnamed_329// Size=0xc (Id=329)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length64;// Offset=0x8 Size=0x4
};

struct _unnamed_330// Size=0xc (Id=330)
{
    unsigned char Class;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char Reserved1;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned long IdLowPart;// Offset=0x4 Size=0x4
    unsigned long IdHighPart;// Offset=0x8 Size=0x4
};

union _unnamed_331// Size=0x10 (Id=331)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_318 Generic;// Offset=0x0 Size=0xc
        struct _unnamed_318 Port;// Offset=0x0 Size=0xc
        struct _unnamed_319 Interrupt;// Offset=0x0 Size=0x10
        struct _unnamed_321 MessageInterrupt;// Offset=0x0 Size=0x10
        struct _unnamed_318 Memory;// Offset=0x0 Size=0xc
        struct _unnamed_322 Dma;// Offset=0x0 Size=0xc
        struct _unnamed_323 DmaV3;// Offset=0x0 Size=0xc
        struct _unnamed_324 DevicePrivate;// Offset=0x0 Size=0xc
        struct _unnamed_325 BusNumber;// Offset=0x0 Size=0xc
        struct _unnamed_326 DeviceSpecificData;// Offset=0x0 Size=0xc
        struct _unnamed_327 Memory40;// Offset=0x0 Size=0xc
        struct _unnamed_328 Memory48;// Offset=0x0 Size=0xc
        struct _unnamed_329 Memory64;// Offset=0x0 Size=0xc
        struct _unnamed_330 Connection;// Offset=0x0 Size=0xc
    };
};
