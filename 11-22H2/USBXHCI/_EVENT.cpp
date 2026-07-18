enum _ESM_EVENT
{
    EsmEventNull=1000,
    EsmEventContinueIfNoSubState=1001,
    EsmEventCommandCompletionFailure=12,
    EsmEventCommandCompletionSuccess=16,
    EsmEventCommonBufferAllocationFailure=102,
    EsmEventControllerResetComplete=103,
    EsmEventControllerResetStart=15,
    EsmEventControllerSurpriseRemoved=19,
    EsmEventDisabled=27,
    EsmEventEnabled=111,
    EsmEventExpectedEventTRBsProcessed=150,
    EsmEventFSEReceived=118,
    EsmEventHaltedCompletionCodeReceived=154,
    EsmEventMappingStopped=20,
    EsmEventNo=21,
    EsmEventOkToCancelTransfers=24,
    EsmEventOperationFailure=25,
    EsmEventOperationSuccess=29,
    EsmEventResetRequestFromClient=23,
    EsmEventStopEndpointFailureWithEndpointHalted=28,
    EsmEventStopEndpointFailureWithEndpointRunning=32,
    EsmEventStopEndpointFailureWithEndpointStopped=36,
    EsmEventStreamsDisabled=142,
    EsmEventStreamsEnabled=146,
    EsmEventTimerFired=126,
    EsmEventTransferCanceled=130,
    EsmEventTransfersReclaimed=138,
    EsmEventYes=33
};

union _EVENT// Size=0x4 (Id=788)
{
    unsigned long EventAsUlong;// Offset=0x0 Size=0x4
    enum _ESM_EVENT EsmEvent;// Offset=0x0 Size=0x4
};
