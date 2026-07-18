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

struct _ISM_STATE_TRANSITION// Size=0x8 (Id=416)
{
    enum _ISM_EVENT Event;// Offset=0x0 Size=0x4
    enum _ISM_STATE TargetState;// Offset=0x4 Size=0x4
};
