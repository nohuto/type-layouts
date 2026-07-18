union wil_details_FeatureStateCache// Size=0x8 (Id=3113)
{
    unsigned int exchange;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned int stateCached:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned int hasNotificationCached:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned int variantCached:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned int effectiveState:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned int desiredState:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned int reservedForKernelModeSupport:2;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x2
        unsigned int hasNotification:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned int isVariant:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned int variant:6;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x6
        unsigned int unused:17;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x11
    };
    unsigned int payloadId;// Offset=0x4 Size=0x4
    unsigned long long exchange64;// Offset=0x0 Size=0x8
};
