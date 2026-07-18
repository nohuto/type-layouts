struct _LIST_ENTRY// Size=0x8 (Id=32)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x4
    struct _LIST_ENTRY * Blink;// Offset=0x4 Size=0x4
};

struct tagVSTATE// Size=0x20 (Id=394)
{
    unsigned long fl;// Offset=0x0 Size=0x4
    int bSystemStable;// Offset=0x4 Size=0x4
    unsigned long ulRandomSeed;// Offset=0x8 Size=0x4
    unsigned long ulFailureMask;// Offset=0xc Size=0x4
    unsigned long ulDebugLevel;// Offset=0x10 Size=0x4
    struct HSEMAPHORE__ * hsemPoolTracker;// Offset=0x14 Size=0x4
    struct _LIST_ENTRY lePoolTrackerHead;// Offset=0x18 Size=0x8
};
