enum SmFx::StateSlotType
{
    None=0,
    EntryFunction=1,
    ExternalTransitions=2,
    InternalTransitions=4,
    DeferredEvents=8,
    PopTransitions=16,
    PurgeEvents=32,
    StopTimerOnExit=64
};
