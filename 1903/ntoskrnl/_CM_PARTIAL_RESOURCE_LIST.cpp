struct _anonymous_31// Size=0x8 (Id=31)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=83)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _anonymous_31 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _anonymous_1658// Size=0xc (Id=1658)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _anonymous_1659// Size=0x10 (Id=1659)
{
    unsigned short Level;// Offset=0x0 Size=0x2
    unsigned short Group;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _anonymous_1660// Size=0x10 (Id=1660)
{
    unsigned short Group;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _anonymous_1661// Size=0x10 (Id=1661)
{
    union // Size=0x10 (Id=0)
    {
        struct _anonymous_1660 Raw;// Offset=0x0 Size=0x10
        struct _anonymous_1659 Translated;// Offset=0x0 Size=0x10
    };
};

struct _anonymous_1662// Size=0xc (Id=1662)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long Port;// Offset=0x4 Size=0x4
    unsigned long Reserved1;// Offset=0x8 Size=0x4
};

struct _anonymous_1663// Size=0xc (Id=1663)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long RequestLine;// Offset=0x4 Size=0x4
    unsigned char TransferWidth;// Offset=0x8 Size=0x1
    unsigned char Reserved1;// Offset=0x9 Size=0x1
    unsigned char Reserved2;// Offset=0xa Size=0x1
    unsigned char Reserved3;// Offset=0xb Size=0x1
};

struct _anonymous_1628// Size=0xc (Id=1628)
{
    unsigned long Data[3];// Offset=0x0 Size=0xc
};

struct _anonymous_1664// Size=0xc (Id=1664)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned long Reserved;// Offset=0x8 Size=0x4
};

struct _anonymous_1665// Size=0xc (Id=1665)
{
    unsigned long DataSize;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Reserved2;// Offset=0x8 Size=0x4
};

struct _anonymous_1666// Size=0xc (Id=1666)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length40;// Offset=0x8 Size=0x4
};

struct _anonymous_1667// Size=0xc (Id=1667)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length48;// Offset=0x8 Size=0x4
};

struct _anonymous_1668// Size=0xc (Id=1668)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length64;// Offset=0x8 Size=0x4
};

struct _anonymous_1634// Size=0xc (Id=1634)
{
    unsigned char Class;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char Reserved1;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned long IdLowPart;// Offset=0x4 Size=0x4
    unsigned long IdHighPart;// Offset=0x8 Size=0x4
};

union _anonymous_1669// Size=0x10 (Id=1669)
{
    union // Size=0x10 (Id=0)
    {
        struct _anonymous_1658 Generic;// Offset=0x0 Size=0xc
        struct _anonymous_1658 Port;// Offset=0x0 Size=0xc
        struct _anonymous_1659 Interrupt;// Offset=0x0 Size=0x10
        struct _anonymous_1661 MessageInterrupt;// Offset=0x0 Size=0x10
        struct _anonymous_1658 Memory;// Offset=0x0 Size=0xc
        struct _anonymous_1662 Dma;// Offset=0x0 Size=0xc
        struct _anonymous_1663 DmaV3;// Offset=0x0 Size=0xc
        struct _anonymous_1628 DevicePrivate;// Offset=0x0 Size=0xc
        struct _anonymous_1664 BusNumber;// Offset=0x0 Size=0xc
        struct _anonymous_1665 DeviceSpecificData;// Offset=0x0 Size=0xc
        struct _anonymous_1666 Memory40;// Offset=0x0 Size=0xc
        struct _anonymous_1667 Memory48;// Offset=0x0 Size=0xc
        struct _anonymous_1668 Memory64;// Offset=0x0 Size=0xc
        struct _anonymous_1634 Connection;// Offset=0x0 Size=0xc
    };
};

struct _CM_PARTIAL_RESOURCE_DESCRIPTOR// Size=0x14 (Id=1670)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char ShareDisposition;// Offset=0x1 Size=0x1
    unsigned short Flags;// Offset=0x2 Size=0x2
    union _anonymous_1669 u;// Offset=0x4 Size=0x10
};

struct _CM_PARTIAL_RESOURCE_LIST// Size=0x1c (Id=1902)
{
    unsigned short Version;// Offset=0x0 Size=0x2
    unsigned short Revision;// Offset=0x2 Size=0x2
    unsigned long Count;// Offset=0x4 Size=0x4
    struct _CM_PARTIAL_RESOURCE_DESCRIPTOR PartialDescriptors[1];// Offset=0x8 Size=0x14
};
