struct _LIST_ENTRY// Size=0x10 (Id=5)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

union _unnamed_476// Size=0x8 (Id=476)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long ManuallyAdded:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long OnFabric:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long SupportsPersistence:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long RemovalInProgress:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long TransportQueueing:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long DirectQueueing:1;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x1
        unsigned long long AuthenticationRequired:1;// Offset=0x0 Size=0x8 BitOffset=0x6 BitSize=0x1
        unsigned long long SecureChannelRequired:1;// Offset=0x0 Size=0x8 BitOffset=0x7 BitSize=0x1
        unsigned long long Enabled:1;// Offset=0x0 Size=0x8 BitOffset=0x8 BitSize=0x1
        unsigned long long AddedToAdapter:1;// Offset=0x0 Size=0x8 BitOffset=0x9 BitSize=0x1
        unsigned long long StopAllWork:1;// Offset=0x0 Size=0x8 BitOffset=0xa BitSize=0x1
        unsigned long long PermanentStopAllWork:1;// Offset=0x0 Size=0x8 BitOffset=0xb BitSize=0x1
        unsigned long long CreateIoQueues:1;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0x1
        unsigned long long ReconnectIoQueues:1;// Offset=0x0 Size=0x8 BitOffset=0xd BitSize=0x1
        unsigned long long IndividualIoQueueDeletion:1;// Offset=0x0 Size=0x8 BitOffset=0xe BitSize=0x1
        unsigned long long MultipleIoCommandSets:1;// Offset=0x0 Size=0x8 BitOffset=0xf BitSize=0x1
        unsigned long long ScanNamespaces:1;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x1
        unsigned long long NoActiveNamespaces:1;// Offset=0x0 Size=0x8 BitOffset=0x11 BitSize=0x1
        unsigned long long InvalidNamespaceIdList:1;// Offset=0x0 Size=0x8 BitOffset=0x12 BitSize=0x1
        unsigned long long WriteCacheEnabled:1;// Offset=0x0 Size=0x8 BitOffset=0x13 BitSize=0x1
        unsigned long long OCPCloudSSD:1;// Offset=0x0 Size=0x8 BitOffset=0x14 BitSize=0x1
        unsigned long long HealthInfoLogExamined:1;// Offset=0x0 Size=0x8 BitOffset=0x15 BitSize=0x1
        unsigned long long MFNDChildController:1;// Offset=0x0 Size=0x8 BitOffset=0x16 BitSize=0x1
        unsigned long long MFNDParentController:1;// Offset=0x0 Size=0x8 BitOffset=0x17 BitSize=0x1
        unsigned long long QueryOCPErrorRecoveryLogFailed:1;// Offset=0x0 Size=0x8 BitOffset=0x18 BitSize=0x1
        unsigned long long InconsistentActiveNSIdentified:1;// Offset=0x0 Size=0x8 BitOffset=0x19 BitSize=0x1
        unsigned long long NoActiveNSIdentified:1;// Offset=0x0 Size=0x8 BitOffset=0x1a BitSize=0x1
        unsigned long long FallbackToLegacySqCqMapping:1;// Offset=0x0 Size=0x8 BitOffset=0x1b BitSize=0x1
        unsigned long long ReadOnly:1;// Offset=0x0 Size=0x8 BitOffset=0x1c BitSize=0x1
        unsigned long long KeepAliveExpired:1;// Offset=0x0 Size=0x8 BitOffset=0x1d BitSize=0x1
        unsigned long long UnsentAsyncEventCommand:1;// Offset=0x0 Size=0x8 BitOffset=0x1e BitSize=0x1
        unsigned long long TerminateCommandTimeoutDetectThread:1;// Offset=0x0 Size=0x8 BitOffset=0x1f BitSize=0x1
        unsigned long long BypassDmaApi:1;// Offset=0x0 Size=0x8 BitOffset=0x20 BitSize=0x1
        unsigned long long RedoDiscovery:1;// Offset=0x0 Size=0x8 BitOffset=0x21 BitSize=0x1
        unsigned long long QuiesceCompletionDPCs:1;// Offset=0x0 Size=0x8 BitOffset=0x22 BitSize=0x1
        unsigned long long EnduranceWarningLogged:1;// Offset=0x0 Size=0x8 BitOffset=0x23 BitSize=0x1
        unsigned long long LowSpareWarningLogged:1;// Offset=0x0 Size=0x8 BitOffset=0x24 BitSize=0x1
        unsigned long long Unresponsive:1;// Offset=0x0 Size=0x8 BitOffset=0x25 BitSize=0x1
        unsigned long long CloudSSDLogExamined:1;// Offset=0x0 Size=0x8 BitOffset=0x26 BitSize=0x1
        unsigned long long Reserved:25;// Offset=0x0 Size=0x8 BitOffset=0x27 BitSize=0x19
    };
    unsigned long long AsUlonglong;// Offset=0x0 Size=0x8
};

