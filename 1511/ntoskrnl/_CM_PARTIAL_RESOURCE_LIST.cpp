struct _unnamed_28// Size=0x8 (Id=28)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=29)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_28 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _unnamed_912// Size=0xc (Id=912)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _unnamed_913// Size=0x10 (Id=913)
{
    unsigned short Level;// Offset=0x0 Size=0x2
    unsigned short Group;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_914// Size=0x10 (Id=914)
{
    unsigned short Group;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_915// Size=0x10 (Id=915)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_914 Raw;// Offset=0x0 Size=0x10
        struct _unnamed_913 Translated;// Offset=0x0 Size=0x10
    };
};

struct _unnamed_916// Size=0xc (Id=916)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long Port;// Offset=0x4 Size=0x4
    unsigned long Reserved1;// Offset=0x8 Size=0x4
};

struct _unnamed_917// Size=0xc (Id=917)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long RequestLine;// Offset=0x4 Size=0x4
    unsigned char TransferWidth;// Offset=0x8 Size=0x1
    unsigned char Reserved1;// Offset=0x9 Size=0x1
    unsigned char Reserved2;// Offset=0xa Size=0x1
    unsigned char Reserved3;// Offset=0xb Size=0x1
};

struct _unnamed_766// Size=0xc (Id=766)
{
    unsigned long Data[3];// Offset=0x0 Size=0xc
};

struct _unnamed_918// Size=0xc (Id=918)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned long Reserved;// Offset=0x8 Size=0x4
};

struct _unnamed_919// Size=0xc (Id=919)
{
    unsigned long DataSize;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Reserved2;// Offset=0x8 Size=0x4
};

struct _unnamed_920// Size=0xc (Id=920)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length40;// Offset=0x8 Size=0x4
};

struct _unnamed_921// Size=0xc (Id=921)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length48;// Offset=0x8 Size=0x4
};

struct _unnamed_922// Size=0xc (Id=922)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length64;// Offset=0x8 Size=0x4
};

struct _unnamed_772// Size=0xc (Id=772)
{
    unsigned char Class;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char Reserved1;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned long IdLowPart;// Offset=0x4 Size=0x4
    unsigned long IdHighPart;// Offset=0x8 Size=0x4
};

union _unnamed_923// Size=0x10 (Id=923)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_912 Generic;// Offset=0x0 Size=0xc
        struct _unnamed_912 Port;// Offset=0x0 Size=0xc
        struct _unnamed_913 Interrupt;// Offset=0x0 Size=0x10
        struct _unnamed_915 MessageInterrupt;// Offset=0x0 Size=0x10
        struct _unnamed_912 Memory;// Offset=0x0 Size=0xc
        struct _unnamed_916 Dma;// Offset=0x0 Size=0xc
        struct _unnamed_917 DmaV3;// Offset=0x0 Size=0xc
        struct _unnamed_766 DevicePrivate;// Offset=0x0 Size=0xc
        struct _unnamed_918 BusNumber;// Offset=0x0 Size=0xc
        struct _unnamed_919 DeviceSpecificData;// Offset=0x0 Size=0xc
        struct _unnamed_920 Memory40;// Offset=0x0 Size=0xc
        struct _unnamed_921 Memory48;// Offset=0x0 Size=0xc
        struct _unnamed_922 Memory64;// Offset=0x0 Size=0xc
        struct _unnamed_772 Connection;// Offset=0x0 Size=0xc
    };
};

struct _CM_PARTIAL_RESOURCE_DESCRIPTOR// Size=0x14 (Id=924)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char ShareDisposition;// Offset=0x1 Size=0x1
    unsigned short Flags;// Offset=0x2 Size=0x2
    union _unnamed_923 u;// Offset=0x4 Size=0x10
};

struct _CM_PARTIAL_RESOURCE_LIST// Size=0x1c (Id=790)
{
    unsigned short Version;// Offset=0x0 Size=0x2
    unsigned short Revision;// Offset=0x2 Size=0x2
    unsigned long Count;// Offset=0x4 Size=0x4
    struct _CM_PARTIAL_RESOURCE_DESCRIPTOR PartialDescriptors[1];// Offset=0x8 Size=0x14
};
