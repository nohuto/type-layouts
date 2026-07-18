enum _RAID_OBJECT_TYPE
{
    RaidUnknownObject=-1,
    RaidAdapterObject=0,
    RaidUnitObject=1,
    RaidDriverObject=2
};

struct _UNICODE_STRING// Size=0x10 (Id=316)
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

enum _DEVICE_STATE
{
    DeviceStateNotPresent=0,
    DeviceStateWorking=1,
    DeviceStateStopped=2,
    DeviceStatePendingStop=3,
    DeviceStatePendingRemove=4,
    DeviceStateSurpriseRemoval=5,
    DeviceStateDeleted=6,
    DeviceStateDisabled=7,
    DeviceStateNoResource=8
};

struct _unnamed_228// Size=0x7 (Id=228)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char InitializedMiniport:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char WmiMiniPortInitialized:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char WmiInitialized:1;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char BusInterfaceInternal:1;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char InHwInitialize:1;// Offset=0x0 Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char IdlePowerManagementEnabled:1;// Offset=0x0 Size=0x1 BitOffset=0x5 BitSize=0x1
        unsigned char TargetedRescan:1;// Offset=0x0 Size=0x1 BitOffset=0x6 BitSize=0x1
        unsigned char BootAdapter:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
    };
    unsigned char InvalidateBusRelations;// Offset=0x1 Size=0x1
    unsigned char RescanBus;// Offset=0x2 Size=0x1
    unsigned char InterruptsEnabled;// Offset=0x3 Size=0x1
    struct // Size=0x3 (Id=0)
    {
        unsigned char PoweringUp:1;// Offset=0x4 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char PoweringDown:1;// Offset=0x4 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char D3ColdAllowed:1;// Offset=0x4 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char D3ColdEnabled:1;// Offset=0x4 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char DisableRuntimePowerManagement:1;// Offset=0x4 Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char DumpActiveNotCapable:1;// Offset=0x4 Size=0x1 BitOffset=0x5 BitSize=0x1
        unsigned char D3IdleTimeoutUserOverride:1;// Offset=0x4 Size=0x1 BitOffset=0x6 BitSize=0x1
        unsigned char SystemInLPE:1;// Offset=0x4 Size=0x1 BitOffset=0x7 BitSize=0x1
        unsigned char SystemCoalescingOn:1;// Offset=0x5 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char UseDMAv3:1;// Offset=0x5 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char NoUnitPoFxRegistration:1;// Offset=0x5 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char CoolingInterfaceExposed:1;// Offset=0x5 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char ProtocolCommandEffectsPendingUpdate:1;// Offset=0x5 Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char FindAdapterCalled:1;// Offset=0x5 Size=0x1 BitOffset=0x5 BitSize=0x1
        unsigned char DumpAlwaysPowerOn:1;// Offset=0x5 Size=0x1 BitOffset=0x6 BitSize=0x1
        unsigned char DisableInterruptsOnD3:1;// Offset=0x5 Size=0x1 BitOffset=0x7 BitSize=0x1
        unsigned char EtwEnabled:1;// Offset=0x6 Size=0x1 BitOffset=0x0 BitSize=0x1
    };
};

struct _STOR_LOCKED_LIST// Size=0x20 (Id=276)
{
    unsigned long long Lock;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY List;// Offset=0x8 Size=0x10
    unsigned long Count;// Offset=0x18 Size=0x4
};

enum _POOL_TYPE
{
    NonPagedPool=0,
    NonPagedPoolExecute=0,
    PagedPool=1,
    NonPagedPoolMustSucceed=2,
    DontUseThisType=3,
    NonPagedPoolCacheAligned=4,
    PagedPoolCacheAligned=5,
    NonPagedPoolCacheAlignedMustS=6,
    MaxPoolType=7,
    NonPagedPoolBase=0,
    NonPagedPoolBaseMustSucceed=2,
    NonPagedPoolBaseCacheAligned=4,
    NonPagedPoolBaseCacheAlignedMustS=6,
    NonPagedPoolSession=32,
    PagedPoolSession=33,
    NonPagedPoolMustSucceedSession=34,
    DontUseThisTypeSession=35,
    NonPagedPoolCacheAlignedSession=36,
    PagedPoolCacheAlignedSession=37,
    NonPagedPoolCacheAlignedMustSSession=38,
    NonPagedPoolNx=512,
    NonPagedPoolNxCacheAligned=516,
    NonPagedPoolSessionNx=544
};

struct _STOR_DICTIONARY// Size=0x30 (Id=186)
{
    unsigned long EntryCount;// Offset=0x0 Size=0x4
    unsigned long MaxEntryCount;// Offset=0x4 Size=0x4
    enum _POOL_TYPE PoolType;// Offset=0x8 Size=0x4
    struct _LIST_ENTRY * Entries;// Offset=0x10 Size=0x8
    void *  ( * GetKeyRoutine)(struct _LIST_ENTRY * );// Offset=0x18 Size=0x8
    long  ( * CompareKeyRoutine)(void * ,void * );// Offset=0x20 Size=0x8
    unsigned long  ( * HashKeyRoutine)(void * );// Offset=0x28 Size=0x8
};

struct _unnamed_22// Size=0x10 (Id=22)
{
    struct // Size=0x10 (Id=0)
    {
        unsigned long long Depth:16;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x10
        unsigned long long Sequence:48;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x30
        unsigned long long Reserved:4;// Offset=0x8 Size=0x8 BitOffset=0x0 BitSize=0x4
        unsigned long long NextEntry:60;// Offset=0x8 Size=0x8 BitOffset=0x4 BitSize=0x3c
    };
};

