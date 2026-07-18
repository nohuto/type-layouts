struct _anonymous_13// Size=0x8 (Id=13)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=322)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _anonymous_13 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _anonymous_726// Size=0xc (Id=726)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _anonymous_727// Size=0xc (Id=727)
{
    unsigned short Level;// Offset=0x0 Size=0x2
    unsigned short Group;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long Affinity;// Offset=0x8 Size=0x4
};

struct _anonymous_728// Size=0xc (Id=728)
{
    unsigned short Group;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long Affinity;// Offset=0x8 Size=0x4
};

struct _anonymous_729// Size=0xc (Id=729)
{
    union // Size=0xc (Id=0)
    {
        struct _anonymous_728 Raw;// Offset=0x0 Size=0xc
        struct _anonymous_727 Translated;// Offset=0x0 Size=0xc
    };
};

struct _anonymous_730// Size=0xc (Id=730)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long Port;// Offset=0x4 Size=0x4
    unsigned long Reserved1;// Offset=0x8 Size=0x4
};

struct _anonymous_731// Size=0xc (Id=731)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long RequestLine;// Offset=0x4 Size=0x4
    unsigned char TransferWidth;// Offset=0x8 Size=0x1
    unsigned char Reserved1;// Offset=0x9 Size=0x1
    unsigned char Reserved2;// Offset=0xa Size=0x1
    unsigned char Reserved3;// Offset=0xb Size=0x1
};

struct _anonymous_657// Size=0xc (Id=657)
{
    unsigned long Data[3];// Offset=0x0 Size=0xc
};

struct _anonymous_732// Size=0xc (Id=732)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned long Reserved;// Offset=0x8 Size=0x4
};

struct _anonymous_733// Size=0xc (Id=733)
{
    unsigned long DataSize;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Reserved2;// Offset=0x8 Size=0x4
};

struct _anonymous_734// Size=0xc (Id=734)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length40;// Offset=0x8 Size=0x4
};

struct _anonymous_735// Size=0xc (Id=735)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length48;// Offset=0x8 Size=0x4
};

struct _anonymous_736// Size=0xc (Id=736)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length64;// Offset=0x8 Size=0x4
};

struct _anonymous_663// Size=0xc (Id=663)
{
    unsigned char Class;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char Reserved1;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned long IdLowPart;// Offset=0x4 Size=0x4
    unsigned long IdHighPart;// Offset=0x8 Size=0x4
};

union _anonymous_737// Size=0xc (Id=737)
{
    struct _anonymous_726 Generic;// Offset=0x0 Size=0xc
    struct _anonymous_726 Port;// Offset=0x0 Size=0xc
    struct _anonymous_727 Interrupt;// Offset=0x0 Size=0xc
    struct _anonymous_729 MessageInterrupt;// Offset=0x0 Size=0xc
    struct _anonymous_726 Memory;// Offset=0x0 Size=0xc
    struct _anonymous_730 Dma;// Offset=0x0 Size=0xc
    struct _anonymous_731 DmaV3;// Offset=0x0 Size=0xc
    struct _anonymous_657 DevicePrivate;// Offset=0x0 Size=0xc
    struct _anonymous_732 BusNumber;// Offset=0x0 Size=0xc
    struct _anonymous_733 DeviceSpecificData;// Offset=0x0 Size=0xc
    struct _anonymous_734 Memory40;// Offset=0x0 Size=0xc
    struct _anonymous_735 Memory48;// Offset=0x0 Size=0xc
    struct _anonymous_736 Memory64;// Offset=0x0 Size=0xc
    struct _anonymous_663 Connection;// Offset=0x0 Size=0xc
};
