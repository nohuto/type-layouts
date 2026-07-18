enum _RAID_OBJECT_TYPE
{
    RaidUnknownObject=0,
    RaidAdapterObject=1094997074,
    RaidUnitObject=1431193940,
    RaidDriverObject=1146246738,
    NvmeAdapterObject=1314275652,
    NvmeNamespaceObject=1314278989
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

union _RAID_ADDRESS// Size=0x4 (Id=329)
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

union _unnamed_540// Size=0x8 (Id=540)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Enumerated:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long Present:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long ScsiMode:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long DeviceClaimed:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long Temporary:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long TerminateSystemThread:1;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x1
        unsigned long long BootDevice:1;// Offset=0x0 Size=0x8 BitOffset=0x6 BitSize=0x1
        unsigned long long InsertedToTimeoutNsList:1;// Offset=0x0 Size=0x8 BitOffset=0x7 BitSize=0x1
        unsigned long long IoSizeDistributionEnabled:1;// Offset=0x0 Size=0x8 BitOffset=0x8 BitSize=0x1
        unsigned long long Unresponsive:1;// Offset=0x0 Size=0x8 BitOffset=0x9 BitSize=0x1
        unsigned long long IsStackInitialized:1;// Offset=0x0 Size=0x8 BitOffset=0xa BitSize=0x1
        unsigned long long DeviceStopped:1;// Offset=0x0 Size=0x8 BitOffset=0xb BitSize=0x1
        unsigned long long Reserved:52;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0x34
    };
    unsigned long long AsUlonglong;// Offset=0x0 Size=0x8
};

struct _SLIST_ENTRY// Size=0x10 (Id=438)
{
    struct _SLIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _GUID// Size=0x10 (Id=753)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

union _unnamed_541// Size=0x8 (Id=541)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long ZnsNvmeDrive:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long D3ColdNotSupported:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long Reserved:62;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x3e
    };
    unsigned long long AsUlonglong;// Offset=0x0 Size=0x8
};

union _NVME_NAMESPACE_STATE// Size=0x4 (Id=955)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long PowerDown:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long SystemPoweringDown:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Removed:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long Added:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long Modified:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long Missing:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long BlockSizeChanged:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long Processed:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long ZNSCommandSetSupport:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long Reserved:23;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x17
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};

struct _DISPATCHER_HEADER// Size=0x18 (Id=919)
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

struct _KTIMER// Size=0x40 (Id=494)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
    union _ULARGE_INTEGER DueTime;// Offset=0x18 Size=0x8
    struct _LIST_ENTRY TimerListEntry;// Offset=0x20 Size=0x10
    struct _KDPC * Dpc;// Offset=0x30 Size=0x8
    unsigned short Processor;// Offset=0x38 Size=0x2
    unsigned short TimerType;// Offset=0x3a Size=0x2
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

struct _UNICODE_STRING// Size=0x10 (Id=614)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _KEVENT// Size=0x18 (Id=21)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
};

union _unnamed_948// Size=0x4 (Id=948)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long InconsistentNextListState:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved:31;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1f
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

struct _NVME_NAMESPACE_FLUSH_CONTEXT// Size=0x50 (Id=949)
{
    struct _NVME_EXTENDED_COMMAND * ExtendedCommand;// Offset=0x0 Size=0x8
    struct _IO_WORKITEM * WorkItem;// Offset=0x8 Size=0x8
    unsigned long long SpinLock;// Offset=0x10 Size=0x8
    struct _IRP * CurrIrp;// Offset=0x18 Size=0x8
    struct _LIST_ENTRY CurrList;// Offset=0x20 Size=0x10
    struct _IRP * NextIrp;// Offset=0x30 Size=0x8
    struct _LIST_ENTRY NextList;// Offset=0x38 Size=0x10
    union _unnamed_948 Flags;// Offset=0x48 Size=0x4
    unsigned long Reserved;// Offset=0x4c Size=0x4
};

struct _NVME_NAMESPACE_SANITIZE_CONTEXT// Size=0x20 (Id=768)
{
    struct _NVME_EXTENDED_COMMAND * ExtendedCommand;// Offset=0x0 Size=0x8
    struct _IRP * Irp;// Offset=0x8 Size=0x8
    struct _IO_WORKITEM * WorkItem;// Offset=0x10 Size=0x8
    unsigned short TimeoutInSeconds;// Offset=0x18 Size=0x2
    unsigned char SanitizeRecovery;// Offset=0x1a Size=0x1
    unsigned long InProgress;// Offset=0x1c Size=0x4
};

union _unnamed_1107// Size=0x4 (Id=1107)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Enabled:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long TimerSettingChangeNeeded:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Reserved:30;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1e
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};

struct _NVME_NAMESPACE_QOS// Size=0x20 (Id=1108)
{
    union _unnamed_1107 Flags;// Offset=0x0 Size=0x4
    unsigned short HwTimeoutInSec;// Offset=0x4 Size=0x2
    unsigned short ResetTimeoutInSec;// Offset=0x6 Size=0x2
    unsigned long ResetUnresponsiveTimeoutIn500MS;// Offset=0x8 Size=0x4
    unsigned long ResetIntervalInMS;// Offset=0xc Size=0x4
    unsigned long MaxWaitTimeIn500MS;// Offset=0x10 Size=0x4
    unsigned char RetryCount;// Offset=0x14 Size=0x1
    unsigned char Reserved[3];// Offset=0x15 Size=0x3
    unsigned long long QosThresholdIn100NS;// Offset=0x18 Size=0x8
};

