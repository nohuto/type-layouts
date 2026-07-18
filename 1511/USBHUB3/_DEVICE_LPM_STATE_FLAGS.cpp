union _DEVICE_LPM_STATE_FLAGS// Size=0x4 (Id=439)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long SlowestLinkForU1Exit:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long SlowestLinkForU2Exit:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long U1EnabledForUSPort:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long U2EnabledForUSPort:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long TargetU1EnabledForUSPort:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long TargetU2EnabledForUSPort:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long U1DisabledDueToIntolerableLatency:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long U2DisabledDueToIntolerableLatency:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long U1U2DisabledDueToNoPingResponse:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
    };
};
