struct _PEP_PROCESSOR_IDLE_STATE_V2// Size=0xc (Id=467)
{
    union // Size=0x4 (Id=0)
    {
        unsigned long Ulong;// Offset=0x0 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long Interruptible:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long CacheCoherent:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long ThreadContextRetained:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long CStateType:4;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x4
            unsigned long WakesSpuriously:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
            unsigned long PlatformOnly:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
            unsigned long Autonomous:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
            unsigned long Reserved:22;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x16
        };
    };
    unsigned long Latency;// Offset=0x4 Size=0x4
    unsigned long BreakEvenDuration;// Offset=0x8 Size=0x4
};
