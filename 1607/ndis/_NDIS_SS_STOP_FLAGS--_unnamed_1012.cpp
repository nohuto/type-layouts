union _NDIS_SS_STOP_FLAGS::_unnamed_1012// Size=0x4 (Id=1012)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long QueryRemove:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long DeviceRemove:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long SurpriseRemove:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long QueryStop:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long DeviceStop:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long SystemPower:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long NicQuiet:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long PnPOp:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long NotStarted:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long MiniportFatalError:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long ApplyInterfaceChange:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long MagicPacket:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long BindChanges:1;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x1
    };
    unsigned long Value;// Offset=0x0 Size=0x4
};
