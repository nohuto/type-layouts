struct _LIST_ENTRY// Size=0x10 (Id=4)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _unnamed_11// Size=0x8 (Id=11)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    unsigned long HighPart;// Offset=0x4 Size=0x4
};

union _ULARGE_INTEGER// Size=0x8 (Id=590)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    unsigned long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_11 u;// Offset=0x0 Size=0x8
    unsigned long long QuadPart;// Offset=0x0 Size=0x8
};

struct _KTIMER_TABLE_ENTRY// Size=0x20 (Id=753)
{
    unsigned long long Lock;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY Entry;// Offset=0x8 Size=0x10
    union _ULARGE_INTEGER Time;// Offset=0x18 Size=0x8
};

struct _KTIMER_TABLE_STATE// Size=0x18 (Id=1275)
{
    unsigned long long LastTimerExpiration[2];// Offset=0x0 Size=0x10
    unsigned long LastTimerHand[2];// Offset=0x10 Size=0x8
};

struct _KTIMER_TABLE// Size=0x4218 (Id=752)
{
    struct _KTIMER * TimerExpiry[64];// Offset=0x0 Size=0x200
    struct _KTIMER_TABLE_ENTRY TimerEntries[2][256];// Offset=0x200 Size=0x4000
    struct _KTIMER_TABLE_STATE TableState;// Offset=0x4200 Size=0x18
};
