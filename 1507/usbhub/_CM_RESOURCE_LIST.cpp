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

struct _unnamed_312// Size=0xc (Id=312)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _unnamed_313// Size=0x10 (Id=313)
{
    unsigned long Level;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_314// Size=0x10 (Id=314)
{
    unsigned short Reserved;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_315// Size=0x10 (Id=315)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_314 Raw;// Offset=0x0 Size=0x10
        struct _unnamed_313 Translated;// Offset=0x0 Size=0x10
    };
};

struct _unnamed_316// Size=0xc (Id=316)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long Port;// Offset=0x4 Size=0x4
    unsigned long Reserved1;// Offset=0x8 Size=0x4
};

struct _unnamed_317// Size=0xc (Id=317)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long RequestLine;// Offset=0x4 Size=0x4
    unsigned char TransferWidth;// Offset=0x8 Size=0x1
    unsigned char Reserved1;// Offset=0x9 Size=0x1
    unsigned char Reserved2;// Offset=0xa Size=0x1
    unsigned char Reserved3;// Offset=0xb Size=0x1
};

struct _unnamed_318// Size=0xc (Id=318)
{
    unsigned long Data[3];// Offset=0x0 Size=0xc
};

struct _unnamed_319// Size=0xc (Id=319)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned long Reserved;// Offset=0x8 Size=0x4
};

struct _unnamed_320// Size=0xc (Id=320)
{
    unsigned long DataSize;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Reserved2;// Offset=0x8 Size=0x4
};

struct _unnamed_321// Size=0xc (Id=321)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length40;// Offset=0x8 Size=0x4
};

struct _unnamed_322// Size=0xc (Id=322)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length48;// Offset=0x8 Size=0x4
};

struct _unnamed_323// Size=0xc (Id=323)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length64;// Offset=0x8 Size=0x4
};

struct _unnamed_324// Size=0xc (Id=324)
{
    unsigned char Class;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char Reserved1;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned long IdLowPart;// Offset=0x4 Size=0x4
    unsigned long IdHighPart;// Offset=0x8 Size=0x4
};

union _unnamed_325// Size=0x10 (Id=325)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_312 Generic;// Offset=0x0 Size=0xc
        struct _unnamed_312 Port;// Offset=0x0 Size=0xc
        struct _unnamed_313 Interrupt;// Offset=0x0 Size=0x10
        struct _unnamed_315 MessageInterrupt;// Offset=0x0 Size=0x10
        struct _unnamed_312 Memory;// Offset=0x0 Size=0xc
        struct _unnamed_316 Dma;// Offset=0x0 Size=0xc
        struct _unnamed_317 DmaV3;// Offset=0x0 Size=0xc
        struct _unnamed_318 DevicePrivate;// Offset=0x0 Size=0xc
        struct _unnamed_319 BusNumber;// Offset=0x0 Size=0xc
        struct _unnamed_320 DeviceSpecificData;// Offset=0x0 Size=0xc
        struct _unnamed_321 Memory40;// Offset=0x0 Size=0xc
        struct _unnamed_322 Memory48;// Offset=0x0 Size=0xc
        struct _unnamed_323 Memory64;// Offset=0x0 Size=0xc
        struct _unnamed_324 Connection;// Offset=0x0 Size=0xc
    };
};

struct _CM_PARTIAL_RESOURCE_DESCRIPTOR// Size=0x14 (Id=326)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char ShareDisposition;// Offset=0x1 Size=0x1
    unsigned short Flags;// Offset=0x2 Size=0x2
    union _unnamed_325 u;// Offset=0x4 Size=0x10
};

struct _CM_PARTIAL_RESOURCE_LIST// Size=0x1c (Id=277)
{
    unsigned short Version;// Offset=0x0 Size=0x2
    unsigned short Revision;// Offset=0x2 Size=0x2
    unsigned long Count;// Offset=0x4 Size=0x4
    struct _CM_PARTIAL_RESOURCE_DESCRIPTOR PartialDescriptors[1];// Offset=0x8 Size=0x14
};

struct _CM_FULL_RESOURCE_DESCRIPTOR// Size=0x24 (Id=257)
{
    enum _INTERFACE_TYPE InterfaceType;// Offset=0x0 Size=0x4
    unsigned long BusNumber;// Offset=0x4 Size=0x4
    struct _CM_PARTIAL_RESOURCE_LIST PartialResourceList;// Offset=0x8 Size=0x1c
};

struct _CM_RESOURCE_LIST// Size=0x28 (Id=256)
{
    unsigned long Count;// Offset=0x0 Size=0x4
    struct _CM_FULL_RESOURCE_DESCRIPTOR List[1];// Offset=0x4 Size=0x24
};
