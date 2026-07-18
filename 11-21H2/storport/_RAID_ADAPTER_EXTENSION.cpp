enum _RAID_OBJECT_TYPE
{
    RaidUnknownObject=-1,
    RaidAdapterObject=0,
    RaidUnitObject=1,
    RaidDriverObject=2
};

struct _UNICODE_STRING// Size=0x10 (Id=382)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _LIST_ENTRY// Size=0x10 (Id=5)
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

union _unnamed_302// Size=0x10 (Id=302)
{
    union // Size=0x10 (Id=0)
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
        struct // Size=0xd (Id=0)
        {
            unsigned char InterruptsEnabled:1;// Offset=0x3 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char PoweringUp:1;// Offset=0x3 Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char PoweringDown:1;// Offset=0x3 Size=0x1 BitOffset=0x2 BitSize=0x1
            unsigned char D3ColdAllowed:1;// Offset=0x3 Size=0x1 BitOffset=0x3 BitSize=0x1
            unsigned char D3ColdEnabled:1;// Offset=0x3 Size=0x1 BitOffset=0x4 BitSize=0x1
            unsigned char DisableRuntimePowerManagement:1;// Offset=0x3 Size=0x1 BitOffset=0x5 BitSize=0x1
            unsigned char DumpActiveNotCapable:1;// Offset=0x3 Size=0x1 BitOffset=0x6 BitSize=0x1
            unsigned char D3IdleTimeoutUserOverride:1;// Offset=0x3 Size=0x1 BitOffset=0x7 BitSize=0x1
            unsigned char SystemInLPE:1;// Offset=0x4 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char SystemCoalescingOn:1;// Offset=0x4 Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char UseDMAv3:1;// Offset=0x4 Size=0x1 BitOffset=0x2 BitSize=0x1
            unsigned char NoUnitPoFxRegistration:1;// Offset=0x4 Size=0x1 BitOffset=0x3 BitSize=0x1
            unsigned char CoolingInterfaceExposed:1;// Offset=0x4 Size=0x1 BitOffset=0x4 BitSize=0x1
            unsigned char ProtocolCommandEffectsPendingUpdate:1;// Offset=0x4 Size=0x1 BitOffset=0x5 BitSize=0x1
            unsigned char FindAdapterCalled:1;// Offset=0x4 Size=0x1 BitOffset=0x6 BitSize=0x1
            unsigned char DumpAlwaysPowerOn:1;// Offset=0x4 Size=0x1 BitOffset=0x7 BitSize=0x1
            unsigned char DisableInterruptsOnD3:1;// Offset=0x5 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char EtwEnabled:1;// Offset=0x5 Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char AdapterInterfaceTypeInitialized:1;// Offset=0x5 Size=0x1 BitOffset=0x2 BitSize=0x1
            unsigned char AdapterFailed:1;// Offset=0x5 Size=0x1 BitOffset=0x3 BitSize=0x1
            unsigned char DsmLedSupportedFunctionCached:1;// Offset=0x5 Size=0x1 BitOffset=0x4 BitSize=0x1
            unsigned char DsmLedSupportedStateCached:1;// Offset=0x5 Size=0x1 BitOffset=0x5 BitSize=0x1
            unsigned char DFxPowerDownActive:1;// Offset=0x5 Size=0x1 BitOffset=0x6 BitSize=0x1
            unsigned char DeviceLedStateCached:1;// Offset=0x5 Size=0x1 BitOffset=0x7 BitSize=0x1
            unsigned char AdapterFailureReportedToWHEA:1;// Offset=0x6 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char FirmwareShared:1;// Offset=0x6 Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char DisableRuntimePowerBypassPoFx:1;// Offset=0x6 Size=0x1 BitOffset=0x2 BitSize=0x1
            unsigned char OperationalEventsEnabled:1;// Offset=0x6 Size=0x1 BitOffset=0x3 BitSize=0x1
            unsigned char HealthEventsEnabled:1;// Offset=0x6 Size=0x1 BitOffset=0x4 BitSize=0x1
            unsigned char DiagnosticEventsEnabled:1;// Offset=0x6 Size=0x1 BitOffset=0x5 BitSize=0x1
            unsigned char PoFxPlaceHolderModeEnabled:1;// Offset=0x6 Size=0x1 BitOffset=0x6 BitSize=0x1
            unsigned char AdapterRestart:1;// Offset=0x6 Size=0x1 BitOffset=0x7 BitSize=0x1
            unsigned char MFNDSupported:1;// Offset=0x7 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char MFNDOperationInfoCached:1;// Offset=0x7 Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char PdcIdleResiliencyEngaged:1;// Offset=0x7 Size=0x1 BitOffset=0x2 BitSize=0x1
            unsigned char DisableNVMeActiveNamespaceIDListCheck:1;// Offset=0x7 Size=0x1 BitOffset=0x3 BitSize=0x1
            unsigned long long Reserved:4;// Offset=0x8 Size=0x8 BitOffset=0x0 BitSize=0x4
        };
        unsigned long long AsUlonglong;// Offset=0x0 Size=0x8
    };
};

union _unnamed_303// Size=0x4 (Id=303)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long ReservedScsiMiniportResourceUsed:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved:31;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1f
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};

struct _STOR_LOCKED_LIST// Size=0x20 (Id=341)
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

