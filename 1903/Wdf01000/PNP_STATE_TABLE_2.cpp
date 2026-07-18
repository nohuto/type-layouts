struct PNP_STATE_TABLE// Size=0x20 (Id=1073)
{
    enum _WDF_DEVICE_PNP_STATE  ( * StateFunc)(class FxPkgPnp * );// Offset=0x0 Size=0x8
    struct PNP_EVENT_TARGET_STATE FirstTargetState;// Offset=0x8 Size=0x8
    struct PNP_EVENT_TARGET_STATE * OtherTargetStates;// Offset=0x10 Size=0x8
    union FxPnpStateInfo StateInfo;// Offset=0x18 Size=0x4
};
