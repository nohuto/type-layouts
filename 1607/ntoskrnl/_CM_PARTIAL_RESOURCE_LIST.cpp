struct _unnamed_28// Size=0x8 (Id=28)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=29)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_28 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _unnamed_1326// Size=0xc (Id=1326)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _unnamed_1327// Size=0x10 (Id=1327)
{
    unsigned short Level;// Offset=0x0 Size=0x2
    unsigned short Group;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_1328// Size=0x10 (Id=1328)
{
    unsigned short Group;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_1329// Size=0x10 (Id=1329)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_1328 Raw;// Offset=0x0 Size=0x10
        struct _unnamed_1327 Translated;// Offset=0x0 Size=0x10
    };
};

struct _unnamed_1330// Size=0xc (Id=1330)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long Port;// Offset=0x4 Size=0x4
    unsigned long Reserved1;// Offset=0x8 Size=0x4
};

struct _unnamed_1331// Size=0xc (Id=1331)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long RequestLine;// Offset=0x4 Size=0x4
    unsigned char TransferWidth;// Offset=0x8 Size=0x1
    unsigned char Reserved1;// Offset=0x9 Size=0x1
    unsigned char Reserved2;// Offset=0xa Size=0x1
    unsigned char Reserved3;// Offset=0xb Size=0x1
};

struct _unnamed_1300// Size=0xc (Id=1300)
{
    unsigned long Data[3];// Offset=0x0 Size=0xc
};

struct _unnamed_1332// Size=0xc (Id=1332)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned long Reserved;// Offset=0x8 Size=0x4
};

struct _unnamed_1333// Size=0xc (Id=1333)
{
    unsigned long DataSize;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Reserved2;// Offset=0x8 Size=0x4
};

struct _unnamed_1334// Size=0xc (Id=1334)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length40;// Offset=0x8 Size=0x4
};

struct _unnamed_1335// Size=0xc (Id=1335)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length48;// Offset=0x8 Size=0x4
};

struct _unnamed_1336// Size=0xc (Id=1336)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length64;// Offset=0x8 Size=0x4
};

struct _unnamed_1306// Size=0xc (Id=1306)
{
    unsigned char Class;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char Reserved1;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned long IdLowPart;// Offset=0x4 Size=0x4
    unsigned long IdHighPart;// Offset=0x8 Size=0x4
};

union _unnamed_1337// Size=0x10 (Id=1337)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_1326 Generic;// Offset=0x0 Size=0xc
        struct _unnamed_1326 Port;// Offset=0x0 Size=0xc
        struct _unnamed_1327 Interrupt;// Offset=0x0 Size=0x10
        struct _unnamed_1329 MessageInterrupt;// Offset=0x0 Size=0x10
        struct _unnamed_1326 Memory;// Offset=0x0 Size=0xc
        struct _unnamed_1330 Dma;// Offset=0x0 Size=0xc
        struct _unnamed_1331 DmaV3;// Offset=0x0 Size=0xc
        struct _unnamed_1300 DevicePrivate;// Offset=0x0 Size=0xc
        struct _unnamed_1332 BusNumber;// Offset=0x0 Size=0xc
        struct _unnamed_1333 DeviceSpecificData;// Offset=0x0 Size=0xc
        struct _unnamed_1334 Memory40;// Offset=0x0 Size=0xc
        struct _unnamed_1335 Memory48;// Offset=0x0 Size=0xc
        struct _unnamed_1336 Memory64;// Offset=0x0 Size=0xc
        struct _unnamed_1306 Connection;// Offset=0x0 Size=0xc
    };
};

struct _CM_PARTIAL_RESOURCE_DESCRIPTOR// Size=0x14 (Id=1338)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char ShareDisposition;// Offset=0x1 Size=0x1
    unsigned short Flags;// Offset=0x2 Size=0x2
    union _unnamed_1337 u;// Offset=0x4 Size=0x10
};

struct _CM_PARTIAL_RESOURCE_LIST// Size=0x1c (Id=1520)
{
    unsigned short Version;// Offset=0x0 Size=0x2
    unsigned short Revision;// Offset=0x2 Size=0x2
    unsigned long Count;// Offset=0x4 Size=0x4
    struct _CM_PARTIAL_RESOURCE_DESCRIPTOR PartialDescriptors[1];// Offset=0x8 Size=0x14
};
