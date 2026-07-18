enum _RAID_OBJECT_TYPE
{
    RaidUnknownObject=0,
    RaidAdapterObject=1094997074,
    RaidUnitObject=1431193940,
    RaidDriverObject=1146246738,
    NvmeAdapterObject=1314275652,
    NvmeNamespaceObject=1314278989,
    StorChildAdapterPdoObject=1396916560
};

struct _UNICODE_STRING// Size=0x10 (Id=619)
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
    DeviceStateNoResource=8,
    DeviceStateMax=-1
};

struct _CRASHDUMP_FUNCTIONS_INTERFACE// Size=0x28 (Id=1266)
{
    unsigned short Size;// Offset=0x0 Size=0x2
    unsigned short Version;// Offset=0x2 Size=0x2
    void * Context;// Offset=0x8 Size=0x8
    void  ( * InterfaceReference)(void * );// Offset=0x10 Size=0x8
    void  ( * InterfaceDereference)(void * );// Offset=0x18 Size=0x8
    long  ( * PowerOn)(void * );// Offset=0x20 Size=0x8
};

union _unnamed_463// Size=0x8 (Id=463)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long SupportsFabric:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long InitializedMiniport:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long WmiMiniPortInitialized:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long WmiInitialized:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long BusInterfaceInternal:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long InHwInitialize:1;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x1
        unsigned long long FindAdapterCalled:1;// Offset=0x0 Size=0x8 BitOffset=0x6 BitSize=0x1
        unsigned long long InterruptsEnabled:1;// Offset=0x0 Size=0x8 BitOffset=0x7 BitSize=0x1
        unsigned long long AdapterInterfaceTypeInitialized:1;// Offset=0x0 Size=0x8 BitOffset=0x8 BitSize=0x1
        unsigned long long AdapterRestart:1;// Offset=0x0 Size=0x8 BitOffset=0x9 BitSize=0x1
        unsigned long long MSISupported:1;// Offset=0x0 Size=0x8 BitOffset=0xa BitSize=0x1
        unsigned long long MSIEnabled:1;// Offset=0x0 Size=0x8 BitOffset=0xb BitSize=0x1
        unsigned long long Contiguous:1;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0x1
        unsigned long long BootAdapter:1;// Offset=0x0 Size=0x8 BitOffset=0xd BitSize=0x1
        unsigned long long DisableNVMeActiveNSIDListCheck:1;// Offset=0x0 Size=0x8 BitOffset=0xe BitSize=0x1
        unsigned long long ProtocolCommandEffectsPendingUpdate:1;// Offset=0x0 Size=0x8 BitOffset=0xf BitSize=0x1
        unsigned long long DsmLedSupportedFunctionCached:1;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x1
        unsigned long long DsmLedSupportedStateCached:1;// Offset=0x0 Size=0x8 BitOffset=0x11 BitSize=0x1
        unsigned long long DeviceLedStateCached:1;// Offset=0x0 Size=0x8 BitOffset=0x12 BitSize=0x1
        unsigned long long Reserved:45;// Offset=0x0 Size=0x8 BitOffset=0x13 BitSize=0x2d
    };
    unsigned long long AsUlonglong;// Offset=0x0 Size=0x8
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

union _LARGE_INTEGER// Size=0x8 (Id=513)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_10 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _MEMORY_REGION// Size=0x18 (Id=1117)
{
    unsigned char * VirtualBase;// Offset=0x0 Size=0x8
    union _LARGE_INTEGER PhysicalBase;// Offset=0x8 Size=0x8
    unsigned long Length;// Offset=0x10 Size=0x4
};

struct _PORT_CONFIGURATION_INFORMATION// Size=0xe0 (Id=582)
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

struct _unnamed_457// Size=0x4 (Id=457)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long IsNvmeAdapter:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long InFindAdapter:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long InResetBus:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long IsVirtual:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long UnitControlListPopulated:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long AdapterControlListPopulated:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long IsStorMQMiniport:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long HasChildAdapter:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long ChildAdapterPresent:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long IsChildAdapter:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long Reserved:22;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x16
    };
};

