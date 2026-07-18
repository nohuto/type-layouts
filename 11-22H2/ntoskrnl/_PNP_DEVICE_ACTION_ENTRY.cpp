struct _LIST_ENTRY// Size=0x10 (Id=4)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

enum _PNP_DEVICE_ACTION_REQUEST
{
    AssignResources=0,
    ClearDeviceProblem=1,
    ClearProblem=2,
    ClearEjectProblem=3,
    ReservedAction0=4,
    QueryPowerRelations=5,
    Rebalance=6,
    ReenumerateBootDevices=7,
    ReenumerateDeviceOnly=8,
    ReenumerateDeviceTree=9,
    ReenumerateRootDevices=10,
    RequeryDeviceState=11,
    ResetDevice=12,
    ResourceRequirementsChanged=13,
    RestartEnumeration=14,
    SetDeviceProblem=15,
    StartDevice=16,
    StartSystemDevicesPass0=17,
    StartSystemDevicesPass1=18,
    NotifyTransportRelationsChange=19,
    NotifyEjectionRelationsChange=20,
    ConfigureDevice=21,
    ConfigureDeviceClass=22,
    ConfigureDeviceExtensions=23,
    ConfigureDeviceReset=24,
    ClearDmaGuardProblem=25,
    RequestDeviceReset=26,
    UpdateConsoleLockState=27,
    PnpDeviceActionRequestMax=28
};

struct _unnamed_1523// Size=0x4 (Id=1523)
{
    unsigned long ProblemCodeToClear;// Offset=0x0 Size=0x4
};

struct _unnamed_2133// Size=0x4 (Id=2133)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long RebalanceDueToDynamicPartitioning:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long ResetDeviceWhileStopped:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Reserved:30;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1e
    };
};

union _PNP_REBALANCE_FLAGS// Size=0x4 (Id=2134)
{
    struct _unnamed_2133 u;// Offset=0x0 Size=0x4
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};

struct _unnamed_1524// Size=0x1 (Id=1524)
{
    unsigned char ClearWaitingForFdo;// Offset=0x0 Size=0x1
};

struct _unnamed_1525// Size=0x1 (Id=1525)
{
    unsigned char StopRequired;// Offset=0x0 Size=0x1
};

struct _unnamed_1526// Size=0x4 (Id=1526)
{
    unsigned long Flags;// Offset=0x0 Size=0x4
};

struct _unnamed_1527// Size=0x8 (Id=1527)
{
    struct _PLUGPLAY_CONTROL_STATUS_DATA * ControlStatusData;// Offset=0x0 Size=0x8
};

enum _PNP_DEVICE_IOMMU_DOMAIN_POLICY
{
    IommuDomainPolicyAllowAll=0,
    IommuDomainPolicyBlockPassthrough=1,
    IommuDomainPolicyMax=2
};

struct _unnamed_1529// Size=0x4 (Id=1529)
{
    enum _PNP_DEVICE_IOMMU_DOMAIN_POLICY DomainPolicy;// Offset=0x0 Size=0x4
};

union _PNP_DEVICE_ACTION_REQUEST_ARGUMENT// Size=0x8 (Id=1530)
{
    struct _unnamed_1523 ClearProblem;// Offset=0x0 Size=0x4
    union _PNP_REBALANCE_FLAGS Rebalance;// Offset=0x0 Size=0x4
    struct _unnamed_1524 ReenumerateDeviceOnly;// Offset=0x0 Size=0x1
    struct _unnamed_1525 ResourceRequirementsChanged;// Offset=0x0 Size=0x1
    struct _unnamed_1526 RequestDeviceReset;// Offset=0x0 Size=0x4
    struct _unnamed_1527 SetDeviceProblem;// Offset=0x0 Size=0x8
    struct _unnamed_1529 UpdateConsoleLockState;// Offset=0x0 Size=0x4
    unsigned long long AsUlong64;// Offset=0x0 Size=0x8
};

struct _GUID// Size=0x10 (Id=574)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _EX_PUSH_LOCK// Size=0x8 (Id=120)
{
    union // Size=0x8 (Id=0)
    {
        struct // Size=0x8 (Id=0)
        {
            unsigned long long Locked:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
            unsigned long long Waiting:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
            unsigned long long Waking:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
            unsigned long long MultipleShared:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
            unsigned long long Shared:60;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x3c
        };
        unsigned long long Value;// Offset=0x0 Size=0x8
        void * Ptr;// Offset=0x0 Size=0x8
    };
};

struct _PNP_DEVICE_ACTION_ENTRY// Size=0x60 (Id=1422)
{
    struct _LIST_ENTRY ListEntry;// Offset=0x0 Size=0x10
    struct _DEVICE_OBJECT * DeviceObject;// Offset=0x10 Size=0x8
    enum _PNP_DEVICE_ACTION_REQUEST RequestType;// Offset=0x18 Size=0x4
    unsigned char ReorderingBarrier;// Offset=0x1c Size=0x1
    union _PNP_DEVICE_ACTION_REQUEST_ARGUMENT RequestArgument;// Offset=0x20 Size=0x8
    struct _KEVENT * CompletionEvent;// Offset=0x28 Size=0x8
    long * CompletionStatus;// Offset=0x30 Size=0x8
    struct _GUID ActivityId;// Offset=0x38 Size=0x10
    long RefCount;// Offset=0x48 Size=0x4
    unsigned char Dequeued;// Offset=0x4c Size=0x1
    struct _EX_PUSH_LOCK CancelLock;// Offset=0x50 Size=0x8
    unsigned char CancelRequested;// Offset=0x58 Size=0x1
};
