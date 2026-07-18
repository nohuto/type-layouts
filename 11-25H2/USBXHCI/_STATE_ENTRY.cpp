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

struct _STATE_ENTRY// Size=0x20 (Id=621)
{
    unsigned long EtwName;// Offset=0x0 Size=0x4
    unsigned long  ( * EntryFunc)(struct _SM_CONTEXT * );// Offset=0x8 Size=0x8
    enum _STATE_FLAGS StateFlags;// Offset=0x10 Size=0x4
    struct _SUBSM_ENTRY * SubSmEntries;// Offset=0x18 Size=0x8
    struct _STATE_TRANSITION Transitions[0];
};
