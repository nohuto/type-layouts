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

struct _unnamed_915// Size=0xc (Id=915)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _unnamed_916// Size=0x10 (Id=916)
{
    unsigned short Level;// Offset=0x0 Size=0x2
    unsigned short Group;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_917// Size=0x10 (Id=917)
{
    unsigned short Group;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_918// Size=0x10 (Id=918)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_917 Raw;// Offset=0x0 Size=0x10
        struct _unnamed_916 Translated;// Offset=0x0 Size=0x10
    };
};

struct _unnamed_919// Size=0xc (Id=919)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long Port;// Offset=0x4 Size=0x4
    unsigned long Reserved1;// Offset=0x8 Size=0x4
};

struct _unnamed_920// Size=0xc (Id=920)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long RequestLine;// Offset=0x4 Size=0x4
    unsigned char TransferWidth;// Offset=0x8 Size=0x1
    unsigned char Reserved1;// Offset=0x9 Size=0x1
    unsigned char Reserved2;// Offset=0xa Size=0x1
    unsigned char Reserved3;// Offset=0xb Size=0x1
};

struct _unnamed_921// Size=0xc (Id=921)
{
    unsigned long Data[3];// Offset=0x0 Size=0xc
};

struct _unnamed_922// Size=0xc (Id=922)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned long Reserved;// Offset=0x8 Size=0x4
};

struct _unnamed_923// Size=0xc (Id=923)
{
    unsigned long DataSize;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Reserved2;// Offset=0x8 Size=0x4
};

struct _unnamed_924// Size=0xc (Id=924)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length40;// Offset=0x8 Size=0x4
};

struct _unnamed_925// Size=0xc (Id=925)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length48;// Offset=0x8 Size=0x4
};

struct _unnamed_926// Size=0xc (Id=926)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length64;// Offset=0x8 Size=0x4
};

struct _unnamed_927// Size=0xc (Id=927)
{
    unsigned char Class;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char Reserved1;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned long IdLowPart;// Offset=0x4 Size=0x4
    unsigned long IdHighPart;// Offset=0x8 Size=0x4
};

union _unnamed_928// Size=0x10 (Id=928)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_915 Generic;// Offset=0x0 Size=0xc
        struct _unnamed_915 Port;// Offset=0x0 Size=0xc
        struct _unnamed_916 Interrupt;// Offset=0x0 Size=0x10
        struct _unnamed_918 MessageInterrupt;// Offset=0x0 Size=0x10
        struct _unnamed_915 Memory;// Offset=0x0 Size=0xc
        struct _unnamed_919 Dma;// Offset=0x0 Size=0xc
        struct _unnamed_920 DmaV3;// Offset=0x0 Size=0xc
        struct _unnamed_921 DevicePrivate;// Offset=0x0 Size=0xc
        struct _unnamed_922 BusNumber;// Offset=0x0 Size=0xc
        struct _unnamed_923 DeviceSpecificData;// Offset=0x0 Size=0xc
        struct _unnamed_924 Memory40;// Offset=0x0 Size=0xc
        struct _unnamed_925 Memory48;// Offset=0x0 Size=0xc
        struct _unnamed_926 Memory64;// Offset=0x0 Size=0xc
        struct _unnamed_927 Connection;// Offset=0x0 Size=0xc
    };
};

struct _CM_PARTIAL_RESOURCE_DESCRIPTOR// Size=0x14 (Id=929)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char ShareDisposition;// Offset=0x1 Size=0x1
    unsigned short Flags;// Offset=0x2 Size=0x2
    union _unnamed_928 u;// Offset=0x4 Size=0x10
};
