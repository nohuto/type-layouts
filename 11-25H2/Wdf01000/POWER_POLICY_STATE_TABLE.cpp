struct POWER_POLICY_STATE_TABLE// Size=0x20 (Id=2419)
{
    enum _WDF_DEVICE_POWER_POLICY_STATE  ( * StateFunc)(class FxPkgPnp * );// Offset=0x0 Size=0x8
    struct POWER_POLICY_EVENT_TARGET_STATE FirstTargetState;// Offset=0x8 Size=0x8
    struct POWER_POLICY_EVENT_TARGET_STATE * OtherTargetStates;// Offset=0x10 Size=0x8
    union FxPwrPolStateInfo StateInfo;// Offset=0x18 Size=0x4
};
