struct FxWakeInterruptStateTable// Size=0x18 (Id=758)
{
    enum FxWakeInterruptStates  ( * StateFunc)(class FxWakeInterruptMachine * );// Offset=0x0 Size=0x8
    struct FxWakeInterruptTargetState * TargetStates;// Offset=0x8 Size=0x8
    unsigned long TargetStatesCount;// Offset=0x10 Size=0x4
};
