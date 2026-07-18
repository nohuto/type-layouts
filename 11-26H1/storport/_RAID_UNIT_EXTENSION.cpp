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

struct _LIST_ENTRY// Size=0x10 (Id=5)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _STOR_ADDR_BTL8// Size=0x10 (Id=371)
{
    unsigned short Type;// Offset=0x0 Size=0x2
    unsigned short Port;// Offset=0x2 Size=0x2
    unsigned long AddressLength;// Offset=0x4 Size=0x4
    unsigned char Path;// Offset=0x8 Size=0x1
    unsigned char Target;// Offset=0x9 Size=0x1
    unsigned char Lun;// Offset=0xa Size=0x1
    unsigned char Reserved;// Offset=0xb Size=0x1
};

union _RAID_ADDRESS// Size=0x4 (Id=338)
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

struct _STRING// Size=0x10 (Id=8)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    char * Buffer;// Offset=0x8 Size=0x8
};

struct _unnamed_339// Size=0x2 (Id=339)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short Supports1667:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short ZonedDevice:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short ZNSDevice:1;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0x1
        unsigned short Reserved:13;// Offset=0x0 Size=0x2 BitOffset=0x3 BitSize=0xd
    };
};

struct _STOR_IDENTITY// Size=0x38 (Id=340)
{
    struct _INQUIRYDATA * InquiryData;// Offset=0x0 Size=0x8
    struct _STRING SerialNumber;// Offset=0x8 Size=0x10
    struct _unnamed_339 Flags;// Offset=0x18 Size=0x2
    struct _VPD_IDENTIFICATION_PAGE * DeviceId;// Offset=0x20 Size=0x8
    struct _STOR_ATA_DEVICE_ID * AtaDeviceId;// Offset=0x28 Size=0x8
    struct _STOR_RICH_DEVICE_DESCRIPTION * RichDeviceDescription;// Offset=0x30 Size=0x8
};

union _unnamed_436// Size=0x8 (Id=436)
{
    union // Size=0x8 (Id=0)
    {
        struct // Size=0x8 (Id=0)
        {
            unsigned char DeviceClaimed:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char Enumerated:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char Present:1;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x1
            unsigned char Temporary:1;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x1
            unsigned char WmiInitialized:1;// Offset=0x0 Size=0x1 BitOffset=0x4 BitSize=0x1
            unsigned char Zombie:1;// Offset=0x0 Size=0x1 BitOffset=0x5 BitSize=0x1
            unsigned char RescanNeeded:1;// Offset=0x0 Size=0x1 BitOffset=0x6 BitSize=0x1
            unsigned char PoweringUp:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
            unsigned char PoweringDown:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char D3ColdSupported:1;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char D3ColdEnabled:1;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x1
            unsigned char UnusedBit:1;// Offset=0x1 Size=0x1 BitOffset=0x3 BitSize=0x1
            unsigned char DeviceInitialized:1;// Offset=0x1 Size=0x1 BitOffset=0x4 BitSize=0x1
            unsigned char DisabledPendingTimer:1;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x1
            unsigned char DumpActiveNotCapable:1;// Offset=0x1 Size=0x1 BitOffset=0x6 BitSize=0x1
            unsigned char RegisteredForPoFx:1;// Offset=0x1 Size=0x1 BitOffset=0x7 BitSize=0x1
            unsigned char BootUnit:1;// Offset=0x2 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char Unresponsive:1;// Offset=0x2 Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char DumpAlwaysPowerOn:1;// Offset=0x2 Size=0x1 BitOffset=0x2 BitSize=0x1
            unsigned char VmLunInterfaceState:1;// Offset=0x2 Size=0x1 BitOffset=0x3 BitSize=0x1
            unsigned char SupportsAtaInformation:1;// Offset=0x2 Size=0x1 BitOffset=0x4 BitSize=0x1
            unsigned char DeviceFailed:1;// Offset=0x2 Size=0x1 BitOffset=0x5 BitSize=0x1
            unsigned char Removable:1;// Offset=0x2 Size=0x1 BitOffset=0x6 BitSize=0x1
            unsigned char SurpriseRemovalOK:1;// Offset=0x2 Size=0x1 BitOffset=0x7 BitSize=0x1
            unsigned char SMRResourceFailed:1;// Offset=0x3 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char DFxPowerDownActive:1;// Offset=0x3 Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char DFxPoNotifiedAdaptiveD3Engaged:1;// Offset=0x3 Size=0x1 BitOffset=0x2 BitSize=0x1
            unsigned char DeviceFailureReportedToWHEA:1;// Offset=0x3 Size=0x1 BitOffset=0x3 BitSize=0x1
            unsigned char IoSizeDistributionEnabled:1;// Offset=0x3 Size=0x1 BitOffset=0x4 BitSize=0x1
            unsigned char DisableRuntimePowerBypassPoFx:1;// Offset=0x3 Size=0x1 BitOffset=0x5 BitSize=0x1
            unsigned char TcgConfigurationInvalid:1;// Offset=0x3 Size=0x1 BitOffset=0x6 BitSize=0x1
            unsigned long Reserved:1;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x1
        };
        unsigned long AsUlong;// Offset=0x0 Size=0x4
    };
};