struct _UNIT_CONTROL_LIST// Size=0x24 (Id=1279)
{
    unsigned long MaxControlType;// Offset=0x0 Size=0x4
    unsigned char SupportedTypeList[32];// Offset=0x4 Size=0x20
};

struct _ADAPTER_CONTROL_LIST// Size=0x24 (Id=1143)
{
    unsigned long MaxControlType;// Offset=0x0 Size=0x4
    unsigned char SupportedTypeList[31];// Offset=0x4 Size=0x1f
};

struct _unnamed_859// Size=0x8 (Id=859)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long ProvideVirtualAddresses:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long Reserved:63;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x3f
    };
};

struct _STORMQ_MINIPORT_INTERFACE// Size=0x30 (Id=860)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    unsigned short StorMQVersion;// Offset=0x4 Size=0x2
    unsigned short MiniportVersion;// Offset=0x6 Size=0x2
    struct _unnamed_859 Flags;// Offset=0x8 Size=0x8
    unsigned long  ( * HwStorMQCompletionNotifyWithCallback)(void * ,unsigned short ,unsigned short ,unsigned short ,unsigned long  ( * )(void * ,unsigned short ));// Offset=0x10 Size=0x8
    unsigned long  ( * HwStorMQQueryProperty)(void * ,unsigned long ,unsigned long ,unsigned long ,void * );// Offset=0x18 Size=0x8
    unsigned long  ( * HwStorMQSetProperty)(void * ,unsigned long ,unsigned long ,unsigned long ,void * );// Offset=0x20 Size=0x8
    unsigned char  ( * HwStorMQStartSrb)(void * ,void * ,struct _STORAGE_REQUEST_BLOCK * );// Offset=0x28 Size=0x8
};

struct _RAID_MINIPORT// Size=0x1a0 (Id=458)
{
    struct _STOR_COMMON_ADAPTER_EXTENSION * Adapter;// Offset=0x0 Size=0x8
    struct _PORT_CONFIGURATION_INFORMATION PortConfiguration;// Offset=0x8 Size=0xe0
    struct _HW_INITIALIZATION_DATA * HwInitializationData;// Offset=0xe8 Size=0x8
    struct _RAID_HW_DEVICE_EXT * PrivateDeviceExt;// Offset=0xf0 Size=0x8
    struct _unnamed_457 Flags;// Offset=0xf8 Size=0x4
    struct _UNIT_CONTROL_LIST UnitControlList;// Offset=0xfc Size=0x24
    struct _ADAPTER_CONTROL_LIST AdapterControlList;// Offset=0x120 Size=0x24
    struct _STORMQ_MINIPORT_INTERFACE StorMQInterface;// Offset=0x148 Size=0x30
    struct _STOR_COMMON_ADAPTER_EXTENSION * RelatedAdapter;// Offset=0x178 Size=0x8
    struct _DEVICE_OBJECT * ChildAdapterPdo;// Offset=0x180 Size=0x8
    unsigned long FeatureCount;// Offset=0x188 Size=0x4
    unsigned char FeatureList[16];// Offset=0x18c Size=0x10
};

struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=6)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _KDPC// Size=0x40 (Id=88)
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

struct _unnamed_452// Size=0x10 (Id=452)
{
    struct // Size=0x10 (Id=0)
    {
        unsigned long long Depth:16;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x10
        unsigned long long Sequence:48;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x30
        unsigned long long Reserved:4;// Offset=0x8 Size=0x8 BitOffset=0x0 BitSize=0x4
        unsigned long long NextEntry:60;// Offset=0x8 Size=0x8 BitOffset=0x4 BitSize=0x3c
    };
};

union _SLIST_HEADER// Size=0x10 (Id=453)
{
    unsigned long long Alignment;// Offset=0x0 Size=0x8
    unsigned long long Region;// Offset=0x8 Size=0x8
    struct _unnamed_452 HeaderX64;// Offset=0x0 Size=0x10
};

