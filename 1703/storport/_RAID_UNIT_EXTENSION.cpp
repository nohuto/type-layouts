enum _RAID_OBJECT_TYPE
{
    RaidUnknownObject=-1,
    RaidAdapterObject=0,
    RaidUnitObject=1,
    RaidDriverObject=2
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

struct _LIST_ENTRY// Size=0x10 (Id=4)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _STOR_ADDR_BTL8// Size=0x10 (Id=223)
{
    unsigned short Type;// Offset=0x0 Size=0x2
    unsigned short Port;// Offset=0x2 Size=0x2
    unsigned long AddressLength;// Offset=0x4 Size=0x4
    unsigned char Path;// Offset=0x8 Size=0x1
    unsigned char Target;// Offset=0x9 Size=0x1
    unsigned char Lun;// Offset=0xa Size=0x1
    unsigned char Reserved;// Offset=0xb Size=0x1
};

struct _STOR_SCSI_ADDRESS// Size=0x4 (Id=190)
{
    unsigned char PathId;// Offset=0x0 Size=0x1
    unsigned char TargetId;// Offset=0x1 Size=0x1
    unsigned char Lun;// Offset=0x2 Size=0x1
    unsigned char Reserved;// Offset=0x3 Size=0x1
};

struct _STRING// Size=0x10 (Id=198)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    char * Buffer;// Offset=0x8 Size=0x8
};

struct _STOR_SCSI_IDENTITY// Size=0x38 (Id=191)
{
    struct _INQUIRYDATA * InquiryData;// Offset=0x0 Size=0x8
    struct _STRING SerialNumber;// Offset=0x8 Size=0x10
    unsigned char Supports1667;// Offset=0x18 Size=0x1
    struct _VPD_IDENTIFICATION_PAGE * DeviceId;// Offset=0x20 Size=0x8
    struct _STOR_ATA_DEVICE_ID * AtaDeviceId;// Offset=0x28 Size=0x8
    struct _STOR_RICH_DEVICE_DESCRIPTION * RichDeviceDescription;// Offset=0x30 Size=0x8
};

struct _unnamed_226// Size=0x8 (Id=226)
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
        unsigned char ActiveReferenceOnAdapter:1;// Offset=0x1 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char DeviceInitialized:1;// Offset=0x1 Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char DisabledPendingTimer:1;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x1
        unsigned char DumpActiveNotCapable:1;// Offset=0x1 Size=0x1 BitOffset=0x6 BitSize=0x1
        unsigned char RegisteredForPoFx:1;// Offset=0x1 Size=0x1 BitOffset=0x7 BitSize=0x1
        unsigned char BootUnit:1;// Offset=0x2 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Unresponsive:1;// Offset=0x2 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char DumpAlwaysPowerOn:1;// Offset=0x2 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned long Reserved:13;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0xd
    };
};

union _unnamed_227// Size=0x4 (Id=227)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long PoFxRegistrationPending:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long PowerCycleCountSavePending:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Reserved:30;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1e
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};

struct _DISPATCHER_HEADER// Size=0x18 (Id=365)
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

struct _KEVENT// Size=0x18 (Id=19)
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

struct _RAID_POWER_STATE// Size=0x10 (Id=278)
{
    enum _SYSTEM_POWER_STATE SystemState;// Offset=0x0 Size=0x4
    enum _DEVICE_POWER_STATE DeviceState;// Offset=0x4 Size=0x4
    enum POWER_ACTION PowerAction;// Offset=0x8 Size=0x4
    unsigned char SystemPoweringDown;// Offset=0xc Size=0x1
};

struct _QUEUE_TAG_LIST// Size=0x80 (Id=186)
{
    struct _QUEUE_TAG_LIST_HEADER * Header;// Offset=0x0 Size=0x8
    struct _QUEUE_TAG_ENTRY * Buffer;// Offset=0x40 Size=0x8
    unsigned long TagsPerNode;// Offset=0x48 Size=0x4
};

