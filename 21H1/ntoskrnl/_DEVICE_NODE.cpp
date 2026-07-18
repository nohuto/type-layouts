struct _UNICODE_STRING// Size=0x10 (Id=415)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _LIST_ENTRY// Size=0x10 (Id=4)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _DISPATCHER_HEADER// Size=0x18 (Id=157)
{
    union // Size=0x4 (Id=0)
    {
        long Lock;// Offset=0x0 Size=0x4
        long LockNV;// Offset=0x0 Size=0x4
        unsigned char Type;// Offset=0x0 Size=0x1
        unsigned char Signalling;// Offset=0x1 Size=0x1
        unsigned char Size;// Offset=0x2 Size=0x1
        unsigned char Reserved1;// Offset=0x3 Size=0x1
        unsigned char TimerType;// Offset=0x0 Size=0x1
        union // Size=0x1 (Id=0)
        {
            unsigned char TimerControlFlags;// Offset=0x1 Size=0x1
            struct // Size=0x1 (Id=0)
            {
                unsigned char Absolute:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char Wake:1;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x1
                unsigned char EncodedTolerableDelay:6;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x6
            };
        };
        unsigned char Hand;// Offset=0x2 Size=0x1
        unsigned char TimerMiscFlags;// Offset=0x3 Size=0x1
        struct // Size=0x1 (Id=0)
        {
            unsigned char Index:6;// Offset=0x3 Size=0x1 BitOffset=0x0 BitSize=0x6
            unsigned char Inserted:1;// Offset=0x3 Size=0x1 BitOffset=0x6 BitSize=0x1
            unsigned char Expired:1;// Offset=0x3 Size=0x1 BitOffset=0x7 BitSize=0x1
        };
        unsigned char Timer2Type;// Offset=0x0 Size=0x1
        union // Size=0x1 (Id=0)
        {
            unsigned char Timer2Flags;// Offset=0x1 Size=0x1
            struct // Size=0x1 (Id=0)
            {
                unsigned char Timer2Inserted:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char Timer2Expiring:1;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x1
                unsigned char Timer2CancelPending:1;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x1
                unsigned char Timer2SetPending:1;// Offset=0x1 Size=0x1 BitOffset=0x3 BitSize=0x1
                unsigned char Timer2Running:1;// Offset=0x1 Size=0x1 BitOffset=0x4 BitSize=0x1
                unsigned char Timer2Disabled:1;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x1
                unsigned char Timer2ReservedFlags:2;// Offset=0x1 Size=0x1 BitOffset=0x6 BitSize=0x2
            };
        };
        unsigned char Timer2ComponentId;// Offset=0x2 Size=0x1
        unsigned char Timer2RelativeId;// Offset=0x3 Size=0x1
        unsigned char QueueType;// Offset=0x0 Size=0x1
        union // Size=0x1 (Id=0)
        {
            unsigned char QueueControlFlags;// Offset=0x1 Size=0x1
            struct // Size=0x1 (Id=0)
            {
                unsigned char Abandoned:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char DisableIncrement:1;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x1
                unsigned char QueueReservedControlFlags:6;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x6
            };
        };
        unsigned char QueueSize;// Offset=0x2 Size=0x1
        unsigned char QueueReserved;// Offset=0x3 Size=0x1
        unsigned char ThreadType;// Offset=0x0 Size=0x1
        unsigned char ThreadReserved;// Offset=0x1 Size=0x1
        union // Size=0x1 (Id=0)
        {
            unsigned char ThreadControlFlags;// Offset=0x2 Size=0x1
            struct // Size=0x1 (Id=0)
            {
                unsigned char CycleProfiling:1;// Offset=0x2 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char CounterProfiling:1;// Offset=0x2 Size=0x1 BitOffset=0x1 BitSize=0x1
                unsigned char GroupScheduling:1;// Offset=0x2 Size=0x1 BitOffset=0x2 BitSize=0x1
                unsigned char AffinitySet:1;// Offset=0x2 Size=0x1 BitOffset=0x3 BitSize=0x1
                unsigned char Tagged:1;// Offset=0x2 Size=0x1 BitOffset=0x4 BitSize=0x1
                unsigned char EnergyProfiling:1;// Offset=0x2 Size=0x1 BitOffset=0x5 BitSize=0x1
                unsigned char SchedulerAssist:1;// Offset=0x2 Size=0x1 BitOffset=0x6 BitSize=0x1
                unsigned char ThreadReservedControlFlags:1;// Offset=0x2 Size=0x1 BitOffset=0x7 BitSize=0x1
            };
        };
        unsigned char DebugActive;// Offset=0x3 Size=0x1
        struct // Size=0x1 (Id=0)
        {
            unsigned char ActiveDR7:1;// Offset=0x3 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char Instrumented:1;// Offset=0x3 Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char Minimal:1;// Offset=0x3 Size=0x1 BitOffset=0x2 BitSize=0x1
            unsigned char Reserved4:2;// Offset=0x3 Size=0x1 BitOffset=0x3 BitSize=0x2
            unsigned char AltSyscall:1;// Offset=0x3 Size=0x1 BitOffset=0x5 BitSize=0x1
            unsigned char UmsScheduled:1;// Offset=0x3 Size=0x1 BitOffset=0x6 BitSize=0x1
            unsigned char UmsPrimary:1;// Offset=0x3 Size=0x1 BitOffset=0x7 BitSize=0x1
        };
        unsigned char MutantType;// Offset=0x0 Size=0x1
        unsigned char MutantSize;// Offset=0x1 Size=0x1
        unsigned char DpcActive;// Offset=0x2 Size=0x1
        unsigned char MutantReserved;// Offset=0x3 Size=0x1
    };
    long SignalState;// Offset=0x4 Size=0x4
    struct _LIST_ENTRY WaitListHead;// Offset=0x8 Size=0x10
};

