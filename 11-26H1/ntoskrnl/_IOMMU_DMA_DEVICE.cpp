struct _unnamed_263// Size=0x8 (Id=263)
{
    unsigned long long LogicalId;// Offset=0x0 Size=0x8
};

struct _EX_RUNDOWN_REF// Size=0x8 (Id=271)
{
    union // Size=0x8 (Id=0)
    {
        unsigned long long Count;// Offset=0x0 Size=0x8
        void * Ptr;// Offset=0x0 Size=0x8
    };
};

struct _unnamed_264// Size=0x28 (Id=264)
{
    struct _REGISTERED_IOMMU * Iommu;// Offset=0x0 Size=0x8
    struct _EXT_IOMMU_DEVICE * ExtDevice;// Offset=0x8 Size=0x8
    struct _EXT_IOMMU_OUTPUT_MAPPING * SourceId;// Offset=0x10 Size=0x8
    unsigned long AtsReferenceCount;// Offset=0x18 Size=0x4
    unsigned long InvalidationQueueDepth;// Offset=0x1c Size=0x4
    struct _EX_RUNDOWN_REF DeviceActive;// Offset=0x20 Size=0x8
};

enum _FAULT_INFORMATION_ARCH
{
    FaultInformationInvalid=0,
    FaultInformationArm64=1,
    FaultInformationX64=2
};

struct _FAULT_INFORMATION_ARM64_FLAGS// Size=0x4 (Id=455)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long WriteNotRead:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long InstructionNotData:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Privileged:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long FaultAddressValid:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long Reserved:28;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1c
    };
};

enum _FAULT_INFORMATION_ARM64_TYPE
{
    UnsupportedUpstreamTransaction=0,
    AddressSizeFault=1,
    TlbMatchConflict=2,
    ExternalFault=3,
    PermissionFault=4,
    AccessFlagFault=5,
    TranslationFault=6,
    MaxFaultType=7
};

struct _FAULT_INFORMATION_ARM64// Size=0x30 (Id=348)
{
    void * DomainHandle;// Offset=0x0 Size=0x8
    void * FaultAddress;// Offset=0x8 Size=0x8
    struct _DEVICE_OBJECT * PhysicalDeviceObject;// Offset=0x10 Size=0x8
    unsigned long InputMappingId;// Offset=0x18 Size=0x4
    struct _FAULT_INFORMATION_ARM64_FLAGS Flags;// Offset=0x1c Size=0x4
    enum _FAULT_INFORMATION_ARM64_TYPE Type;// Offset=0x20 Size=0x4
    unsigned long long IommuBaseAddress;// Offset=0x28 Size=0x8
};

struct _FAULT_INFORMATION_X64_FLAGS// Size=0x4 (Id=410)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long FaultAddressValid:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved:31;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1f
    };
};

struct _FAULT_INFORMATION_X64// Size=0x28 (Id=350)
{
    void * DomainHandle;// Offset=0x0 Size=0x8
    void * FaultAddress;// Offset=0x8 Size=0x8
    struct _FAULT_INFORMATION_X64_FLAGS Flags;// Offset=0x10 Size=0x4
    enum _FAULT_INFORMATION_ARM64_TYPE Type;// Offset=0x14 Size=0x4
    unsigned long long IommuBaseAddress;// Offset=0x18 Size=0x8
    unsigned long PciSegment;// Offset=0x20 Size=0x4
};

struct _FAULT_INFORMATION// Size=0x38 (Id=298)
{
    enum _FAULT_INFORMATION_ARCH Type;// Offset=0x0 Size=0x4
    unsigned char IsStage1;// Offset=0x4 Size=0x1
    union // Size=0x30 (Id=0)
    {
        struct _FAULT_INFORMATION_ARM64 Arm64;// Offset=0x8 Size=0x30
        struct _FAULT_INFORMATION_X64 X64;// Offset=0x8 Size=0x28
    };
};

struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=519)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _KDPC// Size=0x40 (Id=83)
{
    union // Size=0x4 (Id=0)
    {
        unsigned long TargetInfoAsUlong;// Offset=0x0 Size=0x4
        unsigned char Type;// Offset=0x0 Size=0x1
        unsigned char Importance;// Offset=0x1 Size=0x1
        unsigned short Number;// Offset=0x2 Size=0x2
    };
    struct _SINGLE_LIST_ENTRY DpcListEntry;// Offset=0x8 Size=0x8
    unsigned long long ProcessorHistory;// Offset=0x10 Size=0x8
    void  ( * DeferredRoutine)(struct _KDPC * ,void * ,void * ,void * );// Offset=0x18 Size=0x8
    void * DeferredContext;// Offset=0x20 Size=0x8
    void * SystemArgument1;// Offset=0x28 Size=0x8
    void * SystemArgument2;// Offset=0x30 Size=0x8
    void * DpcData;// Offset=0x38 Size=0x8
};

struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _WORK_QUEUE_ITEM// Size=0x20 (Id=21)
{
    struct _LIST_ENTRY List;// Offset=0x0 Size=0x10
    void  ( * WorkerRoutine)(void * );// Offset=0x10 Size=0x8
    void * Parameter;// Offset=0x18 Size=0x8
};

struct _IOMMU_BUS_INTERFACE// Size=0x50 (Id=349)
{
    unsigned short Size;// Offset=0x0 Size=0x2
    unsigned short Version;// Offset=0x2 Size=0x2
    void * Context;// Offset=0x8 Size=0x8
    void  ( * InterfaceReference)(void * );// Offset=0x10 Size=0x8
    void  ( * InterfaceDereference)(void * );// Offset=0x18 Size=0x8
    long  ( * GetSvmCapabilities)(void * ,union _IOMMU_SVM_CAPABILITIES * );// Offset=0x20 Size=0x8
    long  ( * EnableSvmCapabilities)(void * ,union _IOMMU_SVM_CAPABILITIES * ,long  ( * )(struct _DEVICE_OBJECT * ,enum _DEVICE_POWER_STATE ,void * ),void * );// Offset=0x28 Size=0x8
    long  ( * DisableSvmCapabilities)(void * ,union _IOMMU_SVM_CAPABILITIES * );// Offset=0x30 Size=0x8
    long  ( * GetDeviceProperties)(void * ,union _IOMMU_DEVICE_PROPERTIES * );// Offset=0x38 Size=0x8
    long  ( * GetDeviceId)(void * ,unsigned long long ,struct _EXT_IOMMU_DEVICE_ID * ,unsigned long long * );// Offset=0x40 Size=0x8
    struct _DEVICE_OBJECT *  ( * GetRootDevice)(void * );// Offset=0x48 Size=0x8
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

struct _unnamed_292// Size=0x4 (Id=292)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Padding:3;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x3
        unsigned long PasidMaxWidth:5;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x5
        unsigned long PasidExePerm:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long PasidPrivMode:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long AtsPageAlignedRequest:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long AtsGlobalInvalidate:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long AtsInvalidateQueueDepth:5;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x5
        unsigned long PriPrgResponsePasidRequired:1;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x1
        unsigned long Rsvd:14;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0xe
    };
};

struct _unnamed_293// Size=0x4 (Id=293)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Padding:18;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x12
        unsigned long AtsEnable:1;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x1
        unsigned long PriEnable:1;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0x1
        unsigned long PasidEnable:1;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x1
        unsigned long ExecutePermissionEnable:1;// Offset=0x0 Size=0x4 BitOffset=0x15 BitSize=0x1
        unsigned long PrivilegedModeEnable:1;// Offset=0x0 Size=0x4 BitOffset=0x16 BitSize=0x1
        unsigned long Rsvd:9;// Offset=0x0 Size=0x4 BitOffset=0x17 BitSize=0x9
    };
};

struct _unnamed_294// Size=0x4 (Id=294)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Padding:23;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x17
        unsigned long IsSecureDevice:1;// Offset=0x0 Size=0x4 BitOffset=0x17 BitSize=0x1
        unsigned long Rsvd:8;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x8
    };
};

union _IOMMU_SVM_CAPABILITIES// Size=0x4 (Id=295)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long AtsCapability:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long PriCapability:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long PasidCapability:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long Rsvd0:29;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1d
    };
    struct _unnamed_292 CapReg;// Offset=0x0 Size=0x4
    struct _unnamed_293 EnabledCaps;// Offset=0x0 Size=0x4
    struct _unnamed_294 DeviceInformation;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long AtsPriPasidBits:3;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x3
        unsigned long CapRegBits:15;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0xf
        unsigned long EnabledCapsBits:5;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x5
        unsigned long DeviceInformationBits:1;// Offset=0x0 Size=0x4 BitOffset=0x17 BitSize=0x1
        unsigned long Rsvd1:8;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x8
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

