struct _unnamed_31// Size=0x8 (Id=31)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=241)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_31 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _unnamed_673// Size=0xc (Id=673)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _unnamed_674// Size=0x10 (Id=674)
{
    unsigned short Level;// Offset=0x0 Size=0x2
    unsigned short Group;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_675// Size=0x10 (Id=675)
{
    unsigned short Group;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_676// Size=0x10 (Id=676)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_675 Raw;// Offset=0x0 Size=0x10
        struct _unnamed_674 Translated;// Offset=0x0 Size=0x10
    };
};

struct _unnamed_677// Size=0xc (Id=677)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long Port;// Offset=0x4 Size=0x4
    unsigned long Reserved1;// Offset=0x8 Size=0x4
};

struct _unnamed_678// Size=0xc (Id=678)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long RequestLine;// Offset=0x4 Size=0x4
    unsigned char TransferWidth;// Offset=0x8 Size=0x1
    unsigned char Reserved1;// Offset=0x9 Size=0x1
    unsigned char Reserved2;// Offset=0xa Size=0x1
    unsigned char Reserved3;// Offset=0xb Size=0x1
};

struct _unnamed_575// Size=0xc (Id=575)
{
    unsigned long Data[3];// Offset=0x0 Size=0xc
};

struct _unnamed_679// Size=0xc (Id=679)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned long Reserved;// Offset=0x8 Size=0x4
};

struct _unnamed_680// Size=0xc (Id=680)
{
    unsigned long DataSize;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Reserved2;// Offset=0x8 Size=0x4
};

struct _unnamed_681// Size=0xc (Id=681)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length40;// Offset=0x8 Size=0x4
};

struct _unnamed_682// Size=0xc (Id=682)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length48;// Offset=0x8 Size=0x4
};

struct _unnamed_683// Size=0xc (Id=683)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length64;// Offset=0x8 Size=0x4
};

struct _unnamed_581// Size=0xc (Id=581)
{
    unsigned char Class;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char Reserved1;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned long IdLowPart;// Offset=0x4 Size=0x4
    unsigned long IdHighPart;// Offset=0x8 Size=0x4
};

union _unnamed_684// Size=0x10 (Id=684)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_673 Generic;// Offset=0x0 Size=0xc
        struct _unnamed_673 Port;// Offset=0x0 Size=0xc
        struct _unnamed_674 Interrupt;// Offset=0x0 Size=0x10
        struct _unnamed_676 MessageInterrupt;// Offset=0x0 Size=0x10
        struct _unnamed_673 Memory;// Offset=0x0 Size=0xc
        struct _unnamed_677 Dma;// Offset=0x0 Size=0xc
        struct _unnamed_678 DmaV3;// Offset=0x0 Size=0xc
        struct _unnamed_575 DevicePrivate;// Offset=0x0 Size=0xc
        struct _unnamed_679 BusNumber;// Offset=0x0 Size=0xc
        struct _unnamed_680 DeviceSpecificData;// Offset=0x0 Size=0xc
        struct _unnamed_681 Memory40;// Offset=0x0 Size=0xc
        struct _unnamed_682 Memory48;// Offset=0x0 Size=0xc
        struct _unnamed_683 Memory64;// Offset=0x0 Size=0xc
        struct _unnamed_581 Connection;// Offset=0x0 Size=0xc
    };
};

struct _CM_PARTIAL_RESOURCE_DESCRIPTOR// Size=0x14 (Id=685)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char ShareDisposition;// Offset=0x1 Size=0x1
    unsigned short Flags;// Offset=0x2 Size=0x2
    union _unnamed_684 u;// Offset=0x4 Size=0x10
};
