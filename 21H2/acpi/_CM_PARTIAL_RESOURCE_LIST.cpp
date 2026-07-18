struct _anonymous_31// Size=0x8 (Id=31)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=85)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _anonymous_31 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _anonymous_725// Size=0xc (Id=725)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _anonymous_726// Size=0x10 (Id=726)
{
    unsigned short Level;// Offset=0x0 Size=0x2
    unsigned short Group;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _anonymous_727// Size=0x10 (Id=727)
{
    unsigned short Group;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _anonymous_728// Size=0x10 (Id=728)
{
    union // Size=0x10 (Id=0)
    {
        struct _anonymous_727 Raw;// Offset=0x0 Size=0x10
        struct _anonymous_726 Translated;// Offset=0x0 Size=0x10
    };
};

struct _anonymous_729// Size=0xc (Id=729)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long Port;// Offset=0x4 Size=0x4
    unsigned long Reserved1;// Offset=0x8 Size=0x4
};

struct _anonymous_730// Size=0xc (Id=730)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long RequestLine;// Offset=0x4 Size=0x4
    unsigned char TransferWidth;// Offset=0x8 Size=0x1
    unsigned char Reserved1;// Offset=0x9 Size=0x1
    unsigned char Reserved2;// Offset=0xa Size=0x1
    unsigned char Reserved3;// Offset=0xb Size=0x1
};

struct _anonymous_628// Size=0xc (Id=628)
{
    unsigned long Data[3];// Offset=0x0 Size=0xc
};

struct _anonymous_731// Size=0xc (Id=731)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned long Reserved;// Offset=0x8 Size=0x4
};

struct _anonymous_732// Size=0xc (Id=732)
{
    unsigned long DataSize;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Reserved2;// Offset=0x8 Size=0x4
};

struct _anonymous_733// Size=0xc (Id=733)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length40;// Offset=0x8 Size=0x4
};

struct _anonymous_734// Size=0xc (Id=734)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length48;// Offset=0x8 Size=0x4
};

struct _anonymous_735// Size=0xc (Id=735)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length64;// Offset=0x8 Size=0x4
};

struct _anonymous_634// Size=0xc (Id=634)
{
    unsigned char Class;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char Reserved1;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned long IdLowPart;// Offset=0x4 Size=0x4
    unsigned long IdHighPart;// Offset=0x8 Size=0x4
};

union _anonymous_736// Size=0x10 (Id=736)
{
    union // Size=0x10 (Id=0)
    {
        struct _anonymous_725 Generic;// Offset=0x0 Size=0xc
        struct _anonymous_725 Port;// Offset=0x0 Size=0xc
        struct _anonymous_726 Interrupt;// Offset=0x0 Size=0x10
        struct _anonymous_728 MessageInterrupt;// Offset=0x0 Size=0x10
        struct _anonymous_725 Memory;// Offset=0x0 Size=0xc
        struct _anonymous_729 Dma;// Offset=0x0 Size=0xc
        struct _anonymous_730 DmaV3;// Offset=0x0 Size=0xc
        struct _anonymous_628 DevicePrivate;// Offset=0x0 Size=0xc
        struct _anonymous_731 BusNumber;// Offset=0x0 Size=0xc
        struct _anonymous_732 DeviceSpecificData;// Offset=0x0 Size=0xc
        struct _anonymous_733 Memory40;// Offset=0x0 Size=0xc
        struct _anonymous_734 Memory48;// Offset=0x0 Size=0xc
        struct _anonymous_735 Memory64;// Offset=0x0 Size=0xc
        struct _anonymous_634 Connection;// Offset=0x0 Size=0xc
    };
};

struct _CM_PARTIAL_RESOURCE_DESCRIPTOR// Size=0x14 (Id=737)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char ShareDisposition;// Offset=0x1 Size=0x1
    unsigned short Flags;// Offset=0x2 Size=0x2
    union _anonymous_736 u;// Offset=0x4 Size=0x10
};

struct _CM_PARTIAL_RESOURCE_LIST// Size=0x1c (Id=718)
{
    unsigned short Version;// Offset=0x0 Size=0x2
    unsigned short Revision;// Offset=0x2 Size=0x2
    unsigned long Count;// Offset=0x4 Size=0x4
    struct _CM_PARTIAL_RESOURCE_DESCRIPTOR PartialDescriptors[1];// Offset=0x8 Size=0x14
};
