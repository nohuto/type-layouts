struct _unnamed_43// Size=0x8 (Id=43)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=363)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_43 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _unnamed_792// Size=0xc (Id=792)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _unnamed_793// Size=0x10 (Id=793)
{
    unsigned short Level;// Offset=0x0 Size=0x2
    unsigned short Group;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_794// Size=0x10 (Id=794)
{
    unsigned short Group;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_795// Size=0x10 (Id=795)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_794 Raw;// Offset=0x0 Size=0x10
        struct _unnamed_793 Translated;// Offset=0x0 Size=0x10
    };
};

struct _unnamed_796// Size=0xc (Id=796)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long Port;// Offset=0x4 Size=0x4
    unsigned long Reserved1;// Offset=0x8 Size=0x4
};

struct _unnamed_797// Size=0xc (Id=797)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long RequestLine;// Offset=0x4 Size=0x4
    unsigned char TransferWidth;// Offset=0x8 Size=0x1
    unsigned char Reserved1;// Offset=0x9 Size=0x1
    unsigned char Reserved2;// Offset=0xa Size=0x1
    unsigned char Reserved3;// Offset=0xb Size=0x1
};

struct _unnamed_731// Size=0xc (Id=731)
{
    unsigned long Data[3];// Offset=0x0 Size=0xc
};

struct _unnamed_798// Size=0xc (Id=798)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned long Reserved;// Offset=0x8 Size=0x4
};

struct _unnamed_799// Size=0xc (Id=799)
{
    unsigned long DataSize;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Reserved2;// Offset=0x8 Size=0x4
};

struct _unnamed_800// Size=0xc (Id=800)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length40;// Offset=0x8 Size=0x4
};

struct _unnamed_801// Size=0xc (Id=801)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length48;// Offset=0x8 Size=0x4
};

struct _unnamed_802// Size=0xc (Id=802)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length64;// Offset=0x8 Size=0x4
};

struct _unnamed_737// Size=0xc (Id=737)
{
    unsigned char Class;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char Reserved1;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned long IdLowPart;// Offset=0x4 Size=0x4
    unsigned long IdHighPart;// Offset=0x8 Size=0x4
};

union _unnamed_803// Size=0x10 (Id=803)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_792 Generic;// Offset=0x0 Size=0xc
        struct _unnamed_792 Port;// Offset=0x0 Size=0xc
        struct _unnamed_793 Interrupt;// Offset=0x0 Size=0x10
        struct _unnamed_795 MessageInterrupt;// Offset=0x0 Size=0x10
        struct _unnamed_792 Memory;// Offset=0x0 Size=0xc
        struct _unnamed_796 Dma;// Offset=0x0 Size=0xc
        struct _unnamed_797 DmaV3;// Offset=0x0 Size=0xc
        struct _unnamed_731 DevicePrivate;// Offset=0x0 Size=0xc
        struct _unnamed_798 BusNumber;// Offset=0x0 Size=0xc
        struct _unnamed_799 DeviceSpecificData;// Offset=0x0 Size=0xc
        struct _unnamed_800 Memory40;// Offset=0x0 Size=0xc
        struct _unnamed_801 Memory48;// Offset=0x0 Size=0xc
        struct _unnamed_802 Memory64;// Offset=0x0 Size=0xc
        struct _unnamed_737 Connection;// Offset=0x0 Size=0xc
    };
};

struct _CM_PARTIAL_RESOURCE_DESCRIPTOR// Size=0x14 (Id=804)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char ShareDisposition;// Offset=0x1 Size=0x1
    unsigned short Flags;// Offset=0x2 Size=0x2
    union _unnamed_803 u;// Offset=0x4 Size=0x10
};

struct _CM_PARTIAL_RESOURCE_LIST// Size=0x1c (Id=788)
{
    unsigned short Version;// Offset=0x0 Size=0x2
    unsigned short Revision;// Offset=0x2 Size=0x2
    unsigned long Count;// Offset=0x4 Size=0x4
    struct _CM_PARTIAL_RESOURCE_DESCRIPTOR PartialDescriptors[1];// Offset=0x8 Size=0x14
};
