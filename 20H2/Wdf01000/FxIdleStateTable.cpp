struct FxIdleStateTable// Size=0x18 (Id=705)
{
    enum FxPowerIdleStates  ( * StateFunc)(class FxPowerIdleMachine * );// Offset=0x0 Size=0x8
    struct FxPowerIdleTargetState * TargetStates;// Offset=0x8 Size=0x8
    unsigned long TargetStatesCount;// Offset=0x10 Size=0x4
};