struct _EXTENDED_DEVICE_QUEUE// Size=0x88 (Id=204)
{
    short Type;// Offset=0x0 Size=0x2
    short Size;// Offset=0x2 Size=0x2
    long Depth;// Offset=0x4 Size=0x4
    struct _STOR_IO_GATEWAY * Gateway;// Offset=0x8 Size=0x8
    long DeviceCount;// Offset=0x10 Size=0x4
    long ByPassCount;// Offset=0x14 Size=0x4
    long ByPassPowerCount;// Offset=0x18 Size=0x4
    long PauseCount;// Offset=0x1c Size=0x4
    long BusyCount;// Offset=0x20 Size=0x4
    unsigned char Frozen;// Offset=0x24 Size=0x1
    unsigned char Locked;// Offset=0x25 Size=0x1
    unsigned char Untagged;// Offset=0x26 Size=0x1
    unsigned char PowerLocked;// Offset=0x27 Size=0x1
    unsigned long QuiescenceClients;// Offset=0x28 Size=0x4
    struct _KEVENT QuiescenceEvent;// Offset=0x30 Size=0x18
    long RWLock;// Offset=0x48 Size=0x4
    long OutstandingCount;// Offset=0x4c Size=0x4
    struct _LIST_ENTRY DeviceList;// Offset=0x50 Size=0x10
    struct _LIST_ENTRY ByPassList;// Offset=0x60 Size=0x10
    struct _LIST_ENTRY QosReqList;// Offset=0x70 Size=0x10
    long PeriodicMaxDeviceCount;// Offset=0x80 Size=0x4
    long PeriodicMaxOutstandingCount;// Offset=0x84 Size=0x4
};

struct _IO_QUEUE// Size=0xa0 (Id=203)
{
    struct _DEVICE_OBJECT * DeviceObject;// Offset=0x0 Size=0x8
    void  ( * StartIo)(struct _DEVICE_OBJECT * ,struct _IRP * ,void * );// Offset=0x8 Size=0x8
    struct _EXTENDED_DEVICE_QUEUE DeviceQueue;// Offset=0x10 Size=0x88
    unsigned long QueueChanged;// Offset=0x98 Size=0x4
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

struct _KTIMER// Size=0x40 (Id=300)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
    union _ULARGE_INTEGER DueTime;// Offset=0x18 Size=0x8
    struct _LIST_ENTRY TimerListEntry;// Offset=0x20 Size=0x10
    struct _KDPC * Dpc;// Offset=0x30 Size=0x8
    unsigned long Processor;// Offset=0x38 Size=0x4
    unsigned long Period;// Offset=0x3c Size=0x4
};

struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=6)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _KDPC// Size=0x40 (Id=89)
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