struct _STOR_DICTIONARY// Size=0x30 (Id=219)
{
    unsigned long EntryCount;// Offset=0x0 Size=0x4
    unsigned long MaxEntryCount;// Offset=0x4 Size=0x4
    enum _POOL_TYPE PoolType;// Offset=0x8 Size=0x4
    struct _LIST_ENTRY * Entries;// Offset=0x10 Size=0x8
    void *  ( * GetKeyRoutine)(struct _LIST_ENTRY * );// Offset=0x18 Size=0x8
    long  ( * CompareKeyRoutine)(void * ,void * );// Offset=0x20 Size=0x8
    unsigned long  ( * HashKeyRoutine)(void * );// Offset=0x28 Size=0x8
};

struct _unnamed_24// Size=0x10 (Id=24)
{
    struct // Size=0x10 (Id=0)
    {
        unsigned long long Depth:16;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x10
        unsigned long long Sequence:48;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x30
        unsigned long long Reserved:4;// Offset=0x8 Size=0x8 BitOffset=0x0 BitSize=0x4
        unsigned long long NextEntry:60;// Offset=0x8 Size=0x8 BitOffset=0x4 BitSize=0x3c
    };
};

union _SLIST_HEADER// Size=0x10 (Id=25)
{
    unsigned long long Alignment;// Offset=0x0 Size=0x8
    unsigned long long Region;// Offset=0x8 Size=0x8
    struct _unnamed_24 HeaderX64;// Offset=0x0 Size=0x10
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

struct _RAID_POWER_STATE// Size=0x10 (Id=347)
{
    enum _SYSTEM_POWER_STATE SystemState;// Offset=0x0 Size=0x4
    enum _DEVICE_POWER_STATE DeviceState;// Offset=0x4 Size=0x4
    enum POWER_ACTION PowerAction;// Offset=0x8 Size=0x4
    unsigned char SystemPoweringDown;// Offset=0xc Size=0x1
};

struct _RAID_RESOURCE_LIST// Size=0x10 (Id=351)
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

struct _MEMORY_REGION// Size=0x18 (Id=672)
{
    unsigned char * VirtualBase;// Offset=0x0 Size=0x8
    union _LARGE_INTEGER PhysicalBase;// Offset=0x8 Size=0x8
    unsigned long Length;// Offset=0x10 Size=0x4
};

struct _PORT_CONFIGURATION_INFORMATION// Size=0xe0 (Id=339)
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
    unsigned char DmaAddressWidth;// Offset=0xc6 Size=0x1
    unsigned long ExtendedFlags1;// Offset=0xc8 Size=0x4
    unsigned long MaxNumberOfIO;// Offset=0xcc Size=0x4
    unsigned long MaxIOsPerLun;// Offset=0xd0 Size=0x4
    unsigned long InitialLunQueueDepth;// Offset=0xd4 Size=0x4
    unsigned long BusResetHoldTime;// Offset=0xd8 Size=0x4
    unsigned long FeatureSupport;// Offset=0xdc Size=0x4
};

struct _unnamed_342// Size=0x1 (Id=342)
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

struct _UNIT_CONTROL_LIST// Size=0x14 (Id=803)
{
    unsigned long MaxControlType;// Offset=0x0 Size=0x4
    unsigned char SupportedTypeList[15];// Offset=0x4 Size=0xf
};

struct _ADAPTER_CONTROL_LIST// Size=0x1c (Id=692)
{
    unsigned long MaxControlType;// Offset=0x0 Size=0x4
    unsigned char SupportedTypeList[23];// Offset=0x4 Size=0x17
};

struct _RAID_MINIPORT// Size=0x138 (Id=343)
{
    struct _RAID_ADAPTER_EXTENSION * Adapter;// Offset=0x0 Size=0x8
    struct _PORT_CONFIGURATION_INFORMATION PortConfiguration;// Offset=0x8 Size=0xe0
    struct _HW_INITIALIZATION_DATA * HwInitializationData;// Offset=0xe8 Size=0x8
    struct _RAID_HW_DEVICE_EXT * PrivateDeviceExt;// Offset=0xf0 Size=0x8
    struct _unnamed_342 Flags;// Offset=0xf8 Size=0x1
    struct _UNIT_CONTROL_LIST UnitControlList;// Offset=0xfc Size=0x14
    struct _ADAPTER_CONTROL_LIST AdapterControlList;// Offset=0x110 Size=0x1c
    unsigned long FeatureCount;// Offset=0x12c Size=0x4
    unsigned char FeatureList[6];// Offset=0x130 Size=0x6
};

struct _BUS_INTERFACE_STANDARD// Size=0x40 (Id=900)
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

struct _RAID_BUS_INTERFACE// Size=0x48 (Id=870)
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

struct _RAID_DMA_ADAPTER// Size=0x20 (Id=251)
{
    struct _DMA_ADAPTER * DmaAdapter;// Offset=0x0 Size=0x8
    unsigned char DmarCompatible;// Offset=0x8 Size=0x1
    unsigned long NumberOfMapRegisters;// Offset=0xc Size=0x4
    void * MapRegisterBase;// Offset=0x10 Size=0x8
    enum _STOR_DMA_WIDTH Width;// Offset=0x18 Size=0x4
    enum _STOR_DMA_VERSION DmaVersion;// Offset=0x1c Size=0x4
};

struct _RAID_MEMORY_REGION// Size=0x18 (Id=224)
{
    unsigned char * VirtualBase;// Offset=0x0 Size=0x8
    union _LARGE_INTEGER PhysicalBase;// Offset=0x8 Size=0x8
    unsigned long Length;// Offset=0x10 Size=0x4
};

struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=6)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _KDPC// Size=0x40 (Id=93)
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

