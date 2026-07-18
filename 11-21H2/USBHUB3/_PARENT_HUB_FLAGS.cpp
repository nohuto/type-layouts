union _PARENT_HUB_FLAGS// Size=0x4 (Id=709)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long DisableLpmForAllDownstreamDevices:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long HubIsHighSpeedCapable:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long DisableUpdateMaxExitLatency:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long DisableU1:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
    };
};