struct _DISPATCHER_HEADER// Size=0x18 (Id=924)
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

struct _KEVENT// Size=0x18 (Id=21)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
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

struct _KTIMER// Size=0x40 (Id=496)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
    union _ULARGE_INTEGER DueTime;// Offset=0x18 Size=0x8
    struct _LIST_ENTRY TimerListEntry;// Offset=0x20 Size=0x10
    struct _KDPC * Dpc;// Offset=0x30 Size=0x8
    unsigned short Processor;// Offset=0x38 Size=0x2
    unsigned char TimerType;// Offset=0x3a Size=0x1
    char TimerDifObjTracking;// Offset=0x3b Size=0x1
    unsigned long Period;// Offset=0x3c Size=0x4
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

enum _NVME_CONTROLLER_CONNECTION_STATE
{
    StateDisconnected=0,
    StateConnecting=1,
    StateConnected=2,
    StateDisconnecting=3,
    StateUnresponsive=4
};

enum _NVME_CONTROLLER_TYPE
{
    NvmeCtrlNotReported=0,
    NvmeCtrlIO=1,
    NvmeCtrlDiscovery=2,
    NvmeCtrlAdmin=3,
    NvmeCtrlReservedMin=4,
    NvmeCtrlReservedMax=255
};

struct _STOR_LOCKED_LIST// Size=0x20 (Id=584)
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

struct _STOR_DICTIONARY// Size=0x30 (Id=287)
{
    unsigned long EntryCount;// Offset=0x0 Size=0x4
    unsigned long MaxEntryCount;// Offset=0x4 Size=0x4
    enum _POOL_TYPE PoolType;// Offset=0x8 Size=0x4
    struct _LIST_ENTRY * Entries;// Offset=0x10 Size=0x8
    void *  ( * GetKeyRoutine)(struct _LIST_ENTRY * );// Offset=0x18 Size=0x8
    long  ( * CompareKeyRoutine)(void * ,void * );// Offset=0x20 Size=0x8
    unsigned long  ( * HashKeyRoutine)(void * );// Offset=0x28 Size=0x8
};

enum _NVME_TRANSPORT_TYPE
{
    NvmeTransportTypeUnknown=0,
    NvmeTransportTypeRdma=1,
    NvmeTransportTypeFC=2,
    NvmeTransportTypeTcp=3,
    NvmeTransportTypeLoopback=254,
    NvmeTransportTypePcie=255
};

enum _NVME_INTERRUPT_MODE
{
    InterruptModeUnknown=0,
    InterruptModeLineBased=1,
    InterruptModeMsi=2,
    InterruptModeMsiX=3
};

struct _unnamed_481// Size=0x4 (Id=481)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long HealthEventsLogged:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long FailedFirstNvmeCloudSSDCommand:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long FailedFirstNvmeHealthLogCommand:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long Reserved:29;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1d
    };
};

union _unnamed_482// Size=0x4 (Id=482)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Locked:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Paused:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Reserved:30;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1e
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

