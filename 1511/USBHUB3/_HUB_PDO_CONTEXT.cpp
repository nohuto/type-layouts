union _PDO_FLAGS// Size=0x4 (Id=520)
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

struct _ISM_STATE_LOG// Size=0x8 (Id=460)
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

struct _ISM_CONTEXT// Size=0xc0 (Id=450)
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

struct _D3COLD_SUPPORT_INTERFACE// Size=0x48 (Id=618)
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

struct _HUB_PDO_CONTEXT// Size=0x190 (Id=342)
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
    void * SleepStudyHandle;// Offset=0x188 Size=0x8
};