struct _NVME_NAMESPACE_EXTENSION// Size=0x2c0 (Id=542)
{
    enum _RAID_OBJECT_TYPE ObjectType;// Offset=0x0 Size=0x4
    struct _DEVICE_OBJECT * DeviceObject;// Offset=0x8 Size=0x8
    struct _NVME_CONTROLLER * NvmeController;// Offset=0x10 Size=0x8
    struct _LIST_ENTRY ListEntry;// Offset=0x18 Size=0x10
    struct _LIST_ENTRY NamespaceTableEntry;// Offset=0x28 Size=0x10
    unsigned long NamespaceId;// Offset=0x38 Size=0x4
    unsigned char CSI;// Offset=0x3c Size=0x1
    unsigned char LogicalBlockSizeShift;// Offset=0x3d Size=0x1
    unsigned short SetId;// Offset=0x3e Size=0x2
    unsigned long LogicalBlockSize;// Offset=0x40 Size=0x4
    unsigned long PhysicalSectorSize;// Offset=0x44 Size=0x4
    unsigned long OptimalWriteSize;// Offset=0x48 Size=0x4
    unsigned long OptimalWriteGranularity;// Offset=0x4c Size=0x4
    unsigned long OptimalWriteAlignment;// Offset=0x50 Size=0x4
    unsigned long PreferredDeallocateGranularityInBlocks;// Offset=0x54 Size=0x4
    unsigned long PreferredDeallocateAlignmentInBlocks;// Offset=0x58 Size=0x4
    unsigned long Reserved1;// Offset=0x5c Size=0x4
    enum _DEVICE_STATE DeviceState;// Offset=0x60 Size=0x4
    union _RAID_ADDRESS ScsiAddress;// Offset=0x64 Size=0x4
    unsigned long long SlowLock;// Offset=0x68 Size=0x8
    union _unnamed_540 Flags;// Offset=0x70 Size=0x8
    struct _EX_RUNDOWN_REF_CACHE_AWARE * RemoveLock;// Offset=0x78 Size=0x8
    struct _NVME_NAMESPACE_POWER * Power;// Offset=0x80 Size=0x8
    struct _SLIST_ENTRY PendingPowerUpListEntry;// Offset=0x90 Size=0x10
    struct _GUID DeviceGuid;// Offset=0xa0 Size=0x10
    struct NVME_IDENTIFY_NAMESPACE_DATA * IdentifyNamespaceData;// Offset=0xb0 Size=0x8
    struct NVME_IDENTIFY_NAMESPACE_DESCRIPTOR * IdentifyNamespaceDescriptor;// Offset=0xb8 Size=0x8
    unsigned long long NvmErrorCount;// Offset=0xc0 Size=0x8
    union _unnamed_541 Attributes;// Offset=0xc8 Size=0x8
    union _NVME_NAMESPACE_STATE State;// Offset=0xd0 Size=0x4
    struct _STOR_DEVICE_QUEUE * IoQueue;// Offset=0x100 Size=0x8
    struct _STOR_DEVICE_QUEUE * LowPriorityIoQueue;// Offset=0x108 Size=0x8
    unsigned long PagingPathCount;// Offset=0x110 Size=0x4
    unsigned long CrashDumpPathCount;// Offset=0x114 Size=0x4
    unsigned long HiberPathCount;// Offset=0x118 Size=0x4
    unsigned char DumpPowerReady;// Offset=0x11c Size=0x1
    unsigned char StackDumpPowerReady;// Offset=0x11d Size=0x1
    unsigned short Reserved2;// Offset=0x11e Size=0x2
    long  ( * CrashdumpNotifyRoutine)(enum _STORAGE_DUMP_EVENT ,void * );// Offset=0x120 Size=0x8
    struct _KTIMER PendingTimer;// Offset=0x128 Size=0x40
    struct _KDPC PendingDpc;// Offset=0x168 Size=0x40
    unsigned short DefaultTimeout;// Offset=0x1a8 Size=0x2
    unsigned char Reserved3;// Offset=0x1aa Size=0x1
    unsigned char OptimalIoBoundaryShift;// Offset=0x1ab Size=0x1
    unsigned long OptimalIoBoundary;// Offset=0x1ac Size=0x4
    unsigned long long LogicalBlockCount;// Offset=0x1b0 Size=0x8
    struct _UNICODE_STRING ZnsPnpInterfaceName;// Offset=0x1b8 Size=0x10
    struct NVME_IDENTIFY_SPECIFIC_NAMESPACE_IO_COMMAND_SET * IdentifyNamespaceIoCommandSet;// Offset=0x1c8 Size=0x8
    struct _NVME_IDLE_REQUEST_QUEUE ** IdleRequestQueues;// Offset=0x1d0 Size=0x8
    void * SystemThreadHandle;// Offset=0x1d8 Size=0x8
    struct _KEVENT RefillShadowQueueEvent;// Offset=0x1e0 Size=0x18
    struct _NVME_NAMESPACE_ERROR_RECOVERY * ErrorRecovery;// Offset=0x1f8 Size=0x8
    struct _SLIST_ENTRY TimeoutListEntry;// Offset=0x200 Size=0x10
    struct _NVME_NAMESPACE_FLUSH_CONTEXT FlushContext;// Offset=0x210 Size=0x50
    struct _NVME_NAMESPACE_TELEMETRY * Telemetry;// Offset=0x260 Size=0x8
    struct _NVME_NAMESPACE_SANITIZE_CONTEXT SanitizeContext;// Offset=0x268 Size=0x20
    struct _NVME_NAMESPACE_QOS Qos;// Offset=0x288 Size=0x20
    struct _NVME_PER_PROCESSOR_DATA ** IoTrackingData;// Offset=0x2a8 Size=0x8
};