union _SLIST_HEADER// Size=0x10 (Id=23)
{
    unsigned long long Alignment;// Offset=0x0 Size=0x8
    unsigned long long Region;// Offset=0x8 Size=0x8
    struct _unnamed_22 HeaderX64;// Offset=0x0 Size=0x10
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

struct _RAID_POWER_STATE// Size=0x10 (Id=282)
{
    enum _SYSTEM_POWER_STATE SystemState;// Offset=0x0 Size=0x4
    enum _DEVICE_POWER_STATE DeviceState;// Offset=0x4 Size=0x4
    enum POWER_ACTION PowerAction;// Offset=0x8 Size=0x4
    unsigned char SystemPoweringDown;// Offset=0xc Size=0x1
};

struct _RAID_RESOURCE_LIST// Size=0x10 (Id=286)
{
    struct _CM_RESOURCE_LIST * AllocatedResources;// Offset=0x0 Size=0x8
    struct _CM_RESOURCE_LIST * TranslatedResources;// Offset=0x8 Size=0x8
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

enum _KINTERRUPT_MODE
{
    LevelSensitive=0,
    Latched=1
};

enum _DMA_WIDTH
{
    Width8Bits=0,
    Width16Bits=1,
    Width32Bits=2,
    Width64Bits=3,
    WidthNoWrap=4,
    MaximumDmaWidth=5
};

enum _DMA_SPEED
{
    Compatible=0,
    TypeA=1,
    TypeB=2,
    TypeC=3,
    TypeF=4,
    MaximumDmaSpeed=5
};

enum _STOR_SYNCHRONIZATION_MODEL
{
    StorSynchronizeHalfDuplex=0,
    StorSynchronizeFullDuplex=1
};

enum _INTERRUPT_SYNCHRONIZATION_MODE
{
    InterruptSupportNone=0,
    InterruptSynchronizeAll=1,
    InterruptSynchronizePerMessage=2
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

struct _MEMORY_REGION// Size=0x18 (Id=464)
{
    unsigned char * VirtualBase;// Offset=0x0 Size=0x8
    union _LARGE_INTEGER PhysicalBase;// Offset=0x8 Size=0x8
    unsigned long Length;// Offset=0x10 Size=0x4
};

struct _PORT_CONFIGURATION_INFORMATION// Size=0xe0 (Id=274)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    unsigned long SystemIoBusNumber;// Offset=0x4 Size=0x4
    enum _INTERFACE_TYPE AdapterInterfaceType;// Offset=0x8 Size=0x4
    unsigned long BusInterruptLevel;// Offset=0xc Size=0x4
    unsigned long BusInterruptVector;// Offset=0x10 Size=0x4
    enum _KINTERRUPT_MODE InterruptMode;// Offset=0x14 Size=0x4
    unsigned long MaximumTransferLength;// Offset=0x18 Size=0x4
    unsigned long NumberOfPhysicalBreaks;// Offset=0x1c Size=0x4
    unsigned long DmaChannel;// Offset=0x20 Size=0x4
    unsigned long DmaPort;// Offset=0x24 Size=0x4
    enum _DMA_WIDTH DmaWidth;// Offset=0x28 Size=0x4
    enum _DMA_SPEED DmaSpeed;// Offset=0x2c Size=0x4
    unsigned long AlignmentMask;// Offset=0x30 Size=0x4
    unsigned long NumberOfAccessRanges;// Offset=0x34 Size=0x4
    struct _ACCESS_RANGE * AccessRanges[0];// Offset=0x38 Size=0x8
    void * MiniportDumpData;// Offset=0x40 Size=0x8
    unsigned char NumberOfBuses;// Offset=0x48 Size=0x1
    char InitiatorBusId[8];// Offset=0x49 Size=0x8
    unsigned char ScatterGather;// Offset=0x51 Size=0x1
    unsigned char Master;// Offset=0x52 Size=0x1
    unsigned char CachesData;// Offset=0x53 Size=0x1
    unsigned char AdapterScansDown;// Offset=0x54 Size=0x1
    unsigned char AtdiskPrimaryClaimed;// Offset=0x55 Size=0x1
    unsigned char AtdiskSecondaryClaimed;// Offset=0x56 Size=0x1
    unsigned char Dma32BitAddresses;// Offset=0x57 Size=0x1
    unsigned char DemandMode;// Offset=0x58 Size=0x1
    unsigned char MapBuffers;// Offset=0x59 Size=0x1
    unsigned char NeedPhysicalAddresses;// Offset=0x5a Size=0x1
    unsigned char TaggedQueuing;// Offset=0x5b Size=0x1
    unsigned char AutoRequestSense;// Offset=0x5c Size=0x1
    unsigned char MultipleRequestPerLu;// Offset=0x5d Size=0x1
    unsigned char ReceiveEvent;// Offset=0x5e Size=0x1
    unsigned char RealModeInitialized;// Offset=0x5f Size=0x1
    unsigned char BufferAccessScsiPortControlled;// Offset=0x60 Size=0x1
    unsigned char MaximumNumberOfTargets;// Offset=0x61 Size=0x1
    unsigned char SrbType;// Offset=0x62 Size=0x1
    unsigned char AddressType;// Offset=0x63 Size=0x1
    unsigned long SlotNumber;// Offset=0x64 Size=0x4
    unsigned long BusInterruptLevel2;// Offset=0x68 Size=0x4
    unsigned long BusInterruptVector2;// Offset=0x6c Size=0x4
    enum _KINTERRUPT_MODE InterruptMode2;// Offset=0x70 Size=0x4
    unsigned long DmaChannel2;// Offset=0x74 Size=0x4
    unsigned long DmaPort2;// Offset=0x78 Size=0x4
    enum _DMA_WIDTH DmaWidth2;// Offset=0x7c Size=0x4
    enum _DMA_SPEED DmaSpeed2;// Offset=0x80 Size=0x4
    unsigned long DeviceExtensionSize;// Offset=0x84 Size=0x4
    unsigned long SpecificLuExtensionSize;// Offset=0x88 Size=0x4
    unsigned long SrbExtensionSize;// Offset=0x8c Size=0x4
    unsigned char Dma64BitAddresses;// Offset=0x90 Size=0x1
    unsigned char ResetTargetSupported;// Offset=0x91 Size=0x1
    unsigned char MaximumNumberOfLogicalUnits;// Offset=0x92 Size=0x1
    unsigned char WmiDataProvider;// Offset=0x93 Size=0x1
    enum _STOR_SYNCHRONIZATION_MODEL SynchronizationModel;// Offset=0x94 Size=0x4
    unsigned char  ( * HwMSInterruptRoutine)(void * ,unsigned long );// Offset=0x98 Size=0x8
    enum _INTERRUPT_SYNCHRONIZATION_MODE InterruptSynchronizationMode;// Offset=0xa0 Size=0x4
    struct _MEMORY_REGION DumpRegion;// Offset=0xa8 Size=0x18
    unsigned long RequestedDumpBufferSize;// Offset=0xc0 Size=0x4
    unsigned char VirtualDevice;// Offset=0xc4 Size=0x1
    unsigned char DumpMode;// Offset=0xc5 Size=0x1
    unsigned long ExtendedFlags1;// Offset=0xc8 Size=0x4
    unsigned long MaxNumberOfIO;// Offset=0xcc Size=0x4
    unsigned long MaxIOsPerLun;// Offset=0xd0 Size=0x4
    unsigned long InitialLunQueueDepth;// Offset=0xd4 Size=0x4
    unsigned long BusResetHoldTime;// Offset=0xd8 Size=0x4
    unsigned long FeatureSupport;// Offset=0xdc Size=0x4
};

struct _unnamed_277// Size=0x1 (Id=277)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char InFindAdapter:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char InResetBus:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char IsVirtual:1;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char UnitControlListPopulated:1;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char AdapterControlListPopulated:1;// Offset=0x0 Size=0x1 BitOffset=0x4 BitSize=0x1
    };
};

struct _UNIT_CONTROL_LIST// Size=0x10 (Id=518)
{
    unsigned long MaxControlType;// Offset=0x0 Size=0x4
    unsigned char SupportedTypeList[12];// Offset=0x4 Size=0xc
};

struct _ADAPTER_CONTROL_LIST// Size=0x18 (Id=479)
{
    unsigned long MaxControlType;// Offset=0x0 Size=0x4
    unsigned char SupportedTypeList[20];// Offset=0x4 Size=0x14
};

struct _RAID_MINIPORT// Size=0x128 (Id=278)
{
    struct _RAID_ADAPTER_EXTENSION * Adapter;// Offset=0x0 Size=0x8
    struct _PORT_CONFIGURATION_INFORMATION PortConfiguration;// Offset=0x8 Size=0xe0
    struct _HW_INITIALIZATION_DATA * HwInitializationData;// Offset=0xe8 Size=0x8
    struct _RAID_HW_DEVICE_EXT * PrivateDeviceExt;// Offset=0xf0 Size=0x8
    struct _unnamed_277 Flags;// Offset=0xf8 Size=0x1
    struct _UNIT_CONTROL_LIST UnitControlList;// Offset=0xfc Size=0x10
    struct _ADAPTER_CONTROL_LIST AdapterControlList;// Offset=0x10c Size=0x18
};