struct _RAID_DEFERRED_QUEUE// Size=0x80 (Id=354)
{
    unsigned short Depth;// Offset=0x0 Size=0x2
    unsigned short ItemSize;// Offset=0x2 Size=0x2
    struct _KDPC Dpc;// Offset=0x8 Size=0x40
    union _SLIST_HEADER FreeList;// Offset=0x50 Size=0x10
    union _SLIST_HEADER RunningList;// Offset=0x60 Size=0x10
    void  ( * ProcessDeferredItem)(struct _DEVICE_OBJECT * ,struct _RAID_DEFERRED_HEADER * ,unsigned char );// Offset=0x70 Size=0x8
};

struct _PORT_REGISTRY_INFO// Size=0x40 (Id=1030)
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

union _unnamed_464// Size=0x4 (Id=464)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long AutoConnectController:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long TransportQueueing:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long DirectQueueing:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long DmaApiBypassAllowed:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long Reserved:28;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1c
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};

struct _unnamed_465// Size=0x4 (Id=465)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long TopologyInfoLogged:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved:31;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1f
    };
};

struct _GUID// Size=0x10 (Id=756)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _unnamed_466// Size=0x4 (Id=466)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long UseGlobalIndex:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long UsePreciseTimestamp:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Reserved:30;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1e
    };
};

struct _unnamed_1296// Size=0x8 (Id=1296)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long SubmitRequest:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long CompleteRequest:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long SubmitControllerRequest:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long CompleteSyncRequest:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long ResetAfterTimeout:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long CriticalEvent:1;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x1
        unsigned long long Reserved:58;// Offset=0x0 Size=0x8 BitOffset=0x6 BitSize=0x3a
    };
};

union _unnamed_1297// Size=0x8 (Id=1297)
{
    struct _unnamed_1296 u;// Offset=0x0 Size=0x8
    unsigned long long AsUlong64;// Offset=0x0 Size=0x8
};

struct _NVME_DBG_LOG_CONTROL// Size=0x10 (Id=1298)
{
    unsigned long Revision;// Offset=0x0 Size=0x4
    union _unnamed_1297 Enable;// Offset=0x8 Size=0x8
};

struct _unnamed_467// Size=0x18 (Id=467)
{
    struct _unnamed_466 Config;// Offset=0x0 Size=0x4
    unsigned long ListEntryCount;// Offset=0x4 Size=0x4
    struct _NVME_DBG_LOG_CONTROL Control;// Offset=0x8 Size=0x10
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

struct _RAID_DMA_ADAPTER// Size=0x20 (Id=360)
{
    struct _DMA_ADAPTER * DmaAdapter;// Offset=0x0 Size=0x8
    unsigned char DmarCompatible;// Offset=0x8 Size=0x1
    unsigned long NumberOfMapRegisters;// Offset=0xc Size=0x4
    void * MapRegisterBase;// Offset=0x10 Size=0x8
    enum _STOR_DMA_WIDTH Width;// Offset=0x18 Size=0x4
    enum _STOR_DMA_VERSION DmaVersion;// Offset=0x1c Size=0x4
};

union _OWNER_ENTRY_COUNTS// Size=0x4 (Id=1290)
{
    unsigned long Value;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long IoPriorityBoosted:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long OwnerReferenced:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long IoQoSPriorityBoosted:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long OwnerCount:29;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1d
    };
};

struct _OWNER_ENTRY// Size=0x10 (Id=1129)
{
    unsigned long long OwnerThread;// Offset=0x0 Size=0x8
    union // Size=0x4 (Id=0)
    {
        union _OWNER_ENTRY_COUNTS EntryCounts;// Offset=0x8 Size=0x4
        unsigned long TableSize;// Offset=0x8 Size=0x4
    };
};