struct _KEVENT// Size=0x18 (Id=20)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
};

enum _SYSTEM_POWER_STATE
{
    PowerSystemUnspecified=0,
    PowerSystemWorking=1,
    PowerSystemSleeping1=2,
    PowerSystemSleeping2=3,
    PowerSystemSleeping3=4,
    PowerSystemHibernate=5,
    PowerSystemShutdown=6,
    PowerSystemMaximum=7
};

enum _DEVICE_POWER_STATE
{
    PowerDeviceUnspecified=0,
    PowerDeviceD0=1,
    PowerDeviceD1=2,
    PowerDeviceD2=3,
    PowerDeviceD3=4,
    PowerDeviceMaximum=5
};

union _POWER_STATE// Size=0x4 (Id=167)
{
    enum _SYSTEM_POWER_STATE SystemState;// Offset=0x0 Size=0x4
    enum _DEVICE_POWER_STATE DeviceState;// Offset=0x0 Size=0x4
};

struct _PO_DEVICE_NOTIFY// Size=0x68 (Id=1036)
{
    struct _LIST_ENTRY Link;// Offset=0x0 Size=0x10
    struct _LIST_ENTRY PowerChildren;// Offset=0x10 Size=0x10
    struct _LIST_ENTRY PowerParents;// Offset=0x20 Size=0x10
    struct _DEVICE_OBJECT * TargetDevice;// Offset=0x30 Size=0x8
    unsigned char OrderLevel;// Offset=0x38 Size=0x1
    struct _DEVICE_OBJECT * DeviceObject;// Offset=0x40 Size=0x8
    wchar_t * DeviceName;// Offset=0x48 Size=0x8
    wchar_t * DriverName;// Offset=0x50 Size=0x8
    unsigned long ChildCount;// Offset=0x58 Size=0x4
    unsigned long ActiveChild;// Offset=0x5c Size=0x4
    unsigned long ParentCount;// Offset=0x60 Size=0x4
    unsigned long ActiveParent;// Offset=0x64 Size=0x4
};

struct _PO_IRP_QUEUE// Size=0x10 (Id=1684)
{
    struct _IRP * CurrentIrp;// Offset=0x0 Size=0x8
    struct _IRP * PendingIrpList;// Offset=0x8 Size=0x8
};

struct _PO_IRP_MANAGER// Size=0x20 (Id=1423)
{
    struct _PO_IRP_QUEUE DeviceIrpQueue;// Offset=0x0 Size=0x10
    struct _PO_IRP_QUEUE SystemIrpQueue;// Offset=0x10 Size=0x10
};