struct _RAID_DEFERRED_QUEUE// Size=0x80 (Id=244)
{
    unsigned short Depth;// Offset=0x0 Size=0x2
    unsigned short ItemSize;// Offset=0x2 Size=0x2
    struct _KDPC Dpc;// Offset=0x8 Size=0x40
    union _SLIST_HEADER FreeList;// Offset=0x50 Size=0x10
    union _SLIST_HEADER RunningList;// Offset=0x60 Size=0x10
    void  ( * ProcessDeferredItem)(struct _DEVICE_OBJECT * ,struct _RAID_DEFERRED_HEADER * ,unsigned char );// Offset=0x70 Size=0x8
};

struct _SLIST_ENTRY// Size=0x10 (Id=23)
{
    struct _SLIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _RAID_DEFERRED_HEADER// Size=0x20 (Id=611)
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

union _RAID_ADDRESS// Size=0x4 (Id=228)
{
    unsigned char PathId;// Offset=0x0 Size=0x1
    unsigned char TargetId;// Offset=0x1 Size=0x1
    unsigned char Lun;// Offset=0x2 Size=0x1
    unsigned char Reserved;// Offset=0x3 Size=0x1
    struct // Size=0x4 (Id=0)
    {
        unsigned long NamespaceId:24;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x18
        unsigned long Reserved2:8;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x8
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};

struct _unnamed_506// Size=0x10 (Id=506)
{
    void  ( * HwTimerRoutine)(void * );// Offset=0x0 Size=0x8
    unsigned long Timeout;// Offset=0x8 Size=0x4
};

struct _unnamed_507// Size=0x20 (Id=507)
{
    struct _SCSI_REQUEST_BLOCK * Srb;// Offset=0x0 Size=0x8
    unsigned long ErrorCode;// Offset=0x8 Size=0x4
    unsigned long UniqueId;// Offset=0xc Size=0x4
    unsigned char FreeErrorInfo[16];// Offset=0x10 Size=0x10
};

struct _unnamed_508// Size=0x4 (Id=508)
{
    unsigned long Timeout;// Offset=0x0 Size=0x4
};

struct _unnamed_509// Size=0x4 (Id=509)
{
    unsigned long RequestsToComplete;// Offset=0x0 Size=0x4
};

struct _unnamed_510// Size=0x18 (Id=510)
{
    struct _STOR_TIMER_CONTEXT * StorTimer;// Offset=0x0 Size=0x8
    union _LARGE_INTEGER Timeout;// Offset=0x8 Size=0x8
    unsigned long TolerableDelay;// Offset=0x10 Size=0x4
};

struct _unnamed_511// Size=0x8 (Id=511)
{
    struct _STOR_ASYNC_NOTIFY_CONTEXT * StorAsyncNotify;// Offset=0x0 Size=0x8
};

struct _RAID_DEFERRED_ELEMENT// Size=0x50 (Id=512)
{
    struct _RAID_DEFERRED_HEADER Header;// Offset=0x0 Size=0x20
    enum _RAID_DEFERRED_TYPE Type;// Offset=0x20 Size=0x4
    union _RAID_ADDRESS Address;// Offset=0x24 Size=0x4
    union // Size=0x48 (Id=0)
    {
        struct _unnamed_506 Timer;// Offset=0x28 Size=0x10
        struct _unnamed_507 Error;// Offset=0x28 Size=0x20
        struct _unnamed_508 PauseDevice;// Offset=0x28 Size=0x4
        struct _unnamed_509 Busy;// Offset=0x28 Size=0x4
        struct _unnamed_509 DeviceBusy;// Offset=0x28 Size=0x4
        struct _unnamed_510 AdditionalTimer;// Offset=0x28 Size=0x18
        struct _unnamed_511 AsyncNotification;// Offset=0x28 Size=0x8
    };
};

struct _unnamed_306// Size=0x50 (Id=306)
{
    struct _RAID_DEFERRED_ELEMENT Timer;// Offset=0x0 Size=0x50
};

struct _unnamed_307// Size=0xb0 (Id=307)
{
    struct _RAID_DEFERRED_ELEMENT AdapterGatewayPause;// Offset=0x0 Size=0x50
    struct _RAID_DEFERRED_ELEMENT AdapterGatewayResume;// Offset=0x50 Size=0x50
    unsigned long LatestAdapterGatewayPauseTimeoutValue;// Offset=0xa0 Size=0x4
    long EndResultPauseDesired;// Offset=0xa4 Size=0x4
};

struct _DISPATCHER_HEADER// Size=0x18 (Id=541)
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
            unsigned char Emulation:1;// Offset=0x3 Size=0x1 BitOffset=0x6 BitSize=0x1
            unsigned char Reserved5:1;// Offset=0x3 Size=0x1 BitOffset=0x7 BitSize=0x1
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

struct _KTIMER// Size=0x40 (Id=369)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
    union _ULARGE_INTEGER DueTime;// Offset=0x18 Size=0x8
    struct _LIST_ENTRY TimerListEntry;// Offset=0x20 Size=0x10
    struct _KDPC * Dpc;// Offset=0x30 Size=0x8
    unsigned short Processor;// Offset=0x38 Size=0x2
    unsigned short TimerType;// Offset=0x3a Size=0x2
    unsigned long Period;// Offset=0x3c Size=0x4
};

struct _PORT_REGISTRY_INFO// Size=0x40 (Id=613)
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

struct _RAID_ADAPTER_PARAMETERS// Size=0x38 (Id=819)
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

struct _unnamed_309// Size=0x1 (Id=309)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char OptimizeForCompletionDuringStartIo:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char DpcUseCurrentCpu:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char BypassSgl:1;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char SoftNumaOptIn:1;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char UnusedFlags:4;// Offset=0x0 Size=0x1 BitOffset=0x4 BitSize=0x4
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

struct _SCSI_POWER_REQUEST_BLOCK// Size=0x58 (Id=697)
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

struct _STORAGE_REQUEST_BLOCK// Size=0x80 (Id=257)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned char Function;// Offset=0x2 Size=0x1
    unsigned char SrbStatus;// Offset=0x3 Size=0x1
    unsigned long ReservedUlong1;// Offset=0x4 Size=0x4
    unsigned long Signature;// Offset=0x8 Size=0x4
    unsigned long Version;// Offset=0xc Size=0x4
    unsigned long SrbLength;// Offset=0x10 Size=0x4
    unsigned long SrbFunction;// Offset=0x14 Size=0x4
    unsigned long SrbFlags;// Offset=0x18 Size=0x4
    unsigned long ReservedUlong2;// Offset=0x1c Size=0x4
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

struct _RAID_POWER_CONTEXT// Size=0xb8 (Id=570)
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

struct _STORPORT_EXTENDED_FUNCTIONS// Size=0x58 (Id=450)
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

union _RAID_REDIRECTION_SUPPORT// Size=0x2 (Id=796)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short Dpc:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short Interrupt:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short MessageCount:14;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0xe
    };
    unsigned short AsUshort;// Offset=0x0 Size=0x2
};

