struct _anonymous_10// Size=0x8 (Id=10)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=11)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _anonymous_10 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _anonymous_577// Size=0xc (Id=577)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _anonymous_578// Size=0x10 (Id=578)
{
    unsigned short Level;// Offset=0x0 Size=0x2
    unsigned short Group;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _anonymous_579// Size=0x10 (Id=579)
{
    unsigned short Group;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _anonymous_580// Size=0x10 (Id=580)
{
    union // Size=0x10 (Id=0)
    {
        struct _anonymous_579 Raw;// Offset=0x0 Size=0x10
        struct _anonymous_578 Translated;// Offset=0x0 Size=0x10
    };
};

struct _anonymous_581// Size=0xc (Id=581)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long Port;// Offset=0x4 Size=0x4
    unsigned long Reserved1;// Offset=0x8 Size=0x4
};

struct _anonymous_582// Size=0xc (Id=582)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long RequestLine;// Offset=0x4 Size=0x4
    unsigned char TransferWidth;// Offset=0x8 Size=0x1
    unsigned char Reserved1;// Offset=0x9 Size=0x1
    unsigned char Reserved2;// Offset=0xa Size=0x1
    unsigned char Reserved3;// Offset=0xb Size=0x1
};

struct _anonymous_583// Size=0xc (Id=583)
{
    unsigned long Data[3];// Offset=0x0 Size=0xc
};

struct _anonymous_584// Size=0xc (Id=584)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned long Reserved;// Offset=0x8 Size=0x4
};

struct _anonymous_585// Size=0xc (Id=585)
{
    unsigned long DataSize;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Reserved2;// Offset=0x8 Size=0x4
};

struct _anonymous_586// Size=0xc (Id=586)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length40;// Offset=0x8 Size=0x4
};

struct _anonymous_587// Size=0xc (Id=587)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length48;// Offset=0x8 Size=0x4
};

struct _anonymous_588// Size=0xc (Id=588)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length64;// Offset=0x8 Size=0x4
};

struct _anonymous_589// Size=0xc (Id=589)
{
    unsigned char Class;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char Reserved1;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned long IdLowPart;// Offset=0x4 Size=0x4
    unsigned long IdHighPart;// Offset=0x8 Size=0x4
};

union _anonymous_590// Size=0x10 (Id=590)
{
    union // Size=0x10 (Id=0)
    {
        struct _anonymous_577 Generic;// Offset=0x0 Size=0xc
        struct _anonymous_577 Port;// Offset=0x0 Size=0xc
        struct _anonymous_578 Interrupt;// Offset=0x0 Size=0x10
        struct _anonymous_580 MessageInterrupt;// Offset=0x0 Size=0x10
        struct _anonymous_577 Memory;// Offset=0x0 Size=0xc
        struct _anonymous_581 Dma;// Offset=0x0 Size=0xc
        struct _anonymous_582 DmaV3;// Offset=0x0 Size=0xc
        struct _anonymous_583 DevicePrivate;// Offset=0x0 Size=0xc
        struct _anonymous_584 BusNumber;// Offset=0x0 Size=0xc
        struct _anonymous_585 DeviceSpecificData;// Offset=0x0 Size=0xc
        struct _anonymous_586 Memory40;// Offset=0x0 Size=0xc
        struct _anonymous_587 Memory48;// Offset=0x0 Size=0xc
        struct _anonymous_588 Memory64;// Offset=0x0 Size=0xc
        struct _anonymous_589 Connection;// Offset=0x0 Size=0xc
    };
};

struct _CM_PARTIAL_RESOURCE_DESCRIPTOR// Size=0x14 (Id=591)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char ShareDisposition;// Offset=0x1 Size=0x1
    unsigned short Flags;// Offset=0x2 Size=0x2
    union _anonymous_590 u;// Offset=0x4 Size=0x10
};

struct _CM_PARTIAL_RESOURCE_LIST// Size=0x1c (Id=561)
{
    unsigned short Version;// Offset=0x0 Size=0x2
    unsigned short Revision;// Offset=0x2 Size=0x2
    unsigned long Count;// Offset=0x4 Size=0x4
    struct _CM_PARTIAL_RESOURCE_DESCRIPTOR PartialDescriptors[1];// Offset=0x8 Size=0x14
};
