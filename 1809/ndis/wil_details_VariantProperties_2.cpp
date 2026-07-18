struct wil_details_VariantProperties// Size=0x4 (Id=489)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned int enabledState:2;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x2
        unsigned int isVariant:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned int queuedForReporting:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned int hasNotificationState:2;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x2
        unsigned int recordedDeviceUsage:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned int variant:6;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x6
        unsigned int unused:19;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x13
    };
};
