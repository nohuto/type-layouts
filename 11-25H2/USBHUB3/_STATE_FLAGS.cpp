enum _STATE_FLAGS
{
    StateFlagNone=0,
    StateFlagHandlesCriticalEventsOnly=1,
    StateFlagHandlesLowPriEvents=2,
    StateFlagPopIfParentStateChanges=4,
    StateFlagEndSubStateMachine=8,
    StateFlagRequiresPassive=16,
    StateFlagAllowsHubSuspend=32,
    StateFlagStopTimerOnExit=64,
    StateFlagRequiresDeferredExecution=128
};
