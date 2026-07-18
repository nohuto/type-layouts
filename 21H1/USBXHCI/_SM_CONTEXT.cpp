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

struct _EVENTS_QUEUE// Size=0x44 (Id=638)
{
    union _EVENT Events[16];// Offset=0x0 Size=0x40
    unsigned char QueueHead;// Offset=0x40 Size=0x1
    unsigned char QueueTail;// Offset=0x41 Size=0x1
};

struct _GUID// Size=0x10 (Id=103)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _SM_CONTEXT// Size=0x400 (Id=562)
{
    struct _STATE_LOG StateHistory[64];// Offset=0x0 Size=0x300
    union _EVENT EventHistory[16];// Offset=0x300 Size=0x40
    unsigned char StateHistoryIndex;// Offset=0x340 Size=0x1
    unsigned char EventHistoryIndex;// Offset=0x341 Size=0x1
    unsigned long long StateMachineLock;// Offset=0x348 Size=0x8
    unsigned char StateMachineRunning;// Offset=0x350 Size=0x1
    union _STATE CurrentState[7];// Offset=0x354 Size=0x1c
    unsigned long CurrentStateDepth;// Offset=0x370 Size=0x4
    struct _EVENTS_QUEUE EventQueue;// Offset=0x374 Size=0x44
    unsigned long SubSmFlags;// Offset=0x3b8 Size=0x4
    void * ParentContext;// Offset=0x3c0 Size=0x8
    struct _STATE_ENTRY ** StateTable;// Offset=0x3c8 Size=0x8
    unsigned long StartIndex;// Offset=0x3d0 Size=0x4
    struct _IO_WORKITEM * WorkItem;// Offset=0x3d8 Size=0x8
    struct _GUID CurrentActivityId;// Offset=0x3e0 Size=0x10
    struct WDFTIMER__ * Timer;// Offset=0x3f0 Size=0x8
    unsigned char WaitingForTimerFired;// Offset=0x3f8 Size=0x1
    unsigned char DebugBreakOnStateTransition;// Offset=0x3f9 Size=0x1
    unsigned char RunSmSecure;// Offset=0x3fa Size=0x1
};
