struct _ENDPOINTS_CONFIGURE_FAILURE_FLAGS// Size=0x4 (Id=858)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long InsufficientBandwidth:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long InsufficientHardwareResourcesForEndpoints:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long MaxExitLatencyTooLarge:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long Reserved:29;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1d
    };
};