struct _ERESOURCE// Size=0x68 (Id=293)
{
    struct _LIST_ENTRY SystemResourcesList;// Offset=0x0 Size=0x10
    struct _OWNER_ENTRY * OwnerTable;// Offset=0x10 Size=0x8
    short ActiveCount;// Offset=0x18 Size=0x2
    unsigned char Flag;// Offset=0x1a Size=0x1
    unsigned char WaiterPriority;// Offset=0x1b Size=0x1
    void * SharedWaiters;// Offset=0x20 Size=0x8
    void * ExclusiveWaiters;// Offset=0x28 Size=0x8
    struct _OWNER_ENTRY OwnerEntry;// Offset=0x30 Size=0x10
    unsigned long ActiveEntries;// Offset=0x40 Size=0x4
    unsigned long ContentionCount;// Offset=0x44 Size=0x4
    unsigned long NumberOfSharedWaiters;// Offset=0x48 Size=0x4
    unsigned long NumberOfExclusiveWaiters;// Offset=0x4c Size=0x4
    char MiscFlags;// Offset=0x50 Size=0x1
    unsigned char Reserved1[3];// Offset=0x51 Size=0x3
    unsigned long ResourceTimeoutCount;// Offset=0x54 Size=0x4
    union // Size=0x8 (Id=0)
    {
        void * Address;// Offset=0x58 Size=0x8
        unsigned long long CreatorBackTraceIndex;// Offset=0x58 Size=0x8
    };
    unsigned long long SpinLock;// Offset=0x60 Size=0x8
};

struct _RAID_MEMORY_REGION// Size=0x18 (Id=297)
{
    unsigned char * VirtualBase;// Offset=0x0 Size=0x8
    union _LARGE_INTEGER PhysicalBase;// Offset=0x8 Size=0x8
    unsigned long Length;// Offset=0x10 Size=0x4
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
    BusTypeNvmeof=20,
    BusTypeMax=21,
    BusTypeMaxReserved=127
};

struct _RAID_ADAPTER_PARAMETERS// Size=0x38 (Id=1304)
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

