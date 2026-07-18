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

union _EVENT// Size=0x4 (Id=711)
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
    EsmStateCheckingIfIgnoreContextErrorOnEPStopFlagIsSet=2009,
    EsmStateCheckingIfStopEndpointCommandShouldBeDelayed=2010,
    EsmStateCheckingIfStopEndpontReissueCountReached=2011,
    EsmStateCompletingClientResetRequest=2012,
    EsmStateCompletingClientResetRequestAfterEndpointReconfigure=2013,
    EsmStateCompletingClientResetRequestAfterEndpointReconfigureFailure=2014,
    EsmStateCompletingClientResetRequestAfterResetFailure=2015,
    EsmStateCompletingClientResetRequestDueToOutstandingTransfers=2016,
    EsmStateCompletingResetRequestWhenEndpointNotHalted=2017,
    EsmStateDroppingFSEAfterStop=2018,
    EsmStateEnabledAndMapping=2019,
    EsmStateNotifyingTransferRingsEndpointHalted=2020,
    EsmStateNotifyingTransferRingsEndpointResetFromClient=2021,
    EsmStateNotifyingTransferRingsFSEReceived=2022,
    EsmStateNotifyingTransferRingsOkToReclaimTransfersOnCancel=2023,
    EsmStateNotifyingUCXAboutTransferCancellation=2024,
    EsmStateProcessingExpectedEventTRBsAfterEndpointHalt=2025,
    EsmStateProcessingExpectedEventTRBsAfterEndpointStop=2026,
    EsmStatePurgingTransferRingQueuesIfNeeded=2027,
    EsmStateReclaimingCanceledTransfersAfterControllerSurpriseRemoval=2028,
    EsmStateReclaimingTransfersAfterControlEndpointAutoReset=2029,
    EsmStateReclaimingTransfersAfterControllerReset=2030,
    EsmStateReclaimingTransfersAfterEndpointStop=2031,
    EsmStateReconfiguringEndpointAfterStop=2032,
    EsmStateReconfiguringEndpointOnReset=2033,
    EsmStateRequeuingPendingTransfersAfterHaltClear=2034,
    EsmStateResettingControlEndpoint=2035,
    EsmStateResettingControllerDueToRepeatedStopEndpointFailure=2036,
    EsmStateResettingEndpoint=2037,
    EsmStateRestartingTransferRingQueuesIfNeeded=2038,
    EsmStateSimulatingEndpointHaltReceivedOnTimeout=2039,
    EsmStateSimulatingExpectedEventTRBsProcessedAfterHaltOnTimeout=2040,
    EsmStateSimulatingExpectedEventTRBsProcessedOnTimeout=2041,
    EsmStateSimulatingFSEReceivedOnTimeout=2042,
    EsmStateStartingMapping=2043,
    EsmStateStoppingEndpoint=2044,
    EsmStateStoppingMappingAfterControllerResetInEnabled=2045,
    EsmStateStoppingMappingAfterControllerSurpriseRemovalInEnabled=2046,
    EsmStateStoppingMappingBeforeEndpointReconfigure=2047,
    EsmStateStoppingMappingOnCancelStart=2048,
    EsmStateStoppingMappingOnHalt=2049,
    EsmStateUpdatingTransferRingDequeuePointers=2050,
    EsmStateWaitingForControllerResetCompletion=2051,
    EsmStateWaitingForControllerResetCompletionInEnabled=2052,
    EsmStateWaitingForControllerResetOrSurpriseRemovalNotification=2053,
    EsmStateWaitingForEndpointDisable=2054,
    EsmStateWaitingForFSEAfterStopEndpointCommandCompletion=2055,
    EsmStateWaitingForHaltedCompletionCode=2056,
    EsmStateWaitingForResetRequestFromClient=2057,
    EsmStateWaitingToReissueStopEndpointCommand1=2058,
    EsmStateWaitingToReissueStopEndpointCommand2=2059
};

union _STATE// Size=0x4 (Id=861)
{
    unsigned long StateAsUlong;// Offset=0x0 Size=0x4
    enum _GENERIC_STATE GenericState;// Offset=0x0 Size=0x4
    enum _ESM_STATE EsmState;// Offset=0x0 Size=0x4
};

struct _STATE_LOG// Size=0xc (Id=685)
{
    union _EVENT Event;// Offset=0x0 Size=0x4
    union _STATE State;// Offset=0x4 Size=0x4
    unsigned long Depth;// Offset=0x8 Size=0x4
};
