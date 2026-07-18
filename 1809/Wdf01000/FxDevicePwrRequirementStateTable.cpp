struct FxDevicePwrRequirementStateTable// Size=0x18 (Id=566)
{
    enum FxDevicePwrRequirementStates  ( * StateFunc)(class FxDevicePwrRequirementMachine * );// Offset=0x0 Size=0x8
    struct FxDevicePwrRequirementTargetState * TargetStates;// Offset=0x8 Size=0x8
    unsigned long TargetStatesCount;// Offset=0x10 Size=0x4
};
