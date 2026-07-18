struct _UNICODE_STRING// Size=0x10 (Id=65)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _PROCESSOR_IDLE_STATE_EX// Size=0x20 (Id=744)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Interruptible:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long CacheCoherent:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long ThreadContextRetained:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long CStateType:4;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x4
        unsigned long WakesSpuriously:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long PlatformOnly:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long Reserved:21;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x15
        unsigned long NoCState:1;// Offset=0x0 Size=0x4 BitOffset=0x1e BitSize=0x1
        unsigned long InterruptsEnabled:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
    unsigned long Latency;// Offset=0x4 Size=0x4
    unsigned long BreakEvenDuration;// Offset=0x8 Size=0x4
    unsigned long Power;// Offset=0xc Size=0x4
    struct _UNICODE_STRING Name;// Offset=0x10 Size=0x10
};