union _NVME_CONTROLLER_STATE// Size=0x8 (Id=794)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Initialized:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long Stopped:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long PowerDown:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long Removed:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long InReset:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long NeedUpdateIdentifyControllerData:1;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x1
        unsigned long long UsageTypeHibernation:1;// Offset=0x0 Size=0x8 BitOffset=0x6 BitSize=0x1
        unsigned long long InWinPE:1;// Offset=0x0 Size=0x8 BitOffset=0x7 BitSize=0x1
        unsigned long long InNamespaceReenumeration:1;// Offset=0x0 Size=0x8 BitOffset=0x8 BitSize=0x1
        unsigned long long Reserved0:1;// Offset=0x0 Size=0x8 BitOffset=0x9 BitSize=0x1
        unsigned long long DisableActivateFirmwareWithoutReset:1;// Offset=0x0 Size=0x8 BitOffset=0xa BitSize=0x1
        unsigned long long InFirmwareDownloadCommit:1;// Offset=0x0 Size=0x8 BitOffset=0xb BitSize=0x1
        unsigned long long InLiveDumpCapture:1;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0x1
        unsigned long long ZNSCommandSetSupport:1;// Offset=0x0 Size=0x8 BitOffset=0xd BitSize=0x1
        unsigned long long RequiresIOCommandSetUpdate:1;// Offset=0x0 Size=0x8 BitOffset=0xe BitSize=0x1
        unsigned long long SurpriseRemoved:1;// Offset=0x0 Size=0x8 BitOffset=0xf BitSize=0x1
        unsigned long long FirmwareReplaceExistingImage:1;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x1
        unsigned long long ShutDownForPLDR:1;// Offset=0x0 Size=0x8 BitOffset=0x11 BitSize=0x1
        unsigned long long PanicRecoveryInProgress:1;// Offset=0x0 Size=0x8 BitOffset=0x12 BitSize=0x1
        unsigned long long ControllerResetInProgress:1;// Offset=0x0 Size=0x8 BitOffset=0x13 BitSize=0x1
        unsigned long long KSRInitiatedPowerDownSkipped:1;// Offset=0x0 Size=0x8 BitOffset=0x14 BitSize=0x1
        unsigned long long ControllerShutDownTimeout:1;// Offset=0x0 Size=0x8 BitOffset=0x15 BitSize=0x1
        unsigned long long ResetBusInProgress:1;// Offset=0x0 Size=0x8 BitOffset=0x16 BitSize=0x1
        unsigned long long AsyncResetInitiatedDueToFwActivate:1;// Offset=0x0 Size=0x8 BitOffset=0x17 BitSize=0x1
        unsigned long long IoQueuesDeleted:1;// Offset=0x0 Size=0x8 BitOffset=0x18 BitSize=0x1
        unsigned long long PoweringUp:1;// Offset=0x0 Size=0x8 BitOffset=0x19 BitSize=0x1
        unsigned long long PoweringDown:1;// Offset=0x0 Size=0x8 BitOffset=0x1a BitSize=0x1
        unsigned long long Reserved:37;// Offset=0x0 Size=0x8 BitOffset=0x1b BitSize=0x25
    };
    unsigned long long AsULONGLONG;// Offset=0x0 Size=0x8
};

enum _STORMQ_CONTROLLER_STATE
{
    ControllerStateAdded=0,
    ControllerStateInitializing=1,
    ControllerStateInitialized=2,
    ControllerStateRemoving=3,
    ControllerStateRemoved=4,
    ControllerStateInitializationFailed=5,
    MakeControllerStateTypeSizeOfLong=-1
};

union _unnamed_487// Size=0x4 (Id=487)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long InternalBufferInUse:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long NewNamespaceChangeDetected:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long ReenumerationInProgress:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long CommandTimeoutDetectInProgress:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long ControllerQuiesced:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long FatalTransportError:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long IsolatedCommandWorkitemQueued:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long AsyncControllerResetInProgress:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long Reserved:24;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x18
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
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

struct _unnamed_488// Size=0x8 (Id=488)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long WriteCacheEnabled:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long WriteCacheIsSet:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long WriteCachePersistOnDevice:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long Reserved0:61;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x3d
    };
};

