enum _INTERFACE_TYPE
{
    InterfaceTypeUndefined=-1,
    Internal=0,
    Isa=1,
    Eisa=2,
    MicroChannel=3,
    TurboChannel=4,
    PCIBus=5,
    VMEBus=6,
    NuBus=7,
    PCMCIABus=8,
    CBus=9,
    MPIBus=10,
    MPSABus=11,
    ProcessorInternal=12,
    InternalPowerBus=13,
    PNPISABus=14,
    PNPBus=15,
    Vmcs=16,
    ACPIBus=17,
    MaximumInterfaceType=18
};

struct _unnamed_31// Size=0x8 (Id=31)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=32)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_31 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _unnamed_1571// Size=0xc (Id=1571)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _unnamed_1572// Size=0x10 (Id=1572)
{
    unsigned short Level;// Offset=0x0 Size=0x2
    unsigned short Group;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_1573// Size=0x10 (Id=1573)
{
    unsigned short Group;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_1574// Size=0x10 (Id=1574)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_1573 Raw;// Offset=0x0 Size=0x10
        struct _unnamed_1572 Translated;// Offset=0x0 Size=0x10
    };
};

struct _unnamed_1575// Size=0xc (Id=1575)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long Port;// Offset=0x4 Size=0x4
    unsigned long Reserved1;// Offset=0x8 Size=0x4
};

struct _unnamed_1576// Size=0xc (Id=1576)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long RequestLine;// Offset=0x4 Size=0x4
    unsigned char TransferWidth;// Offset=0x8 Size=0x1
    unsigned char Reserved1;// Offset=0x9 Size=0x1
    unsigned char Reserved2;// Offset=0xa Size=0x1
    unsigned char Reserved3;// Offset=0xb Size=0x1
};

struct _unnamed_1541// Size=0xc (Id=1541)
{
    unsigned long Data[3];// Offset=0x0 Size=0xc
};

struct _unnamed_1577// Size=0xc (Id=1577)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned long Reserved;// Offset=0x8 Size=0x4
};

struct _unnamed_1578// Size=0xc (Id=1578)
{
    unsigned long DataSize;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Reserved2;// Offset=0x8 Size=0x4
};

struct _unnamed_1579// Size=0xc (Id=1579)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length40;// Offset=0x8 Size=0x4
};

struct _unnamed_1580// Size=0xc (Id=1580)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length48;// Offset=0x8 Size=0x4
};

struct _unnamed_1581// Size=0xc (Id=1581)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length64;// Offset=0x8 Size=0x4
};

struct _unnamed_1547// Size=0xc (Id=1547)
{
    unsigned char Class;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char Reserved1;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned long IdLowPart;// Offset=0x4 Size=0x4
    unsigned long IdHighPart;// Offset=0x8 Size=0x4
};

union _unnamed_1582// Size=0x10 (Id=1582)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_1571 Generic;// Offset=0x0 Size=0xc
        struct _unnamed_1571 Port;// Offset=0x0 Size=0xc
        struct _unnamed_1572 Interrupt;// Offset=0x0 Size=0x10
        struct _unnamed_1574 MessageInterrupt;// Offset=0x0 Size=0x10
        struct _unnamed_1571 Memory;// Offset=0x0 Size=0xc
        struct _unnamed_1575 Dma;// Offset=0x0 Size=0xc
        struct _unnamed_1576 DmaV3;// Offset=0x0 Size=0xc
        struct _unnamed_1541 DevicePrivate;// Offset=0x0 Size=0xc
        struct _unnamed_1577 BusNumber;// Offset=0x0 Size=0xc
        struct _unnamed_1578 DeviceSpecificData;// Offset=0x0 Size=0xc
        struct _unnamed_1579 Memory40;// Offset=0x0 Size=0xc
        struct _unnamed_1580 Memory48;// Offset=0x0 Size=0xc
        struct _unnamed_1581 Memory64;// Offset=0x0 Size=0xc
        struct _unnamed_1547 Connection;// Offset=0x0 Size=0xc
    };
};

struct _CM_PARTIAL_RESOURCE_DESCRIPTOR// Size=0x14 (Id=1583)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char ShareDisposition;// Offset=0x1 Size=0x1
    unsigned short Flags;// Offset=0x2 Size=0x2
    union _unnamed_1582 u;// Offset=0x4 Size=0x10
};

struct _CM_PARTIAL_RESOURCE_LIST// Size=0x1c (Id=1809)
{
    unsigned short Version;// Offset=0x0 Size=0x2
    unsigned short Revision;// Offset=0x2 Size=0x2
    unsigned long Count;// Offset=0x4 Size=0x4
    struct _CM_PARTIAL_RESOURCE_DESCRIPTOR PartialDescriptors[1];// Offset=0x8 Size=0x14
};

struct _CM_FULL_RESOURCE_DESCRIPTOR// Size=0x24 (Id=1724)
{
    enum _INTERFACE_TYPE InterfaceType;// Offset=0x0 Size=0x4
    unsigned long BusNumber;// Offset=0x4 Size=0x4
    struct _CM_PARTIAL_RESOURCE_LIST PartialResourceList;// Offset=0x8 Size=0x1c
};
