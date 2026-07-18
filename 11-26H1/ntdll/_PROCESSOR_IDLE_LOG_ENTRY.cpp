struct _PROCESSOR_IDLE_LOG_ENTRY// Size=0x38 (Id=875)
{
    unsigned long long EnterTime;// Offset=0x0 Size=0x8
    unsigned long long ExitTime;// Offset=0x8 Size=0x8
    unsigned long long CoordinatedStates;// Offset=0x10 Size=0x8
    unsigned long long CoordinatedStatesExited;// Offset=0x18 Size=0x8
    unsigned long State;// Offset=0x20 Size=0x4
    unsigned long PlatformState;// Offset=0x24 Size=0x4
    unsigned long PlatformStateExited;// Offset=0x28 Size=0x4
    long Status;// Offset=0x2c Size=0x4
    union // Size=0x4 (Id=0)
    {
        unsigned long Flags;// Offset=0x30 Size=0x4
        struct // Size=0x2 (Id=0)
        {
            unsigned short Cancelled:1;// Offset=0x30 Size=0x2 BitOffset=0x0 BitSize=0x1
            unsigned short Denied:1;// Offset=0x30 Size=0x2 BitOffset=0x1 BitSize=0x1
            unsigned short CoordinatedIdleEnter:1;// Offset=0x30 Size=0x2 BitOffset=0x2 BitSize=0x1
            unsigned short SkipWake:1;// Offset=0x30 Size=0x2 BitOffset=0x3 BitSize=0x1
            unsigned short DeepestPlatformIdle:1;// Offset=0x30 Size=0x2 BitOffset=0x4 BitSize=0x1
            unsigned short DeepIdle:1;// Offset=0x30 Size=0x2 BitOffset=0x5 BitSize=0x1
            unsigned short IdleDurationConstrained:1;// Offset=0x30 Size=0x2 BitOffset=0x6 BitSize=0x1
        };
    };
    unsigned short ReasonFlags;// Offset=0x32 Size=0x2
};
