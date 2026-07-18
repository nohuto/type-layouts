struct _unnamed_9// Size=0x8 (Id=9)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=508)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_9 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _unnamed_434// Size=0xc (Id=434)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _unnamed_435// Size=0x10 (Id=435)
{
    unsigned short Level;// Offset=0x0 Size=0x2
    unsigned short Group;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_436// Size=0x10 (Id=436)
{
    unsigned short Group;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_437// Size=0x10 (Id=437)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_436 Raw;// Offset=0x0 Size=0x10
        struct _unnamed_435 Translated;// Offset=0x0 Size=0x10
    };
};

struct _unnamed_438// Size=0xc (Id=438)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long Port;// Offset=0x4 Size=0x4
    unsigned long Reserved1;// Offset=0x8 Size=0x4
};

struct _unnamed_439// Size=0xc (Id=439)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long RequestLine;// Offset=0x4 Size=0x4
    unsigned char TransferWidth;// Offset=0x8 Size=0x1
    unsigned char Reserved1;// Offset=0x9 Size=0x1
    unsigned char Reserved2;// Offset=0xa Size=0x1
    unsigned char Reserved3;// Offset=0xb Size=0x1
};

struct _unnamed_338// Size=0xc (Id=338)
{
    unsigned long Data[3];// Offset=0x0 Size=0xc
};

struct _unnamed_440// Size=0xc (Id=440)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned long Reserved;// Offset=0x8 Size=0x4
};

struct _unnamed_441// Size=0xc (Id=441)
{
    unsigned long DataSize;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Reserved2;// Offset=0x8 Size=0x4
};

struct _unnamed_442// Size=0xc (Id=442)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length40;// Offset=0x8 Size=0x4
};

struct _unnamed_443// Size=0xc (Id=443)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length48;// Offset=0x8 Size=0x4
};

struct _unnamed_444// Size=0xc (Id=444)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length64;// Offset=0x8 Size=0x4
};

struct _unnamed_344// Size=0xc (Id=344)
{
    unsigned char Class;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char Reserved1;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned long IdLowPart;// Offset=0x4 Size=0x4
    unsigned long IdHighPart;// Offset=0x8 Size=0x4
};

union _unnamed_445// Size=0x10 (Id=445)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_434 Generic;// Offset=0x0 Size=0xc
        struct _unnamed_434 Port;// Offset=0x0 Size=0xc
        struct _unnamed_435 Interrupt;// Offset=0x0 Size=0x10
        struct _unnamed_437 MessageInterrupt;// Offset=0x0 Size=0x10
        struct _unnamed_434 Memory;// Offset=0x0 Size=0xc
        struct _unnamed_438 Dma;// Offset=0x0 Size=0xc
        struct _unnamed_439 DmaV3;// Offset=0x0 Size=0xc
        struct _unnamed_338 DevicePrivate;// Offset=0x0 Size=0xc
        struct _unnamed_440 BusNumber;// Offset=0x0 Size=0xc
        struct _unnamed_441 DeviceSpecificData;// Offset=0x0 Size=0xc
        struct _unnamed_442 Memory40;// Offset=0x0 Size=0xc
        struct _unnamed_443 Memory48;// Offset=0x0 Size=0xc
        struct _unnamed_444 Memory64;// Offset=0x0 Size=0xc
        struct _unnamed_344 Connection;// Offset=0x0 Size=0xc
    };
};

struct _CM_PARTIAL_RESOURCE_DESCRIPTOR// Size=0x14 (Id=446)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char ShareDisposition;// Offset=0x1 Size=0x1
    unsigned short Flags;// Offset=0x2 Size=0x2
    union _unnamed_445 u;// Offset=0x4 Size=0x10
};

struct _CM_PARTIAL_RESOURCE_LIST// Size=0x1c (Id=432)
{
    unsigned short Version;// Offset=0x0 Size=0x2
    unsigned short Revision;// Offset=0x2 Size=0x2
    unsigned long Count;// Offset=0x4 Size=0x4
    struct _CM_PARTIAL_RESOURCE_DESCRIPTOR PartialDescriptors[1];// Offset=0x8 Size=0x14
};