struct _BUS_INTERFACE_STANDARD// Size=0x40 (Id=611)
{
    unsigned short Size;// Offset=0x0 Size=0x2
    unsigned short Version;// Offset=0x2 Size=0x2
    void * Context;// Offset=0x8 Size=0x8
    void  ( * InterfaceReference)(void * );// Offset=0x10 Size=0x8
    void  ( * InterfaceDereference)(void * );// Offset=0x18 Size=0x8
    unsigned char  ( * TranslateBusAddress)(void * ,union _LARGE_INTEGER ,unsigned long ,unsigned long * ,union _LARGE_INTEGER * );// Offset=0x20 Size=0x8
    struct _DMA_ADAPTER *  ( * GetDmaAdapter)(void * ,struct _DEVICE_DESCRIPTION * ,unsigned long * );// Offset=0x28 Size=0x8
    unsigned long  ( * SetBusData)(void * ,unsigned long ,void * ,unsigned long ,unsigned long );// Offset=0x30 Size=0x8
    unsigned long  ( * GetBusData)(void * ,unsigned long ,void * ,unsigned long ,unsigned long );// Offset=0x38 Size=0x8
};

struct _RAID_BUS_INTERFACE// Size=0x48 (Id=581)
{
    unsigned char Initialized;// Offset=0x0 Size=0x1
    struct _BUS_INTERFACE_STANDARD Interface;// Offset=0x8 Size=0x40
};

enum _STOR_DMA_WIDTH
{
    DmaUnknown=0,
    Dma32Bit=1,
    Dma64BitScatterGather=2,
    Dma64Bit=3
};

enum _STOR_DMA_VERSION
{
    StorDmaVersionUnknown=0,
    StorDmaVersion1=1,
    StorDmaVersion2=2,
    StorDmaVersion3=3
};

struct _RAID_DMA_ADAPTER// Size=0x20 (Id=214)
{
    struct _DMA_ADAPTER * DmaAdapter;// Offset=0x0 Size=0x8
    unsigned long NumberOfMapRegisters;// Offset=0x8 Size=0x4
    void * MapRegisterBase;// Offset=0x10 Size=0x8
    enum _STOR_DMA_WIDTH Width;// Offset=0x18 Size=0x4
    enum _STOR_DMA_VERSION DmaVersion;// Offset=0x1c Size=0x4
};

struct _RAID_MEMORY_REGION// Size=0x18 (Id=191)
{
    unsigned char * VirtualBase;// Offset=0x0 Size=0x8
    union _LARGE_INTEGER PhysicalBase;// Offset=0x8 Size=0x8
    unsigned long Length;// Offset=0x10 Size=0x4
};

struct _IO_CONT_RESOURCE_LIST// Size=0x80 (Id=377)
{
    union // Size=0x10 (Id=0)
    {
        union _SLIST_HEADER Header;// Offset=0x0 Size=0x10
        union _SLIST_HEADER ** Hash;// Offset=0x0 Size=0x8
        unsigned long HashSize;// Offset=0x40 Size=0x4
    };
    unsigned long MaximumProcessorCount;// Offset=0x44 Size=0x4
    unsigned long ResourceCount;// Offset=0x48 Size=0x4
    unsigned long MinCount;// Offset=0x4c Size=0x4
    unsigned long MaxCount;// Offset=0x50 Size=0x4
    unsigned long ResourceSize;// Offset=0x54 Size=0x4
    struct _DEVICE_OBJECT * DeviceObject;// Offset=0x58 Size=0x8
    unsigned long MemAllocFailureCount;// Offset=0x60 Size=0x4
    unsigned long ConsecutiveFailureCount;// Offset=0x64 Size=0x4
    union _LARGE_INTEGER SuspendTick;// Offset=0x68 Size=0x8
    unsigned long SuspendCount;// Offset=0x70 Size=0x4
    unsigned long CompatSrbSize;// Offset=0x74 Size=0x4
    unsigned char IsVirtualMiniport;// Offset=0x78 Size=0x1
    long AddingNewResource;// Offset=0x7c Size=0x4
};

struct _STOR_NOTIFICATION_INFO// Size=0x20 (Id=378)
{
    struct _IRP * Irp;// Offset=0x0 Size=0x8
    void * Context;// Offset=0x8 Size=0x8
    struct _DEVICE_OBJECT * Pdo;// Offset=0x10 Size=0x8
    void  ( * NotificationFunctionCallback)(struct _DEVICE_OBJECT * ,struct _IRP * ,void * );// Offset=0x18 Size=0x8
};

struct _STOR_IO_GATEWAY// Size=0x140 (Id=226)
{
    unsigned long long Lock;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY PendingList;// Offset=0x8 Size=0x10
    unsigned long PendingIoCount;// Offset=0x18 Size=0x4
    unsigned long HighWaterMark;// Offset=0x1c Size=0x4
    unsigned long LowWaterMark;// Offset=0x20 Size=0x4
    unsigned long OutstandingMax;// Offset=0x24 Size=0x4
    long BusyCount;// Offset=0x28 Size=0x4
    long PauseCount;// Offset=0x2c Size=0x4
    struct _RAID_ADAPTER_EXTENSION * Adapter;// Offset=0x30 Size=0x8
    struct _IO_CONT_RESOURCE_LIST ResourceList;// Offset=0x40 Size=0x80
    unsigned long Outstanding;// Offset=0xc0 Size=0x4
    struct _KEVENT * EmptyEvent;// Offset=0xc8 Size=0x8
    unsigned char PendingEvent;// Offset=0xd0 Size=0x1
    struct _STOR_NOTIFICATION_INFO EmptyNotificationInfo;// Offset=0xd8 Size=0x20
    struct _LIST_ENTRY HighPriorityPendingList;// Offset=0xf8 Size=0x10
    struct _LIST_ENTRY QosReqList;// Offset=0x108 Size=0x10
    long SlowPathCount;// Offset=0x118 Size=0x4
};

struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=6)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _KDPC// Size=0x40 (Id=91)
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

struct _RAID_DEFERRED_QUEUE// Size=0x80 (Id=207)
{
    unsigned short Depth;// Offset=0x0 Size=0x2
    unsigned short ItemSize;// Offset=0x2 Size=0x2
    struct _KDPC Dpc;// Offset=0x8 Size=0x40
    union _SLIST_HEADER FreeList;// Offset=0x50 Size=0x10
    union _SLIST_HEADER RunningList;// Offset=0x60 Size=0x10
    void  ( * ProcessDeferredItem)(struct _DEVICE_OBJECT * ,struct _RAID_DEFERRED_HEADER * );// Offset=0x70 Size=0x8
};

