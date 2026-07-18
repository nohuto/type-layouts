struct _unnamed_44// Size=0x8 (Id=44)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=102)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_44 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _unnamed_764// Size=0xc (Id=764)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _unnamed_765// Size=0x10 (Id=765)
{
    unsigned short Level;// Offset=0x0 Size=0x2
    unsigned short Group;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_766// Size=0x10 (Id=766)
{
    unsigned short Group;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_767// Size=0x10 (Id=767)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_766 Raw;// Offset=0x0 Size=0x10
        struct _unnamed_765 Translated;// Offset=0x0 Size=0x10
    };
};

struct _unnamed_768// Size=0xc (Id=768)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long Port;// Offset=0x4 Size=0x4
    unsigned long Reserved1;// Offset=0x8 Size=0x4
};

struct _unnamed_769// Size=0xc (Id=769)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long RequestLine;// Offset=0x4 Size=0x4
    unsigned char TransferWidth;// Offset=0x8 Size=0x1
    unsigned char Reserved1;// Offset=0x9 Size=0x1
    unsigned char Reserved2;// Offset=0xa Size=0x1
    unsigned char Reserved3;// Offset=0xb Size=0x1
};

struct _unnamed_668// Size=0xc (Id=668)
{
    unsigned long Data[3];// Offset=0x0 Size=0xc
};

struct _unnamed_770// Size=0xc (Id=770)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned long Reserved;// Offset=0x8 Size=0x4
};

struct _unnamed_771// Size=0xc (Id=771)
{
    unsigned long DataSize;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Reserved2;// Offset=0x8 Size=0x4
};

struct _unnamed_772// Size=0xc (Id=772)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length40;// Offset=0x8 Size=0x4
};

struct _unnamed_773// Size=0xc (Id=773)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length48;// Offset=0x8 Size=0x4
};

struct _unnamed_774// Size=0xc (Id=774)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length64;// Offset=0x8 Size=0x4
};

struct _unnamed_674// Size=0xc (Id=674)
{
    unsigned char Class;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char Reserved1;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned long IdLowPart;// Offset=0x4 Size=0x4
    unsigned long IdHighPart;// Offset=0x8 Size=0x4
};

union _unnamed_775// Size=0x10 (Id=775)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_764 Generic;// Offset=0x0 Size=0xc
        struct _unnamed_764 Port;// Offset=0x0 Size=0xc
        struct _unnamed_765 Interrupt;// Offset=0x0 Size=0x10
        struct _unnamed_767 MessageInterrupt;// Offset=0x0 Size=0x10
        struct _unnamed_764 Memory;// Offset=0x0 Size=0xc
        struct _unnamed_768 Dma;// Offset=0x0 Size=0xc
        struct _unnamed_769 DmaV3;// Offset=0x0 Size=0xc
        struct _unnamed_668 DevicePrivate;// Offset=0x0 Size=0xc
        struct _unnamed_770 BusNumber;// Offset=0x0 Size=0xc
        struct _unnamed_771 DeviceSpecificData;// Offset=0x0 Size=0xc
        struct _unnamed_772 Memory40;// Offset=0x0 Size=0xc
        struct _unnamed_773 Memory48;// Offset=0x0 Size=0xc
        struct _unnamed_774 Memory64;// Offset=0x0 Size=0xc
        struct _unnamed_674 Connection;// Offset=0x0 Size=0xc
    };
};

struct _CM_PARTIAL_RESOURCE_DESCRIPTOR// Size=0x14 (Id=776)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char ShareDisposition;// Offset=0x1 Size=0x1
    unsigned short Flags;// Offset=0x2 Size=0x2
    union _unnamed_775 u;// Offset=0x4 Size=0x10
};

struct _CM_PARTIAL_RESOURCE_LIST// Size=0x1c (Id=758)
{
    unsigned short Version;// Offset=0x0 Size=0x2
    unsigned short Revision;// Offset=0x2 Size=0x2
    unsigned long Count;// Offset=0x4 Size=0x4
    struct _CM_PARTIAL_RESOURCE_DESCRIPTOR PartialDescriptors[1];// Offset=0x8 Size=0x14
};
