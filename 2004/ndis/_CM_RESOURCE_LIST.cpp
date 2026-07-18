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

union _LARGE_INTEGER// Size=0x8 (Id=78)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct <unnamed-type-u>// Size=0x8 (Id=5241)
    {
        unsigned long LowPart;// Offset=0x0 Size=0x4
        long HighPart;// Offset=0x4 Size=0x4
    };
    struct _LARGE_INTEGER::<unnamed-type-u> u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _CM_PARTIAL_RESOURCE_DESCRIPTOR// Size=0x14 (Id=1248)
{
    union // Size=0x4 (Id=0)
    {
        unsigned char Type;// Offset=0x0 Size=0x1
        unsigned char ShareDisposition;// Offset=0x1 Size=0x1
        unsigned short Flags;// Offset=0x2 Size=0x2
        union <unnamed-type-u>// Size=0x10 (Id=2301)
        {
            struct <unnamed-type-Generic>// Size=0xc (Id=2302)
            {
                union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
                unsigned long Length;// Offset=0x8 Size=0x4
            };
            struct _CM_PARTIAL_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-Generic> Generic;// Offset=0x0 Size=0xc
            struct <unnamed-type-Port>// Size=0xc (Id=2306)
            {
                union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
                unsigned long Length;// Offset=0x8 Size=0x4
            };
            struct _CM_PARTIAL_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-Port> Port;// Offset=0x0 Size=0xc
            struct <unnamed-type-Interrupt>// Size=0x10 (Id=2310)
            {
                unsigned short Level;// Offset=0x0 Size=0x2
                unsigned short Group;// Offset=0x2 Size=0x2
                unsigned long Vector;// Offset=0x4 Size=0x4
                unsigned long long Affinity;// Offset=0x8 Size=0x8
            };
            struct _CM_PARTIAL_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-Interrupt> Interrupt;// Offset=0x0 Size=0x10
            struct <unnamed-type-MessageInterrupt>// Size=0x10 (Id=2316)
            {
                struct _CM_PARTIAL_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-MessageInterrupt>::_anonymous_1690::<unnamed-type-Raw> Raw;// Offset=0x0 Size=0x10
                struct _CM_PARTIAL_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-MessageInterrupt>::_anonymous_1691::<unnamed-type-Translated> Translated;// Offset=0x0 Size=0x10
            };
            struct _CM_PARTIAL_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-MessageInterrupt> MessageInterrupt;// Offset=0x0 Size=0x10
            struct <unnamed-type-Memory>// Size=0xc (Id=2320)
            {
                union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
                unsigned long Length;// Offset=0x8 Size=0x4
            };
            struct _CM_PARTIAL_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-Memory> Memory;// Offset=0x0 Size=0xc
            struct <unnamed-type-Dma>// Size=0xc (Id=2324)
            {
                unsigned long Channel;// Offset=0x0 Size=0x4
                unsigned long Port;// Offset=0x4 Size=0x4
                unsigned long Reserved1;// Offset=0x8 Size=0x4
            };
            struct _CM_PARTIAL_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-Dma> Dma;// Offset=0x0 Size=0xc
            struct <unnamed-type-DmaV3>// Size=0xc (Id=2329)
            {
                unsigned long Channel;// Offset=0x0 Size=0x4
                unsigned long RequestLine;// Offset=0x4 Size=0x4
                unsigned char TransferWidth;// Offset=0x8 Size=0x1
                unsigned char Reserved1;// Offset=0x9 Size=0x1
                unsigned char Reserved2;// Offset=0xa Size=0x1
                unsigned char Reserved3;// Offset=0xb Size=0x1
            };
            struct _CM_PARTIAL_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-DmaV3> DmaV3;// Offset=0x0 Size=0xc
            struct <unnamed-type-DevicePrivate>// Size=0xc (Id=2337)
            {
                unsigned long Data[3];// Offset=0x0 Size=0xc
            };
            struct _CM_PARTIAL_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-DevicePrivate> DevicePrivate;// Offset=0x0 Size=0xc
            struct <unnamed-type-BusNumber>// Size=0xc (Id=2341)
            {
                unsigned long Start;// Offset=0x0 Size=0x4
                unsigned long Length;// Offset=0x4 Size=0x4
                unsigned long Reserved;// Offset=0x8 Size=0x4
            };
            struct _CM_PARTIAL_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-BusNumber> BusNumber;// Offset=0x0 Size=0xc
            struct <unnamed-type-DeviceSpecificData>// Size=0xc (Id=2346)
            {
                unsigned long DataSize;// Offset=0x0 Size=0x4
                unsigned long Reserved1;// Offset=0x4 Size=0x4
                unsigned long Reserved2;// Offset=0x8 Size=0x4
            };
            struct _CM_PARTIAL_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-DeviceSpecificData> DeviceSpecificData;// Offset=0x0 Size=0xc
            struct <unnamed-type-Memory40>// Size=0xc (Id=2351)
            {
                union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
                unsigned long Length40;// Offset=0x8 Size=0x4
            };
            struct _CM_PARTIAL_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-Memory40> Memory40;// Offset=0x0 Size=0xc
            struct <unnamed-type-Memory48>// Size=0xc (Id=2355)
            {
                union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
                unsigned long Length48;// Offset=0x8 Size=0x4
            };
            struct _CM_PARTIAL_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-Memory48> Memory48;// Offset=0x0 Size=0xc
            struct <unnamed-type-Memory64>// Size=0xc (Id=2359)
            {
                union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
                unsigned long Length64;// Offset=0x8 Size=0x4
            };
            struct _CM_PARTIAL_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-Memory64> Memory64;// Offset=0x0 Size=0xc
            struct <unnamed-type-Connection>// Size=0xc (Id=2363)
            {
                unsigned char Class;// Offset=0x0 Size=0x1
                unsigned char Type;// Offset=0x1 Size=0x1
                unsigned char Reserved1;// Offset=0x2 Size=0x1
                unsigned char Reserved2;// Offset=0x3 Size=0x1
                unsigned long IdLowPart;// Offset=0x4 Size=0x4
                unsigned long IdHighPart;// Offset=0x8 Size=0x4
            };
            struct _CM_PARTIAL_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-Connection> Connection;// Offset=0x0 Size=0xc
        };
    };
    union _CM_PARTIAL_RESOURCE_DESCRIPTOR::<unnamed-type-u> u;// Offset=0x4 Size=0x10
};

struct _CM_PARTIAL_RESOURCE_LIST// Size=0x1c (Id=1590)
{
    unsigned short Version;// Offset=0x0 Size=0x2
    unsigned short Revision;// Offset=0x2 Size=0x2
    unsigned long Count;// Offset=0x4 Size=0x4
    struct _CM_PARTIAL_RESOURCE_DESCRIPTOR PartialDescriptors[1];// Offset=0x8 Size=0x14
};

struct _CM_FULL_RESOURCE_DESCRIPTOR// Size=0x24 (Id=980)
{
    enum _INTERFACE_TYPE InterfaceType;// Offset=0x0 Size=0x4
    unsigned long BusNumber;// Offset=0x4 Size=0x4
    struct _CM_PARTIAL_RESOURCE_LIST PartialResourceList;// Offset=0x8 Size=0x1c
};

struct _CM_RESOURCE_LIST// Size=0x28 (Id=1159)
{
    unsigned long Count;// Offset=0x0 Size=0x4
    struct _CM_FULL_RESOURCE_DESCRIPTOR List[1];// Offset=0x4 Size=0x24
};