struct _PCI_HEADER_TYPE_0// Size=0x30 (Id=678)
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

struct _PCI_HEADER_TYPE_1// Size=0x30 (Id=872)
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

struct _unnamed_893// Size=0x8 (Id=893)
{
    unsigned long Base;// Offset=0x0 Size=0x4
    unsigned long Limit;// Offset=0x4 Size=0x4
};

struct _PCI_HEADER_TYPE_2// Size=0x30 (Id=894)
{
    unsigned long SocketRegistersBaseAddress;// Offset=0x0 Size=0x4
    unsigned char CapabilitiesPtr;// Offset=0x4 Size=0x1
    unsigned char Reserved;// Offset=0x5 Size=0x1
    unsigned short SecondaryStatus;// Offset=0x6 Size=0x2
    unsigned char PrimaryBus;// Offset=0x8 Size=0x1
    unsigned char SecondaryBus;// Offset=0x9 Size=0x1
    unsigned char SubordinateBus;// Offset=0xa Size=0x1
    unsigned char SecondaryLatency;// Offset=0xb Size=0x1
    struct _unnamed_893 Range[4];// Offset=0xc Size=0x20
    unsigned char InterruptLine;// Offset=0x2c Size=0x1
    unsigned char InterruptPin;// Offset=0x2d Size=0x1
    unsigned short BridgeControl;// Offset=0x2e Size=0x2
};

union _unnamed_598// Size=0x30 (Id=598)
{
    struct _PCI_HEADER_TYPE_0 type0;// Offset=0x0 Size=0x30
    struct _PCI_HEADER_TYPE_1 type1;// Offset=0x0 Size=0x30
    struct _PCI_HEADER_TYPE_2 type2;// Offset=0x0 Size=0x30
};

struct _PCI_COMMON_HEADER// Size=0x40 (Id=599)
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
    union _unnamed_598 u;// Offset=0x10 Size=0x30
};

struct _STOR_POWER_SETTING_NOTIFICATION// Size=0x18 (Id=797)
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

struct _CRASHDUMP_FUNCTIONS_INTERFACE// Size=0x28 (Id=794)
{
    unsigned short Size;// Offset=0x0 Size=0x2
    unsigned short Version;// Offset=0x2 Size=0x2
    void * Context;// Offset=0x8 Size=0x8
    void  ( * InterfaceReference)(void * );// Offset=0x10 Size=0x8
    void  ( * InterfaceDereference)(void * );// Offset=0x18 Size=0x8
    long  ( * PowerOn)(void * );// Offset=0x20 Size=0x8
};

struct _GUID// Size=0x10 (Id=133)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _unnamed_310// Size=0xc (Id=310)
{
    unsigned long Count;// Offset=0x0 Size=0x4
    unsigned long Successes;// Offset=0x4 Size=0x4
    unsigned char LastErrorSrbStatus;// Offset=0x8 Size=0x1
};

struct _STOR_ADDRESS// Size=0x10 (Id=153)
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

struct _RAID_RPMB_CAPABILITIES// Size=0x38 (Id=525)
{
    struct _UNICODE_STRING InterfaceNameRpmb;// Offset=0x0 Size=0x10
    unsigned long RpmbSize;// Offset=0x10 Size=0x4
    unsigned long MaxReliableRpmbWriteSize;// Offset=0x14 Size=0x4
    unsigned char SecurityProtocol;// Offset=0x18 Size=0x1
    unsigned short SecurityProtocolSpecifier;// Offset=0x1a Size=0x2
    struct _STOR_ADDRESS RpmbTarget;// Offset=0x20 Size=0x10
    enum _STOR_RPMB_FRAME_TYPE FrameFormat;// Offset=0x30 Size=0x4
};

struct _RAID_CRYPTO_KEY_TABLE// Size=0x18 (Id=550)
{
    unsigned long NumKeyEntries;// Offset=0x0 Size=0x4
    unsigned char KeyTableFull;// Offset=0x4 Size=0x1
    struct _RAID_ADAPTER_CRYPTO_KEY_ENTRY * Table;// Offset=0x8 Size=0x8
    long KeyTableLock;// Offset=0x10 Size=0x4
};

struct _RAID_SHARED_WORK_ITEM_CONTEXT// Size=0x18 (Id=655)
{
    struct _IO_WORKITEM * WorkItem;// Offset=0x0 Size=0x8
    struct _IRP * Irp;// Offset=0x8 Size=0x8
    unsigned long InUse;// Offset=0x10 Size=0x4
};

