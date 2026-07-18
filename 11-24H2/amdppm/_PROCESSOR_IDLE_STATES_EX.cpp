struct _PROCESSOR_NUMBER// Size=0x4 (Id=478)
{
    unsigned short Group;// Offset=0x0 Size=0x2
    unsigned char Number;// Offset=0x2 Size=0x1
    unsigned char Reserved;// Offset=0x3 Size=0x1
};

struct _UNICODE_STRING// Size=0x10 (Id=79)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _PROCESSOR_IDLE_STATE_EX// Size=0x20 (Id=792)
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

struct _PROCESSOR_IDLE_STATES_EX// Size=0x88 (Id=769)
{
    unsigned long Version;// Offset=0x0 Size=0x4
    struct _PROCESSOR_NUMBER Processor;// Offset=0x4 Size=0x4
    void * Context;// Offset=0x8 Size=0x8
    unsigned char EstimateIdleDuration;// Offset=0x10 Size=0x1
    unsigned char Update;// Offset=0x11 Size=0x1
    unsigned char StrictVetoBias;// Offset=0x12 Size=0x1
    unsigned char EnforceStateConstraints;// Offset=0x13 Size=0x1
    unsigned long  ( * IdlePreselect)(void * ,struct _PROCESSOR_IDLE_CONSTRAINTS * );// Offset=0x18 Size=0x8
    unsigned long  ( * IdleTest)(void * ,unsigned long ,unsigned long );// Offset=0x20 Size=0x8
    unsigned long  ( * IdleAvailabilityCheck)(void * ,unsigned long );// Offset=0x28 Size=0x8
    long  ( * IdlePreExecute)(void * ,unsigned long ,unsigned long ,unsigned long ,unsigned long * );// Offset=0x30 Size=0x8
    unsigned long long LevelId;// Offset=0x38 Size=0x8
    long  ( * IdleExecute)(void * ,unsigned long long ,unsigned long ,unsigned long ,unsigned long ,unsigned long ,unsigned long * );// Offset=0x40 Size=0x8
    void  ( * IdleComplete)(void * ,unsigned long ,unsigned long ,unsigned long ,unsigned long * );// Offset=0x48 Size=0x8
    unsigned char  ( * IdleIsHalted)(void * );// Offset=0x50 Size=0x8
    unsigned char  ( * IdleInitiateWake)(void * );// Offset=0x58 Size=0x8
    unsigned long ProcessorIdleCount;// Offset=0x60 Size=0x4
    struct _PROCESSOR_IDLE_STATE_EX State[1];// Offset=0x68 Size=0x20
};