enum _IOMMU_DMA_DEVICE_CREATION_STATE
{
    DmaDeviceCreationStateRemapping=0,
    DmaDeviceCreationStateSvm=1,
    DmaDeviceCreationStateUnblocked=2,
    DmaDeviceCreationStateAtsOnly=3,
    DmaDeviceCreationStateMax=4
};

enum _IOMMU_DMA_DEVICE_FAULT_POLICY
{
    DmaDeviceFaultPolicyDefault=0,
    DmaDeviceFaultPolicyMasked=1,
    DmaDeviceFaultPolicyStage1Masked=2,
    DmaDeviceFaultPolicyMax=3
};

struct _IOMMU_DMA_DEVICE// Size=0x1b8 (Id=267)
{
    struct _EXT_IOMMU_DEVICE_ID * DeviceId;// Offset=0x0 Size=0x8
    struct _DEVICE_OBJECT * DeviceObject;// Offset=0x8 Size=0x8
    long DeviceState;// Offset=0x10 Size=0x4
    struct _IOMMU_DMA_DOMAIN * DomainOwner;// Offset=0x18 Size=0x8
    union // Size=0x8 (Id=0)
    {
        struct _unnamed_263 Hypervisor;// Offset=0x20 Size=0x8
        struct _unnamed_264 Native;// Offset=0x20 Size=0x28
    };
    struct _IOMMU_INTERFACE_CALLBACK_RECORD * InterfaceCallbackRecord;// Offset=0x48 Size=0x8
    unsigned char DpptException;// Offset=0x50 Size=0x1
    struct _IOMMU_TRACKED_DEVICE * SvmDevice;// Offset=0x58 Size=0x8
    void  ( * FaultHandler)(void * ,struct _FAULT_INFORMATION * );// Offset=0x60 Size=0x8
    void * FaultContext;// Offset=0x68 Size=0x8
    struct _FAULT_INFORMATION FaultInfo;// Offset=0x70 Size=0x38
    struct _KDPC FaultDpc;// Offset=0xa8 Size=0x40
    struct _WORK_QUEUE_ITEM FaultWorkItem;// Offset=0xe8 Size=0x20
    unsigned char PasidFaultsSuppressed;// Offset=0x108 Size=0x1
    unsigned char PasidTaggedDmaEnabled;// Offset=0x109 Size=0x1
    unsigned char DefaultPasidEnabled;// Offset=0x10a Size=0x1
    unsigned long DefaultS1DomainId;// Offset=0x10c Size=0x4
    struct _IOMMU_BUS_INTERFACE IommuInterface;// Offset=0x110 Size=0x50
    struct _LIST_ENTRY PasidDevicesList;// Offset=0x160 Size=0x10
    struct _EX_PUSH_LOCK PasidDevicesListLock;// Offset=0x170 Size=0x8
    union _IOMMU_SVM_CAPABILITIES SvmCapControl;// Offset=0x178 Size=0x4
    enum _IOMMU_DMA_DEVICE_CREATION_STATE CreationStateInitial;// Offset=0x17c Size=0x4
    enum _IOMMU_DMA_DEVICE_CREATION_STATE CreationStateCurrent;// Offset=0x180 Size=0x4
    struct _LIST_ENTRY DomainDmaDeviceEntry;// Offset=0x188 Size=0x10
    unsigned char DefaultDmaAlwaysBlocked;// Offset=0x198 Size=0x1
    enum _IOMMU_DMA_DEVICE_FAULT_POLICY FaultPolicy;// Offset=0x19c Size=0x4
    long FaultLock;// Offset=0x1a0 Size=0x4
    unsigned char FaultHandlingInProgress;// Offset=0x1a4 Size=0x1
    struct _IOMMU_FAULT_IGNORE_ENTRY * FaultIgnoreEntry;// Offset=0x1a8 Size=0x8
    struct _EX_PUSH_LOCK InterfaceCallbackRecordLock;// Offset=0x1b0 Size=0x8
};