struct _SLIST_ENTRY// Size=0x10 (Id=21)
{
    struct _SLIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _RAID_DEFERRED_HEADER// Size=0x20 (Id=427)
{
    struct _SLIST_ENTRY Link;// Offset=0x0 Size=0x10
    long Pool;// Offset=0x10 Size=0x4
};

enum _RAID_DEFERRED_TYPE
{
    RaidDeferredTimerRequest=1,
    RaidDeferredError=2,
    RaidDeferredPause=3,
    RaidDeferredResume=4,
    RaidDeferredPauseDevice=5,
    RaidDeferredResumeDevice=6,
    RaidDeferredBusy=7,
    RaidDeferredReady=8,
    RaidDeferredDeviceBusy=9,
    RaidDeferredDeviceReady=10,
    RaidDeferredAdditionalTimerRequest=11,
    RaidDeferredAsyncNotification=12
};

struct _STOR_SCSI_ADDRESS// Size=0x4 (Id=192)
{
    unsigned char PathId;// Offset=0x0 Size=0x1
    unsigned char TargetId;// Offset=0x1 Size=0x1
    unsigned char Lun;// Offset=0x2 Size=0x1
    unsigned char Reserved;// Offset=0x3 Size=0x1
};

struct _unnamed_351// Size=0x10 (Id=351)
{
    void  ( * HwTimerRoutine)(void * );// Offset=0x0 Size=0x8
    unsigned long Timeout;// Offset=0x8 Size=0x4
};

struct _unnamed_352// Size=0x20 (Id=352)
{
    struct _SCSI_REQUEST_BLOCK * Srb;// Offset=0x0 Size=0x8
    unsigned long ErrorCode;// Offset=0x8 Size=0x4
    unsigned long UniqueId;// Offset=0xc Size=0x4
    unsigned char FreeErrorInfo[16];// Offset=0x10 Size=0x10
};

struct _unnamed_353// Size=0x4 (Id=353)
{
    unsigned long Timeout;// Offset=0x0 Size=0x4
};

struct _unnamed_354// Size=0x4 (Id=354)
{
    unsigned long RequestsToComplete;// Offset=0x0 Size=0x4
};

struct _unnamed_355// Size=0x18 (Id=355)
{
    struct _STOR_TIMER_CONTEXT * StorTimer;// Offset=0x0 Size=0x8
    union _LARGE_INTEGER Timeout;// Offset=0x8 Size=0x8
    unsigned long TolerableDelay;// Offset=0x10 Size=0x4
};

struct _unnamed_356// Size=0x8 (Id=356)
{
    struct _STOR_ASYNC_NOTIFY_CONTEXT * StorAsyncNotify;// Offset=0x0 Size=0x8
};

struct _RAID_DEFERRED_ELEMENT// Size=0x50 (Id=357)
{
    struct _RAID_DEFERRED_HEADER Header;// Offset=0x0 Size=0x20
    enum _RAID_DEFERRED_TYPE Type;// Offset=0x20 Size=0x4
    struct _STOR_SCSI_ADDRESS Address;// Offset=0x24 Size=0x4
    union // Size=0x48 (Id=0)
    {
        struct _unnamed_351 Timer;// Offset=0x28 Size=0x10
        struct _unnamed_352 Error;// Offset=0x28 Size=0x20
        struct _unnamed_353 PauseDevice;// Offset=0x28 Size=0x4
        struct _unnamed_354 Busy;// Offset=0x28 Size=0x4
        struct _unnamed_354 DeviceBusy;// Offset=0x28 Size=0x4
        struct _unnamed_355 AdditionalTimer;// Offset=0x28 Size=0x18
        struct _unnamed_356 AsyncNotification;// Offset=0x28 Size=0x8
    };
};

struct _unnamed_232// Size=0x50 (Id=232)
{
    struct _RAID_DEFERRED_ELEMENT Timer;// Offset=0x0 Size=0x50
};

struct _unnamed_233// Size=0xb0 (Id=233)
{
    struct _RAID_DEFERRED_ELEMENT AdapterGatewayPause;// Offset=0x0 Size=0x50
    struct _RAID_DEFERRED_ELEMENT AdapterGatewayResume;// Offset=0x50 Size=0x50
    unsigned long LatestAdapterGatewayPauseTimeoutValue;// Offset=0xa0 Size=0x4
    long EndResultPauseDesired;// Offset=0xa4 Size=0x4
};

struct _DISPATCHER_HEADER// Size=0x18 (Id=374)
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
                unsigned char ThreadReservedControlFlags:2;// Offset=0x2 Size=0x1 BitOffset=0x6 BitSize=0x2
            };
        };
        unsigned char DebugActive;// Offset=0x3 Size=0x1
        struct // Size=0x1 (Id=0)
        {
            unsigned char ActiveDR7:1;// Offset=0x3 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char Instrumented:1;// Offset=0x3 Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char Minimal:1;// Offset=0x3 Size=0x1 BitOffset=0x2 BitSize=0x1
            unsigned char Reserved4:3;// Offset=0x3 Size=0x1 BitOffset=0x3 BitSize=0x3
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

struct _unnamed_12// Size=0x8 (Id=12)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    unsigned long HighPart;// Offset=0x4 Size=0x4
};

union _ULARGE_INTEGER// Size=0x8 (Id=13)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    unsigned long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_12 u;// Offset=0x0 Size=0x8
    unsigned long long QuadPart;// Offset=0x0 Size=0x8
};

struct _KTIMER// Size=0x40 (Id=304)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
    union _ULARGE_INTEGER DueTime;// Offset=0x18 Size=0x8
    struct _LIST_ENTRY TimerListEntry;// Offset=0x20 Size=0x10
    struct _KDPC * Dpc;// Offset=0x30 Size=0x8
    unsigned long Processor;// Offset=0x38 Size=0x4
    unsigned long Period;// Offset=0x3c Size=0x4
};

struct _PORT_REGISTRY_INFO// Size=0x40 (Id=428)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    struct _LIST_ENTRY ListEntry;// Offset=0x8 Size=0x10
    unsigned long long SpinLock;// Offset=0x18 Size=0x8
    unsigned char * Buffer;// Offset=0x20 Size=0x8
    unsigned long AllocatedLength;// Offset=0x28 Size=0x4
    unsigned long CurrentLength;// Offset=0x2c Size=0x4
    unsigned long LengthNeeded;// Offset=0x30 Size=0x4
    unsigned long Offset;// Offset=0x34 Size=0x4
    unsigned long Flags;// Offset=0x38 Size=0x4
    long InternalStatus;// Offset=0x3c Size=0x4
};

enum _STORAGE_BUS_TYPE
{
    BusTypeUnknown=0,
    BusTypeScsi=1,
    BusTypeAtapi=2,
    BusTypeAta=3,
    BusType1394=4,
    BusTypeSsa=5,
    BusTypeFibre=6,
    BusTypeUsb=7,
    BusTypeRAID=8,
    BusTypeiScsi=9,
    BusTypeSas=10,
    BusTypeSata=11,
    BusTypeSd=12,
    BusTypeMmc=13,
    BusTypeVirtual=14,
    BusTypeFileBackedVirtual=15,
    BusTypeSpaces=16,
    BusTypeNvme=17,
    BusTypeSCM=18,
    BusTypeUfs=19,
    BusTypeMax=20,
    BusTypeMaxReserved=127
};

struct _RAID_ADAPTER_PARAMETERS// Size=0x38 (Id=532)
{
    unsigned long NumberOfHbaRequests;// Offset=0x0 Size=0x4
    enum _STORAGE_BUS_TYPE BusType;// Offset=0x4 Size=0x4
    unsigned long UncachedExtAlignment;// Offset=0x8 Size=0x4
    unsigned long long MaximumUncachedAddress;// Offset=0x10 Size=0x8
    unsigned long long MinimumUncachedAddress;// Offset=0x18 Size=0x8
    unsigned long long BoundaryAddress;// Offset=0x20 Size=0x8
    unsigned long long MinimumPhysicalAddress;// Offset=0x28 Size=0x8
    unsigned long long MaximumPhysicalAddress;// Offset=0x30 Size=0x8
};

struct _unnamed_235// Size=0x1 (Id=235)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char OptimizeForCompletionDuringStartIo:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char DpcUseCurrentCpu:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char BypassSgl:1;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char UnusedFlags:5;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x5
    };
};

enum _STOR_DEVICE_POWER_STATE
{
    StorPowerDeviceUnspecified=0,
    StorPowerDeviceD0=1,
    StorPowerDeviceD1=2,
    StorPowerDeviceD2=3,
    StorPowerDeviceD3=4,
    StorPowerDeviceMaximum=5
};

