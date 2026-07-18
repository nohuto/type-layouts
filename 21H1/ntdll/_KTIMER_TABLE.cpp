struct _LIST_ENTRY// Size=0x8 (Id=25)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x4
    struct _LIST_ENTRY * Blink;// Offset=0x4 Size=0x4
};

struct _anonymous_11// Size=0x8 (Id=11)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    unsigned long HighPart;// Offset=0x4 Size=0x4
};

union _ULARGE_INTEGER// Size=0x8 (Id=12)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    unsigned long HighPart;// Offset=0x4 Size=0x4
    struct _anonymous_11 u;// Offset=0x0 Size=0x8
    unsigned long long QuadPart;// Offset=0x0 Size=0x8
};

struct _KTIMER_TABLE_ENTRY// Size=0x18 (Id=687)
{
    unsigned long Lock;// Offset=0x0 Size=0x4
    struct _LIST_ENTRY Entry;// Offset=0x4 Size=0x8
    union _ULARGE_INTEGER Time;// Offset=0x10 Size=0x8
};

struct _KTIMER_TABLE_STATE// Size=0x10 (Id=681)
{
    unsigned long long LastTimerExpiration[1];// Offset=0x0 Size=0x8
    unsigned long LastTimerHand[1];// Offset=0x8 Size=0x4
};

struct _KTIMER_TABLE// Size=0x1850 (Id=627)
{
    struct _KTIMER * TimerExpiry[16];// Offset=0x0 Size=0x40
    struct _KTIMER_TABLE_ENTRY TimerEntries[1][256];// Offset=0x40 Size=0x1800
    struct _KTIMER_TABLE_STATE TableState;// Offset=0x1840 Size=0x10
};