struct _NVME_MEMORY_ADDRESS_PAIR// Size=0x10 (Id=966)
{
    void * VirtualAddress;// Offset=0x0 Size=0x8
    union _LARGE_INTEGER PhysicalAddress;// Offset=0x8 Size=0x8
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

enum _NVME_CONTROLLER_ERROR_STATE
{
    ErrorNone=0,
    ErrorAllocateUncachedExtension=1,
    ErrorGetMiniportDumpData=2,
    ErrorReadPciConfigData=3,
    ErrorMappingNVMeRegister=4,
    ErrorControllerReset=5,
    ErrorNvmReset=6,
    ErrorInitAdminQueueStructure=7,
    ErrorControllerEnable=8,
    ErrorGetProcessorGroupInfo=9,
    ErrorGetProcessorInfo=10,
    ErrorGetMsiInfo=11,
    ErrorSetIoQueueCount=12,
    ErrorIoQueueInit=13,
    ErrorIoQueueCreate=14,
    ErrorIoSubmissionQueueDelete=15,
    ErrorIoCompletionQueueDelete=16,
    ErrorReservedQueueInit=17,
    ErrorReservedQueueCreate=18,
    ErrorReservedSubmissionQueueDelete=19,
    ErrorReservedCompletionQueueDelete=20,
    ErrorInitializePerfOptions=21,
    ErrorIoSubmissionQueueCreate=22,
    ErrorIoCompletionQueueCreate=23,
    ErrorFirmwarePanic=24,
    ErrorFLRReset=25,
    ErrorIoSubmissionQueueCreateTimeout=26,
    ErrorIoCompletionQueueCreateTimeout=27,
    ErrorBusSpecificReset=28,
    ErrorPlatformLevelReset=29,
    ErrorControllerIdentify=30,
    ErrorCreatePendingIoQueueContext=31,
    ErrorIoQueueMapping=32,
    ErrorGetInterruptMessageInfo=33,
    ErrorStateKeepAliveExpired=34,
    ErrorStateTransportError=35,
    ErrorCreateSGLBufferPool=36,
    ErrorStoreSubsystemId=37,
    ErrorAllocateInternalBuffer=38,
    ErrorCommandTimeout=39,
    ErrorDisconnectQueueTransport=40,
    ErrorReconnectQueueTransport=41,
    ErrorReconnectAssociation=42,
    ErrorUpdateAssociation=43,
    ErrorStartControllerOperations=44,
    ErrorPowerDownOperations=45,
    ErrorPowerUpOperations=46,
    ErrorStopOperations=47,
    ErrorRemoveOperations=48
};

struct _NVME_FIRMWARE_ACTIVATE_RESET_CONTEXT// Size=0x28 (Id=832)
{
    struct _NVME_EXTENDED_COMMAND * ExtendedCommand;// Offset=0x0 Size=0x8
    void  ( * Callback)(struct _NVME_CONTROLLER * ,unsigned char ,void * );// Offset=0x8 Size=0x8
    void * CallbackContext;// Offset=0x10 Size=0x8
    unsigned char NvmReset;// Offset=0x18 Size=0x1
    struct _IO_WORKITEM * WorkItem;// Offset=0x20 Size=0x8
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

enum _NVME_CONTROLLER_RESET_REASON
{
    ControllerResetReasonUndefined=0,
    ControllerResetReasonNormalStart=1,
    ControllerResetReasonPowerUp=2,
    ControllerResetReasonTimeoutRecovery=3,
    ControllerResetReasonPanicRecovery=4,
    ControllerResetReasonFirmwareActivation=5,
    ControllerResetReasonAEN=6,
    ControllerResetMarkedUnresponsive=7
};

struct _unnamed_1018// Size=0x1 (Id=1018)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char MarkDeviceFailed:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Reserved:7;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x7
    };
};

struct _NVME_CONTROLLER_ASYNC_RESET_CONTEXT// Size=0x10 (Id=1019)
{
    struct _IO_WORKITEM * WorkItem;// Offset=0x0 Size=0x8
    enum _NVME_CONTROLLER_RESET_REASON ResetReason;// Offset=0x8 Size=0x4
    struct _unnamed_1018 Flags;// Offset=0xc Size=0x1
    unsigned char Reserved[3];// Offset=0xd Size=0x3
};