union _unnamed_437// Size=0x4 (Id=437)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long PoFxRegistrationPending:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long PowerCycleCountSavePending:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long PendingTimerEnabled:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long TcgOperationInProgress:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long PoweredDownForPLDR:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long RequestD0ForPLDRInProgress:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long RequestD3ForPLDRInProgress:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long RemoveLockHeldDueToPowerUp:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long ReadCapacityLock:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long Reserved:23;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x17
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
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

struct _RAID_POWER_STATE// Size=0x10 (Id=588)
{
    enum _SYSTEM_POWER_STATE SystemState;// Offset=0x0 Size=0x4
    enum _DEVICE_POWER_STATE DeviceState;// Offset=0x4 Size=0x4
    enum POWER_ACTION PowerAction;// Offset=0x8 Size=0x4
    unsigned char SystemPoweringDown;// Offset=0xc Size=0x1
};

struct _QUEUE_TAG_LIST// Size=0x80 (Id=450)
{
    struct _QUEUE_TAG_LIST_HEADER * Header;// Offset=0x0 Size=0x8
    struct _QUEUE_TAG_ENTRY * Buffer;// Offset=0x40 Size=0x8
    unsigned long TagsPerNode;// Offset=0x48 Size=0x4
};

struct _EX_RUNDOWN_REF// Size=0x8 (Id=1173)
{
    union // Size=0x8 (Id=0)
    {
        unsigned long long Count;// Offset=0x0 Size=0x8
        void * Ptr;// Offset=0x0 Size=0x8
    };
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

struct _EXTENDED_DEVICE_QUEUE// Size=0xc0 (Id=353)
{
    short Type;// Offset=0x0 Size=0x2
    short Size;// Offset=0x2 Size=0x2
    long Depth;// Offset=0x4 Size=0x4
    struct _STOR_IO_GATEWAY * Gateway;// Offset=0x8 Size=0x8
    long ByPassCount;// Offset=0x10 Size=0x4
    long ByPassPowerCount;// Offset=0x14 Size=0x4
    long PauseCount;// Offset=0x18 Size=0x4
    long BusyCount;// Offset=0x1c Size=0x4
    long QueuedSlowPathRequests;// Offset=0x20 Size=0x4
    unsigned char Frozen;// Offset=0x24 Size=0x1
    unsigned char Locked;// Offset=0x25 Size=0x1
    unsigned char Untagged;// Offset=0x26 Size=0x1
    unsigned char PowerLocked;// Offset=0x27 Size=0x1
    unsigned long QuiescenceClients;// Offset=0x28 Size=0x4
    struct _KEVENT QuiescenceEvent;// Offset=0x30 Size=0x18
    long RWLock;// Offset=0x48 Size=0x4
    struct _EX_RUNDOWN_REF Rundown;// Offset=0x50 Size=0x8
    long long RequestCounts;// Offset=0x58 Size=0x8
    union _SLIST_HEADER DeviceInsertList;// Offset=0x60 Size=0x10
    union _SLIST_HEADER DeviceRemoveList;// Offset=0x70 Size=0x10
    struct _LIST_ENTRY DeviceOverflowList;// Offset=0x80 Size=0x10
    struct _LIST_ENTRY ByPassList;// Offset=0x90 Size=0x10
    struct _LIST_ENTRY QosReqList;// Offset=0xa0 Size=0x10
    unsigned long ZoneWriteOverflowEntries;// Offset=0xb0 Size=0x4
    long PeriodicMaxDeviceCount;// Offset=0xb4 Size=0x4
    long PeriodicMaxOutstandingCount;// Offset=0xb8 Size=0x4
};

struct _IO_QUEUE// Size=0xe0 (Id=352)
{
    struct _DEVICE_OBJECT * DeviceObject;// Offset=0x0 Size=0x8
    void  ( * StartIo)(struct _DEVICE_OBJECT * ,struct _IRP * ,void * ,unsigned char );// Offset=0x8 Size=0x8
    struct _EXTENDED_DEVICE_QUEUE DeviceQueue;// Offset=0x10 Size=0xc0
    unsigned long QueueChanged;// Offset=0xd0 Size=0x4
};

enum _STORAGE_POWERUP_REASON_TYPE
{
    StoragePowerupUnknown=0,
    StoragePowerupIO=1,
    StoragePowerupDeviceAttention=2
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

struct _SLIST_ENTRY// Size=0x10 (Id=449)
{
    struct _SLIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _RAID_DEFERRED_HEADER// Size=0x20 (Id=1028)
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

struct _unnamed_879// Size=0x10 (Id=879)
{
    void  ( * HwTimerRoutine)(void * );// Offset=0x0 Size=0x8
    unsigned long Timeout;// Offset=0x8 Size=0x4
};

struct _unnamed_880// Size=0x20 (Id=880)
{
    struct _SCSI_REQUEST_BLOCK * Srb;// Offset=0x0 Size=0x8
    unsigned long ErrorCode;// Offset=0x8 Size=0x4
    unsigned long UniqueId;// Offset=0xc Size=0x4
    unsigned char FreeErrorInfo[16];// Offset=0x10 Size=0x10
};

struct _unnamed_881// Size=0x4 (Id=881)
{
    unsigned long Timeout;// Offset=0x0 Size=0x4
};

struct _unnamed_882// Size=0x4 (Id=882)
{
    unsigned long RequestsToComplete;// Offset=0x0 Size=0x4
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

struct _unnamed_883// Size=0x18 (Id=883)
{
    struct _STOR_TIMER_CONTEXT * StorTimer;// Offset=0x0 Size=0x8
    union _LARGE_INTEGER Timeout;// Offset=0x8 Size=0x8
    unsigned long TolerableDelay;// Offset=0x10 Size=0x4
};

struct _unnamed_884// Size=0x8 (Id=884)
{
    struct _STOR_ASYNC_NOTIFY_CONTEXT * StorAsyncNotify;// Offset=0x0 Size=0x8
};

struct _RAID_DEFERRED_ELEMENT// Size=0x50 (Id=885)
{
    struct _RAID_DEFERRED_HEADER Header;// Offset=0x0 Size=0x20
    enum _RAID_DEFERRED_TYPE Type;// Offset=0x20 Size=0x4
    union _RAID_ADDRESS Address;// Offset=0x24 Size=0x4
    union // Size=0x48 (Id=0)
    {
        struct _unnamed_879 Timer;// Offset=0x28 Size=0x10
        struct _unnamed_880 Error;// Offset=0x28 Size=0x20
        struct _unnamed_881 PauseDevice;// Offset=0x28 Size=0x4
        struct _unnamed_882 Busy;// Offset=0x28 Size=0x4
        struct _unnamed_882 DeviceBusy;// Offset=0x28 Size=0x4
        struct _unnamed_883 AdditionalTimer;// Offset=0x28 Size=0x18
        struct _unnamed_884 AsyncNotification;// Offset=0x28 Size=0x8
    };
};

struct _unnamed_439// Size=0x190 (Id=439)
{
    struct _RAID_DEFERRED_ELEMENT PauseDevice;// Offset=0x0 Size=0x50
    struct _RAID_DEFERRED_ELEMENT ResumeDevice;// Offset=0x50 Size=0x50
    struct _RAID_DEFERRED_ELEMENT DeviceBusy;// Offset=0xa0 Size=0x50
    struct _RAID_DEFERRED_ELEMENT DeviceReady;// Offset=0xf0 Size=0x50
    struct _RAID_DEFERRED_ELEMENT AsyncNotification;// Offset=0x140 Size=0x50
};

struct _RAID_IO_RESOURCES// Size=0x20 (Id=446)
{
    unsigned long QueueTag;// Offset=0x0 Size=0x4
    void * SrbExtension;// Offset=0x8 Size=0x8
    struct _EXTENDED_REQUEST_BLOCK * Xrb;// Offset=0x10 Size=0x8
    void * SenseInfo;// Offset=0x18 Size=0x8
};

struct _RAID_UNIT_REGISTRY_PARAMETERS// Size=0x18 (Id=873)
{
    unsigned long BusyRetryCount;// Offset=0x0 Size=0x4
    unsigned long QueueFullWaitIoPercentage;// Offset=0x4 Size=0x4
    unsigned long BusyPauseTime;// Offset=0x8 Size=0x4
    unsigned long EnableLogoETW;// Offset=0xc Size=0x4
    unsigned long DisableIdlePowerManagement;// Offset=0x10 Size=0x4
    unsigned long MinimumIdleTimeoutInMS;// Offset=0x14 Size=0x4
};

struct _RAID_UNIT_ATTRIBUTES// Size=0x4 (Id=1186)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long VmPassThroughLun:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long DeviceAttentionSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long AsyncNotificationSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long D3ColdNotSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long DefaultWriteCacheEnabled:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long ZnsNvmeDrive:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long BypassIOSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long Reserved:25;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x19
    };
};

struct _UNICODE_STRING// Size=0x10 (Id=619)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _RAID_WORK_ITEM_CONTEXT// Size=0x10 (Id=985)
{
    struct _IO_WORKITEM * WorkItem;// Offset=0x0 Size=0x8
    struct _IRP * Irp;// Offset=0x8 Size=0x8
};

struct _STOR_ASYNC_NOTIFY_CONTEXT// Size=0x18 (Id=899)
{
    struct _IO_WORKITEM * WorkItem;// Offset=0x0 Size=0x8
    unsigned long long Flags;// Offset=0x8 Size=0x8
    unsigned long InUse;// Offset=0x10 Size=0x4
};

struct _RAID_SHARED_WORK_ITEM_CONTEXT// Size=0x18 (Id=1093)
{
    struct _IO_WORKITEM * WorkItem;// Offset=0x0 Size=0x8
    struct _IRP * Irp;// Offset=0x8 Size=0x8
    unsigned long InUse;// Offset=0x10 Size=0x4
};

struct _unnamed_440// Size=0x10 (Id=440)
{
    unsigned char FStateTransition;// Offset=0x0 Size=0x1
    unsigned char DStateTransition;// Offset=0x1 Size=0x1
    unsigned long FState;// Offset=0x4 Size=0x4
    struct _IRP * PowerIrp;// Offset=0x8 Size=0x8
};

struct _GUID// Size=0x10 (Id=756)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _unnamed_855// Size=0x4 (Id=855)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long DeviceHealthEventsLogged:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long FailedFirstSMARTCommand:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long FailedFirstDeviceStatisticsLogCommand:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long FailedFirstNvmeCloudSSDCommand:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long FailedFirstGetSupportedLogPagesCommand:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long SmartPredictFailure:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long Reserved:26;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1a
    };
};

