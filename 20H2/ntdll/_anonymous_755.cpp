struct _anonymous_31// Size=0x8 (Id=31)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=32)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _anonymous_31 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _anonymous_744// Size=0xc (Id=744)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _anonymous_745// Size=0x10 (Id=745)
{
    unsigned short Level;// Offset=0x0 Size=0x2
    unsigned short Group;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _anonymous_746// Size=0x10 (Id=746)
{
    unsigned short Group;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _anonymous_747// Size=0x10 (Id=747)
{
    union // Size=0x10 (Id=0)
    {
        struct _anonymous_746 Raw;// Offset=0x0 Size=0x10
        struct _anonymous_745 Translated;// Offset=0x0 Size=0x10
    };
};

struct _anonymous_748// Size=0xc (Id=748)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long Port;// Offset=0x4 Size=0x4
    unsigned long Reserved1;// Offset=0x8 Size=0x4
};

struct _anonymous_749// Size=0xc (Id=749)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long RequestLine;// Offset=0x4 Size=0x4
    unsigned char TransferWidth;// Offset=0x8 Size=0x1
    unsigned char Reserved1;// Offset=0x9 Size=0x1
    unsigned char Reserved2;// Offset=0xa Size=0x1
    unsigned char Reserved3;// Offset=0xb Size=0x1
};

struct _anonymous_684// Size=0xc (Id=684)
{
    unsigned long Data[3];// Offset=0x0 Size=0xc
};

struct _anonymous_750// Size=0xc (Id=750)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned long Reserved;// Offset=0x8 Size=0x4
};

struct _anonymous_751// Size=0xc (Id=751)
{
    unsigned long DataSize;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Reserved2;// Offset=0x8 Size=0x4
};

struct _anonymous_752// Size=0xc (Id=752)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length40;// Offset=0x8 Size=0x4
};

struct _anonymous_753// Size=0xc (Id=753)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length48;// Offset=0x8 Size=0x4
};

struct _anonymous_754// Size=0xc (Id=754)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length64;// Offset=0x8 Size=0x4
};

struct _anonymous_690// Size=0xc (Id=690)
{
    unsigned char Class;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char Reserved1;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned long IdLowPart;// Offset=0x4 Size=0x4
    unsigned long IdHighPart;// Offset=0x8 Size=0x4
};

union _anonymous_755// Size=0x10 (Id=755)
{
    union // Size=0x10 (Id=0)
    {
        struct _anonymous_744 Generic;// Offset=0x0 Size=0xc
        struct _anonymous_744 Port;// Offset=0x0 Size=0xc
        struct _anonymous_745 Interrupt;// Offset=0x0 Size=0x10
        struct _anonymous_747 MessageInterrupt;// Offset=0x0 Size=0x10
        struct _anonymous_744 Memory;// Offset=0x0 Size=0xc
        struct _anonymous_748 Dma;// Offset=0x0 Size=0xc
        struct _anonymous_749 DmaV3;// Offset=0x0 Size=0xc
        struct _anonymous_684 DevicePrivate;// Offset=0x0 Size=0xc
        struct _anonymous_750 BusNumber;// Offset=0x0 Size=0xc
        struct _anonymous_751 DeviceSpecificData;// Offset=0x0 Size=0xc
        struct _anonymous_752 Memory40;// Offset=0x0 Size=0xc
        struct _anonymous_753 Memory48;// Offset=0x0 Size=0xc
        struct _anonymous_754 Memory64;// Offset=0x0 Size=0xc
        struct _anonymous_690 Connection;// Offset=0x0 Size=0xc
    };
};
