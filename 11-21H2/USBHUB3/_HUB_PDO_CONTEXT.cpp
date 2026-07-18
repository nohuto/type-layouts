union _PDO_FLAGS// Size=0x4 (Id=685)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long InD0:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long ArmedForWake:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long RequiresArmingForWake:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long WaitWakePending:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long SupportsFunctionSuspend:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long InBootPath:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long ResetOnLastResume:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long ProgrammingLostOnLastReset:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long PowerLostOnLastReset:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long DeviceGone:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long QueryStopped:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long QueryRemoved:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long IdleStateMachineInitialized:1;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x1
        unsigned long ReportPortAsDisabled:1;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x1
        unsigned long WakeNotificationSent:1;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x1
        unsigned long WerReferenceHeld:1;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x1
    };
};

enum _ISM_EVENT
{
    IsmEventNull=1000,
    IsmEventCallbackReturned=6001,
    IsmEventIrpCancelled=6002,
    IsmEventNewRequest=6003,
    IsmEventOperationFailure=6004,
    IsmEventOperationSuccess=6005,
    IsmEventPDOCleanup=6006,
    IsmEventPDOD0=6007,
    IsmEventPDOD3=6008,
    IsmEventStart=6009,
    IsmEventWorkerRoutine=6010
};

enum _ISM_STATE
{
    IsmStateIgnored=1000,
    IsmStateNull=1001,
    IsmStateCompleteWithStatusDeviceBusy=1002,
    IsmStateCompleteWithStatusNoSuchDevice=1003,
    IsmStateStartState=6000,
    IsmStateCallbackCompleted=6001,
    IsmStateCheckingIfSSIsEnabled=6002,
    IsmStateCompletingIdleIrpWithStatusCancelled=6003,
    IsmStateCompletingIdleIrpWithStatusCancelledInSSDisabled=6004,
    IsmStateCompletingIdleIrpWithStatusCancelledReturnPending=6005,
    IsmStateCompletingIdleIrpWithStatusInvalidDeviceState=6006,
    IsmStateCompletingIdleIrpWithStatusSuccess=6007,
    IsmStateCompletingRequestWithStatusDeviceGone=6008,
    IsmStateIdleRequestPendingWithSSDisabled=6009,
    IsmStateInvokingClientCallback=6010,
    IsmStateMarkingRequestCancellable=6011,
    IsmStateMarkingRequestCancellableInSSDisabled=6012,
    IsmStateNoIdleRequest=6013,
    IsmStateNoIdleRequestWithSelectiveSuspendDisabled=6014,
    IsmStatePDORemoved=6015,
    IsmStateQueuingWorkerItem=6016,
    IsmStateStoringRequestInSSDisabled=6017,
    IsmStateStoringRequestInSSEnabled=6018,
    IsmStateUnMarkingRequestAsCancelable=6019,
    IsmStateUnMarkingRequestCancellable=6020,
    IsmStateUnMarkingRequestCancellableOnD0=6021,
    IsmStateWaitingForCallbackComplete=6022,
    IsmStateWaitingForCallbackOnCancelD0=6023,
    IsmStateWaitingForCallbackOnCancellation=6024,
    IsmStateWaitingForCallbackOnCancelledD3=6025,
    IsmStateWaitingForCallbackOnD0=6026,
    IsmStateWaitingForCallbackOnD3=6027,
    IsmStateWaitingForCallbackOnRemove=6028,
    IsmStateWaitingForCancellation=6029,
    IsmStateWaitingForCancellationOnRemove=6030,
    IsmStateWaitingForWorkerItem=6031
};

struct _ISM_STATE_LOG// Size=0x8 (Id=569)
{
    enum _ISM_EVENT Event;// Offset=0x0 Size=0x4
    enum _ISM_STATE State;// Offset=0x4 Size=0x4
};

