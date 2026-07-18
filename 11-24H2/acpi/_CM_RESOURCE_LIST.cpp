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

struct _unnamed_44// Size=0x8 (Id=44)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=250)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_44 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _unnamed_807// Size=0xc (Id=807)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _unnamed_808// Size=0x10 (Id=808)
{
    unsigned short Level;// Offset=0x0 Size=0x2
    unsigned short Group;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_809// Size=0x10 (Id=809)
{
    unsigned short Group;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_810// Size=0x10 (Id=810)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_809 Raw;// Offset=0x0 Size=0x10
        struct _unnamed_808 Translated;// Offset=0x0 Size=0x10
    };
};

struct _unnamed_811// Size=0xc (Id=811)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long Port;// Offset=0x4 Size=0x4
    unsigned long Reserved1;// Offset=0x8 Size=0x4
};

struct _unnamed_812// Size=0xc (Id=812)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long RequestLine;// Offset=0x4 Size=0x4
    unsigned char TransferWidth;// Offset=0x8 Size=0x1
    unsigned char Reserved1;// Offset=0x9 Size=0x1
    unsigned char Reserved2;// Offset=0xa Size=0x1
    unsigned char Reserved3;// Offset=0xb Size=0x1
};

struct _unnamed_711// Size=0xc (Id=711)
{
    unsigned long Data[3];// Offset=0x0 Size=0xc
};

struct _unnamed_813// Size=0xc (Id=813)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned long Reserved;// Offset=0x8 Size=0x4
};

struct _unnamed_814// Size=0xc (Id=814)
{
    unsigned long DataSize;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Reserved2;// Offset=0x8 Size=0x4
};

struct _unnamed_815// Size=0xc (Id=815)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length40;// Offset=0x8 Size=0x4
};

struct _unnamed_816// Size=0xc (Id=816)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length48;// Offset=0x8 Size=0x4
};

struct _unnamed_817// Size=0xc (Id=817)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length64;// Offset=0x8 Size=0x4
};

struct _unnamed_717// Size=0xc (Id=717)
{
    unsigned char Class;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char Reserved1;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned long IdLowPart;// Offset=0x4 Size=0x4
    unsigned long IdHighPart;// Offset=0x8 Size=0x4
};

union _unnamed_818// Size=0x10 (Id=818)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_807 Generic;// Offset=0x0 Size=0xc
        struct _unnamed_807 Port;// Offset=0x0 Size=0xc
        struct _unnamed_808 Interrupt;// Offset=0x0 Size=0x10
        struct _unnamed_810 MessageInterrupt;// Offset=0x0 Size=0x10
        struct _unnamed_807 Memory;// Offset=0x0 Size=0xc
        struct _unnamed_811 Dma;// Offset=0x0 Size=0xc
        struct _unnamed_812 DmaV3;// Offset=0x0 Size=0xc
        struct _unnamed_711 DevicePrivate;// Offset=0x0 Size=0xc
        struct _unnamed_813 BusNumber;// Offset=0x0 Size=0xc
        struct _unnamed_814 DeviceSpecificData;// Offset=0x0 Size=0xc
        struct _unnamed_815 Memory40;// Offset=0x0 Size=0xc
        struct _unnamed_816 Memory48;// Offset=0x0 Size=0xc
        struct _unnamed_817 Memory64;// Offset=0x0 Size=0xc
        struct _unnamed_717 Connection;// Offset=0x0 Size=0xc
    };
};

struct _CM_PARTIAL_RESOURCE_DESCRIPTOR// Size=0x14 (Id=819)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char ShareDisposition;// Offset=0x1 Size=0x1
    unsigned short Flags;// Offset=0x2 Size=0x2
    union _unnamed_818 u;// Offset=0x4 Size=0x10
};

struct _CM_PARTIAL_RESOURCE_LIST// Size=0x1c (Id=801)
{
    unsigned short Version;// Offset=0x0 Size=0x2
    unsigned short Revision;// Offset=0x2 Size=0x2
    unsigned long Count;// Offset=0x4 Size=0x4
    struct _CM_PARTIAL_RESOURCE_DESCRIPTOR PartialDescriptors[1];// Offset=0x8 Size=0x14
};

struct _CM_FULL_RESOURCE_DESCRIPTOR// Size=0x24 (Id=753)
{
    enum _INTERFACE_TYPE InterfaceType;// Offset=0x0 Size=0x4
    unsigned long BusNumber;// Offset=0x4 Size=0x4
    struct _CM_PARTIAL_RESOURCE_LIST PartialResourceList;// Offset=0x8 Size=0x1c
};

struct _CM_RESOURCE_LIST// Size=0x28 (Id=485)
{
    unsigned long Count;// Offset=0x0 Size=0x4
    struct _CM_FULL_RESOURCE_DESCRIPTOR List[1];// Offset=0x4 Size=0x24
};
