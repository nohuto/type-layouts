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

struct _unnamed_1324// Size=0xc (Id=1324)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _unnamed_1325// Size=0x10 (Id=1325)
{
    unsigned short Level;// Offset=0x0 Size=0x2
    unsigned short Group;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_1326// Size=0x10 (Id=1326)
{
    unsigned short Group;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_1327// Size=0x10 (Id=1327)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_1326 Raw;// Offset=0x0 Size=0x10
        struct _unnamed_1325 Translated;// Offset=0x0 Size=0x10
    };
};

struct _unnamed_1328// Size=0xc (Id=1328)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long Port;// Offset=0x4 Size=0x4
    unsigned long Reserved1;// Offset=0x8 Size=0x4
};

struct _unnamed_1329// Size=0xc (Id=1329)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long RequestLine;// Offset=0x4 Size=0x4
    unsigned char TransferWidth;// Offset=0x8 Size=0x1
    unsigned char Reserved1;// Offset=0x9 Size=0x1
    unsigned char Reserved2;// Offset=0xa Size=0x1
    unsigned char Reserved3;// Offset=0xb Size=0x1
};

struct _unnamed_320// Size=0xc (Id=320)
{
    unsigned long Data[3];// Offset=0x0 Size=0xc
};

struct _unnamed_1330// Size=0xc (Id=1330)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned long Reserved;// Offset=0x8 Size=0x4
};

struct _unnamed_1331// Size=0xc (Id=1331)
{
    unsigned long DataSize;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Reserved2;// Offset=0x8 Size=0x4
};

struct _unnamed_1332// Size=0xc (Id=1332)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length40;// Offset=0x8 Size=0x4
};

struct _unnamed_1333// Size=0xc (Id=1333)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length48;// Offset=0x8 Size=0x4
};

struct _unnamed_1334// Size=0xc (Id=1334)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length64;// Offset=0x8 Size=0x4
};

struct _unnamed_326// Size=0xc (Id=326)
{
    unsigned char Class;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char Reserved1;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned long IdLowPart;// Offset=0x4 Size=0x4
    unsigned long IdHighPart;// Offset=0x8 Size=0x4
};

union _unnamed_1335// Size=0x10 (Id=1335)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_1324 Generic;// Offset=0x0 Size=0xc
        struct _unnamed_1324 Port;// Offset=0x0 Size=0xc
        struct _unnamed_1325 Interrupt;// Offset=0x0 Size=0x10
        struct _unnamed_1327 MessageInterrupt;// Offset=0x0 Size=0x10
        struct _unnamed_1324 Memory;// Offset=0x0 Size=0xc
        struct _unnamed_1328 Dma;// Offset=0x0 Size=0xc
        struct _unnamed_1329 DmaV3;// Offset=0x0 Size=0xc
        struct _unnamed_320 DevicePrivate;// Offset=0x0 Size=0xc
        struct _unnamed_1330 BusNumber;// Offset=0x0 Size=0xc
        struct _unnamed_1331 DeviceSpecificData;// Offset=0x0 Size=0xc
        struct _unnamed_1332 Memory40;// Offset=0x0 Size=0xc
        struct _unnamed_1333 Memory48;// Offset=0x0 Size=0xc
        struct _unnamed_1334 Memory64;// Offset=0x0 Size=0xc
        struct _unnamed_326 Connection;// Offset=0x0 Size=0xc
    };
};

struct _CM_PARTIAL_RESOURCE_DESCRIPTOR// Size=0x14 (Id=1336)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char ShareDisposition;// Offset=0x1 Size=0x1
    unsigned short Flags;// Offset=0x2 Size=0x2
    union _unnamed_1335 u;// Offset=0x4 Size=0x10
};