struct _SCSI_POWER_REQUEST_BLOCK// Size=0x58 (Id=483)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned char Function;// Offset=0x2 Size=0x1
    unsigned char SrbStatus;// Offset=0x3 Size=0x1
    unsigned char SrbPowerFlags;// Offset=0x4 Size=0x1
    unsigned char PathId;// Offset=0x5 Size=0x1
    unsigned char TargetId;// Offset=0x6 Size=0x1
    unsigned char Lun;// Offset=0x7 Size=0x1
    enum _STOR_DEVICE_POWER_STATE DevicePowerState;// Offset=0x8 Size=0x4
    unsigned long SrbFlags;// Offset=0xc Size=0x4
    unsigned long DataTransferLength;// Offset=0x10 Size=0x4
    unsigned long TimeOutValue;// Offset=0x14 Size=0x4
    void * DataBuffer;// Offset=0x18 Size=0x8
    void * SenseInfoBuffer;// Offset=0x20 Size=0x8
    struct _SCSI_REQUEST_BLOCK * NextSrb;// Offset=0x28 Size=0x8
    void * OriginalRequest;// Offset=0x30 Size=0x8
    void * SrbExtension;// Offset=0x38 Size=0x8
    enum STOR_POWER_ACTION PowerAction;// Offset=0x40 Size=0x4
    unsigned long Reserved;// Offset=0x44 Size=0x4
    unsigned char Reserved5[16];// Offset=0x48 Size=0x10
};

struct _STORAGE_REQUEST_BLOCK// Size=0x80 (Id=220)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned char Function;// Offset=0x2 Size=0x1
    unsigned char SrbStatus;// Offset=0x3 Size=0x1
    unsigned char ReservedUchar[4];// Offset=0x4 Size=0x4
    unsigned long Signature;// Offset=0x8 Size=0x4
    unsigned long Version;// Offset=0xc Size=0x4
    unsigned long SrbLength;// Offset=0x10 Size=0x4
    unsigned long SrbFunction;// Offset=0x14 Size=0x4
    unsigned long SrbFlags;// Offset=0x18 Size=0x4
    unsigned long ReservedUlong;// Offset=0x1c Size=0x4
    unsigned long RequestTag;// Offset=0x20 Size=0x4
    unsigned short RequestPriority;// Offset=0x24 Size=0x2
    unsigned short RequestAttribute;// Offset=0x26 Size=0x2
    unsigned long TimeOutValue;// Offset=0x28 Size=0x4
    unsigned long SystemStatus;// Offset=0x2c Size=0x4
    unsigned long ZeroGuard1;// Offset=0x30 Size=0x4
    unsigned long AddressOffset;// Offset=0x34 Size=0x4
    unsigned long NumSrbExData;// Offset=0x38 Size=0x4
    unsigned long DataTransferLength;// Offset=0x3c Size=0x4
    void * DataBuffer;// Offset=0x40 Size=0x8
    void * ZeroGuard2;// Offset=0x48 Size=0x8
    void * OriginalRequest;// Offset=0x50 Size=0x8
    void * ClassContext;// Offset=0x58 Size=0x8
    void * PortContext;// Offset=0x60 Size=0x8
    void * MiniportContext;// Offset=0x68 Size=0x8
    struct _STORAGE_REQUEST_BLOCK * NextSrb;// Offset=0x70 Size=0x8
    unsigned long SrbExDataOffset[1];// Offset=0x78 Size=0x4
};

struct _RAID_POWER_CONTEXT// Size=0xb8 (Id=396)
{
    union // Size=0x80 (Id=0)
    {
        struct _SCSI_POWER_REQUEST_BLOCK PowerSrb;// Offset=0x0 Size=0x58
        struct _STORAGE_REQUEST_BLOCK PowerSrbEx;// Offset=0x0 Size=0x80
        unsigned char PowerSrbExBuffer[168];// Offset=0x0 Size=0xa8
    };
    struct _IO_RESOURCE_ENTRY * IoResource;// Offset=0xa8 Size=0x8
    unsigned char InUse;// Offset=0xb0 Size=0x1
    unsigned char D3Processing;// Offset=0xb1 Size=0x1
};

struct _STORPORT_EXTENDED_FUNCTIONS// Size=0x58 (Id=319)
{
    unsigned long Version;// Offset=0x0 Size=0x4
    unsigned char  ( * GetMessageInterruptInformation)(void * ,unsigned long ,struct _MESSAGE_INTERRUPT_INFORMATION * );// Offset=0x8 Size=0x8
    void  ( * PutScatterGatherList)(void * ,struct _STOR_SCATTER_GATHER_LIST * ,unsigned char );// Offset=0x10 Size=0x8
    enum _GETSGSTATUS  ( * BuildScatterGatherList)(void * ,void * ,void * ,unsigned long ,void  ( * )(void ** ,void ** ,struct _STOR_SCATTER_GATHER_LIST * ,void * ),void * ,unsigned char ,void * ,unsigned long );// Offset=0x18 Size=0x8
    void  ( * FreePool)(void * ,void * ,void * );// Offset=0x20 Size=0x8
    void *  ( * AllocatePool)(unsigned long ,unsigned long ,void * ,void ** );// Offset=0x28 Size=0x8
    void *  ( * GetSystemAddress)(struct _SCSI_REQUEST_BLOCK * );// Offset=0x30 Size=0x8
    unsigned long  ( * AcquireMSISpinLock)(void * ,unsigned long );// Offset=0x38 Size=0x8
    void  ( * ReleaseMSISpinLock)(void * ,unsigned long ,unsigned long );// Offset=0x40 Size=0x8
    void  ( * CompleteServiceIrp)(void * ,void * );// Offset=0x48 Size=0x8
    void *  ( * GetOriginalMdl)(struct _SCSI_REQUEST_BLOCK * );// Offset=0x50 Size=0x8
};

union _RAID_REDIRECTION_SUPPORT// Size=0x2 (Id=510)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short Dpc:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short Interrupt:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short MessageCount:8;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0x8
        unsigned short Reserved:6;// Offset=0x0 Size=0x2 BitOffset=0xa BitSize=0x6
    };
    unsigned short AsUshort;// Offset=0x0 Size=0x2
};

struct _PCI_HEADER_TYPE_0// Size=0x30 (Id=469)
{
    unsigned long BaseAddresses[6];// Offset=0x0 Size=0x18
    unsigned long CIS;// Offset=0x18 Size=0x4
    unsigned short SubVendorID;// Offset=0x1c Size=0x2
    unsigned short SubSystemID;// Offset=0x1e Size=0x2
    unsigned long ROMBaseAddress;// Offset=0x20 Size=0x4
    unsigned char CapabilitiesPtr;// Offset=0x24 Size=0x1
    unsigned char Reserved1[3];// Offset=0x25 Size=0x3
    unsigned long Reserved2;// Offset=0x28 Size=0x4
    unsigned char InterruptLine;// Offset=0x2c Size=0x1
    unsigned char InterruptPin;// Offset=0x2d Size=0x1
    unsigned char MinimumGrant;// Offset=0x2e Size=0x1
    unsigned char MaximumLatency;// Offset=0x2f Size=0x1
};

