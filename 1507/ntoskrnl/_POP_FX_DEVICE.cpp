struct _LIST_ENTRY// Size=0x10 (Id=20)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

union _POP_FX_DEVICE_STATUS// Size=0x4 (Id=351)
{
    long Value;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long SystemTransition:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long PepD0Notify:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long IdleTimerOn:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long IgnoreIdleTimeout:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long IrpInUse:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long IrpPending:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long DPNRDeviceNotified:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long DPNRReceivedFromPep:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long IrpFirstPendingIndex:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long IrpLastPendingIndex:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long Reserved:22;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x16
    };
};

struct _POP_FX_DRIVER_CALLBACKS// Size=0x38 (Id=1243)
{
    void  ( * ComponentActive)(void * ,unsigned long );// Offset=0x0 Size=0x8
    void  ( * ComponentIdle)(void * ,unsigned long );// Offset=0x8 Size=0x8
    void  ( * ComponentIdleState)(void * ,unsigned long ,unsigned long );// Offset=0x10 Size=0x8
    void  ( * DevicePowerRequired)(void * );// Offset=0x18 Size=0x8
    void  ( * DevicePowerNotRequired)(void * );// Offset=0x20 Size=0x8
    long  ( * PowerControl)(void * ,struct _GUID * ,void * ,unsigned long long ,void * ,unsigned long long ,unsigned long long * );// Offset=0x28 Size=0x8
    void  ( * ComponentCriticalTransition)(void * ,unsigned long ,unsigned char );// Offset=0x30 Size=0x8
};

struct _UNICODE_STRING// Size=0x10 (Id=26)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    unsigned short * Buffer;// Offset=0x8 Size=0x8
};

struct _DISPATCHER_HEADER// Size=0x18 (Id=489)
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
        unsigned char Timer2Reserved1;// Offset=0x2 Size=0x1
        unsigned char Timer2Reserved2;// Offset=0x3 Size=0x1
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

struct _KEVENT// Size=0x18 (Id=59)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
};

struct _IO_REMOVE_LOCK_COMMON_BLOCK// Size=0x20 (Id=1429)
{
    unsigned char Removed;// Offset=0x0 Size=0x1
    unsigned char Reserved[3];// Offset=0x1 Size=0x3
    long IoCount;// Offset=0x4 Size=0x4
    struct _KEVENT RemoveEvent;// Offset=0x8 Size=0x18
};

struct _IO_REMOVE_LOCK// Size=0x20 (Id=1390)
{
    struct _IO_REMOVE_LOCK_COMMON_BLOCK Common;// Offset=0x0 Size=0x20
};

struct _WORK_QUEUE_ITEM// Size=0x20 (Id=74)
{
    struct _LIST_ENTRY List;// Offset=0x0 Size=0x10
    void  ( * WorkerRoutine)(void * );// Offset=0x10 Size=0x8
    void * Parameter;// Offset=0x18 Size=0x8
};

struct _POP_FX_WORK_ORDER// Size=0x38 (Id=514)
{
    struct _WORK_QUEUE_ITEM WorkItem;// Offset=0x0 Size=0x20
    long WorkCount;// Offset=0x20 Size=0x4
    void * Context;// Offset=0x28 Size=0x8
    struct _POP_FX_WORK_ORDER_WATCHDOG_INFO * WatchdogTimerInfo;// Offset=0x30 Size=0x8
};

struct _unnamed_8// Size=0x8 (Id=8)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    unsigned long HighPart;// Offset=0x4 Size=0x4
};

union _ULARGE_INTEGER// Size=0x8 (Id=9)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    unsigned long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_8 u;// Offset=0x0 Size=0x8
    unsigned long long QuadPart;// Offset=0x0 Size=0x8
};

struct _KTIMER// Size=0x40 (Id=1001)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
    union _ULARGE_INTEGER DueTime;// Offset=0x18 Size=0x8
    struct _LIST_ENTRY TimerListEntry;// Offset=0x20 Size=0x10
    struct _KDPC * Dpc;// Offset=0x30 Size=0x8
    unsigned long Processor;// Offset=0x38 Size=0x4
    unsigned long Period;// Offset=0x3c Size=0x4
};

struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=47)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _KDPC// Size=0x40 (Id=152)
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