struct _NVME_CONTROLLER_QOS_SETTINGS// Size=0x10 (Id=910)
{
    unsigned long ResetUnresponsiveTimeoutIn500MS;// Offset=0x0 Size=0x4
    unsigned long ResetIntervalInMS;// Offset=0x4 Size=0x4
    unsigned long ResetTimeoutInSec;// Offset=0x8 Size=0x4
    unsigned long Reserved;// Offset=0xc Size=0x4
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

struct _NVME_CONTROLLER// Size=0x700 (Id=490)
{
    unsigned long Signature;// Offset=0x0 Size=0x4
    unsigned short ControllerId;// Offset=0x4 Size=0x2
    unsigned short MaxAdminQueueDepth;// Offset=0x6 Size=0x2
    unsigned long MaxIoQueueDepth;// Offset=0x8 Size=0x4
    unsigned long MaxIoSubmissionQueueCount;// Offset=0xc Size=0x4
    unsigned long MaxIoCompletionQueueCount;// Offset=0x10 Size=0x4
    unsigned short MaxIoQueueCount;// Offset=0x14 Size=0x2
    unsigned short IoSubmissionQueueCount;// Offset=0x16 Size=0x2
    unsigned short NamespaceCount;// Offset=0x18 Size=0x2
    unsigned short IoCompletionQueueCount;// Offset=0x1a Size=0x2
    unsigned short NextIoQueueIndexHint;// Offset=0x1c Size=0x2
    unsigned long PreferredNumaNode;// Offset=0x20 Size=0x4
    unsigned long long RcqAffinity;// Offset=0x28 Size=0x8
    unsigned long long ScqAffinity;// Offset=0x30 Size=0x8
    unsigned short TemperatureThreshold;// Offset=0x38 Size=0x2
    struct _LIST_ENTRY ListEntry;// Offset=0x40 Size=0x10
    struct _LIST_ENTRY AdapterListEntry;// Offset=0x50 Size=0x10
    struct _NVMEOF_SUBSYSTEMPORT_PROPERTIES * SubsystemPort;// Offset=0x60 Size=0x8
    struct _NVMEOF_TRANSPORT_ERROR_CONTEXT * TransportError;// Offset=0x68 Size=0x8
    struct _LIST_ENTRY StorMQAdapterListEntry;// Offset=0x70 Size=0x10
    struct _NVME_ADAPTER_EXTENSION * NvmeAdapter;// Offset=0x80 Size=0x8
    union _unnamed_476 Flags;// Offset=0x88 Size=0x8
    struct _IO_WORKITEM * BackgroundWorkItem;// Offset=0x90 Size=0x8
    struct _IO_WORKITEM * KeepAliveWorkItem;// Offset=0x98 Size=0x8
    struct _IO_WORKITEM * RebuildAssociationWorkItem;// Offset=0xa0 Size=0x8
    struct _IO_WORKITEM * TransportErrorWorkItem;// Offset=0xa8 Size=0x8
    struct _IO_WORKITEM * StorMQControllerStateWorkItem;// Offset=0xb0 Size=0x8
    struct _KEVENT BackgroundWorkWaitEvent;// Offset=0xb8 Size=0x18
    struct _KEVENT KeepAliveWorkWaitEvent;// Offset=0xd0 Size=0x18
    struct _KEVENT RebuildAssociationWorkWaitEvent;// Offset=0xe8 Size=0x18
    struct _KEVENT StopNamespacesEvent;// Offset=0x100 Size=0x18
    struct _KTIMER BackgroundWorkTimer;// Offset=0x118 Size=0x40
    struct _KDPC BackgroundWorkTimerDpc;// Offset=0x158 Size=0x40
    struct _KTIMER KeepAliveTimer;// Offset=0x198 Size=0x40
    struct _KDPC KeepAliveTimerDpc;// Offset=0x1d8 Size=0x40
    struct _STORAGE_REQUEST_BLOCK * KeepAliveSrbEx;// Offset=0x218 Size=0x8
    struct _STORAGE_REQUEST_BLOCK ** AsyncEventSrbEx;// Offset=0x220 Size=0x8
    struct _EX_RUNDOWN_REF_CACHE_AWARE * RundownProtection;// Offset=0x228 Size=0x8
    void * MiniportHandle;// Offset=0x230 Size=0x8
    enum _NVME_CONTROLLER_CONNECTION_STATE ConnectionState;// Offset=0x238 Size=0x4
    enum _NVME_CONTROLLER_TYPE Type;// Offset=0x23c Size=0x4
    union NVME_VERSION Version;// Offset=0x240 Size=0x4
    union NVME_CONTROLLER_CAPABILITIES Capabilities;// Offset=0x248 Size=0x8
    struct NVME_IDENTIFY_CONTROLLER_DATA * IdentifyControllerData;// Offset=0x250 Size=0x8
    struct NVME_IDENTIFY_NVM_SPECIFIC_CONTROLLER_IO_COMMAND_SET * NvmSpecificIdentifyController;// Offset=0x258 Size=0x8
    unsigned long * ChangedNamespaceList;// Offset=0x260 Size=0x8
    unsigned char PathId;// Offset=0x268 Size=0x1
    unsigned char TargetId;// Offset=0x269 Size=0x1
    unsigned short NvmSetCount;// Offset=0x26a Size=0x2
    unsigned long MaximumTransferLength;// Offset=0x26c Size=0x4
    struct NVME_SET_ATTRIBUTES_ENTRY * NvmSets;// Offset=0x270 Size=0x8
    struct _STOR_LOCKED_LIST NamespaceList;// Offset=0x278 Size=0x20
    struct _STOR_DICTIONARY NamespaceDictionary;// Offset=0x298 Size=0x30
    struct _NVME_SUBMISSION_QUEUE * AdminSubmissionQueue;// Offset=0x2c8 Size=0x8
    unsigned long long IoQueuesLock;// Offset=0x2d0 Size=0x8
    struct _NVME_SUBMISSION_QUEUE * IoSubmissionQueues;// Offset=0x2d8 Size=0x8
    unsigned short EventCount[3];// Offset=0x2e0 Size=0x6
    unsigned char AsyncEventCount;// Offset=0x2e6 Size=0x1
    enum _NVME_TRANSPORT_TYPE TransportType;// Offset=0x2e8 Size=0x4
    char * TransportAddress;// Offset=0x2f0 Size=0x8
    unsigned char TransportServiceId[32];// Offset=0x2f8 Size=0x20
    char * SubsystemId;// Offset=0x318 Size=0x8
    char ProductId[41];// Offset=0x320 Size=0x29
    char FirmwareRevision[9];// Offset=0x349 Size=0x9
    struct _NVME_COMPLETION_QUEUE * AdminCompletionQueue;// Offset=0x358 Size=0x8
    struct _NVME_COMPLETION_QUEUE * IoCompletionQueues;// Offset=0x360 Size=0x8
    unsigned short * ProcessorSQMappingTable;// Offset=0x368 Size=0x8
    struct _NVME_PRP_LIST_BUFFER_POOL ** PrpListBufferPool;// Offset=0x370 Size=0x8
    struct _STOR_SPLIT_IO_CONTEXT_POOL ** SplitIoContextPool;// Offset=0x378 Size=0x8
    struct _NVME_SGL_BUFFER_POOL ** SglBufferPool;// Offset=0x380 Size=0x8
    enum _NVME_INTERRUPT_MODE InterruptMode;// Offset=0x388 Size=0x4
    unsigned long InterruptMessageCount;// Offset=0x38c Size=0x4
    struct _NVME_INTERRUPT_MESSAGE_INFO * InterruptMessageInfo;// Offset=0x390 Size=0x8
    struct NVME_CONTROLLER_REGISTERS * NVMeRegisters;// Offset=0x398 Size=0x8
    unsigned long long NVMeBAR;// Offset=0x3a0 Size=0x8
    struct _unnamed_481 TelemetryFlags;// Offset=0x3a8 Size=0x4
    unsigned short VendorID;// Offset=0x3ac Size=0x2
    unsigned short DeviceID;// Offset=0x3ae Size=0x2
    unsigned char RevisionID;// Offset=0x3b0 Size=0x1
    unsigned char OCPVersion;// Offset=0x3b1 Size=0x1
    unsigned char CriticalWarning;// Offset=0x3b2 Size=0x1
    unsigned char DeviceHealthPollCount;// Offset=0x3b3 Size=0x1
    union _unnamed_482 QueueState;// Offset=0x3b4 Size=0x4
    unsigned long IoPendingHint;// Offset=0x3b8 Size=0x4
    unsigned long CommandPendingHint;// Offset=0x3bc Size=0x4
    unsigned long NVMCommandPendingHint;// Offset=0x3c0 Size=0x4
    union _NVME_CONTROLLER_STATE State;// Offset=0x3c8 Size=0x8
    enum _STORMQ_CONTROLLER_STATE StorMQControllerState;// Offset=0x3d0 Size=0x4
    struct _STOR_DEVICE_QUEUE * CommandQueue;// Offset=0x400 Size=0x8
    struct _IO_WORKITEM * RefillCommandQueueWorkitem;// Offset=0x408 Size=0x8
    struct _IO_WORKITEM * IsolatedCommandWorkitem;// Offset=0x410 Size=0x8
    struct _NVME_REGISTRY_VALUES * RegistryValues;// Offset=0x418 Size=0x8
    struct NVME_UUID_LIST * IdentifyControllerUUIDList;// Offset=0x420 Size=0x8
    struct NVM_SET_LIST * NvmSetAttributeList;// Offset=0x428 Size=0x8
    union _unnamed_487 InterlockedFlags;// Offset=0x430 Size=0x4
    unsigned long KeepAliveTimeout;// Offset=0x434 Size=0x4
    union _LARGE_INTEGER LastKeepAliveSendTime;// Offset=0x438 Size=0x8
    union _LARGE_INTEGER LastKeepAliveReplyTime;// Offset=0x440 Size=0x8
    struct _unnamed_488 PersistSettings;// Offset=0x448 Size=0x8
    struct _STOR_PENDING_IO_QUEUE_CONTEXT ** PendingIoQueuesContext;// Offset=0x450 Size=0x8
    struct _NVME_MEMORY_ADDRESS_PAIR InternalBuffer;// Offset=0x458 Size=0x10
    union _SLIST_HEADER ExtendedCommandList;// Offset=0x470 Size=0x10
    union _SLIST_HEADER ExtendedZombieCommandToDeleteList;// Offset=0x480 Size=0x10
    union _SLIST_HEADER ExtendedAdminCommandZombieList;// Offset=0x490 Size=0x10
    union _SLIST_HEADER * ExtendedNVMCommandZombieLists;// Offset=0x4a0 Size=0x8
    enum _NVME_CONTROLLER_ERROR_STATE ErrorState;// Offset=0x4a8 Size=0x4
    struct _NVME_HOST_MEMORY_BUFFER * HostMemoryBuffer;// Offset=0x4b0 Size=0x8
    struct _NVME_STREAMS * Streams;// Offset=0x4b8 Size=0x8
    unsigned long NVMeDoorBellSize;// Offset=0x4c0 Size=0x4
    unsigned long ControllerReadyTimeout;// Offset=0x4c4 Size=0x4
    unsigned long AsyncEventMask;// Offset=0x4c8 Size=0x4
    unsigned char DeviceGone;// Offset=0x4cc Size=0x1
    unsigned char Reserved2[3];// Offset=0x4cd Size=0x3
    struct NVME_COMMAND_EFFECTS_LOG * CommandEffectsLog;// Offset=0x4d0 Size=0x8
    struct _NVME_WCS_DEVICE_ERROR_RECOVERY_LOG * CloudSSDErrorRecoveryLog;// Offset=0x4d8 Size=0x8
    struct NVME_SUPPORTED_LOG_PAGES_LOG * SupportedLogPagesLog;// Offset=0x4e0 Size=0x8
    struct NVME_FEATURE_IDENTIFIERS_EFFECTS_LOG * FeatureIdentifiersSupportedLog;// Offset=0x4e8 Size=0x8
    struct NVME_HEALTH_INFO_LOG * HealthInfoLog;// Offset=0x4f0 Size=0x8
    struct _NVME_CLOUD_SSD_LOG * CloudSSDLog;// Offset=0x4f8 Size=0x8
    struct _NVME_HOST_IDENTIFIER * HostIdentifier;// Offset=0x500 Size=0x8
    struct _NVME_CONTROLLER_ERROR_RECOVERY * ErrorRecovery;// Offset=0x508 Size=0x8
    struct _NVME_FIRMWARE_ACTIVATE_RESET_CONTEXT FirmwareActivateContext;// Offset=0x510 Size=0x28
    struct _unnamed_466 DbgLogConfig;// Offset=0x538 Size=0x4
    unsigned long DbgLogListCount;// Offset=0x53c Size=0x4
    unsigned long DbgLogListEntryCount;// Offset=0x540 Size=0x4
    struct _NVME_DBG_LOG_CONTROL DbgLogControl;// Offset=0x548 Size=0x10
    struct _NVME_DBG_LOG_LIST ** DbgLogLists;// Offset=0x558 Size=0x8
    unsigned long DbgLogListGlobalIndex;// Offset=0x580 Size=0x4
    struct _NVME_ASYNC_EVENT_CONTEXT * AsyncEventContext;// Offset=0x588 Size=0x8
    struct _NVME_CONTROLLER_ASYNC_RESET_CONTEXT AsyncControllerResetContext;// Offset=0x590 Size=0x10
    struct _NVME_CONTROLLER_QOS_SETTINGS QosSettings;// Offset=0x5a0 Size=0x10
    struct _ERESOURCE DiscoveryListSwapLock;// Offset=0x5b0 Size=0x68
    unsigned long long LastDiscoveryGeneration;// Offset=0x618 Size=0x8
    unsigned long long LastDiscoveryCount;// Offset=0x620 Size=0x8
    struct _LIST_ENTRY LastDiscoveryList;// Offset=0x628 Size=0x10
    unsigned long long CurrentDiscoveryGeneration;// Offset=0x638 Size=0x8
    unsigned long long CurrentDiscoveryCount;// Offset=0x640 Size=0x8
    struct _LIST_ENTRY CurrentDiscoveryList;// Offset=0x648 Size=0x10
    struct _RAID_MEMORY_REGION InternalBufferAllocation;// Offset=0x658 Size=0x18
    struct _NVME_STORMQ_CONTROLLER_EXTENSION * StorMQExtension;// Offset=0x670 Size=0x8
    struct _NVME_CONTROLLER_ENUMERATION_CONTEXT * EnumContext;// Offset=0x678 Size=0x8
    struct _NVME_AUTHKEY_ENTRY * HostAuthKey;// Offset=0x680 Size=0x8
    struct _NVME_AUTHKEY_ENTRY * SubsystemAuthKey;// Offset=0x688 Size=0x8
    unsigned short AuthTransactionId;// Offset=0x690 Size=0x2
    unsigned short Reserved3;// Offset=0x692 Size=0x2
    unsigned long AuthSequenceNumber;// Offset=0x694 Size=0x4
    unsigned char StorMQMiniport;// Offset=0x6c0 Size=0x1
    unsigned char PopulatePrp;// Offset=0x6c1 Size=0x1
    unsigned char SplitIoBatchCountLimit;// Offset=0x6c2 Size=0x1
    unsigned char Reserved4[5];// Offset=0x6c3 Size=0x5
    struct _NVME_CONTROLLER_POLLING_CONTEXT * Polling;// Offset=0x6c8 Size=0x8
};