struct _SLIST_ENTRY// Size=0x10 (Id=21)
{
    struct _SLIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _RAID_DEFERRED_HEADER// Size=0x20 (Id=413)
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

struct _unnamed_342// Size=0x10 (Id=342)
{
    void  ( * HwTimerRoutine)(void * );// Offset=0x0 Size=0x8
    unsigned long Timeout;// Offset=0x8 Size=0x4
};

struct _unnamed_343// Size=0x20 (Id=343)
{
    struct _SCSI_REQUEST_BLOCK * Srb;// Offset=0x0 Size=0x8
    unsigned long ErrorCode;// Offset=0x8 Size=0x4
    unsigned long UniqueId;// Offset=0xc Size=0x4
    unsigned char FreeErrorInfo[16];// Offset=0x10 Size=0x10
};

struct _unnamed_344// Size=0x4 (Id=344)
{
    unsigned long Timeout;// Offset=0x0 Size=0x4
};

struct _unnamed_345// Size=0x4 (Id=345)
{
    unsigned long RequestsToComplete;// Offset=0x0 Size=0x4
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

struct _unnamed_346// Size=0x18 (Id=346)
{
    struct _STOR_TIMER_CONTEXT * StorTimer;// Offset=0x0 Size=0x8
    union _LARGE_INTEGER Timeout;// Offset=0x8 Size=0x8
    unsigned long TolerableDelay;// Offset=0x10 Size=0x4
};

struct _unnamed_347// Size=0x8 (Id=347)
{
    struct _STOR_ASYNC_NOTIFY_CONTEXT * StorAsyncNotify;// Offset=0x0 Size=0x8
};

struct _RAID_DEFERRED_ELEMENT// Size=0x50 (Id=348)
{
    struct _RAID_DEFERRED_HEADER Header;// Offset=0x0 Size=0x20
    enum _RAID_DEFERRED_TYPE Type;// Offset=0x20 Size=0x4
    struct _STOR_SCSI_ADDRESS Address;// Offset=0x24 Size=0x4
    union // Size=0x48 (Id=0)
    {
        struct _unnamed_342 Timer;// Offset=0x28 Size=0x10
        struct _unnamed_343 Error;// Offset=0x28 Size=0x20
        struct _unnamed_344 PauseDevice;// Offset=0x28 Size=0x4
        struct _unnamed_345 Busy;// Offset=0x28 Size=0x4
        struct _unnamed_345 DeviceBusy;// Offset=0x28 Size=0x4
        struct _unnamed_346 AdditionalTimer;// Offset=0x28 Size=0x18
        struct _unnamed_347 AsyncNotification;// Offset=0x28 Size=0x8
    };
};

struct _unnamed_229// Size=0x190 (Id=229)
{
    struct _RAID_DEFERRED_ELEMENT PauseDevice;// Offset=0x0 Size=0x50
    struct _RAID_DEFERRED_ELEMENT ResumeDevice;// Offset=0x50 Size=0x50
    struct _RAID_DEFERRED_ELEMENT DeviceBusy;// Offset=0xa0 Size=0x50
    struct _RAID_DEFERRED_ELEMENT DeviceReady;// Offset=0xf0 Size=0x50
    struct _RAID_DEFERRED_ELEMENT AsyncNotification;// Offset=0x140 Size=0x50
};

struct _RAID_IO_RESOURCES// Size=0x20 (Id=234)
{
    unsigned long QueueTag;// Offset=0x0 Size=0x4
    void * SrbExtension;// Offset=0x8 Size=0x8
    struct _EXTENDED_REQUEST_BLOCK * Xrb;// Offset=0x10 Size=0x8
    void * SenseInfo;// Offset=0x18 Size=0x8
};

struct _RAID_UNIT_REGISTRY_PARAMETERS// Size=0x18 (Id=338)
{
    unsigned long BusyRetryCount;// Offset=0x0 Size=0x4
    unsigned long QueueFullWaitIoPercentage;// Offset=0x4 Size=0x4
    unsigned long BusyPauseTime;// Offset=0x8 Size=0x4
    unsigned long EnableLogoETW;// Offset=0xc Size=0x4
    unsigned long DisableIdlePowerManagement;// Offset=0x10 Size=0x4
    unsigned long MinimumIdleTimeoutInMS;// Offset=0x14 Size=0x4
};

struct _RAID_UNIT_ATTRIBUTES// Size=0x4 (Id=484)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long VmPassThroughLun:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long DeviceAttentionSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long AsyncNotificationSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long D3ColdNotSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long DefaultWriteCacheEnabled:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long Reserved:27;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1b
    };
};

struct _UNICODE_STRING// Size=0x10 (Id=309)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _RAID_WORK_ITEM_CONTEXT// Size=0x10 (Id=392)
{
    struct _IO_WORKITEM * WorkItem;// Offset=0x0 Size=0x8
    struct _IRP * Irp;// Offset=0x8 Size=0x8
};

struct _STOR_ASYNC_NOTIFY_CONTEXT// Size=0x18 (Id=354)
{
    struct _IO_WORKITEM * WorkItem;// Offset=0x0 Size=0x8
    unsigned long long Flags;// Offset=0x8 Size=0x8
    unsigned long InUse;// Offset=0x10 Size=0x4
};

struct _RAID_SHARED_WORK_ITEM_CONTEXT// Size=0x18 (Id=444)
{
    struct _IO_WORKITEM * WorkItem;// Offset=0x0 Size=0x8
    struct _IRP * Irp;// Offset=0x8 Size=0x8
    unsigned long InUse;// Offset=0x10 Size=0x4
};

