struct _PERIODIC_CAPTURE_STATE_GUIDS// Size=0x10 (Id=1791)
{
    unsigned short ProviderCount;// Offset=0x0 Size=0x2
    struct _GUID * Providers;// Offset=0x8 Size=0x8
};

struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _WORK_QUEUE_ITEM// Size=0x20 (Id=21)
{
    struct _LIST_ENTRY List;// Offset=0x0 Size=0x10
    void  ( * WorkerRoutine)(void * );// Offset=0x10 Size=0x8
    void * Parameter;// Offset=0x18 Size=0x8
};

enum _ETW_PERIODIC_TIMER_STATE
{
    EtwpPeriodicTimerUnset=0,
    EtwpPeriodicTimerSet=1
};

struct PERIODIC_CAPTURE_STATE_CONTEXT// Size=0x48 (Id=1349)
{
    long long RelativeTimerDueTime;// Offset=0x0 Size=0x8
    struct _EX_TIMER * Timer;// Offset=0x8 Size=0x8
    struct _PERIODIC_CAPTURE_STATE_GUIDS Guids;// Offset=0x10 Size=0x10
    struct _WORK_QUEUE_ITEM WorkItem;// Offset=0x20 Size=0x20
    enum _ETW_PERIODIC_TIMER_STATE TimerState;// Offset=0x40 Size=0x4
};
