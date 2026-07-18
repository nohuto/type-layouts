union FxPowerMachineEventQueue// Size=0x10 (Id=1259)
{
    struct <unnamed-type-E>// Size=0x10 (Id=63455)
    {
        enum FxPowerEvent Event1:16;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x10
        enum FxPowerEvent Event2:16;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x10
        enum FxPowerEvent Event3:16;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x10
        enum FxPowerEvent Event4:16;// Offset=0x4 Size=0x4 BitOffset=0x10 BitSize=0x10
        enum FxPowerEvent Event5:16;// Offset=0x8 Size=0x4 BitOffset=0x0 BitSize=0x10
        enum FxPowerEvent Event6:16;// Offset=0x8 Size=0x4 BitOffset=0x10 BitSize=0x10
        enum FxPowerEvent Event7:16;// Offset=0xc Size=0x4 BitOffset=0x0 BitSize=0x10
        enum FxPowerEvent Event8:16;// Offset=0xc Size=0x4 BitOffset=0x10 BitSize=0x10
    };
    struct FxPowerMachineEventQueue::<unnamed-type-E> E;// Offset=0x0 Size=0x10
    unsigned short Events[8];// Offset=0x0 Size=0x10
};