struct _PCI_HEADER_TYPE_1// Size=0x30 (Id=583)
{
    unsigned long BaseAddresses[2];// Offset=0x0 Size=0x8
    unsigned char PrimaryBus;// Offset=0x8 Size=0x1
    unsigned char SecondaryBus;// Offset=0x9 Size=0x1
    unsigned char SubordinateBus;// Offset=0xa Size=0x1
    unsigned char SecondaryLatency;// Offset=0xb Size=0x1
    unsigned char IOBase;// Offset=0xc Size=0x1
    unsigned char IOLimit;// Offset=0xd Size=0x1
    unsigned short SecondaryStatus;// Offset=0xe Size=0x2
    unsigned short MemoryBase;// Offset=0x10 Size=0x2
    unsigned short MemoryLimit;// Offset=0x12 Size=0x2
    unsigned short PrefetchBase;// Offset=0x14 Size=0x2
    unsigned short PrefetchLimit;// Offset=0x16 Size=0x2
    unsigned long PrefetchBaseUpper32;// Offset=0x18 Size=0x4
    unsigned long PrefetchLimitUpper32;// Offset=0x1c Size=0x4
    unsigned short IOBaseUpper16;// Offset=0x20 Size=0x2
    unsigned short IOLimitUpper16;// Offset=0x22 Size=0x2
    unsigned char CapabilitiesPtr;// Offset=0x24 Size=0x1
    unsigned char Reserved1[3];// Offset=0x25 Size=0x3
    unsigned long ROMBaseAddress;// Offset=0x28 Size=0x4
    unsigned char InterruptLine;// Offset=0x2c Size=0x1
    unsigned char InterruptPin;// Offset=0x2d Size=0x1
    unsigned short BridgeControl;// Offset=0x2e Size=0x2
};

struct _unnamed_604// Size=0x8 (Id=604)
{
    unsigned long Base;// Offset=0x0 Size=0x4
    unsigned long Limit;// Offset=0x4 Size=0x4
};

struct _PCI_HEADER_TYPE_2// Size=0x30 (Id=605)
{
    unsigned long SocketRegistersBaseAddress;// Offset=0x0 Size=0x4
    unsigned char CapabilitiesPtr;// Offset=0x4 Size=0x1
    unsigned char Reserved;// Offset=0x5 Size=0x1
    unsigned short SecondaryStatus;// Offset=0x6 Size=0x2
    unsigned char PrimaryBus;// Offset=0x8 Size=0x1
    unsigned char SecondaryBus;// Offset=0x9 Size=0x1
    unsigned char SubordinateBus;// Offset=0xa Size=0x1
    unsigned char SecondaryLatency;// Offset=0xb Size=0x1
    struct _unnamed_604 Range[4];// Offset=0xc Size=0x20
    unsigned char InterruptLine;// Offset=0x2c Size=0x1
    unsigned char InterruptPin;// Offset=0x2d Size=0x1
    unsigned short BridgeControl;// Offset=0x2e Size=0x2
};

union _unnamed_416// Size=0x30 (Id=416)
{
    struct _PCI_HEADER_TYPE_0 type0;// Offset=0x0 Size=0x30
    struct _PCI_HEADER_TYPE_1 type1;// Offset=0x0 Size=0x30
    struct _PCI_HEADER_TYPE_2 type2;// Offset=0x0 Size=0x30
};

struct _PCI_COMMON_HEADER// Size=0x40 (Id=417)
{
    unsigned short VendorID;// Offset=0x0 Size=0x2
    unsigned short DeviceID;// Offset=0x2 Size=0x2
    unsigned short Command;// Offset=0x4 Size=0x2
    unsigned short Status;// Offset=0x6 Size=0x2
    unsigned char RevisionID;// Offset=0x8 Size=0x1
    unsigned char ProgIf;// Offset=0x9 Size=0x1
    unsigned char SubClass;// Offset=0xa Size=0x1
    unsigned char BaseClass;// Offset=0xb Size=0x1
    unsigned char CacheLineSize;// Offset=0xc Size=0x1
    unsigned char LatencyTimer;// Offset=0xd Size=0x1
    unsigned char HeaderType;// Offset=0xe Size=0x1
    unsigned char BIST;// Offset=0xf Size=0x1
    union _unnamed_416 u;// Offset=0x10 Size=0x30
};

struct _STOR_POWER_SETTING_NOTIFICATION// Size=0x18 (Id=511)
{
    unsigned long GuidsCount;// Offset=0x0 Size=0x4
    struct _GUID * Guid;// Offset=0x8 Size=0x8
    void ** Handle;// Offset=0x10 Size=0x8
};

struct _RTL_BITMAP// Size=0x10 (Id=14)
{
    unsigned long SizeOfBitMap;// Offset=0x0 Size=0x4
    unsigned long * Buffer;// Offset=0x8 Size=0x8
};

struct _CRASHDUMP_FUNCTIONS_INTERFACE// Size=0x28 (Id=509)
{
    unsigned short Size;// Offset=0x0 Size=0x2
    unsigned short Version;// Offset=0x2 Size=0x2
    void * Context;// Offset=0x8 Size=0x8
    void  ( * InterfaceReference)(void * );// Offset=0x10 Size=0x8
    void  ( * InterfaceDereference)(void * );// Offset=0x18 Size=0x8
    long  ( * PowerOn)(void * );// Offset=0x20 Size=0x8
};

struct _GUID// Size=0x10 (Id=267)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _unnamed_236// Size=0xc (Id=236)
{
    unsigned long Count;// Offset=0x0 Size=0x4
    unsigned long Successes;// Offset=0x4 Size=0x4
    unsigned char LastErrorSrbStatus;// Offset=0x8 Size=0x1
};

struct _STOR_ADDRESS// Size=0x10 (Id=142)
{
    unsigned short Type;// Offset=0x0 Size=0x2
    unsigned short Port;// Offset=0x2 Size=0x2
    unsigned long AddressLength;// Offset=0x4 Size=0x4
    unsigned char AddressData[1];// Offset=0x8 Size=0x1
};

enum _STOR_RPMB_FRAME_TYPE
{
    StorRpmbFrameTypeUnknown=0,
    StorRpmbFrameTypeStandard=1,
    StorRpmbFrameTypeMax=2
};

struct _RAID_RPMB_CAPABILITIES// Size=0x38 (Id=365)
{
    struct _UNICODE_STRING InterfaceNameRpmb;// Offset=0x0 Size=0x10
    unsigned long RpmbSize;// Offset=0x10 Size=0x4
    unsigned long MaxReliableRpmbWriteSize;// Offset=0x14 Size=0x4
    unsigned char SecurityProtocol;// Offset=0x18 Size=0x1
    unsigned short SecurityProtocolSpecifier;// Offset=0x1a Size=0x2
    struct _STOR_ADDRESS RpmbTarget;// Offset=0x20 Size=0x10
    enum _STOR_RPMB_FRAME_TYPE FrameFormat;// Offset=0x30 Size=0x4
};

struct _RAID_CRYPTO_KEY_TABLE// Size=0x18 (Id=381)
{
    unsigned long NumKeyEntries;// Offset=0x0 Size=0x4
    unsigned char KeyTableFull;// Offset=0x4 Size=0x1
    struct _RAID_ADAPTER_CRYPTO_KEY_ENTRY * Table;// Offset=0x8 Size=0x8
    long KeyTableLock;// Offset=0x10 Size=0x4
};

struct _RAID_SHARED_WORK_ITEM_CONTEXT// Size=0x18 (Id=458)
{
    struct _IO_WORKITEM * WorkItem;// Offset=0x0 Size=0x8
    struct _IRP * Irp;// Offset=0x8 Size=0x8
    unsigned long InUse;// Offset=0x10 Size=0x4
};

