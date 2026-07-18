union FxSelfManagedIoMachineEventHistory// Size=0x8 (Id=1214)
{
    struct <unnamed-type-E>// Size=0x8 (Id=62214)
    {
        enum FxSelfManagedIoEvents Event1:8;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x8
        enum FxSelfManagedIoEvents Event2:8;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x8
        enum FxSelfManagedIoEvents Event3:8;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x8
        enum FxSelfManagedIoEvents Event4:8;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x8
        enum FxSelfManagedIoEvents Event5:8;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x8
        enum FxSelfManagedIoEvents Event6:8;// Offset=0x4 Size=0x4 BitOffset=0x8 BitSize=0x8
        enum FxSelfManagedIoEvents Event7:8;// Offset=0x4 Size=0x4 BitOffset=0x10 BitSize=0x8
        enum FxSelfManagedIoEvents Event8:8;// Offset=0x4 Size=0x4 BitOffset=0x18 BitSize=0x8
    };
    struct FxSelfManagedIoMachineEventHistory::<unnamed-type-E> E;// Offset=0x0 Size=0x8
    unsigned char History[8];// Offset=0x0 Size=0x8
};