enum _PNP_DEVNODE_STATE
{
    DeviceNodeUnspecified=768,
    DeviceNodeUninitialized=769,
    DeviceNodeInitialized=770,
    DeviceNodeDriversAdded=771,
    DeviceNodeResourcesAssigned=772,
    DeviceNodeStartPending=773,
    DeviceNodeStartCompletion=774,
    DeviceNodeStartPostWork=775,
    DeviceNodeStarted=776,
    DeviceNodeQueryStopped=777,
    DeviceNodeStopped=778,
    DeviceNodeRestartCompletion=779,
    DeviceNodeEnumeratePending=780,
    DeviceNodeEnumerateCompletion=781,
    DeviceNodeAwaitingQueuedDeletion=782,
    DeviceNodeAwaitingQueuedRemoval=783,
    DeviceNodeQueryRemoved=784,
    DeviceNodeRemovePendingCloses=785,
    DeviceNodeRemoved=786,
    DeviceNodeDeletePendingCloses=787,
    DeviceNodeDeleted=788,
    MaxDeviceNodeState=789
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

union _anonymous_618// Size=0x8 (Id=618)
{
    struct _DEVICE_NODE * LegacyDeviceNode;// Offset=0x0 Size=0x8
    struct _DEVICE_RELATIONS * PendingDeviceRelations;// Offset=0x0 Size=0x8
    void * Information;// Offset=0x0 Size=0x8
};

union _anonymous_619// Size=0x8 (Id=619)
{
    struct _DEVICE_NODE * NextResourceDeviceNode;// Offset=0x0 Size=0x8
};

struct _anonymous_621// Size=0x20 (Id=621)
{
    enum PROFILE_STATUS DockStatus;// Offset=0x0 Size=0x4
    struct _LIST_ENTRY ListEntry;// Offset=0x8 Size=0x10
    wchar_t * SerialNumber;// Offset=0x18 Size=0x8
};

struct _GUID// Size=0x10 (Id=475)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _PO_DIRECTED_DRIPS_STATE// Size=0x38 (Id=1009)
{
    struct _LIST_ENTRY QueueLink;// Offset=0x0 Size=0x10
    struct _LIST_ENTRY VisitedQueueLink;// Offset=0x10 Size=0x10
    unsigned long Flags;// Offset=0x20 Size=0x4
    unsigned long CachedFlags;// Offset=0x24 Size=0x4
    unsigned long DeviceUsageCount;// Offset=0x28 Size=0x4
    void * Diagnostic;// Offset=0x30 Size=0x8
};

struct _DEVICE_NODE// Size=0x310 (Id=623)
{
    struct _DEVICE_NODE * Sibling;// Offset=0x0 Size=0x8
    struct _DEVICE_NODE * Child;// Offset=0x8 Size=0x8
    struct _DEVICE_NODE * Parent;// Offset=0x10 Size=0x8
    struct _DEVICE_NODE * LastChild;// Offset=0x18 Size=0x8
    struct _DEVICE_OBJECT * PhysicalDeviceObject;// Offset=0x20 Size=0x8
    struct _UNICODE_STRING InstancePath;// Offset=0x28 Size=0x10
    struct _UNICODE_STRING ServiceName;// Offset=0x38 Size=0x10
    struct _IRP * PendingIrp;// Offset=0x48 Size=0x8
    struct _POP_FX_DEVICE * FxDevice;// Offset=0x50 Size=0x8
    long FxDeviceLock;// Offset=0x58 Size=0x4
    struct _KEVENT FxRemoveEvent;// Offset=0x60 Size=0x18
    long FxActivationCount;// Offset=0x78 Size=0x4
    long FxSleepCount;// Offset=0x7c Size=0x4
    struct _UNICODE_STRING UniqueId;// Offset=0x80 Size=0x10
    struct _POP_FX_PLUGIN * Plugin;// Offset=0x90 Size=0x8
    unsigned long Level;// Offset=0x98 Size=0x4
    union _POWER_STATE CurrentPowerState;// Offset=0x9c Size=0x4
    struct _PO_DEVICE_NOTIFY Notify;// Offset=0xa0 Size=0x68
    struct _PO_IRP_MANAGER PoIrpManager;// Offset=0x108 Size=0x20
    long PowerFlags;// Offset=0x128 Size=0x4
    enum _PNP_DEVNODE_STATE State;// Offset=0x12c Size=0x4
    enum _PNP_DEVNODE_STATE PreviousState;// Offset=0x130 Size=0x4
    enum _PNP_DEVNODE_STATE StateHistory[20];// Offset=0x134 Size=0x50
    unsigned long StateHistoryEntry;// Offset=0x184 Size=0x4
    long CompletionStatus;// Offset=0x188 Size=0x4
    unsigned long Flags;// Offset=0x18c Size=0x4
    unsigned long UserFlags;// Offset=0x190 Size=0x4
    unsigned long Problem;// Offset=0x194 Size=0x4
    long ProblemStatus;// Offset=0x198 Size=0x4
    struct _CM_RESOURCE_LIST * ResourceList;// Offset=0x1a0 Size=0x8
    struct _CM_RESOURCE_LIST * ResourceListTranslated;// Offset=0x1a8 Size=0x8
    struct _DEVICE_OBJECT * DuplicatePDO;// Offset=0x1b0 Size=0x8
    struct _IO_RESOURCE_REQUIREMENTS_LIST * ResourceRequirements;// Offset=0x1b8 Size=0x8
    enum _INTERFACE_TYPE InterfaceType;// Offset=0x1c0 Size=0x4
    unsigned long BusNumber;// Offset=0x1c4 Size=0x4
    enum _INTERFACE_TYPE ChildInterfaceType;// Offset=0x1c8 Size=0x4
    unsigned long ChildBusNumber;// Offset=0x1cc Size=0x4
    unsigned short ChildBusTypeIndex;// Offset=0x1d0 Size=0x2
    unsigned char RemovalPolicy;// Offset=0x1d2 Size=0x1
    unsigned char HardwareRemovalPolicy;// Offset=0x1d3 Size=0x1
    struct _LIST_ENTRY TargetDeviceNotify;// Offset=0x1d8 Size=0x10
    struct _LIST_ENTRY DeviceArbiterList;// Offset=0x1e8 Size=0x10
    struct _LIST_ENTRY DeviceTranslatorList;// Offset=0x1f8 Size=0x10
    unsigned short NoTranslatorMask;// Offset=0x208 Size=0x2
    unsigned short QueryTranslatorMask;// Offset=0x20a Size=0x2
    unsigned short NoArbiterMask;// Offset=0x20c Size=0x2
    unsigned short QueryArbiterMask;// Offset=0x20e Size=0x2
    union _anonymous_618 OverUsed1;// Offset=0x210 Size=0x8
    union _anonymous_619 OverUsed2;// Offset=0x218 Size=0x8
    struct _CM_RESOURCE_LIST * BootResources;// Offset=0x220 Size=0x8
    struct _CM_RESOURCE_LIST * BootResourcesTranslated;// Offset=0x228 Size=0x8
    unsigned long CapabilityFlags;// Offset=0x230 Size=0x4
    struct _anonymous_621 DockInfo;// Offset=0x238 Size=0x20
    unsigned long DisableableDepends;// Offset=0x258 Size=0x4
    struct _LIST_ENTRY PendedSetInterfaceState;// Offset=0x260 Size=0x10
    struct _LIST_ENTRY LegacyBusListEntry;// Offset=0x270 Size=0x10
    unsigned long DriverUnloadRetryCount;// Offset=0x280 Size=0x4
    struct _DEVICE_NODE * PreviousParent;// Offset=0x288 Size=0x8
    long DeletedChildren;// Offset=0x290 Size=0x4
    unsigned long NumaNodeIndex;// Offset=0x294 Size=0x4
    struct _GUID ContainerID;// Offset=0x298 Size=0x10
    unsigned char OverrideFlags;// Offset=0x2a8 Size=0x1
    unsigned long DeviceIdsHash;// Offset=0x2ac Size=0x4
    unsigned char RequiresUnloadedDriver;// Offset=0x2b0 Size=0x1
    struct _PENDING_RELATIONS_LIST_ENTRY * PendingEjectRelations;// Offset=0x2b8 Size=0x8
    unsigned long StateFlags;// Offset=0x2c0 Size=0x4
    struct _PNP_REBALANCE_TRACE_CONTEXT * RebalanceContext;// Offset=0x2c8 Size=0x8
    struct _DEVICE_NODE_IOMMU_EXTENSION * IommuExtension;// Offset=0x2d0 Size=0x8
    struct _PO_DIRECTED_DRIPS_STATE DirectedDripsState;// Offset=0x2d8 Size=0x38
};
