enum _ESM_EVENT
{
    EsmEventNull=1000,
    EsmEventContinueIfNoSubState=1001,
    EsmEventCommandCompletionContextStateError=40,
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

union _EVENT// Size=0x4 (Id=819)
{
    unsigned long EventAsUlong;// Offset=0x0 Size=0x4
    enum _ESM_EVENT EsmEvent;// Offset=0x0 Size=0x4
};

enum _GENERIC_STATE
{
    GenericStateIgnored=1000,
    GenericStateEmptySubState=1001,
    GenericStateNull=1002
};

enum _ESM_STATE
{
    EsmStateIgnored=1000,
    EsmStateEmptySubState=1001,
    EsmStateNull=1002,
    EsmStateCompleteWithStatusFailed=1003,
    EsmStateRequestPortCycle=1004,
    EsmStateSignalQueryDeviceTextEvent=1005,
    EsmStateCompleteFDORequestWithStatusFailed=1006,
    EsmStateCompleteGetPortStatusWithInternalError=1007,
    EsmStateCompleteGetPortStatusWithNoSuchDevice=1008,
    EsmStateDisabled=2000,
    EsmStateAcknowledgingControllerResetComplete=2001,
    EsmStateAcknowledgingControllerResetCompleteInDisabled=2002,
    EsmStateCheckingIfControllerHasKnownIssuesInDeliveringFSE=2003,
    EsmStateCheckingIfEndpointCanBeResetAfterHalt=2004,
    EsmStateCheckingIfEndpointShouldBeAutoReset=2005,
    EsmStateCheckingIfEndpointShouldBeReconfiguredAfterStop=2006,
    EsmStateCheckingIfEndpointShouldBeReconfiguredOnResetWhenNotHalted=2007,
    EsmStateCheckingIfEndpointShouldBeStopped=2008,
    EsmStateCheckingIfFasterRetriesOnStopEpFailuresSet1=2009,
    EsmStateCheckingIfFasterRetriesOnStopEpFailuresSet2=2010,
    EsmStateCheckingIfIgnoreContextErrorOnEPStopFlagIsSet=2011,
    EsmStateCheckingIfSetDequeuePointerReissueCountReached=2012,
    EsmStateCheckingIfStopEndpointCommandShouldBeDelayed=2013,
    EsmStateCheckingIfStopEndpontReissueCountReached=2014,
    EsmStateCompletingClientResetRequest=2015,
    EsmStateCompletingClientResetRequestAfterEndpointReconfigure=2016,
    EsmStateCompletingClientResetRequestAfterEndpointReconfigureFailure=2017,
    EsmStateCompletingClientResetRequestAfterResetFailure=2018,
    EsmStateCompletingClientResetRequestDueToOutstandingTransfers=2019,
    EsmStateCompletingResetRequestWhenEndpointNotHalted=2020,
    EsmStateDroppingFSEAfterStop=2021,
    EsmStateEnabledAndMapping=2022,
    EsmStateNotifyingTransferRingsEndpointHalted=2023,
    EsmStateNotifyingTransferRingsEndpointResetFromClient=2024,
    EsmStateNotifyingTransferRingsFSEReceived=2025,
    EsmStateNotifyingTransferRingsOkToReclaimTransfersOnCancel=2026,
    EsmStateNotifyingUCXAboutTransferCancellation=2027,
    EsmStateProcessingExpectedEventTRBsAfterEndpointHalt=2028,
    EsmStateProcessingExpectedEventTRBsAfterEndpointStop=2029,
    EsmStatePurgingTransferRingQueuesIfNeeded=2030,
    EsmStateReclaimingCanceledTransfersAfterControllerSurpriseRemoval=2031,
    EsmStateReclaimingTransfersAfterControlEndpointAutoReset=2032,
    EsmStateReclaimingTransfersAfterControllerReset=2033,
    EsmStateReclaimingTransfersAfterEndpointStop=2034,
    EsmStateReconfiguringEndpointAfterStop=2035,
    EsmStateReconfiguringEndpointOnReset=2036,
    EsmStateRequeuingPendingTransfersAfterHaltClear=2037,
    EsmStateResettingControlEndpoint=2038,
    EsmStateResettingControllerDueToRepeatedStopEndpointFailure=2039,
    EsmStateResettingEndpoint=2040,
    EsmStateResettingStopEndpointReissueCountOnSetDequeuePointerRetry=2041,
    EsmStateRestartingTransferRingQueuesIfNeeded=2042,
    EsmStateSimulatingEndpointHaltReceivedOnTimeout=2043,
    EsmStateSimulatingExpectedEventTRBsProcessedAfterHaltOnTimeout=2044,
    EsmStateSimulatingExpectedEventTRBsProcessedOnTimeout=2045,
    EsmStateSimulatingFSEReceivedOnTimeout=2046,
    EsmStateStartingMapping=2047,
    EsmStateStoppingEndpoint=2048,
    EsmStateStoppingMappingAfterControllerResetInEnabled=2049,
    EsmStateStoppingMappingAfterControllerSurpriseRemovalInEnabled=2050,
    EsmStateStoppingMappingBeforeEndpointReconfigure=2051,
    EsmStateStoppingMappingOnCancelStart=2052,
    EsmStateStoppingMappingOnHalt=2053,
    EsmStateUpdatingTransferRingDequeuePointers=2054,
    EsmStateWaitingForControllerResetCompletion=2055,
    EsmStateWaitingForControllerResetCompletionInEnabled=2056,
    EsmStateWaitingForControllerResetOrSurpriseRemovalNotification=2057,
    EsmStateWaitingForEndpointDisable=2058,
    EsmStateWaitingForFSEAfterStopEndpointCommandCompletion=2059,
    EsmStateWaitingForHaltedCompletionCode=2060,
    EsmStateWaitingForResetRequestFromClient=2061,
    EsmStateWaitingToReissueStopEndpointCommand1=2062,
    EsmStateWaitingToReissueStopEndpointCommand2=2063,
    EsmStateWaitingToReissueStopEndpointCommand3=2064
};

union _STATE// Size=0x4 (Id=978)
{
    unsigned long StateAsUlong;// Offset=0x0 Size=0x4
    enum _GENERIC_STATE GenericState;// Offset=0x0 Size=0x4
    enum _ESM_STATE EsmState;// Offset=0x0 Size=0x4
};

struct _STATE_LOG// Size=0xc (Id=789)
{
    union _EVENT Event;// Offset=0x0 Size=0x4
    union _STATE State;// Offset=0x4 Size=0x4
    unsigned long Depth;// Offset=0x8 Size=0x4
};
