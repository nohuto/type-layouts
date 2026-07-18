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

union _EVENT// Size=0x4 (Id=789)
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
    EsmStateCheckingIfStopEndpointCommandShouldBeDelayed=2012,
    EsmStateCheckingIfStopEndpontReissueCountReached=2013,
    EsmStateCompletingClientResetRequest=2014,
    EsmStateCompletingClientResetRequestAfterEndpointReconfigure=2015,
    EsmStateCompletingClientResetRequestAfterEndpointReconfigureFailure=2016,
    EsmStateCompletingClientResetRequestAfterResetFailure=2017,
    EsmStateCompletingClientResetRequestDueToOutstandingTransfers=2018,
    EsmStateCompletingResetRequestWhenEndpointNotHalted=2019,
    EsmStateDroppingFSEAfterStop=2020,
    EsmStateEnabledAndMapping=2021,
    EsmStateNotifyingTransferRingsEndpointHalted=2022,
    EsmStateNotifyingTransferRingsEndpointResetFromClient=2023,
    EsmStateNotifyingTransferRingsFSEReceived=2024,
    EsmStateNotifyingTransferRingsOkToReclaimTransfersOnCancel=2025,
    EsmStateNotifyingUCXAboutTransferCancellation=2026,
    EsmStateProcessingExpectedEventTRBsAfterEndpointHalt=2027,
    EsmStateProcessingExpectedEventTRBsAfterEndpointStop=2028,
    EsmStatePurgingTransferRingQueuesIfNeeded=2029,
    EsmStateReclaimingCanceledTransfersAfterControllerSurpriseRemoval=2030,
    EsmStateReclaimingTransfersAfterControlEndpointAutoReset=2031,
    EsmStateReclaimingTransfersAfterControllerReset=2032,
    EsmStateReclaimingTransfersAfterEndpointStop=2033,
    EsmStateReconfiguringEndpointAfterStop=2034,
    EsmStateReconfiguringEndpointOnReset=2035,
    EsmStateRequeuingPendingTransfersAfterHaltClear=2036,
    EsmStateResettingControlEndpoint=2037,
    EsmStateResettingControllerDueToRepeatedStopEndpointFailure=2038,
    EsmStateResettingEndpoint=2039,
    EsmStateRestartingTransferRingQueuesIfNeeded=2040,
    EsmStateSimulatingEndpointHaltReceivedOnTimeout=2041,
    EsmStateSimulatingExpectedEventTRBsProcessedAfterHaltOnTimeout=2042,
    EsmStateSimulatingExpectedEventTRBsProcessedOnTimeout=2043,
    EsmStateSimulatingFSEReceivedOnTimeout=2044,
    EsmStateStartingMapping=2045,
    EsmStateStoppingEndpoint=2046,
    EsmStateStoppingMappingAfterControllerResetInEnabled=2047,
    EsmStateStoppingMappingAfterControllerSurpriseRemovalInEnabled=2048,
    EsmStateStoppingMappingBeforeEndpointReconfigure=2049,
    EsmStateStoppingMappingOnCancelStart=2050,
    EsmStateStoppingMappingOnHalt=2051,
    EsmStateUpdatingTransferRingDequeuePointers=2052,
    EsmStateWaitingForControllerResetCompletion=2053,
    EsmStateWaitingForControllerResetCompletionInEnabled=2054,
    EsmStateWaitingForControllerResetOrSurpriseRemovalNotification=2055,
    EsmStateWaitingForEndpointDisable=2056,
    EsmStateWaitingForFSEAfterStopEndpointCommandCompletion=2057,
    EsmStateWaitingForHaltedCompletionCode=2058,
    EsmStateWaitingForResetRequestFromClient=2059,
    EsmStateWaitingToReissueStopEndpointCommand1=2060,
    EsmStateWaitingToReissueStopEndpointCommand2=2061,
    EsmStateWaitingToReissueStopEndpointCommand3=2062
};

union _STATE// Size=0x4 (Id=944)
{
    unsigned long StateAsUlong;// Offset=0x0 Size=0x4
    enum _GENERIC_STATE GenericState;// Offset=0x0 Size=0x4
    enum _ESM_STATE EsmState;// Offset=0x0 Size=0x4
};

struct _STATE_LOG// Size=0xc (Id=762)
{
    union _EVENT Event;// Offset=0x0 Size=0x4
    union _STATE State;// Offset=0x4 Size=0x4
    unsigned long Depth;// Offset=0x8 Size=0x4
};