struct _unnamed_232// Size=0x10 (Id=232)
{
    unsigned char FStateTransition;// Offset=0x0 Size=0x1
    unsigned char DStateTransition;// Offset=0x1 Size=0x1
    unsigned long FState;// Offset=0x4 Size=0x4
    struct _IRP * PowerIrp;// Offset=0x8 Size=0x8
};

struct _GUID// Size=0x10 (Id=256)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _TELEMETRY_UNIT_EXTENSION// Size=0x2 (Id=333)
{
    unsigned char SmartPredictFailure;// Offset=0x0 Size=0x1
    unsigned char NvmeCriticalWarning;// Offset=0x1 Size=0x1
};

union _unnamed_470// Size=0x4 (Id=470)
{
    unsigned long Quantity;// Offset=0x0 Size=0x4
    unsigned long Position;// Offset=0x0 Size=0x4
};

struct _RAID_TELEMETRY_ERROR_ENTRY// Size=0x28 (Id=471)
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
    union _unnamed_470 u;// Offset=0x20 Size=0x4
};

struct _RAID_TELEMETRY_SAMPLED_ERROR_LOG// Size=0x1c8 (Id=489)
{
    unsigned long TotalErrors;// Offset=0x0 Size=0x4
    unsigned long TotalReadWriteErrors;// Offset=0x4 Size=0x4
    unsigned long TotalStRtlImpendingDeviceFailureErrors;// Offset=0x8 Size=0x4
    unsigned long TotalStRtlTotalDeviceFailureErrors;// Offset=0xc Size=0x4
    struct _RAID_TELEMETRY_ERROR_ENTRY LastError;// Offset=0x10 Size=0x28
    struct _RAID_TELEMETRY_ERROR_ENTRY SampledErrors[10];// Offset=0x38 Size=0x190
};

struct _RAID_TELEMETRY_UNIQUE_ERROR_LOG// Size=0xc8 (Id=439)
{
    struct _RAID_TELEMETRY_ERROR_ENTRY UniqueErrors[5];// Offset=0x0 Size=0xc8
};

struct _RAID_UNIT_QOS// Size=0x30 (Id=557)
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