struct _TELEMETRY_UNIT_EXTENSION// Size=0x8 (Id=856)
{
    struct _unnamed_855 Flags;// Offset=0x0 Size=0x4
    unsigned char NvmeCriticalWarning;// Offset=0x4 Size=0x1
    unsigned char DeviceHealthPollCount;// Offset=0x5 Size=0x1
};

struct _RAID_TELEMETRY_CPU_COUNTERS// Size=0x20 (Id=759)
{
    unsigned long long MaxReadWriteLatency;// Offset=0x0 Size=0x8
    unsigned long long TotalReadBytes;// Offset=0x8 Size=0x8
    unsigned long long TotalWriteBytes;// Offset=0x10 Size=0x8
    unsigned long long TotalStreamWriteBytes;// Offset=0x18 Size=0x8
};

union _unnamed_1153// Size=0x4 (Id=1153)
{
    unsigned long Quantity;// Offset=0x0 Size=0x4
    unsigned long Position;// Offset=0x0 Size=0x4
};

struct _RAID_TELEMETRY_ERROR_ENTRY// Size=0x28 (Id=1154)
{
    unsigned char SrbStatus;// Offset=0x0 Size=0x1
    unsigned char ScsiStatus;// Offset=0x1 Size=0x1
    unsigned char SenseKey;// Offset=0x2 Size=0x1
    unsigned char AdditionalSenseCode;// Offset=0x3 Size=0x1
    unsigned char AdditionalSenseCodeQualifier;// Offset=0x4 Size=0x1
    unsigned char CdbOpCode;// Offset=0x5 Size=0x1
    unsigned char Reserved1[2];// Offset=0x6 Size=0x2
    unsigned long IoSize;// Offset=0x8 Size=0x4
    unsigned long IoLatency;// Offset=0xc Size=0x4
    unsigned long WaitDuration;// Offset=0x10 Size=0x4
    unsigned long QueueDepth;// Offset=0x14 Size=0x4
    unsigned long long LBA;// Offset=0x18 Size=0x8
    union _unnamed_1153 u;// Offset=0x20 Size=0x4
};

