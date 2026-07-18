struct _unnamed_10// Size=0x8 (Id=10)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=513)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_10 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _unnamed_1336// Size=0xc (Id=1336)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _unnamed_1337// Size=0x10 (Id=1337)
{
    unsigned short Level;// Offset=0x0 Size=0x2
    unsigned short Group;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_1338// Size=0x10 (Id=1338)
{
    unsigned short Group;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_1339// Size=0x10 (Id=1339)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_1338 Raw;// Offset=0x0 Size=0x10
        struct _unnamed_1337 Translated;// Offset=0x0 Size=0x10
    };
};

struct _unnamed_1340// Size=0xc (Id=1340)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long Port;// Offset=0x4 Size=0x4
    unsigned long Reserved1;// Offset=0x8 Size=0x4
};

struct _unnamed_1341// Size=0xc (Id=1341)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long RequestLine;// Offset=0x4 Size=0x4
    unsigned char TransferWidth;// Offset=0x8 Size=0x1
    unsigned char Reserved1;// Offset=0x9 Size=0x1
    unsigned char Reserved2;// Offset=0xa Size=0x1
    unsigned char Reserved3;// Offset=0xb Size=0x1
};

struct _unnamed_329// Size=0xc (Id=329)
{
    unsigned long Data[3];// Offset=0x0 Size=0xc
};

struct _unnamed_1342// Size=0xc (Id=1342)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned long Reserved;// Offset=0x8 Size=0x4
};

struct _unnamed_1343// Size=0xc (Id=1343)
{
    unsigned long DataSize;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Reserved2;// Offset=0x8 Size=0x4
};

struct _unnamed_1344// Size=0xc (Id=1344)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length40;// Offset=0x8 Size=0x4
};

struct _unnamed_1345// Size=0xc (Id=1345)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length48;// Offset=0x8 Size=0x4
};

struct _unnamed_1346// Size=0xc (Id=1346)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length64;// Offset=0x8 Size=0x4
};

struct _unnamed_335// Size=0xc (Id=335)
{
    unsigned char Class;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char Reserved1;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned long IdLowPart;// Offset=0x4 Size=0x4
    unsigned long IdHighPart;// Offset=0x8 Size=0x4
};

union _unnamed_1347// Size=0x10 (Id=1347)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_1336 Generic;// Offset=0x0 Size=0xc
        struct _unnamed_1336 Port;// Offset=0x0 Size=0xc
        struct _unnamed_1337 Interrupt;// Offset=0x0 Size=0x10
        struct _unnamed_1339 MessageInterrupt;// Offset=0x0 Size=0x10
        struct _unnamed_1336 Memory;// Offset=0x0 Size=0xc
        struct _unnamed_1340 Dma;// Offset=0x0 Size=0xc
        struct _unnamed_1341 DmaV3;// Offset=0x0 Size=0xc
        struct _unnamed_329 DevicePrivate;// Offset=0x0 Size=0xc
        struct _unnamed_1342 BusNumber;// Offset=0x0 Size=0xc
        struct _unnamed_1343 DeviceSpecificData;// Offset=0x0 Size=0xc
        struct _unnamed_1344 Memory40;// Offset=0x0 Size=0xc
        struct _unnamed_1345 Memory48;// Offset=0x0 Size=0xc
        struct _unnamed_1346 Memory64;// Offset=0x0 Size=0xc
        struct _unnamed_335 Connection;// Offset=0x0 Size=0xc
    };
};
