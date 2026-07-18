struct _unnamed_31// Size=0x8 (Id=31)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=76)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_31 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _unnamed_1395// Size=0xc (Id=1395)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _unnamed_1396// Size=0x10 (Id=1396)
{
    unsigned short Level;// Offset=0x0 Size=0x2
    unsigned short Group;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_1397// Size=0x10 (Id=1397)
{
    unsigned short Group;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_1398// Size=0x10 (Id=1398)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_1397 Raw;// Offset=0x0 Size=0x10
        struct _unnamed_1396 Translated;// Offset=0x0 Size=0x10
    };
};

struct _unnamed_1399// Size=0xc (Id=1399)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long Port;// Offset=0x4 Size=0x4
    unsigned long Reserved1;// Offset=0x8 Size=0x4
};

struct _unnamed_1400// Size=0xc (Id=1400)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long RequestLine;// Offset=0x4 Size=0x4
    unsigned char TransferWidth;// Offset=0x8 Size=0x1
    unsigned char Reserved1;// Offset=0x9 Size=0x1
    unsigned char Reserved2;// Offset=0xa Size=0x1
    unsigned char Reserved3;// Offset=0xb Size=0x1
};

struct _unnamed_1369// Size=0xc (Id=1369)
{
    unsigned long Data[3];// Offset=0x0 Size=0xc
};

struct _unnamed_1401// Size=0xc (Id=1401)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned long Reserved;// Offset=0x8 Size=0x4
};

struct _unnamed_1402// Size=0xc (Id=1402)
{
    unsigned long DataSize;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Reserved2;// Offset=0x8 Size=0x4
};

struct _unnamed_1403// Size=0xc (Id=1403)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length40;// Offset=0x8 Size=0x4
};

struct _unnamed_1404// Size=0xc (Id=1404)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length48;// Offset=0x8 Size=0x4
};

struct _unnamed_1405// Size=0xc (Id=1405)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length64;// Offset=0x8 Size=0x4
};

struct _unnamed_1375// Size=0xc (Id=1375)
{
    unsigned char Class;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char Reserved1;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned long IdLowPart;// Offset=0x4 Size=0x4
    unsigned long IdHighPart;// Offset=0x8 Size=0x4
};

union _unnamed_1406// Size=0x10 (Id=1406)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_1395 Generic;// Offset=0x0 Size=0xc
        struct _unnamed_1395 Port;// Offset=0x0 Size=0xc
        struct _unnamed_1396 Interrupt;// Offset=0x0 Size=0x10
        struct _unnamed_1398 MessageInterrupt;// Offset=0x0 Size=0x10
        struct _unnamed_1395 Memory;// Offset=0x0 Size=0xc
        struct _unnamed_1399 Dma;// Offset=0x0 Size=0xc
        struct _unnamed_1400 DmaV3;// Offset=0x0 Size=0xc
        struct _unnamed_1369 DevicePrivate;// Offset=0x0 Size=0xc
        struct _unnamed_1401 BusNumber;// Offset=0x0 Size=0xc
        struct _unnamed_1402 DeviceSpecificData;// Offset=0x0 Size=0xc
        struct _unnamed_1403 Memory40;// Offset=0x0 Size=0xc
        struct _unnamed_1404 Memory48;// Offset=0x0 Size=0xc
        struct _unnamed_1405 Memory64;// Offset=0x0 Size=0xc
        struct _unnamed_1375 Connection;// Offset=0x0 Size=0xc
    };
};