struct _RAID_TELEMETRY_SAMPLED_ERROR_LOG// Size=0x1c8 (Id=1200)
{
    unsigned long TotalErrors;// Offset=0x0 Size=0x4
    unsigned long TotalReadWriteErrors;// Offset=0x4 Size=0x4
    unsigned long TotalStRtlImpendingDeviceFailureErrors;// Offset=0x8 Size=0x4
    unsigned long TotalStRtlTotalDeviceFailureErrors;// Offset=0xc Size=0x4
    struct _RAID_TELEMETRY_ERROR_ENTRY LastError;// Offset=0x10 Size=0x28
    struct _RAID_TELEMETRY_ERROR_ENTRY SampledErrors[10];// Offset=0x38 Size=0x190
};

struct _RAID_TELEMETRY_UNIQUE_ERROR_LOG// Size=0x190 (Id=1086)
{
    struct _RAID_TELEMETRY_ERROR_ENTRY UniqueErrors[10];// Offset=0x0 Size=0x190
};

struct _RAID_UNIT_QOS// Size=0x30 (Id=1359)
{
    unsigned char Enabled;// Offset=0x0 Size=0x1
    unsigned long RetryCount;// Offset=0x4 Size=0x4
    unsigned long ResetUnresponsiveTimeoutIn500MS;// Offset=0x8 Size=0x4
    unsigned long ResetInterval;// Offset=0xc Size=0x4
    unsigned long HwTimeoutInSec;// Offset=0x10 Size=0x4
    unsigned long ResetTimeoutInSec;// Offset=0x14 Size=0x4
    unsigned long MaxWaitTimeIn500MS;// Offset=0x18 Size=0x4
    unsigned char TimerSettingChangeNeeded;// Offset=0x1c Size=0x1
    long AdapterWaitTimeoutCheckEnabled;// Offset=0x20 Size=0x4
    unsigned long long QosThresholdIn100NS;// Offset=0x28 Size=0x8
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

struct _RTL_BITMAP// Size=0x10 (Id=14)
{
    unsigned long SizeOfBitMap;// Offset=0x0 Size=0x4
    unsigned long * Buffer;// Offset=0x8 Size=0x8
};

struct _unnamed_441// Size=0xc (Id=441)
{
    unsigned long ZoneLbaOutofBoundary;// Offset=0x0 Size=0x4
    unsigned long ZoneIndexOutofBoundray;// Offset=0x4 Size=0x4
    unsigned long ZoneDeviceNullSrbIoRequestCount;// Offset=0x8 Size=0x4
};

struct _unnamed_442// Size=0x4 (Id=442)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long ZonePendingIoTableInitialized:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long ZoneSizeInvalid:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Reserved:30;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1e
    };
};

