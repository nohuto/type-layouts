struct _LIST_ENTRY// Size=0x10 (Id=3400)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

enum _ARBITER_REQUEST_SOURCE
{
    ArbiterRequestUndefined=-1,
    ArbiterRequestLegacyReported=0,
    ArbiterRequestHalReported=1,
    ArbiterRequestLegacyAssigned=2,
    ArbiterRequestPnpDetected=3,
    ArbiterRequestPnpEnumerated=4
};

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

enum _ARBITER_RESULT
{
    ArbiterResultUndefined=-1,
    ArbiterResultSuccess=0,
    ArbiterResultExternalConflict=1,
    ArbiterResultNullRequest=2
};

struct _ARBITER_LIST_ENTRY// Size=0x60 (Id=1802)
{
    struct _LIST_ENTRY ListEntry;// Offset=0x0 Size=0x10
    unsigned long AlternativeCount;// Offset=0x10 Size=0x4
    struct _IO_RESOURCE_DESCRIPTOR * Alternatives;// Offset=0x18 Size=0x8
    struct _DEVICE_OBJECT * PhysicalDeviceObject;// Offset=0x20 Size=0x8
    enum _ARBITER_REQUEST_SOURCE RequestSource;// Offset=0x28 Size=0x4
    unsigned long Flags;// Offset=0x2c Size=0x4
    long long WorkSpace;// Offset=0x30 Size=0x8
    enum _INTERFACE_TYPE InterfaceType;// Offset=0x38 Size=0x4
    unsigned long SlotNumber;// Offset=0x3c Size=0x4
    unsigned long BusNumber;// Offset=0x40 Size=0x4
    struct _CM_PARTIAL_RESOURCE_DESCRIPTOR * Assignment;// Offset=0x48 Size=0x8
    struct _IO_RESOURCE_DESCRIPTOR * SelectedAlternative;// Offset=0x50 Size=0x8
    enum _ARBITER_RESULT Result;// Offset=0x58 Size=0x4
};
