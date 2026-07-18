struct FxSelfManagedIoStateTable// Size=0x18 (Id=1370)
{
    enum FxSelfManagedIoStates  ( * StateFunc)(class FxSelfManagedIoMachine * ,long * ,enum FxCxCallbackProgress * );// Offset=0x0 Size=0x8
    struct FxSelfManagedIoTargetState * TargetStates;// Offset=0x8 Size=0x8
    unsigned long TargetStatesCount;// Offset=0x10 Size=0x4
};