struct _unnamed_422// Size=0x20 (Id=422)
{
    struct _LIST_ENTRY List;// Offset=0x0 Size=0x10
    unsigned long Count;// Offset=0x10 Size=0x4
    unsigned long long Lock;// Offset=0x18 Size=0x8
};

struct _unnamed_425// Size=0x4 (Id=425)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long KsrPowerDownInProgress:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved:31;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1f
    };
};

struct _unnamed_444// Size=0x10 (Id=444)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Initialized:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Initialized16:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long ErrorCount:16;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x10
        unsigned long Reserved:14;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0xe
    };
    unsigned long InvalidBytesPerBlock;// Offset=0x4 Size=0x4
    unsigned long long InvalidLogicalBlockAddress;// Offset=0x8 Size=0x8
};

struct _RAID_UNIT_EXTENSION// Size=0xe40 (Id=445)
{
    enum _RAID_OBJECT_TYPE ObjectType;// Offset=0x0 Size=0x4
    struct _DEVICE_OBJECT * DeviceObject;// Offset=0x8 Size=0x8
    void * UnitExtension;// Offset=0x10 Size=0x8
    struct _RAID_ADAPTER_EXTENSION * Adapter;// Offset=0x18 Size=0x8
    struct _UNIT_FORWARD_IO * ForwardIo;// Offset=0x20 Size=0x8
    struct _RAID_UNIT_EXTENSION_PER_PROCESSOR * PerProcessorData;// Offset=0x28 Size=0x8
    unsigned long long SlowLock;// Offset=0x30 Size=0x8
    enum _DEVICE_STATE DeviceState;// Offset=0x38 Size=0x4
    struct _LIST_ENTRY NextUnit;// Offset=0x40 Size=0x10
    struct _LIST_ENTRY UnitTableLink;// Offset=0x50 Size=0x10
    union // Size=0x10 (Id=0)
    {
        struct _STOR_ADDR_BTL8 StorAddressBTL8;// Offset=0x60 Size=0x10
        unsigned short AddressType;// Offset=0x60 Size=0x2
    };
    unsigned short AddressPort;// Offset=0x62 Size=0x2
    unsigned long AddressLength;// Offset=0x64 Size=0x4
    union _RAID_ADDRESS Address;// Offset=0x68 Size=0x4
    struct _STOR_IDENTITY Identity;// Offset=0x70 Size=0x38
    unsigned char VendorId[9];// Offset=0xa8 Size=0x9
    unsigned char ProductId[65];// Offset=0xb1 Size=0x41
    unsigned char SerialNumber[256];// Offset=0xf2 Size=0x100
    unsigned char ProductRevision[5];// Offset=0x1f2 Size=0x5
    union _unnamed_436 Flags;// Offset=0x1f8 Size=0x8
    union _unnamed_437 InterlockedFlags;// Offset=0x200 Size=0x4
    struct _KEVENT ZeroOutstandingEvent;// Offset=0x208 Size=0x18
    struct _RAID_POWER_STATE Power;// Offset=0x220 Size=0x10
    struct _STOR_EVENT_QUEUE * PendingQueue;// Offset=0x230 Size=0x8
    struct _QUEUE_TAG_LIST TagList;// Offset=0x240 Size=0x80
    struct _IO_QUEUE IoQueue;// Offset=0x2c0 Size=0xe0
    unsigned long MaxQueueDepth;// Offset=0x3a0 Size=0x4
    unsigned long LogicalSectorSize;// Offset=0x3a4 Size=0x4
    enum _STORAGE_POWERUP_REASON_TYPE PowerupReason;// Offset=0x3a8 Size=0x4
    struct ACPI_INTERFACE_STANDARD2 AcpiInterface;// Offset=0x3b0 Size=0x58
    long OutstandingCount;// Offset=0x408 Size=0x4
    unsigned long PagingPathCount;// Offset=0x40c Size=0x4
    unsigned long CrashDumpPathCount;// Offset=0x410 Size=0x4
    unsigned long HiberPathCount;// Offset=0x414 Size=0x4
    unsigned long InlineCryptoEnginePathCount;// Offset=0x418 Size=0x4
    struct _KTIMER PendingTimer;// Offset=0x420 Size=0x40
    struct _KDPC PendingDpc;// Offset=0x460 Size=0x40
    struct _KTIMER PauseTimer;// Offset=0x4a0 Size=0x40
    struct _KDPC PauseTimerDpc;// Offset=0x4e0 Size=0x40
    struct _KDPC RestartDpc;// Offset=0x520 Size=0x40
    struct _RAID_MEMORY_REGION * CommonBufferVAs;// Offset=0x560 Size=0x8
    unsigned long CommonBufferSize;// Offset=0x568 Size=0x4
    unsigned long CommonBufferBlocks;// Offset=0x56c Size=0x4
    unsigned long DefaultTimeout;// Offset=0x570 Size=0x4
    long OutstandingResetCount;// Offset=0x574 Size=0x4
    unsigned long HierarchicalResetSuccessCount;// Offset=0x578 Size=0x4
    unsigned long long LastHierarchicalResetEndTime;// Offset=0x580 Size=0x8
    struct _unnamed_439 DeferredList;// Offset=0x590 Size=0x190
    struct _RAID_IO_RESOURCES ResetResources;// Offset=0x720 Size=0x20
    long ResetResourcesAcquired;// Offset=0x740 Size=0x4
    unsigned char SenseInfoSize;// Offset=0x744 Size=0x1
    unsigned char CallFreeDumpPtrSRB;// Offset=0x745 Size=0x1
    unsigned char DumpPowerReady;// Offset=0x746 Size=0x1
    unsigned char StackDumpPowerReady;// Offset=0x747 Size=0x1
    struct _EX_RUNDOWN_REF_CACHE_AWARE * PoFxRundownProtection;// Offset=0x748 Size=0x8
    struct _RAID_UNIT_POFX * PoFx;// Offset=0x750 Size=0x8
    struct _D3COLD_SUPPORT_INTERFACE * D3ColdInterface;// Offset=0x758 Size=0x8
    long PowerUpRequired;// Offset=0x760 Size=0x4
    long PowerDownRequired;// Offset=0x764 Size=0x4
    struct _IO_WORKITEM * HierarchicalResetWorkItem;// Offset=0x768 Size=0x8
    long HierarchicalResetWorkItemTimeoutCountdown;// Offset=0x770 Size=0x4
    long HierarchicalResetSrbTimeoutCountdown;// Offset=0x774 Size=0x4
    unsigned long HierarchicalResetAbortCount;// Offset=0x778 Size=0x4
    unsigned long long HierarchicalResetWorkItemSpinLock;// Offset=0x780 Size=0x8
    struct _RAID_UNIT_REGISTRY_PARAMETERS RegistryParameters;// Offset=0x788 Size=0x18
    struct _RAID_UNIT_ATTRIBUTES UnitAttributes;// Offset=0x7a0 Size=0x4
    struct _UNICODE_STRING VmLunPnpInterfaceName;// Offset=0x7a8 Size=0x10
    struct _RAID_WORK_ITEM_CONTEXT QuiesceDeviceWorkItem;// Offset=0x7b8 Size=0x10
    struct _STOR_ASYNC_NOTIFY_CONTEXT StorAsyncNotify;// Offset=0x7c8 Size=0x18
    struct _RAID_SHARED_WORK_ITEM_CONTEXT PowerWorkItem;// Offset=0x7e0 Size=0x18
    struct _unnamed_440 PendingPowerUpContext;// Offset=0x7f8 Size=0x10
    struct _SLIST_ENTRY PendingPowerUpListEntry;// Offset=0x810 Size=0x10
    struct _UNICODE_STRING SesPnpInterfaceName;// Offset=0x820 Size=0x10
    unsigned long long IoCountDelayedByLatencyCap;// Offset=0x830 Size=0x8
    struct _GUID DeviceGuid;// Offset=0x838 Size=0x10
    struct _TELEMETRY_UNIT_EXTENSION TelemetryExtension;// Offset=0x848 Size=0x8
    unsigned long long FirstDPNRTimeAfterCS;// Offset=0x850 Size=0x8
    unsigned long long LastF1StartTime;// Offset=0x858 Size=0x8
    unsigned long long F1DurationInCS;// Offset=0x860 Size=0x8
    unsigned long long LastDPNRStartTime;// Offset=0x868 Size=0x8
    unsigned long long DPNRDurationInCS;// Offset=0x870 Size=0x8
    unsigned long long ActiveReferencesInCS;// Offset=0x878 Size=0x8
    unsigned long long ActiveReferencesInCoalescing;// Offset=0x880 Size=0x8
    unsigned long UnitTimeoutsInCS;// Offset=0x888 Size=0x4
    unsigned long F0TransitionsSinceCSStateChange;// Offset=0x88c Size=0x4
    unsigned long D0TransitionsSinceCSStateChange;// Offset=0x890 Size=0x4
    unsigned long F0TransitionsLongSinceCSStateChange;// Offset=0x894 Size=0x4
    unsigned long D0TransitionsLongSinceCSStateChange;// Offset=0x898 Size=0x4
    unsigned long long FirstDFxPowerDownTimeAfterCS;// Offset=0x8a0 Size=0x8
    unsigned long long LastDFxPowerDownStartTime;// Offset=0x8a8 Size=0x8
    unsigned long long DFxPowerDownDurationInCS;// Offset=0x8b0 Size=0x8
    unsigned long long UnresponsiveRequests;// Offset=0x8b8 Size=0x8
    unsigned long long QosGuaranteeFailures;// Offset=0x8c0 Size=0x8
    unsigned long long TimeoutsInGateway;// Offset=0x8c8 Size=0x8
    unsigned long long TimeoutsInLunQueue;// Offset=0x8d0 Size=0x8
    unsigned long TimeoutsInMiniport;// Offset=0x8d8 Size=0x4
    unsigned long PeriodicMaxDeviceCountAtSwTimeout;// Offset=0x8dc Size=0x4
    unsigned long PauseDeviceCount;// Offset=0x8e0 Size=0x4
    unsigned long DeviceBusyCount;// Offset=0x8e4 Size=0x4
    unsigned long BusyCompletionCount;// Offset=0x8e8 Size=0x4
    unsigned long ZoneDeviceWriteErrors;// Offset=0x8ec Size=0x4
    unsigned long ZoneWriteOverflowEntries;// Offset=0x8f0 Size=0x4
    unsigned long long TotalDeviceQueueIoCount;// Offset=0x8f8 Size=0x8
    unsigned long long TotalDeviceQueueIoWaitDuration;// Offset=0x900 Size=0x8
    unsigned long long MaxDeviceQueueIoWaitDuration;// Offset=0x908 Size=0x8
    unsigned long long DeviceQueueIoWaitExceededTimeoutCount;// Offset=0x910 Size=0x8
    unsigned long long DeviceQueueIoBusyCount;// Offset=0x918 Size=0x8
    unsigned long long DeviceQueueIoPausedCount;// Offset=0x920 Size=0x8
    unsigned long long DeviceQueueIoUntaggedCommandOutstandingCount;// Offset=0x928 Size=0x8
    unsigned long long DeviceQueueIoPausedForUntaggedCount;// Offset=0x930 Size=0x8
    unsigned long long DeviceQueueIoExceededThresholdCount;// Offset=0x938 Size=0x8
    unsigned long HighLatencyIoCount;// Offset=0x940 Size=0x4
    unsigned long StorpTraceLoggingPerformanceEnabled;// Offset=0x944 Size=0x4
    struct _RAID_TELEMETRY_LATENCY_BUCKET * TelemetryLatencyBuckets;// Offset=0x948 Size=0x8
    struct _RAID_TELEMETRY_IO_SIZE_BUCKET * TelemetryIoSizeBuckets;// Offset=0x950 Size=0x8
    union _LARGE_INTEGER TelemetryLastPerfCollectionTimeStamp;// Offset=0x958 Size=0x8
    struct _RAID_TELEMETRY_LATENCY_BUCKET * TelemetryPreviousLatencyBuckets;// Offset=0x960 Size=0x8
    struct _RAID_TELEMETRY_IO_SIZE_BUCKET * TelemetryPreviousIoSizeBuckets;// Offset=0x968 Size=0x8
    struct _RAID_TELEMETRY_CPU_COUNTERS * TelemetryCountersPerCpu;// Offset=0x970 Size=0x8
    struct _RAID_TELEMETRY_CPU_COUNTERS TelemetryPerfPreviousCpuCounters;// Offset=0x978 Size=0x20
    unsigned long long TelemetryMaxFlushLatency;// Offset=0x998 Size=0x8
    unsigned long long TelemetryMaxUnmapLatency;// Offset=0x9a0 Size=0x8
    unsigned long long TelemetryLock;// Offset=0x9a8 Size=0x8
    struct _RAID_TELEMETRY_SAMPLED_ERROR_LOG TelemetrySampledErrorLog;// Offset=0x9b0 Size=0x1c8
    struct _RAID_TELEMETRY_UNIQUE_ERROR_LOG TelemetryUniqueErrorLog;// Offset=0xb78 Size=0x190
    unsigned long long TelemetryPrevBytesWritten;// Offset=0xd08 Size=0x8
    unsigned long long TelemetryPrevStreamBytesWritten;// Offset=0xd10 Size=0x8
    unsigned long PowerCycleCount;// Offset=0xd18 Size=0x4
    union _LARGE_INTEGER InitialTimestamp;// Offset=0xd20 Size=0x8
    struct _RAID_UNIT_QOS Qos;// Offset=0xd28 Size=0x30
    unsigned long long ZoneSize;// Offset=0xd58 Size=0x8
    unsigned char * CachedSmartData;// Offset=0xd60 Size=0x8
    enum _STORAGE_BUS_TYPE BusType;// Offset=0xd68 Size=0x4
    unsigned char * ZonePendingIoTable;// Offset=0xd70 Size=0x8
    struct _RTL_BITMAP ZoneIoBitMap;// Offset=0xd78 Size=0x10
    union _LARGE_INTEGER LastLogicalBlockAddress;// Offset=0xd88 Size=0x8
    unsigned long ZoneCount;// Offset=0xd90 Size=0x4
    struct _unnamed_441 ZoneDiagnostics;// Offset=0xd94 Size=0xc
    struct _unnamed_442 ZoneFlags;// Offset=0xda0 Size=0x4
    struct _unnamed_422 DFxQueue;// Offset=0xda8 Size=0x20
    long  ( * CrashdumpNotifyRoutine)(enum _STORAGE_DUMP_EVENT ,void * );// Offset=0xdc8 Size=0x8
    unsigned short EventCount[3];// Offset=0xdd0 Size=0x6
    struct _UNICODE_STRING ZnsPnpInterfaceName;// Offset=0xdd8 Size=0x10
    struct NVME_IDENTIFY_NAMESPACE_DATA * IdentifyNamespaceData;// Offset=0xde8 Size=0x8
    struct NVME_IDENTIFY_SPECIFIC_NAMESPACE_IO_COMMAND_SET * IdentifyNamespaceIoCommandSet;// Offset=0xdf0 Size=0x8
    struct _REGISTRY_WATCH_CONTEXT * RegWatchContext;// Offset=0xdf8 Size=0x8
    unsigned long CountersId;// Offset=0xe00 Size=0x4
    unsigned char * TcgContext[6240];// Offset=0xe08 Size=0x8
    struct _TCG_DEVICE_PROPERTIES * TcgProperties;// Offset=0xe10 Size=0x8
    struct _NVME_ICE_ENTRY * NvmeIceEntry;// Offset=0xe18 Size=0x8
    unsigned long ActiveReferenceOnAdapter;// Offset=0xe20 Size=0x4
    struct _unnamed_425 KsrFlags;// Offset=0xe24 Size=0x4
    struct _unnamed_444 ReadCapacity;// Offset=0xe28 Size=0x10
};
