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

struct _unnamed_1351// Size=0xc (Id=1351)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _unnamed_1352// Size=0x10 (Id=1352)
{
    unsigned short Level;// Offset=0x0 Size=0x2
    unsigned short Group;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_1353// Size=0x10 (Id=1353)
{
    unsigned short Group;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_1354// Size=0x10 (Id=1354)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_1353 Raw;// Offset=0x0 Size=0x10
        struct _unnamed_1352 Translated;// Offset=0x0 Size=0x10
    };
};

struct _unnamed_1355// Size=0xc (Id=1355)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long Port;// Offset=0x4 Size=0x4
    unsigned long Reserved1;// Offset=0x8 Size=0x4
};

struct _unnamed_1356// Size=0xc (Id=1356)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long RequestLine;// Offset=0x4 Size=0x4
    unsigned char TransferWidth;// Offset=0x8 Size=0x1
    unsigned char Reserved1;// Offset=0x9 Size=0x1
    unsigned char Reserved2;// Offset=0xa Size=0x1
    unsigned char Reserved3;// Offset=0xb Size=0x1
};

struct _unnamed_1325// Size=0xc (Id=1325)
{
    unsigned long Data[3];// Offset=0x0 Size=0xc
};

struct _unnamed_1357// Size=0xc (Id=1357)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned long Reserved;// Offset=0x8 Size=0x4
};

struct _unnamed_1358// Size=0xc (Id=1358)
{
    unsigned long DataSize;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Reserved2;// Offset=0x8 Size=0x4
};

struct _unnamed_1359// Size=0xc (Id=1359)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length40;// Offset=0x8 Size=0x4
};

struct _unnamed_1360// Size=0xc (Id=1360)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length48;// Offset=0x8 Size=0x4
};

struct _unnamed_1361// Size=0xc (Id=1361)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length64;// Offset=0x8 Size=0x4
};

struct _unnamed_1331// Size=0xc (Id=1331)
{
    unsigned char Class;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char Reserved1;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned long IdLowPart;// Offset=0x4 Size=0x4
    unsigned long IdHighPart;// Offset=0x8 Size=0x4
};

union _unnamed_1362// Size=0x10 (Id=1362)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_1351 Generic;// Offset=0x0 Size=0xc
        struct _unnamed_1351 Port;// Offset=0x0 Size=0xc
        struct _unnamed_1352 Interrupt;// Offset=0x0 Size=0x10
        struct _unnamed_1354 MessageInterrupt;// Offset=0x0 Size=0x10
        struct _unnamed_1351 Memory;// Offset=0x0 Size=0xc
        struct _unnamed_1355 Dma;// Offset=0x0 Size=0xc
        struct _unnamed_1356 DmaV3;// Offset=0x0 Size=0xc
        struct _unnamed_1325 DevicePrivate;// Offset=0x0 Size=0xc
        struct _unnamed_1357 BusNumber;// Offset=0x0 Size=0xc
        struct _unnamed_1358 DeviceSpecificData;// Offset=0x0 Size=0xc
        struct _unnamed_1359 Memory40;// Offset=0x0 Size=0xc
        struct _unnamed_1360 Memory48;// Offset=0x0 Size=0xc
        struct _unnamed_1361 Memory64;// Offset=0x0 Size=0xc
        struct _unnamed_1331 Connection;// Offset=0x0 Size=0xc
    };
};