struct _RAID_UNIT_EXTENSION// Size=0xa80 (Id=233)
{
    enum _RAID_OBJECT_TYPE ObjectType;// Offset=0x0 Size=0x4
    struct _DEVICE_OBJECT * DeviceObject;// Offset=0x8 Size=0x8
    void * UnitExtension;// Offset=0x10 Size=0x8
    struct _RAID_ADAPTER_EXTENSION * Adapter;// Offset=0x18 Size=0x8
    unsigned long long SlowLock;// Offset=0x20 Size=0x8
    enum _DEVICE_STATE DeviceState;// Offset=0x28 Size=0x4
    struct _LIST_ENTRY NextUnit;// Offset=0x30 Size=0x10
    struct _LIST_ENTRY UnitTableLink;// Offset=0x40 Size=0x10
    union // Size=0x10 (Id=0)
    {
        struct _STOR_ADDR_BTL8 StorAddressBTL8;// Offset=0x50 Size=0x10
        unsigned short AddressType;// Offset=0x50 Size=0x2
    };
    unsigned short AddressPort;// Offset=0x52 Size=0x2
    unsigned long AddressLength;// Offset=0x54 Size=0x4
    struct _STOR_SCSI_ADDRESS Address;// Offset=0x58 Size=0x4
    struct _STOR_SCSI_IDENTITY Identity;// Offset=0x60 Size=0x38
    struct _unnamed_226 Flags;// Offset=0x98 Size=0x8
    union _unnamed_227 InterlockedFlags;// Offset=0xa0 Size=0x4
    struct _KEVENT ZeroOutstandingEvent;// Offset=0xa8 Size=0x18
    struct _RAID_POWER_STATE Power;// Offset=0xc0 Size=0x10
    struct _STOR_EVENT_QUEUE * PendingQueue;// Offset=0xd0 Size=0x8
    struct _QUEUE_TAG_LIST TagList;// Offset=0x100 Size=0x80
    struct _IO_QUEUE IoQueue;// Offset=0x180 Size=0xa0
    unsigned long MaxQueueDepth;// Offset=0x220 Size=0x4
    unsigned long OscData;// Offset=0x224 Size=0x4
    enum _STORAGE_POWERUP_REASON_TYPE PowerupReason;// Offset=0x228 Size=0x4
    struct ACPI_INTERFACE_STANDARD2 AcpiInterface;// Offset=0x230 Size=0x58
    long OutstandingCount;// Offset=0x288 Size=0x4
    unsigned long PagingPathCount;// Offset=0x28c Size=0x4
    unsigned long CrashDumpPathCount;// Offset=0x290 Size=0x4
    unsigned long HiberPathCount;// Offset=0x294 Size=0x4
    struct _KTIMER PendingTimer;// Offset=0x298 Size=0x40
    struct _KDPC PendingDpc;// Offset=0x2d8 Size=0x40
    struct _KTIMER PauseTimer;// Offset=0x318 Size=0x40
    struct _KDPC PauseTimerDpc;// Offset=0x358 Size=0x40
    struct _KDPC RestartDpc;// Offset=0x398 Size=0x40
    struct _RAID_MEMORY_REGION * CommonBufferVAs;// Offset=0x3d8 Size=0x8
    unsigned long CommonBufferSize;// Offset=0x3e0 Size=0x4
    unsigned long CommonBufferBlocks;// Offset=0x3e4 Size=0x4
    unsigned long DefaultTimeout;// Offset=0x3e8 Size=0x4
    long ResetCount;// Offset=0x3ec Size=0x4
    struct _unnamed_229 DeferredList;// Offset=0x3f0 Size=0x190
    struct _RAID_IO_RESOURCES ResetResources;// Offset=0x580 Size=0x20
    long ResetResourcesAcquired;// Offset=0x5a0 Size=0x4
    unsigned char SenseInfoSize;// Offset=0x5a4 Size=0x1
    unsigned char CallFreeDumpPtrSRB;// Offset=0x5a5 Size=0x1
    unsigned char DumpPowerReady;// Offset=0x5a6 Size=0x1
    unsigned char StackDumpPowerReady;// Offset=0x5a7 Size=0x1
    struct _EX_RUNDOWN_REF_CACHE_AWARE * PoFxRundownProtection;// Offset=0x5a8 Size=0x8
    struct _RAID_UNIT_POFX * PoFx;// Offset=0x5b0 Size=0x8
    struct _D3COLD_SUPPORT_INTERFACE * D3ColdInterface;// Offset=0x5b8 Size=0x8
    long PowerUpRequired;// Offset=0x5c0 Size=0x4
    long PowerDownRequired;// Offset=0x5c4 Size=0x4
    struct _IO_WORKITEM * HierarchicalResetWorkItem;// Offset=0x5c8 Size=0x8
    long HierarchicalResetWorkItemTimeoutCountdown;// Offset=0x5d0 Size=0x4
    long HierarchicalResetSrbTimeoutCountdown;// Offset=0x5d4 Size=0x4
    unsigned long HierarchicalResetAbortCount;// Offset=0x5d8 Size=0x4
    unsigned long long HierarchicalResetWorkItemSpinLock;// Offset=0x5e0 Size=0x8
    struct _RAID_UNIT_REGISTRY_PARAMETERS RegistryParameters;// Offset=0x5e8 Size=0x18
    struct _RAID_UNIT_ATTRIBUTES UnitAttributes;// Offset=0x600 Size=0x4
    struct _UNICODE_STRING VmLunPnpInterfaceName;// Offset=0x608 Size=0x10
    struct _RAID_WORK_ITEM_CONTEXT QuiesceDeviceWorkItem;// Offset=0x618 Size=0x10
    struct _STOR_ASYNC_NOTIFY_CONTEXT StorAsyncNotify;// Offset=0x628 Size=0x18
    struct _RAID_SHARED_WORK_ITEM_CONTEXT PowerWorkItem;// Offset=0x640 Size=0x18
    struct _unnamed_232 PendingPowerUpContext;// Offset=0x658 Size=0x10
    struct _SLIST_ENTRY PendingPowerUpListEntry;// Offset=0x670 Size=0x10
    struct _UNICODE_STRING SesPnpInterfaceName;// Offset=0x680 Size=0x10
    unsigned long long IoCountDelayedByLatencyCap;// Offset=0x690 Size=0x8
    struct _GUID DeviceGuid;// Offset=0x698 Size=0x10
    struct _TELEMETRY_UNIT_EXTENSION TelemetryExtension;// Offset=0x6a8 Size=0x2
    unsigned long long FirstDPNRTimeAfterCS;// Offset=0x6b0 Size=0x8
    unsigned long long LastF1StartTime;// Offset=0x6b8 Size=0x8
    unsigned long long F1DurationInCS;// Offset=0x6c0 Size=0x8
    unsigned long long LastDPNRStartTime;// Offset=0x6c8 Size=0x8
    unsigned long long DPNRDurationInCS;// Offset=0x6d0 Size=0x8
    unsigned long long ActiveReferencesInCS;// Offset=0x6d8 Size=0x8
    unsigned long long ActiveReferencesInCoalescing;// Offset=0x6e0 Size=0x8
    unsigned long UnitTimeoutsInCS;// Offset=0x6e8 Size=0x4
    unsigned long F0TransitionsSinceCSStateChange;// Offset=0x6ec Size=0x4
    unsigned long D0TransitionsSinceCSStateChange;// Offset=0x6f0 Size=0x4
    unsigned long F0TransitionsLongSinceCSStateChange;// Offset=0x6f4 Size=0x4
    unsigned long D0TransitionsLongSinceCSStateChange;// Offset=0x6f8 Size=0x4
    unsigned long long UnresponsiveRequests;// Offset=0x700 Size=0x8
    unsigned long long QosGuaranteeFailures;// Offset=0x708 Size=0x8
    unsigned long long TimeoutsInGateway;// Offset=0x710 Size=0x8
    unsigned long long TimeoutsInLunQueue;// Offset=0x718 Size=0x8
    unsigned long TimeoutsInMiniport;// Offset=0x720 Size=0x4
    unsigned long PeriodicMaxDeviceCountAtSwTimeout;// Offset=0x724 Size=0x4
    unsigned long PauseDeviceCount;// Offset=0x728 Size=0x4
    unsigned long DeviceBusyCount;// Offset=0x72c Size=0x4
    unsigned long BusyCompletionCount;// Offset=0x730 Size=0x4
    unsigned long StorpTraceLoggingPerformanceEnabled;// Offset=0x734 Size=0x4
    struct _RAID_TELEMETRY_PERF_BUCKET * TelemetryPerfBuckets;// Offset=0x738 Size=0x8
    union _LARGE_INTEGER TelemetryLastPerfCollectionTimeStamp;// Offset=0x740 Size=0x8
    struct _RAID_TELEMETRY_PERF_BUCKET * TelemetryPerfPreviousCounters;// Offset=0x748 Size=0x8
    unsigned char * TelemetryMaxReadWriteLatencyPerNumaNode;// Offset=0x750 Size=0x8
    unsigned long long TelemetryMaxFlushLatency;// Offset=0x758 Size=0x8
    unsigned long long TelemetryMaxUnmapLatency;// Offset=0x760 Size=0x8
    unsigned long long TelemetryLock;// Offset=0x768 Size=0x8
    struct _RAID_TELEMETRY_SAMPLED_ERROR_LOG TelemetrySampledErrorLog;// Offset=0x770 Size=0x1c8
    struct _RAID_TELEMETRY_UNIQUE_ERROR_LOG TelemetryUniqueErrorLog;// Offset=0x938 Size=0xc8
    unsigned long PowerCycleCount;// Offset=0xa00 Size=0x4
    union _LARGE_INTEGER InitialTimestamp;// Offset=0xa08 Size=0x8
    struct _RAID_UNIT_QOS Qos;// Offset=0xa10 Size=0x30
    unsigned long long LastHierarchicalResetEndTime;// Offset=0xa40 Size=0x8
};
