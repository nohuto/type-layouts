struct _anonymous_9// Size=0x8 (Id=9)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=414)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _anonymous_9 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _anonymous_351// Size=0xc (Id=351)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _anonymous_352// Size=0x10 (Id=352)
{
    unsigned short Level;// Offset=0x0 Size=0x2
    unsigned short Group;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _anonymous_353// Size=0x10 (Id=353)
{
    unsigned short Group;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _anonymous_354// Size=0x10 (Id=354)
{
    union // Size=0x10 (Id=0)
    {
        struct _anonymous_353 Raw;// Offset=0x0 Size=0x10
        struct _anonymous_352 Translated;// Offset=0x0 Size=0x10
    };
};

struct _anonymous_355// Size=0xc (Id=355)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long Port;// Offset=0x4 Size=0x4
    unsigned long Reserved1;// Offset=0x8 Size=0x4
};

struct _anonymous_356// Size=0xc (Id=356)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long RequestLine;// Offset=0x4 Size=0x4
    unsigned char TransferWidth;// Offset=0x8 Size=0x1
    unsigned char Reserved1;// Offset=0x9 Size=0x1
    unsigned char Reserved2;// Offset=0xa Size=0x1
    unsigned char Reserved3;// Offset=0xb Size=0x1
};

struct _anonymous_289// Size=0xc (Id=289)
{
    unsigned long Data[3];// Offset=0x0 Size=0xc
};

struct _anonymous_357// Size=0xc (Id=357)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned long Reserved;// Offset=0x8 Size=0x4
};

struct _anonymous_358// Size=0xc (Id=358)
{
    unsigned long DataSize;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Reserved2;// Offset=0x8 Size=0x4
};

struct _anonymous_359// Size=0xc (Id=359)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length40;// Offset=0x8 Size=0x4
};

struct _anonymous_360// Size=0xc (Id=360)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length48;// Offset=0x8 Size=0x4
};

struct _anonymous_361// Size=0xc (Id=361)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length64;// Offset=0x8 Size=0x4
};

struct _anonymous_295// Size=0xc (Id=295)
{
    unsigned char Class;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char Reserved1;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned long IdLowPart;// Offset=0x4 Size=0x4
    unsigned long IdHighPart;// Offset=0x8 Size=0x4
};

union _anonymous_362// Size=0x10 (Id=362)
{
    union // Size=0x10 (Id=0)
    {
        struct _anonymous_351 Generic;// Offset=0x0 Size=0xc
        struct _anonymous_351 Port;// Offset=0x0 Size=0xc
        struct _anonymous_352 Interrupt;// Offset=0x0 Size=0x10
        struct _anonymous_354 MessageInterrupt;// Offset=0x0 Size=0x10
        struct _anonymous_351 Memory;// Offset=0x0 Size=0xc
        struct _anonymous_355 Dma;// Offset=0x0 Size=0xc
        struct _anonymous_356 DmaV3;// Offset=0x0 Size=0xc
        struct _anonymous_289 DevicePrivate;// Offset=0x0 Size=0xc
        struct _anonymous_357 BusNumber;// Offset=0x0 Size=0xc
        struct _anonymous_358 DeviceSpecificData;// Offset=0x0 Size=0xc
        struct _anonymous_359 Memory40;// Offset=0x0 Size=0xc
        struct _anonymous_360 Memory48;// Offset=0x0 Size=0xc
        struct _anonymous_361 Memory64;// Offset=0x0 Size=0xc
        struct _anonymous_295 Connection;// Offset=0x0 Size=0xc
    };
};

struct _CM_PARTIAL_RESOURCE_DESCRIPTOR// Size=0x14 (Id=363)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char ShareDisposition;// Offset=0x1 Size=0x1
    unsigned short Flags;// Offset=0x2 Size=0x2
    union _anonymous_362 u;// Offset=0x4 Size=0x10
};

struct _CM_PARTIAL_RESOURCE_LIST// Size=0x1c (Id=350)
{
    unsigned short Version;// Offset=0x0 Size=0x2
    unsigned short Revision;// Offset=0x2 Size=0x2
    unsigned long Count;// Offset=0x4 Size=0x4
    struct _CM_PARTIAL_RESOURCE_DESCRIPTOR PartialDescriptors[1];// Offset=0x8 Size=0x14
};
