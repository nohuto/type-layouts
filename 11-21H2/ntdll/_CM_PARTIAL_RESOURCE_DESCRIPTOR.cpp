struct _unnamed_43// Size=0x8 (Id=43)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=353)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_43 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _unnamed_781// Size=0xc (Id=781)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _unnamed_782// Size=0x10 (Id=782)
{
    unsigned short Level;// Offset=0x0 Size=0x2
    unsigned short Group;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_783// Size=0x10 (Id=783)
{
    unsigned short Group;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_784// Size=0x10 (Id=784)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_783 Raw;// Offset=0x0 Size=0x10
        struct _unnamed_782 Translated;// Offset=0x0 Size=0x10
    };
};

struct _unnamed_785// Size=0xc (Id=785)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long Port;// Offset=0x4 Size=0x4
    unsigned long Reserved1;// Offset=0x8 Size=0x4
};

struct _unnamed_786// Size=0xc (Id=786)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long RequestLine;// Offset=0x4 Size=0x4
    unsigned char TransferWidth;// Offset=0x8 Size=0x1
    unsigned char Reserved1;// Offset=0x9 Size=0x1
    unsigned char Reserved2;// Offset=0xa Size=0x1
    unsigned char Reserved3;// Offset=0xb Size=0x1
};

struct _unnamed_718// Size=0xc (Id=718)
{
    unsigned long Data[3];// Offset=0x0 Size=0xc
};

struct _unnamed_787// Size=0xc (Id=787)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned long Reserved;// Offset=0x8 Size=0x4
};

struct _unnamed_788// Size=0xc (Id=788)
{
    unsigned long DataSize;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Reserved2;// Offset=0x8 Size=0x4
};

struct _unnamed_789// Size=0xc (Id=789)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length40;// Offset=0x8 Size=0x4
};

struct _unnamed_790// Size=0xc (Id=790)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length48;// Offset=0x8 Size=0x4
};

struct _unnamed_791// Size=0xc (Id=791)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length64;// Offset=0x8 Size=0x4
};

struct _unnamed_724// Size=0xc (Id=724)
{
    unsigned char Class;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char Reserved1;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned long IdLowPart;// Offset=0x4 Size=0x4
    unsigned long IdHighPart;// Offset=0x8 Size=0x4
};

union _unnamed_792// Size=0x10 (Id=792)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_781 Generic;// Offset=0x0 Size=0xc
        struct _unnamed_781 Port;// Offset=0x0 Size=0xc
        struct _unnamed_782 Interrupt;// Offset=0x0 Size=0x10
        struct _unnamed_784 MessageInterrupt;// Offset=0x0 Size=0x10
        struct _unnamed_781 Memory;// Offset=0x0 Size=0xc
        struct _unnamed_785 Dma;// Offset=0x0 Size=0xc
        struct _unnamed_786 DmaV3;// Offset=0x0 Size=0xc
        struct _unnamed_718 DevicePrivate;// Offset=0x0 Size=0xc
        struct _unnamed_787 BusNumber;// Offset=0x0 Size=0xc
        struct _unnamed_788 DeviceSpecificData;// Offset=0x0 Size=0xc
        struct _unnamed_789 Memory40;// Offset=0x0 Size=0xc
        struct _unnamed_790 Memory48;// Offset=0x0 Size=0xc
        struct _unnamed_791 Memory64;// Offset=0x0 Size=0xc
        struct _unnamed_724 Connection;// Offset=0x0 Size=0xc
    };
};

struct _CM_PARTIAL_RESOURCE_DESCRIPTOR// Size=0x14 (Id=793)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char ShareDisposition;// Offset=0x1 Size=0x1
    unsigned short Flags;// Offset=0x2 Size=0x2
    union _unnamed_792 u;// Offset=0x4 Size=0x10
};