struct _unnamed_643// Size=0x4 (Id=643)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Reserved0:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved1:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Ok:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long Locate:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long Fail:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long Rebuild:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long PFA:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long HotSpare:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long InACriticalArray:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long InAFailedArray:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long InvalidDevice:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long Reserved2:21;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x15
    };
};

union _DSM_PCI_SSD_LED_STATE// Size=0x4 (Id=644)
{
    struct _unnamed_643 State;// Offset=0x0 Size=0x4
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};

struct _unnamed_298// Size=0x20 (Id=298)
{
    struct _LIST_ENTRY List;// Offset=0x0 Size=0x10
    unsigned long Count;// Offset=0x10 Size=0x4
    unsigned long long Lock;// Offset=0x18 Size=0x8
};

struct _unnamed_496// Size=0x4 (Id=496)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Ok:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Locate:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Fail:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long Rebuild:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long PFA:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long HotSpare:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long InACriticalArray:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long InAFailedArray:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long InvalidDevice:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long Disabled:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long Reserved:22;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x16
    };
};

union _STORAGE_INDICATOR_STATE// Size=0x4 (Id=497)
{
    struct _unnamed_496 State;// Offset=0x0 Size=0x4
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};

struct _PCI_MSIX_TABLE_CONFIG_INTERFACE// Size=0x48 (Id=616)
{
    unsigned short Size;// Offset=0x0 Size=0x2
    unsigned short Version;// Offset=0x2 Size=0x2
    void * Context;// Offset=0x8 Size=0x8
    void  ( * InterfaceReference)(void * );// Offset=0x10 Size=0x8
    void  ( * InterfaceDereference)(void * );// Offset=0x18 Size=0x8
    long  ( * SetTableEntry)(void * ,unsigned long ,unsigned long );// Offset=0x20 Size=0x8
    long  ( * MaskTableEntry)(void * ,unsigned long );// Offset=0x28 Size=0x8
    long  ( * UnmaskTableEntry)(void * ,unsigned long );// Offset=0x30 Size=0x8
    long  ( * GetTableEntry)(void * ,unsigned long ,unsigned long * ,unsigned char * );// Offset=0x38 Size=0x8
    long  ( * GetTableSize)(void * ,unsigned long * );// Offset=0x40 Size=0x8
};

union _unnamed_565// Size=0x4 (Id=565)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Initialized:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved:31;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1f
    };
    unsigned long AsULong;// Offset=0x0 Size=0x4
};

struct _RAID_MINIPORT_SYSTEM_THREAD_CONTEXT// Size=0x10 (Id=566)
{
    union _unnamed_565 StateFlags;// Offset=0x0 Size=0x4
    unsigned long SystemThreadMaxCount;// Offset=0x4 Size=0x4
    unsigned long SystemThreadCurrentCount;// Offset=0x8 Size=0x4
    unsigned long Reserved;// Offset=0xc Size=0x4
};

enum _MFND_OPERATION_PRIVILEGE
{
    MFND_PRIVILEGE_USER=0,
    MFND_PRIVILEGE_SUPER_ADMIN=1
};

enum _MFND_OPERATION_MODE
{
    MFND_MODE_SINGLE_PHYSICAL_FUNCTION=0,
    MFND_MODE_MULTIPLE_PHYSICAL_FUNCTION=1
};

struct _unnamed_313// Size=0x4 (Id=313)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long NoActiveNamespaceFound:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved:31;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1f
    };
};

struct _unnamed_314// Size=0xc (Id=314)
{
    struct _unnamed_313 Flags;// Offset=0x0 Size=0x4
    unsigned long ZoneNamespaceCount;// Offset=0x4 Size=0x4
    unsigned long RegularNamespaceCount;// Offset=0x8 Size=0x4
};

