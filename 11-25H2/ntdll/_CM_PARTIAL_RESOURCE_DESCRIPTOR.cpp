struct _unnamed_39// Size=0x8 (Id=39)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=408)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_39 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _unnamed_883// Size=0xc (Id=883)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _unnamed_884// Size=0x10 (Id=884)
{
    unsigned short Level;// Offset=0x0 Size=0x2
    unsigned short Group;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_885// Size=0x10 (Id=885)
{
    unsigned short Group;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_886// Size=0x10 (Id=886)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_885 Raw;// Offset=0x0 Size=0x10
        struct _unnamed_884 Translated;// Offset=0x0 Size=0x10
    };
};

struct _unnamed_887// Size=0xc (Id=887)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long Port;// Offset=0x4 Size=0x4
    unsigned long Reserved1;// Offset=0x8 Size=0x4
};

struct _unnamed_888// Size=0xc (Id=888)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long RequestLine;// Offset=0x4 Size=0x4
    unsigned char TransferWidth;// Offset=0x8 Size=0x1
    unsigned char Reserved1;// Offset=0x9 Size=0x1
    unsigned char Reserved2;// Offset=0xa Size=0x1
    unsigned char Reserved3;// Offset=0xb Size=0x1
};

struct _unnamed_820// Size=0xc (Id=820)
{
    unsigned long Data[3];// Offset=0x0 Size=0xc
};

struct _unnamed_889// Size=0xc (Id=889)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned long Reserved;// Offset=0x8 Size=0x4
};

struct _unnamed_890// Size=0xc (Id=890)
{
    unsigned long DataSize;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Reserved2;// Offset=0x8 Size=0x4
};

struct _unnamed_891// Size=0xc (Id=891)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length40;// Offset=0x8 Size=0x4
};

struct _unnamed_892// Size=0xc (Id=892)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length48;// Offset=0x8 Size=0x4
};

struct _unnamed_893// Size=0xc (Id=893)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length64;// Offset=0x8 Size=0x4
};

struct _unnamed_826// Size=0xc (Id=826)
{
    unsigned char Class;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char Reserved1;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned long IdLowPart;// Offset=0x4 Size=0x4
    unsigned long IdHighPart;// Offset=0x8 Size=0x4
};

union _unnamed_894// Size=0x10 (Id=894)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_883 Generic;// Offset=0x0 Size=0xc
        struct _unnamed_883 Port;// Offset=0x0 Size=0xc
        struct _unnamed_884 Interrupt;// Offset=0x0 Size=0x10
        struct _unnamed_886 MessageInterrupt;// Offset=0x0 Size=0x10
        struct _unnamed_883 Memory;// Offset=0x0 Size=0xc
        struct _unnamed_887 Dma;// Offset=0x0 Size=0xc
        struct _unnamed_888 DmaV3;// Offset=0x0 Size=0xc
        struct _unnamed_820 DevicePrivate;// Offset=0x0 Size=0xc
        struct _unnamed_889 BusNumber;// Offset=0x0 Size=0xc
        struct _unnamed_890 DeviceSpecificData;// Offset=0x0 Size=0xc
        struct _unnamed_891 Memory40;// Offset=0x0 Size=0xc
        struct _unnamed_892 Memory48;// Offset=0x0 Size=0xc
        struct _unnamed_893 Memory64;// Offset=0x0 Size=0xc
        struct _unnamed_826 Connection;// Offset=0x0 Size=0xc
    };
};

struct _CM_PARTIAL_RESOURCE_DESCRIPTOR// Size=0x14 (Id=895)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char ShareDisposition;// Offset=0x1 Size=0x1
    unsigned short Flags;// Offset=0x2 Size=0x2
    union _unnamed_894 u;// Offset=0x4 Size=0x10
};