enum _ISM_POSTLOCK_ACTION
{
    IsmPostLockActionNone=0,
    IsmPostLockActionCompleteIrpWithStatusCancelled=1,
    IsmPostLockActionCompleteIrpWithStatusDeviceBusy=2,
    IsmPostLockActionCompleteIrpWithStatusNoSuchDevice=3,
    IsmPostLockActionCompleteIrpWithStatusInvalidDeviceState=4,
    IsmPostLockActionCompleteIrpWithStatusSuccess=5,
    IsmPostLockActionInvokeClientCallback=6,
    IsmPostLockActionQueueWorkItem=7,
    IsmPostLockActionCompleteIrpWithStatusCancelledAndReturnPending=8
};

struct _ISM_CONTEXT// Size=0xc0 (Id=451)
{
    struct _ISM_STATE_LOG StateHistory[16];// Offset=0x0 Size=0x80
    unsigned char StateHistoryIndex;// Offset=0x80 Size=0x1
    unsigned long long StateMachineLock;// Offset=0x88 Size=0x8
    enum _ISM_STATE CurrentState;// Offset=0x90 Size=0x4
    struct _ISM_STATE_ENTRY ** StateTable;// Offset=0x98 Size=0x8
    unsigned long StartIndex;// Offset=0xa0 Size=0x4
    struct _IRP * IdleIrp;// Offset=0xa8 Size=0x8
    enum _ISM_POSTLOCK_ACTION PostLockAction;// Offset=0xb0 Size=0x4
    struct WDFWORKITEM__ * IdleWorker;// Offset=0xb8 Size=0x8
};

struct _D3COLD_SUPPORT_INTERFACE// Size=0x48 (Id=588)
{
    unsigned short Size;// Offset=0x0 Size=0x2
    unsigned short Version;// Offset=0x2 Size=0x2
    void * Context;// Offset=0x8 Size=0x8
    void  ( * InterfaceReference)(void * );// Offset=0x10 Size=0x8
    void  ( * InterfaceDereference)(void * );// Offset=0x18 Size=0x8
    void  ( * SetD3ColdSupport)(void * ,unsigned char );// Offset=0x20 Size=0x8
    long  ( * GetIdleWakeInfo)(void * ,enum _SYSTEM_POWER_STATE ,enum _DEVICE_WAKE_DEPTH * );// Offset=0x28 Size=0x8
    long  ( * GetD3ColdCapability)(void * ,unsigned char * );// Offset=0x30 Size=0x8
    long  ( * GetBusDriverD3ColdSupport)(void * ,unsigned char * );// Offset=0x38 Size=0x8
    void  ( * GetLastTransitionStatus)(void * ,enum _D3COLD_LAST_TRANSITION_STATUS * );// Offset=0x40 Size=0x8
};

enum _WDF_POWER_DEVICE_STATE
{
    WdfPowerDeviceInvalid=0,
    WdfPowerDeviceD0=1,
    WdfPowerDeviceD1=2,
    WdfPowerDeviceD2=3,
    WdfPowerDeviceD3=4,
    WdfPowerDeviceD3Final=5,
    WdfPowerDevicePrepareForHibernation=6,
    WdfPowerDeviceMaximum=7
};

struct _LIST_ENTRY// Size=0x10 (Id=4)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _DISPATCHER_HEADER// Size=0x18 (Id=536)
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

struct _IO_REMOVE_LOCK_COMMON_BLOCK// Size=0x20 (Id=540)
{
    unsigned char Removed;// Offset=0x0 Size=0x1
    unsigned char Reserved[3];// Offset=0x1 Size=0x3
    long IoCount;// Offset=0x4 Size=0x4
    struct _KEVENT RemoveEvent;// Offset=0x8 Size=0x18
};

struct _IO_REMOVE_LOCK// Size=0x20 (Id=437)
{
    struct _IO_REMOVE_LOCK_COMMON_BLOCK Common;// Offset=0x0 Size=0x20
};