struct _RAID_ADAPTER_EXTENSION// Size=0x1740 (Id=315)
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
    union _unnamed_302 Flags;// Offset=0x68 Size=0x10
    struct _IO_RESOURCE_ENTRY * ReservedScsiMiniportResource;// Offset=0x78 Size=0x8
    union _unnamed_303 InterlockedFlags;// Offset=0x80 Size=0x4
    struct _STOR_LOCKED_LIST UnitList;// Offset=0x88 Size=0x20
    struct _STOR_DICTIONARY UnitDictionary;// Offset=0xa8 Size=0x30
    struct _STOR_LOCKED_LIST ZombieList;// Offset=0xd8 Size=0x20
    union _SLIST_HEADER CompletedList;// Offset=0x100 Size=0x10
    struct _SLIST_ENTRY * SavedXrbList;// Offset=0x110 Size=0x8
    long AdapterDpcRoutineLock;// Offset=0x118 Size=0x4
    long AdapterResetBusLock;// Offset=0x11c Size=0x4
    long AdapterDeviceResetLock;// Offset=0x120 Size=0x4
    struct _EX_RUNDOWN_REF_CACHE_AWARE * RemoveLock;// Offset=0x128 Size=0x8
    struct _RAID_POWER_STATE Power;// Offset=0x130 Size=0x10
    struct _RAID_RESOURCE_LIST ResourceList;// Offset=0x140 Size=0x10
    struct _RAID_MINIPORT Miniport;// Offset=0x150 Size=0x138
    struct _RAID_BUS_INTERFACE Bus;// Offset=0x288 Size=0x48
    struct _KINTERRUPT * Interrupt;// Offset=0x2d0 Size=0x8
    unsigned long InterruptIrql;// Offset=0x2d8 Size=0x4
    unsigned long InterruptVersion;// Offset=0x2dc Size=0x4
    unsigned long long StartIoLock;// Offset=0x2e0 Size=0x8
    enum _STOR_SYNCHRONIZATION_MODEL IoModel;// Offset=0x2e8 Size=0x4
    struct _RAID_DMA_ADAPTER Dma;// Offset=0x2f0 Size=0x20
    struct _RAID_MEMORY_REGION UncachedExtension;// Offset=0x310 Size=0x18
    unsigned long BusNumber;// Offset=0x328 Size=0x4
    unsigned long SlotNumber;// Offset=0x32c Size=0x4
    unsigned long Device;// Offset=0x330 Size=0x4
    unsigned long Function;// Offset=0x334 Size=0x4
    struct _MAPPED_ADDRESS * MappedAddressList;// Offset=0x338 Size=0x8
    struct _STOR_IO_GATEWAY * Gateway;// Offset=0x340 Size=0x8
    unsigned long InUseGatewayCount;// Offset=0x348 Size=0x4
    unsigned long AllocatedGatewayCount;// Offset=0x34c Size=0x4
    unsigned long ProcessorCountPerGateway;// Offset=0x350 Size=0x4
    unsigned long IoResourceReclaimTolerancePeriodLimit;// Offset=0x354 Size=0x4
    unsigned long LowWaterMarkForAdapter;// Offset=0x358 Size=0x4
    unsigned long AdapterPauseCount;// Offset=0x35c Size=0x4
    unsigned long AdapterBusyCount;// Offset=0x360 Size=0x4
    unsigned long AdapterSlowPathCount;// Offset=0x364 Size=0x4
    struct _RAID_DEFERRED_QUEUE DeferredQueue;// Offset=0x370 Size=0x80
    struct _unnamed_306 DeferredList;// Offset=0x3f0 Size=0x50
    struct _unnamed_307 DeferredPauseResumeContext;// Offset=0x440 Size=0xb0
    struct _RAID_DEFERRED_QUEUE WmiDeferredQueue;// Offset=0x4f0 Size=0x80
    struct _KDPC TimerDpc;// Offset=0x570 Size=0x40
    struct _KTIMER Timer;// Offset=0x5b0 Size=0x40
    struct _KDPC PauseTimerDpc;// Offset=0x5f0 Size=0x40
    struct _KDPC RestartDpc;// Offset=0x630 Size=0x40
    struct _KTIMER PauseTimer;// Offset=0x670 Size=0x40
    void  ( * HwTimerRoutine)(void * );// Offset=0x6b0 Size=0x8
    struct _KDPC CompletionDpc;// Offset=0x6b8 Size=0x40
    struct _KDPC BusChangeDpc;// Offset=0x6f8 Size=0x40
    struct _UNICODE_STRING PnpInterfaceName;// Offset=0x738 Size=0x10
    unsigned long AdapterNumber;// Offset=0x748 Size=0x4
    void * DriverParameters;// Offset=0x750 Size=0x8
    struct _PORT_REGISTRY_INFO RegistryInfo;// Offset=0x758 Size=0x40
    unsigned long LinkDownTimeoutValue;// Offset=0x798 Size=0x4
    unsigned long LinkUp;// Offset=0x79c Size=0x4
    void * BusKeyArray[255];// Offset=0x7a0 Size=0x7f8
    long ProcessingDeferredItems;// Offset=0xf98 Size=0x4
    unsigned long DefaultTimeout;// Offset=0xf9c Size=0x4
    unsigned long AdditionalTimers;// Offset=0xfa0 Size=0x4
    struct _KTIMER ResetHoldTimer;// Offset=0xfa8 Size=0x40
    struct _KDPC ResetHoldDpc;// Offset=0xfe8 Size=0x40
    union _LARGE_INTEGER LastScanTime;// Offset=0x1028 Size=0x8
    struct _RAID_ADAPTER_PARAMETERS Parameters;// Offset=0x1030 Size=0x38
    unsigned char  ( * HwPassiveInitRoutine)(void * );// Offset=0x1068 Size=0x8
    enum _INTERRUPT_SYNCHRONIZATION_MODE MsiMode;// Offset=0x1070 Size=0x4
    unsigned long long MSIInterruptLock;// Offset=0x1078 Size=0x8
    struct _IO_INTERRUPT_MESSAGE_INFO * MSIMessageInfo;// Offset=0x1080 Size=0x8
    struct _GROUP_AFFINITY * MSIMessageGroupAffinity;// Offset=0x1088 Size=0x8
    unsigned char MSISupported;// Offset=0x1090 Size=0x1
    unsigned char MSIEnabled;// Offset=0x1091 Size=0x1
    unsigned char Contiguous;// Offset=0x1092 Size=0x1
    struct _unnamed_309 PerfOptFlags;// Offset=0x1093 Size=0x1
    struct _DEVICE_RELATIONS * DeviceRelations;// Offset=0x1098 Size=0x8
    struct _RAID_POWER_CONTEXT PowerContext;// Offset=0x10a0 Size=0xb8
    struct _STORPORT_EXTENDED_FUNCTIONS ExtendedFunctions;// Offset=0x1158 Size=0x58
    unsigned long DeviceNode;// Offset=0x11b0 Size=0x4
    union _RAID_REDIRECTION_SUPPORT RedirectionSupport;// Offset=0x11b4 Size=0x2
    unsigned short InterruptRedirectionGroups;// Offset=0x11b6 Size=0x2
    long ConcurrentChannels;// Offset=0x11b8 Size=0x4
    struct _RAID_CONCURRENT_CHANNEL_TOKEN_LIST * ConcurrentChannelTokens;// Offset=0x11c0 Size=0x8
    unsigned char * InterruptRedirectionTable;// Offset=0x11c8 Size=0x8
    unsigned long HierarchicalResetSucceededAtBus;// Offset=0x11d0 Size=0x4
    unsigned long HierarchicalResetSucceededAtTarget;// Offset=0x11d4 Size=0x4
    unsigned long HierarchicalResetSucceededAtLun;// Offset=0x11d8 Size=0x4
    unsigned long HierarchicalResetCountInternal;// Offset=0x11dc Size=0x4
    unsigned long HierarchicalResetCountApp;// Offset=0x11e0 Size=0x4
    unsigned long MaxDpcCompletionCount;// Offset=0x11e4 Size=0x4
    unsigned long MaxDpcCompletionTimeTicks;// Offset=0x11e8 Size=0x4
    unsigned long CompletionsForLongestDpc;// Offset=0x11ec Size=0x4
    wchar_t * MiniportName;// Offset=0x11f0 Size=0x8
    wchar_t * AdapterId;// Offset=0x11f8 Size=0x8
    struct _PCI_COMMON_HEADER PciConfiguration;// Offset=0x1200 Size=0x40
    struct _STOR_POWER_SETTING_NOTIFICATION PowerSettingNotification;// Offset=0x1240 Size=0x18
    long StateChangeInProgress;// Offset=0x1258 Size=0x4
    unsigned long StateChangedEntity;// Offset=0x125c Size=0x4
    unsigned long StateChangeEntityAttributes;// Offset=0x1260 Size=0x4
    struct _STOR_ADDRESS * StateChangeAddress;// Offset=0x1268 Size=0x8
    void  ( * HwStateChange)(void * ,void * ,short ,void * ,unsigned long );// Offset=0x1270 Size=0x8
    void * StateChangeContext;// Offset=0x1278 Size=0x8
    struct _RTL_BITMAP BusesWithVmLunsBitmap;// Offset=0x1280 Size=0x10
    unsigned long * BusesWithVmLunsBitmapBuffer;// Offset=0x1290 Size=0x8
    unsigned long NumWorkItems;// Offset=0x1298 Size=0x4
    unsigned char DefaultSenseByteCount;// Offset=0x129c Size=0x1
    unsigned char DumpPowerReady;// Offset=0x129d Size=0x1
    unsigned char MaxDumpLevelEnabled;// Offset=0x129e Size=0x1
    unsigned char VendorSpecificLogPageAddress;// Offset=0x129f Size=0x1
    unsigned long MaxDeviceDumpSize;// Offset=0x12a0 Size=0x4
    unsigned long long IoLatencyCap;// Offset=0x12a8 Size=0x8
    unsigned long RaidLogListIndex;// Offset=0x12c0 Size=0x4
    unsigned long RaidLogListSize;// Offset=0x12c4 Size=0x4
    struct _RAID_LOG_ENTRY * RaidLogList;// Offset=0x12c8 Size=0x8
    union _SLIST_HEADER UnitsPendingPowerUpList;// Offset=0x12d0 Size=0x10
    struct _RAID_ADAPTER_POFX * PoFx;// Offset=0x12e0 Size=0x8
    void * LowPowerEpochHandle;// Offset=0x12e8 Size=0x8
    unsigned long D3IdleTimeout;// Offset=0x12f0 Size=0x4
    void * CoalescingRegistration;// Offset=0x12f8 Size=0x8
    void * MaxPowerHandle;// Offset=0x1300 Size=0x8
    struct _UNICODE_STRING CoolingInterfaceSymlink;// Offset=0x1308 Size=0x10
    struct _RAID_UNIT_EXTENSION * CrashDumpUnit;// Offset=0x1318 Size=0x8
    struct _CRASHDUMP_FUNCTIONS_INTERFACE ParentCrashdumpInterface;// Offset=0x1320 Size=0x28
    struct _GUID AdapterGuid;// Offset=0x1348 Size=0x10
    wchar_t * AdapterSerialNumber;// Offset=0x1358 Size=0x8
    unsigned long CompletionsDuringReset;// Offset=0x1360 Size=0x4
    struct _unnamed_310 TelemetryHierarchicalResetLunBucket[5];// Offset=0x1364 Size=0x3c
    struct _unnamed_310 TelemetryHierarchicalResetTargetBucket[5];// Offset=0x13a0 Size=0x3c
    unsigned long long LastCSStateChange;// Offset=0x13e0 Size=0x8
    unsigned long long LastIOCoalescingOnStartTime;// Offset=0x13e8 Size=0x8
    unsigned long long IOCoalescingOnDuration;// Offset=0x13f0 Size=0x8
    unsigned long long FirstDPNRTimeAfterCS;// Offset=0x13f8 Size=0x8
    unsigned long long LastDPNRStartTime;// Offset=0x1400 Size=0x8
    unsigned long long DPNRDurationInCS;// Offset=0x1408 Size=0x8
    unsigned long long LastF1StartTime;// Offset=0x1410 Size=0x8
    unsigned long long F1DurationInCS;// Offset=0x1418 Size=0x8
    unsigned long long ActiveReferencesInCS;// Offset=0x1420 Size=0x8
    unsigned long long ActiveReferencesInCoalescing;// Offset=0x1428 Size=0x8
    unsigned long UnitTimeoutsInCS;// Offset=0x1430 Size=0x4
    unsigned long F0TransitionsSinceCSStateChange;// Offset=0x1434 Size=0x4
    unsigned long D0TransitionsSinceCSStateChange;// Offset=0x1438 Size=0x4
    unsigned long F0TransitionsLongSinceCSStateChange;// Offset=0x143c Size=0x4
    unsigned long D0TransitionsLongSinceCSStateChange;// Offset=0x1440 Size=0x4
    unsigned long long FirstDFxPowerDownTimeAfterCS;// Offset=0x1448 Size=0x8
    unsigned long long LastDFxPowerDownStartTime;// Offset=0x1450 Size=0x8
    unsigned long long DFxPowerDownDurationInCS;// Offset=0x1458 Size=0x8
    unsigned char TopologyInfoLogged;// Offset=0x1460 Size=0x1
    unsigned long PeriodicMaxGatewayQueueDepthAtSwTimeout;// Offset=0x1464 Size=0x4
    unsigned long PauseCount;// Offset=0x1468 Size=0x4
    unsigned long BusyCount;// Offset=0x146c Size=0x4
    unsigned char DisableTelemetryDeviceHealth;// Offset=0x1470 Size=0x1
    unsigned long MiniportFirmwareDataStructureVersion;// Offset=0x1474 Size=0x4
    struct _D3COLD_SUPPORT_INTERFACE * D3ColdInterface;// Offset=0x1478 Size=0x8
    struct _DEVICE_RESET_INTERFACE_STANDARD * ResetInterface;// Offset=0x1480 Size=0x8
    void * ProtocolCommandEffects;// Offset=0x1488 Size=0x8
    struct _KTIMER QueueWaitCheckTimer;// Offset=0x1490 Size=0x40
    struct _KDPC QueueWaitCheckDpc;// Offset=0x14d0 Size=0x40
    unsigned long long QosLock;// Offset=0x1510 Size=0x8
    unsigned long QosUnitCountForWaitTimeout;// Offset=0x1518 Size=0x4
    struct _RAID_RPMB_CAPABILITIES Rpmb;// Offset=0x1520 Size=0x38
    struct _STOR_HMB_RANGE * HmbRangeList;// Offset=0x1558 Size=0x8
    unsigned long PowerSrbTimeout;// Offset=0x1560 Size=0x4
    struct _STOR_CRYPTO_CAPABILITIES_DATA * CryptoCapabilities;// Offset=0x1568 Size=0x8
    struct _RAID_CRYPTO_KEY_TABLE CryptoKeyTable;// Offset=0x1570 Size=0x18
    unsigned long ZoneDeviceWriteErrors;// Offset=0x1588 Size=0x4
    unsigned long ZoneDeviceErrors;// Offset=0x158c Size=0x4
    unsigned long ZoneWriteOverflowEntries;// Offset=0x1590 Size=0x4
    unsigned long BusyRetryCount;// Offset=0x1594 Size=0x4
    unsigned long BusyPauseTimeInMs;// Offset=0x1598 Size=0x4
    struct _RAID_SHARED_WORK_ITEM_CONTEXT PowerWorkItem;// Offset=0x15a0 Size=0x18
    struct _NPEM_CONTROL_INTERFACE * NpemControlInterface;// Offset=0x15b8 Size=0x8
    unsigned long DsmLedSupportedFunction;// Offset=0x15c0 Size=0x4
    union _DSM_PCI_SSD_LED_STATE DsmLedSupportedStates;// Offset=0x15c4 Size=0x4
    struct _UNICODE_STRING NonPoFxMiniportInterfaceName;// Offset=0x15c8 Size=0x10
    struct _unnamed_298 DFxQueue;// Offset=0x15d8 Size=0x20
    union _STORAGE_INDICATOR_STATE LedState;// Offset=0x15f8 Size=0x4
    unsigned long PciDeviceType;// Offset=0x15fc Size=0x4
    long DeferredUpdateAssociatedUnitsIdentityItems;// Offset=0x1600 Size=0x4
    struct _KTIMER IoResourceReclaimTimer;// Offset=0x1608 Size=0x40
    struct _KDPC IoResourceReclaimTimerDpc;// Offset=0x1648 Size=0x40
    struct _PCI_MSIX_TABLE_CONFIG_INTERFACE MSIXTableConfigInterface;// Offset=0x1688 Size=0x48
    unsigned short EventCount[3];// Offset=0x16d0 Size=0x6
    struct NVME_IDENTIFY_CONTROLLER_DATA * IdentifyControllerData;// Offset=0x16d8 Size=0x8
    struct _RAID_MINIPORT_SYSTEM_THREAD_CONTEXT MiniportSystemThreadContext;// Offset=0x16e0 Size=0x10
    unsigned long PoFxPlaceHolderD3IdleTimeout;// Offset=0x16f0 Size=0x4
    struct _UNICODE_STRING MFNDInterfaceName;// Offset=0x16f8 Size=0x10
    enum _MFND_OPERATION_PRIVILEGE MFNDOperationPrivilege;// Offset=0x1708 Size=0x4
    enum _MFND_OPERATION_MODE MFNDOperationMode;// Offset=0x170c Size=0x4
    struct _IDENTIFY_MFND_CAPABILITY_INFORMATION * MFNDCapabilities;// Offset=0x1710 Size=0x8
    unsigned long PoweredDownUnitCount;// Offset=0x1718 Size=0x4
    void * PdcIdleResiliencyEngagedHandle;// Offset=0x1720 Size=0x8
    struct _KLOCK_QUEUE_HANDLE * GatewayLockHandleArray;// Offset=0x1728 Size=0x8
    struct _unnamed_314 NVMeDiagnostics;// Offset=0x1730 Size=0xc
};