union _POWER_STATE// Size=0x4 (Id=897)
{
    enum _SYSTEM_POWER_STATE SystemState;// Offset=0x0 Size=0x4
    enum _DEVICE_POWER_STATE DeviceState;// Offset=0x0 Size=0x4
};

struct _POP_FX_ACCOUNTING// Size=0x30 (Id=1229)
{
    unsigned long long Lock;// Offset=0x0 Size=0x8
    unsigned char Active;// Offset=0x8 Size=0x1
    unsigned long DripsRequiredState;// Offset=0xc Size=0x4
    long Level;// Offset=0x10 Size=0x4
    long long ActiveStamp;// Offset=0x18 Size=0x8
    unsigned long long CsActiveTime;// Offset=0x20 Size=0x8
    long long CriticalActiveTime;// Offset=0x28 Size=0x8
};

struct _POP_FX_DEVICE// Size=0x278 (Id=931)
{
    struct _LIST_ENTRY Link;// Offset=0x0 Size=0x10
    struct _IRP * Irp;// Offset=0x10 Size=0x8
    struct _POP_IRP_DATA * IrpData;// Offset=0x18 Size=0x8
    union _POP_FX_DEVICE_STATUS Status;// Offset=0x20 Size=0x4
    long PowerReqCall;// Offset=0x24 Size=0x4
    long PowerNotReqCall;// Offset=0x28 Size=0x4
    struct _DEVICE_NODE * DevNode;// Offset=0x30 Size=0x8
    struct PEPHANDLE__ * DpmContext;// Offset=0x38 Size=0x8
    struct _POP_FX_PLUGIN * Plugin;// Offset=0x40 Size=0x8
    struct PEPHANDLE__ * PluginHandle;// Offset=0x48 Size=0x8
    struct _POP_FX_PLUGIN * AcpiPlugin;// Offset=0x50 Size=0x8
    struct PEPHANDLE__ * AcpiPluginHandle;// Offset=0x58 Size=0x8
    struct _DEVICE_OBJECT * DeviceObject;// Offset=0x60 Size=0x8
    struct _DEVICE_OBJECT * TargetDevice;// Offset=0x68 Size=0x8
    struct _POP_FX_DRIVER_CALLBACKS Callbacks;// Offset=0x70 Size=0x38
    void * DriverContext;// Offset=0xa8 Size=0x8
    struct _LIST_ENTRY AcpiLink;// Offset=0xb0 Size=0x10
    struct _UNICODE_STRING DeviceId;// Offset=0xc0 Size=0x10
    struct _IO_REMOVE_LOCK RemoveLock;// Offset=0xd0 Size=0x20
    struct _IO_REMOVE_LOCK AcpiRemoveLock;// Offset=0xf0 Size=0x20
    struct _POP_FX_WORK_ORDER WorkOrder;// Offset=0x110 Size=0x38
    unsigned long long IdleLock;// Offset=0x148 Size=0x8
    struct _KTIMER IdleTimer;// Offset=0x150 Size=0x40
    struct _KDPC IdleDpc;// Offset=0x190 Size=0x40
    unsigned long long IdleTimeout;// Offset=0x1d0 Size=0x8
    unsigned long long IdleStamp;// Offset=0x1d8 Size=0x8
    struct _DEVICE_OBJECT * NextIrpDeviceObject[2];// Offset=0x1e0 Size=0x10
    union _POWER_STATE NextIrpPowerState[2];// Offset=0x1f0 Size=0x8
    void  ( * NextIrpCallerCompletion)[2];// Offset=0x1f8 Size=0x10
    void * NextIrpCallerContext[2];// Offset=0x208 Size=0x10
    struct _KEVENT IrpCompleteEvent;// Offset=0x218 Size=0x18
    unsigned char  ( * PowerOnDumpDeviceCallback)(struct _PEP_CRASHDUMP_INFORMATION * );// Offset=0x230 Size=0x8
    struct _POP_FX_ACCOUNTING Accounting;// Offset=0x238 Size=0x30
    unsigned long Flags;// Offset=0x268 Size=0x4
    unsigned long ComponentCount;// Offset=0x26c Size=0x4
    struct _POP_FX_COMPONENT ** Components;// Offset=0x270 Size=0x8
};