struct _DEVICE_RESET_INTERFACE_STANDARD// Size=0x50 (Id=484)
{
    unsigned short Size;// Offset=0x0 Size=0x2
    unsigned short Version;// Offset=0x2 Size=0x2
    void * Context;// Offset=0x8 Size=0x8
    void  ( * InterfaceReference)(void * );// Offset=0x10 Size=0x8
    void  ( * InterfaceDereference)(void * );// Offset=0x18 Size=0x8
    long  ( * DeviceReset)(void * ,enum _DEVICE_RESET_TYPE ,unsigned long ,void * );// Offset=0x20 Size=0x8
    unsigned long SupportedResetTypes;// Offset=0x28 Size=0x4
    void * Reserved;// Offset=0x30 Size=0x8
    long  ( * QueryBusSpecificResetInfo)(void * ,unsigned long * ,struct _DEVICE_BUS_SPECIFIC_RESET_INFO * );// Offset=0x38 Size=0x8
    long  ( * DeviceBusSpecificReset)(void * ,struct _GUID * ,union _DEVICE_BUS_SPECIFIC_RESET_TYPE ,unsigned long long ,void * );// Offset=0x40 Size=0x8
    long  ( * GetDeviceResetStatus)(void * ,unsigned char * ,union _DEVICE_BUS_SPECIFIC_RESET_TYPE * ,unsigned long long * );// Offset=0x48 Size=0x8
};

struct _HUB_PDO_CONTEXT// Size=0x228 (Id=366)
{
    unsigned char FailIo;// Offset=0x0 Size=0x1
    long CyclePortInProgress;// Offset=0x4 Size=0x4
    struct _DEVICE_OBJECT * TargetDeviceObject;// Offset=0x8 Size=0x8
    struct _HUB_FDO_CONTEXT * HubFdoContext;// Offset=0x10 Size=0x8
    struct _DEVICE_CONTEXT * AssociatedDSM;// Offset=0x18 Size=0x8
    union _PDO_FLAGS PdoFlags;// Offset=0x20 Size=0x4
    unsigned long LastPowerRequested;// Offset=0x24 Size=0x4
    struct WDFMEMORY__ * ConfigurationHandleMemory;// Offset=0x28 Size=0x8
    unsigned short PortNumber;// Offset=0x30 Size=0x2
    struct _USB_START_FAILDATA * FailData;// Offset=0x38 Size=0x8
    struct _HUB_FDO_CONTEXT * ChildHubFdoContext;// Offset=0x40 Size=0x8
    struct _ISM_CONTEXT IdleIrpContext;// Offset=0x48 Size=0xc0
    struct WDFREQUEST__ * WakeNotification;// Offset=0x108 Size=0x8
    void * LpmPowerSettingsHandles[5];// Offset=0x110 Size=0x28
    struct _D3COLD_SUPPORT_INTERFACE D3ColdFilter;// Offset=0x138 Size=0x48
    enum _WDF_POWER_DEVICE_STATE CurrentWdfPowerDeviceState;// Offset=0x180 Size=0x4
    unsigned long USBDClientContractVersion;// Offset=0x184 Size=0x4
    struct SS_COMPONENT__ * SleepStudyHandle;// Offset=0x188 Size=0x8
    long BlockingDrips;// Offset=0x190 Size=0x4
    long BlockingDripsRecentIo;// Offset=0x194 Size=0x4
    void * ReEnumerationCallbackHandle;// Offset=0x198 Size=0x8
    void * IdleResiliencyCallbackHandle;// Offset=0x1a0 Size=0x8
    struct _IO_REMOVE_LOCK RemoveLock;// Offset=0x1a8 Size=0x20
    struct _DEVICE_RESET_INTERFACE_STANDARD ResetInterface;// Offset=0x1c8 Size=0x50
    unsigned char RequestingPlatformLevelDeviceReset;// Offset=0x218 Size=0x1
    struct WDFWORKITEM__ * ResetActionWorkItem;// Offset=0x220 Size=0x8
};
