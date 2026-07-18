enum _STATE_FLAGS
{
    StateFlagNone=0,
    StateFlagHandlesCriticalEventsOnly=1,
    StateFlagHandlesLowPriEvents=2,
    StateFlagPopIfParentStateChanges=4,
    StateFlagEndSubStateMachine=8,
    StateFlagRequiresPassive=16,
    StateFlagStopTimerOnExit=32
};
