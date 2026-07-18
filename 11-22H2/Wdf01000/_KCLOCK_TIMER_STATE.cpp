enum _KCLOCK_TIMER_ONE_SHOT_STATE
{
    KClockTimerOneShotUnarmed=0,
    KClockTimerOneShotArmed=1,
    KClockTimerOneShotRearmRequired=2,
    KClockTimerOneShotInvalid=3
};

enum _KCLOCK_TIMER_DEADLINE_TYPE
{
    KClockTimerKTimerExpirationNonHr=0,
    KClockTimerKTimerExpirationPseudoHr=1,
    KClockTimerKTimer2ExpirationHr=2,
    KClockTimerKTimersMax=2,
    KClockTimerQuantumEnd=3,
    KClockTimerGroupSchedulingGenerationEnd=4,
    KClockTimerIdlePromotion=5,
    KClockTimerBamQosHysteresisEnd=6,
    KClockTimerMax=7
};

struct _KCLOCK_TIMER_DEADLINE_ENTRY// Size=0x10 (Id=883)
{
    unsigned long long DueTime;// Offset=0x0 Size=0x8
    unsigned long TolerableDelay;// Offset=0x8 Size=0x4
    union // Size=0x1 (Id=0)
    {
        unsigned char TypeFlags;// Offset=0xc Size=0x1
        struct // Size=0x1 (Id=0)
        {
            unsigned char Valid:1;// Offset=0xc Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char NoWake:1;// Offset=0xc Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char Unused:6;// Offset=0xc Size=0x1 BitOffset=0x2 BitSize=0x6
        };
    };
};

struct _KCLOCK_TICK_TRACE// Size=0x28 (Id=1252)
{
    unsigned long long PerformanceCounter;// Offset=0x0 Size=0x8
    unsigned long long PreInterruptTime;// Offset=0x8 Size=0x8
    unsigned long long PostInterruptTime;// Offset=0x10 Size=0x8
    unsigned long long TimeStampCounter;// Offset=0x18 Size=0x8
    unsigned char IsClockOwner;// Offset=0x20 Size=0x1
};

struct _KCLOCK_INCREMENT_TRACE// Size=0x20 (Id=864)
{
    unsigned long ActualIncrement;// Offset=0x0 Size=0x4
    unsigned long RequestedIncrement;// Offset=0x4 Size=0x4
    unsigned long long InterruptTime;// Offset=0x8 Size=0x8
    unsigned long long PerformanceCounter;// Offset=0x10 Size=0x8
    unsigned char OneShot;// Offset=0x18 Size=0x1
};

struct _KCLOCK_TIMER_STATE// Size=0x518 (Id=1140)
{
    unsigned long long NextTickDueTime;// Offset=0x0 Size=0x8
    unsigned long TimeIncrement;// Offset=0x8 Size=0x4
    unsigned long LastRequestedTimeIncrement;// Offset=0xc Size=0x4
    enum _KCLOCK_TIMER_ONE_SHOT_STATE OneShotState;// Offset=0x10 Size=0x4
    enum _KCLOCK_TIMER_DEADLINE_TYPE ExpectedWakeReason;// Offset=0x14 Size=0x4
    struct _KCLOCK_TIMER_DEADLINE_ENTRY ClockTimerEntries[7];// Offset=0x18 Size=0x70
    unsigned char ClockActive;// Offset=0x88 Size=0x1
    unsigned long ClockTickTraceIndex;// Offset=0x8c Size=0x4
    unsigned long ClockIncrementTraceIndex;// Offset=0x90 Size=0x4
    struct _KCLOCK_TICK_TRACE ClockTickTraces[16];// Offset=0x98 Size=0x280
    struct _KCLOCK_INCREMENT_TRACE ClockIncrementTraces[16];// Offset=0x318 Size=0x200
};
