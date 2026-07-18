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

struct _unnamed_521// Size=0xc (Id=521)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _unnamed_522// Size=0x10 (Id=522)
{
    unsigned short Level;// Offset=0x0 Size=0x2
    unsigned short Group;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_523// Size=0x10 (Id=523)
{
    unsigned short Group;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_524// Size=0x10 (Id=524)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_523 Raw;// Offset=0x0 Size=0x10
        struct _unnamed_522 Translated;// Offset=0x0 Size=0x10
    };
};

struct _unnamed_525// Size=0xc (Id=525)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long Port;// Offset=0x4 Size=0x4
    unsigned long Reserved1;// Offset=0x8 Size=0x4
};

struct _unnamed_526// Size=0xc (Id=526)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long RequestLine;// Offset=0x4 Size=0x4
    unsigned char TransferWidth;// Offset=0x8 Size=0x1
    unsigned char Reserved1;// Offset=0x9 Size=0x1
    unsigned char Reserved2;// Offset=0xa Size=0x1
    unsigned char Reserved3;// Offset=0xb Size=0x1
};

struct _unnamed_527// Size=0xc (Id=527)
{
    unsigned long Data[3];// Offset=0x0 Size=0xc
};

struct _unnamed_528// Size=0xc (Id=528)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned long Reserved;// Offset=0x8 Size=0x4
};

struct _unnamed_529// Size=0xc (Id=529)
{
    unsigned long DataSize;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Reserved2;// Offset=0x8 Size=0x4
};

struct _unnamed_530// Size=0xc (Id=530)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length40;// Offset=0x8 Size=0x4
};

struct _unnamed_531// Size=0xc (Id=531)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length48;// Offset=0x8 Size=0x4
};

struct _unnamed_532// Size=0xc (Id=532)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length64;// Offset=0x8 Size=0x4
};

struct _unnamed_533// Size=0xc (Id=533)
{
    unsigned char Class;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char Reserved1;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned long IdLowPart;// Offset=0x4 Size=0x4
    unsigned long IdHighPart;// Offset=0x8 Size=0x4
};

union _unnamed_534// Size=0x10 (Id=534)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_521 Generic;// Offset=0x0 Size=0xc
        struct _unnamed_521 Port;// Offset=0x0 Size=0xc
        struct _unnamed_522 Interrupt;// Offset=0x0 Size=0x10
        struct _unnamed_524 MessageInterrupt;// Offset=0x0 Size=0x10
        struct _unnamed_521 Memory;// Offset=0x0 Size=0xc
        struct _unnamed_525 Dma;// Offset=0x0 Size=0xc
        struct _unnamed_526 DmaV3;// Offset=0x0 Size=0xc
        struct _unnamed_527 DevicePrivate;// Offset=0x0 Size=0xc
        struct _unnamed_528 BusNumber;// Offset=0x0 Size=0xc
        struct _unnamed_529 DeviceSpecificData;// Offset=0x0 Size=0xc
        struct _unnamed_530 Memory40;// Offset=0x0 Size=0xc
        struct _unnamed_531 Memory48;// Offset=0x0 Size=0xc
        struct _unnamed_532 Memory64;// Offset=0x0 Size=0xc
        struct _unnamed_533 Connection;// Offset=0x0 Size=0xc
    };
};

struct _CM_PARTIAL_RESOURCE_DESCRIPTOR// Size=0x14 (Id=535)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char ShareDisposition;// Offset=0x1 Size=0x1
    unsigned short Flags;// Offset=0x2 Size=0x2
    union _unnamed_534 u;// Offset=0x4 Size=0x10
};

struct _CM_PARTIAL_RESOURCE_LIST// Size=0x1c (Id=505)
{
    unsigned short Version;// Offset=0x0 Size=0x2
    unsigned short Revision;// Offset=0x2 Size=0x2
    unsigned long Count;// Offset=0x4 Size=0x4
    struct _CM_PARTIAL_RESOURCE_DESCRIPTOR PartialDescriptors[1];// Offset=0x8 Size=0x14
};