struct _RAID_ADAPTER_EXTENSION// Size=0x16c0 (Id=237)
{
    enum _RAID_OBJECT_TYPE ObjectType;// Offset=0x0 Size=0x4
    struct _DEVICE_OBJECT * DeviceObject;// Offset=0x8 Size=0x8
    struct _RAID_DRIVER_EXTENSION * Driver;// Offset=0x10 Size=0x8
    struct _DEVICE_OBJECT * LowerDeviceObject;// Offset=0x18 Size=0x8
    struct _DEVICE_OBJECT * PhysicalDeviceObject;// Offset=0x20 Size=0x8
    struct _UNICODE_STRING DeviceName;// Offset=0x28 Size=0x10
    unsigned long PortNumber;// Offset=0x38 Size=0x4
    struct _LIST_ENTRY NextAdapter;// Offset=0x40 Size=0x10
    unsigned long long SlowLock;// Offset=0x50 Size=0x8
    enum _DEVICE_STATE DeviceState;// Offset=0x58 Size=0x4
    unsigned long PagingPathCount;// Offset=0x5c Size=0x4
    unsigned long CrashDumpPathCount;// Offset=0x60 Size=0x4
    unsigned long HiberPathCount;// Offset=0x64 Size=0x4
    struct _unnamed_228 Flags;// Offset=0x68 Size=0x7
    struct _STOR_LOCKED_LIST UnitList;// Offset=0x70 Size=0x20
    struct _STOR_DICTIONARY UnitDictionary;// Offset=0x90 Size=0x30
    struct _STOR_LOCKED_LIST ZombieList;// Offset=0xc0 Size=0x20
    union _SLIST_HEADER CompletedList;// Offset=0xe0 Size=0x10
    struct _SLIST_ENTRY * SavedXrbList;// Offset=0xf0 Size=0x8
    long AdapterDpcRoutineLock;// Offset=0xf8 Size=0x4
    long AdapterResetBusLock;// Offset=0xfc Size=0x4
    struct _EX_RUNDOWN_REF_CACHE_AWARE * RemoveLock;// Offset=0x100 Size=0x8
    struct _RAID_POWER_STATE Power;// Offset=0x108 Size=0x10
    struct _RAID_RESOURCE_LIST ResourceList;// Offset=0x118 Size=0x10
    struct _RAID_MINIPORT Miniport;// Offset=0x128 Size=0x128
    struct _RAID_BUS_INTERFACE Bus;// Offset=0x250 Size=0x48
    struct _KINTERRUPT * Interrupt;// Offset=0x298 Size=0x8
    unsigned long InterruptIrql;// Offset=0x2a0 Size=0x4
    unsigned long InterruptVersion;// Offset=0x2a4 Size=0x4
    unsigned long long StartIoLock;// Offset=0x2a8 Size=0x8
    enum _STOR_SYNCHRONIZATION_MODEL IoModel;// Offset=0x2b0 Size=0x4
    struct _RAID_DMA_ADAPTER Dma;// Offset=0x2b8 Size=0x20
    struct _RAID_MEMORY_REGION UncachedExtension;// Offset=0x2d8 Size=0x18
    unsigned long BusNumber;// Offset=0x2f0 Size=0x4
    unsigned long SlotNumber;// Offset=0x2f4 Size=0x4
    struct _MAPPED_ADDRESS * MappedAddressList;// Offset=0x2f8 Size=0x8
    struct _STOR_IO_GATEWAY Gateway;// Offset=0x300 Size=0x140
    struct _RAID_DEFERRED_QUEUE DeferredQueue;// Offset=0x440 Size=0x80
    struct _unnamed_232 DeferredList;// Offset=0x4c0 Size=0x50
    struct _unnamed_233 DeferredPauseResumeContext;// Offset=0x510 Size=0xb0
    struct _RAID_DEFERRED_QUEUE WmiDeferredQueue;// Offset=0x5c0 Size=0x80
    struct _KDPC TimerDpc;// Offset=0x640 Size=0x40
    struct _KTIMER Timer;// Offset=0x680 Size=0x40
    struct _KDPC PauseTimerDpc;// Offset=0x6c0 Size=0x40
    struct _KDPC RestartDpc;// Offset=0x700 Size=0x40
    struct _KTIMER PauseTimer;// Offset=0x740 Size=0x40
    void  ( * HwTimerRoutine)(void * );// Offset=0x780 Size=0x8
    struct _KDPC CompletionDpc;// Offset=0x788 Size=0x40
    struct _KDPC BusChangeDpc;// Offset=0x7c8 Size=0x40
    struct _UNICODE_STRING PnpInterfaceName;// Offset=0x808 Size=0x10
    unsigned long AdapterNumber;// Offset=0x818 Size=0x4
    void * DriverParameters;// Offset=0x820 Size=0x8
    struct _PORT_REGISTRY_INFO RegistryInfo;// Offset=0x828 Size=0x40
    unsigned long LinkDownTimeoutValue;// Offset=0x868 Size=0x4
    unsigned long LinkUp;// Offset=0x86c Size=0x4
    void * BusKeyArray[255];// Offset=0x870 Size=0x7f8
    long ProcessingDeferredItems;// Offset=0x1068 Size=0x4
    unsigned long DefaultTimeout;// Offset=0x106c Size=0x4
    unsigned long AdditionalTimers;// Offset=0x1070 Size=0x4
    struct _KTIMER ResetHoldTimer;// Offset=0x1078 Size=0x40
    struct _KDPC ResetHoldDpc;// Offset=0x10b8 Size=0x40
    union _LARGE_INTEGER LastScanTime;// Offset=0x10f8 Size=0x8
    struct _RAID_ADAPTER_PARAMETERS Parameters;// Offset=0x1100 Size=0x38
    unsigned char  ( * HwPassiveInitRoutine)(void * );// Offset=0x1138 Size=0x8
    enum _INTERRUPT_SYNCHRONIZATION_MODE MsiMode;// Offset=0x1140 Size=0x4
    unsigned long long MSIInterruptLock;// Offset=0x1148 Size=0x8
    struct _IO_INTERRUPT_MESSAGE_INFO * MSIMessageInfo;// Offset=0x1150 Size=0x8
    struct _GROUP_AFFINITY * MSIMessageGroupAffinity;// Offset=0x1158 Size=0x8
    unsigned char MSISupported;// Offset=0x1160 Size=0x1
    unsigned char MSIEnabled;// Offset=0x1161 Size=0x1
    unsigned char Contiguous;// Offset=0x1162 Size=0x1
    struct _unnamed_235 PerfOptFlags;// Offset=0x1163 Size=0x1
    struct _DEVICE_RELATIONS * DeviceRelations;// Offset=0x1168 Size=0x8
    struct _RAID_POWER_CONTEXT PowerContext;// Offset=0x1170 Size=0xb8
    struct _STORPORT_EXTENDED_FUNCTIONS ExtendedFunctions;// Offset=0x1228 Size=0x58
    unsigned long DeviceNode;// Offset=0x1280 Size=0x4
    union _RAID_REDIRECTION_SUPPORT RedirectionSupport;// Offset=0x1284 Size=0x2
    unsigned short InterruptRedirectionGroups;// Offset=0x1286 Size=0x2
    long ConcurrentChannels;// Offset=0x1288 Size=0x4
    struct _RAID_CONCURRENT_CHANNEL_TOKEN_LIST * ConcurrentChannelTokens;// Offset=0x1290 Size=0x8
    unsigned char * InterruptRedirectionTable;// Offset=0x1298 Size=0x8
    unsigned long SqmHierarchicalResetSucceededAtBus;// Offset=0x12a0 Size=0x4
    unsigned long SqmHierarchicalResetSucceededAtTarget;// Offset=0x12a4 Size=0x4
    unsigned long SqmHierarchicalResetSucceededAtLun;// Offset=0x12a8 Size=0x4
    unsigned long SqmHierarchicalResetCountInternal;// Offset=0x12ac Size=0x4
    unsigned long SqmHierarchicalResetCountApp;// Offset=0x12b0 Size=0x4
    unsigned long SqmMaxDpcCompletionCount;// Offset=0x12b4 Size=0x4
    unsigned long SqmMaxDpcCompletionTimeTicks;// Offset=0x12b8 Size=0x4
    unsigned long SqmCompletionsForLongestDpc;// Offset=0x12bc Size=0x4
    wchar_t * SqmMiniportName;// Offset=0x12c0 Size=0x8
    wchar_t * SqmAdapterId;// Offset=0x12c8 Size=0x8
    unsigned long SqmRandomId;// Offset=0x12d0 Size=0x4
    unsigned long SqmSaveTotalResourceAllocFailuresLogged;// Offset=0x12d4 Size=0x4
    unsigned long SqmSaveHighestOutstandingMaxLogged;// Offset=0x12d8 Size=0x4
    struct _PCI_COMMON_HEADER PciConfiguration;// Offset=0x12dc Size=0x40
    struct _STOR_POWER_SETTING_NOTIFICATION PowerSettingNotification;// Offset=0x1320 Size=0x18
    long StateChangeInProgress;// Offset=0x1338 Size=0x4
    unsigned long StateChangedEntity;// Offset=0x133c Size=0x4
    unsigned long StateChangeEntityAttributes;// Offset=0x1340 Size=0x4
    struct _STOR_ADDRESS * StateChangeAddress;// Offset=0x1348 Size=0x8
    void  ( * HwStateChange)(void * ,void * ,short ,void * ,unsigned long );// Offset=0x1350 Size=0x8
    void * StateChangeContext;// Offset=0x1358 Size=0x8
    struct _RTL_BITMAP BusesWithVmLunsBitmap;// Offset=0x1360 Size=0x10
    unsigned long * BusesWithVmLunsBitmapBuffer;// Offset=0x1370 Size=0x8
    unsigned long NumWorkItems;// Offset=0x1378 Size=0x4
    unsigned char DefaultSenseByteCount;// Offset=0x137c Size=0x1
    unsigned char DumpPowerReady;// Offset=0x137d Size=0x1
    unsigned char MaxDumpLevelEnabled;// Offset=0x137e Size=0x1
    unsigned char VendorSpecificLogPageAddress;// Offset=0x137f Size=0x1
    unsigned long MaxDeviceDumpSize;// Offset=0x1380 Size=0x4
    unsigned long long IoLatencyCap;// Offset=0x1388 Size=0x8
    unsigned long RaidLogListIndex;// Offset=0x13c0 Size=0x4
    unsigned long RaidLogListSize;// Offset=0x13c4 Size=0x4
    struct _RAID_LOG_ENTRY * RaidLogList;// Offset=0x13c8 Size=0x8
    union _SLIST_HEADER UnitsPendingPowerUpList;// Offset=0x13d0 Size=0x10
    struct _RAID_ADAPTER_POFX * PoFx;// Offset=0x13e0 Size=0x8
    void * LowPowerEpochHandle;// Offset=0x13e8 Size=0x8
    unsigned long D3IdleTimeout;// Offset=0x13f0 Size=0x4
    void * CoalescingRegistration;// Offset=0x13f8 Size=0x8
    void * MaxPowerHandle;// Offset=0x1400 Size=0x8
    struct _UNICODE_STRING CoolingInterfaceSymlink;// Offset=0x1408 Size=0x10
    struct _RAID_UNIT_EXTENSION * CrashDumpUnit;// Offset=0x1418 Size=0x8
    struct _CRASHDUMP_FUNCTIONS_INTERFACE ParentCrashdumpInterface;// Offset=0x1420 Size=0x28
    struct _GUID AdapterGuid;// Offset=0x1448 Size=0x10
    unsigned long CompletionsDuringReset;// Offset=0x1458 Size=0x4
    struct _unnamed_236 TelemetryHierarchicalResetLunBucket[5];// Offset=0x145c Size=0x3c
    struct _unnamed_236 TelemetryHierarchicalResetTargetBucket[5];// Offset=0x1498 Size=0x3c
    unsigned long long LastCSStateChange;// Offset=0x14d8 Size=0x8
    unsigned long long LastIOCoalescingOnStartTime;// Offset=0x14e0 Size=0x8
    unsigned long long IOCoalescingOnDuration;// Offset=0x14e8 Size=0x8
    unsigned long long FirstDPNRTimeAfterCS;// Offset=0x14f0 Size=0x8
    unsigned long long LastDPNRStartTime;// Offset=0x14f8 Size=0x8
    unsigned long long DPNRDurationInCS;// Offset=0x1500 Size=0x8
    unsigned long long LastF1StartTime;// Offset=0x1508 Size=0x8
    unsigned long long F1DurationInCS;// Offset=0x1510 Size=0x8
    unsigned long long ActiveReferencesInCS;// Offset=0x1518 Size=0x8
    unsigned long long ActiveReferencesInCoalescing;// Offset=0x1520 Size=0x8
    unsigned long UnitTimeoutsInCS;// Offset=0x1528 Size=0x4
    unsigned long F0TransitionsSinceCSStateChange;// Offset=0x152c Size=0x4
    unsigned long D0TransitionsSinceCSStateChange;// Offset=0x1530 Size=0x4
    unsigned long F0TransitionsLongSinceCSStateChange;// Offset=0x1534 Size=0x4
    unsigned long D0TransitionsLongSinceCSStateChange;// Offset=0x1538 Size=0x4
    unsigned char TopologyInfoLogged;// Offset=0x153c Size=0x1
    unsigned long PeriodicMaxGatewayQueueDepthAtSwTimeout;// Offset=0x1540 Size=0x4
    unsigned long PauseCount;// Offset=0x1544 Size=0x4
    unsigned long BusyCount;// Offset=0x1548 Size=0x4
    unsigned char DisableTelemetryDeviceHealth;// Offset=0x154c Size=0x1
    unsigned long MiniportFirmwareDataStructureVersion;// Offset=0x1550 Size=0x4
    struct _D3COLD_SUPPORT_INTERFACE * D3ColdInterface;// Offset=0x1558 Size=0x8
    void * ProtocolCommandEffects;// Offset=0x1560 Size=0x8
    struct _KTIMER QueueWaitCheckTimer;// Offset=0x1568 Size=0x40
    struct _KDPC QueueWaitCheckDpc;// Offset=0x15a8 Size=0x40
    unsigned long long QosLock;// Offset=0x15e8 Size=0x8
    unsigned long QosUnitCountForWaitTimeout;// Offset=0x15f0 Size=0x4
    struct _RAID_RPMB_CAPABILITIES Rpmb;// Offset=0x15f8 Size=0x38
    struct _MDL * HmbMdlList;// Offset=0x1630 Size=0x8
    unsigned long PowerSrbTimeout;// Offset=0x1638 Size=0x4
    struct _STOR_CRYPTO_CAPABILITIES_DATA * CryptoCapabilities;// Offset=0x1640 Size=0x8
    struct _RAID_CRYPTO_KEY_TABLE CryptoKeyTable;// Offset=0x1648 Size=0x18
    struct _DUMP_ADAPTER_INFO * CrashDumpInfo;// Offset=0x1660 Size=0x8
    struct _DUMP_ADAPTER_INFO * HiberDumpInfo;// Offset=0x1668 Size=0x8
    struct _RAID_SHARED_WORK_ITEM_CONTEXT IoResourceWorkItem;// Offset=0x1670 Size=0x18
};
