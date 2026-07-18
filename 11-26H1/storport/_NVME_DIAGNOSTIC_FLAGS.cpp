union _NVME_DIAGNOSTIC_FLAGS// Size=0x4 (Id=835)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long CompleteRequestInISR:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long CommandTimeLogging:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long ConsistentPolling:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long HighPriorityPollingDPC:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long IoCompleteWithRedirectDPC:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long TargetNearbyProcForPollingDPC:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long DisablePollingSpinLock:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long HybridPolling:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long PollingOnlyMode:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long TimerDpcMixedMode:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long EnableSoftNUMA:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long Reserved:21;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x15
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};
