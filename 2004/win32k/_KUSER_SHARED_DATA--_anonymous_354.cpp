struct _KSYSTEM_TIME// Size=0xc (Id=294)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long High1Time;// Offset=0x4 Size=0x4
    long High2Time;// Offset=0x8 Size=0x4
};

union _KUSER_SHARED_DATA::_anonymous_354// Size=0x10 (Id=354)
{
    union // Size=0xc (Id=0)
    {
        struct _KSYSTEM_TIME TickCount;// Offset=0x0 Size=0xc
        unsigned long long TickCountQuad;// Offset=0x0 Size=0x8
        unsigned long ReservedTickCountOverlay[3];// Offset=0x0 Size=0xc
    };
    unsigned long TickCountPad[1];// Offset=0xc Size=0x4
};