struct _NVME_ADAPTER_EXTENSION// Size=0x5a0 (Id=468)
{
    enum _RAID_OBJECT_TYPE ObjectType;// Offset=0x0 Size=0x4
    struct _DEVICE_OBJECT * DeviceObject;// Offset=0x8 Size=0x8
    struct _RAID_DRIVER_EXTENSION * Driver;// Offset=0x10 Size=0x8
    struct _DEVICE_OBJECT * LowerDeviceObject;// Offset=0x18 Size=0x8
    struct _DEVICE_OBJECT * PhysicalDeviceObject;// Offset=0x20 Size=0x8
    struct _UNICODE_STRING DeviceName;// Offset=0x28 Size=0x10
    unsigned long PortNumber;// Offset=0x38 Size=0x4
    struct _LIST_ENTRY NextAdapter;// Offset=0x40 Size=0x10
    unsigned long AdapterNumber;// Offset=0x50 Size=0x4
    enum _DEVICE_STATE DeviceState;// Offset=0x54 Size=0x4
    unsigned long PagingPathCount;// Offset=0x58 Size=0x4
    unsigned long CrashDumpPathCount;// Offset=0x5c Size=0x4
    unsigned long HiberPathCount;// Offset=0x60 Size=0x4
    unsigned char DumpPowerReady;// Offset=0x64 Size=0x1
    unsigned char Reserved0[3];// Offset=0x65 Size=0x3
    struct _CRASHDUMP_FUNCTIONS_INTERFACE ParentCrashdumpInterface;// Offset=0x68 Size=0x28
    union _unnamed_463 Flags;// Offset=0x90 Size=0x8
    struct _EX_RUNDOWN_REF_CACHE_AWARE * RemoveLock;// Offset=0x98 Size=0x8
    struct _NVME_ADAPTER_POWER * Power;// Offset=0xa0 Size=0x8
    struct _RAID_MINIPORT Miniport;// Offset=0xa8 Size=0x1a0
    unsigned long BusNumber;// Offset=0x248 Size=0x4
    unsigned long SlotNumber;// Offset=0x24c Size=0x4
    struct _PCI_ADAPTER_PROPERTIES * PciProperties;// Offset=0x250 Size=0x8
    struct _PHYSICAL_ADAPTER_PROPERTIES * PhysicalProperties;// Offset=0x258 Size=0x8
    struct _NVMEOF_ADAPTER_PROPERTIES * NvmeofProperties;// Offset=0x260 Size=0x8
    struct _RAID_DEFERRED_QUEUE DeferredQueue;// Offset=0x270 Size=0x80
    struct _RAID_DEFERRED_QUEUE WmiDeferredQueue;// Offset=0x2f0 Size=0x80
    struct _UNICODE_STRING StorageInterfaceName;// Offset=0x370 Size=0x10
    struct _UNICODE_STRING NvmeofInterfaceName;// Offset=0x380 Size=0x10
    void * DriverParameters;// Offset=0x390 Size=0x8
    struct _PORT_REGISTRY_INFO RegistryInfo;// Offset=0x398 Size=0x40
    unsigned char  ( * HwPassiveInitRoutine)(void * );// Offset=0x3d8 Size=0x8
    union _unnamed_464 PerfOptFlags;// Offset=0x3e0 Size=0x4
    struct _unnamed_465 TelemetryFlags;// Offset=0x3e4 Size=0x4
    unsigned short PathTargetCounter;// Offset=0x3e8 Size=0x2
    unsigned short Reserved1;// Offset=0x3ea Size=0x2
    struct _REGISTRY_WATCH_CONTEXT * RegWatchContext;// Offset=0x3f0 Size=0x8
    struct _DEVICE_RELATIONS * DeviceRelations;// Offset=0x3f8 Size=0x8
    unsigned long DeviceNode;// Offset=0x400 Size=0x4
    unsigned long StartFailureCode;// Offset=0x404 Size=0x4
    wchar_t * MiniportName;// Offset=0x408 Size=0x8
    wchar_t * AdapterId;// Offset=0x410 Size=0x8
    struct _GUID AdapterGuid;// Offset=0x418 Size=0x10
    wchar_t * AdapterSerialNumber;// Offset=0x428 Size=0x8
    struct _unnamed_467 ControllerDbgLogSettings;// Offset=0x430 Size=0x18
    unsigned long NumWorkItems;// Offset=0x448 Size=0x4
    unsigned long AdditionalTimers;// Offset=0x44c Size=0x4
    long ProcessingDeferredItems;// Offset=0x450 Size=0x4
    unsigned long DefaultTimeout;// Offset=0x454 Size=0x4
    long AdapterDpcRoutineLock;// Offset=0x458 Size=0x4
    union _SLIST_HEADER CompletedList;// Offset=0x460 Size=0x10
    struct _SLIST_ENTRY * SavedXrbList;// Offset=0x470 Size=0x8
    unsigned short EventCount[3];// Offset=0x478 Size=0x6
    struct _NVME_CONTROLLER * NVMeController;// Offset=0x480 Size=0x8
    struct _RAID_DMA_ADAPTER Dma;// Offset=0x488 Size=0x20
    struct _ERESOURCE StorMQControllerListLock;// Offset=0x4a8 Size=0x68
    unsigned char StorMQControllerListLockInitialized;// Offset=0x510 Size=0x1
    struct _LIST_ENTRY StorMQControllerListHead;// Offset=0x518 Size=0x10
    long StorMQControllerListCount;// Offset=0x528 Size=0x4
    struct _IO_WORKITEM * PassivePowerUpDownWorkItem;// Offset=0x530 Size=0x8
    struct _RAID_MEMORY_REGION UncachedExtension;// Offset=0x538 Size=0x18
    struct _RAID_ADAPTER_PARAMETERS Parameters;// Offset=0x550 Size=0x38
    struct _MAPPED_ADDRESS * MappedAddressList;// Offset=0x588 Size=0x8
    struct _STOR_HMB_RANGE * HmbRangeList;// Offset=0x590 Size=0x8
    struct _STOR_EVENT_NOTIFICATION_CONTEXT * EventNotificationContext;// Offset=0x598 Size=0x8
};
