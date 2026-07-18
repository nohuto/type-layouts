struct _unnamed_73// Size=0x8 (Id=73)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=74)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_73 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _TIMER_SET_COALESCABLE_TIMER_INFO// Size=0x30 (Id=2964)
{
    union _LARGE_INTEGER DueTime;// Offset=0x0 Size=0x8
    void  ( * TimerApcRoutine)(void * ,unsigned long ,long );// Offset=0x8 Size=0x8
    void * TimerContext;// Offset=0x10 Size=0x8
    struct _COUNTED_REASON_CONTEXT * WakeContext;// Offset=0x18 Size=0x8
    unsigned long Period;// Offset=0x20 Size=0x4
    unsigned long TolerableDelay;// Offset=0x24 Size=0x4
    unsigned char * PreviousState;// Offset=0x28 Size=0x8
};
