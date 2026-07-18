enum _HUB_TIMEROBJ_STATE
{
    TimerObj_Disabled=0,
    TimerObj_Enabled=1,
    TimerObj_Busy=2
};

enum _HUB_TIMEROBJ_TYPE
{
    TimerObj_Static=0,
    TimerObj_Dynamic=1
};

struct _LIST_ENTRY// Size=0x10 (Id=5)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _HUB_TIMER_OBJECT// Size=0x50 (Id=246)
{
    unsigned long Sig;// Offset=0x0 Size=0x4
    enum _HUB_TIMEROBJ_STATE State;// Offset=0x4 Size=0x4
    enum _HUB_TIMEROBJ_TYPE Type;// Offset=0x8 Size=0x4
    long ExpireTime;// Offset=0xc Size=0x4
    long MillisecsToExpire;// Offset=0x10 Size=0x4
    unsigned long Retry;// Offset=0x14 Size=0x4
    unsigned long PortNumber;// Offset=0x18 Size=0x4
    unsigned long Parameter1;// Offset=0x1c Size=0x4
    unsigned long Parameter2;// Offset=0x20 Size=0x4
    void * Context;// Offset=0x28 Size=0x8
    unsigned long  ( * TimeoutFunction)(struct _HUB_TIMER_OBJECT * ,struct _DEVICE_OBJECT * ,unsigned long ,void * ,unsigned long ,unsigned long );// Offset=0x30 Size=0x8
    struct _LIST_ENTRY EnableLink;// Offset=0x38 Size=0x10
    unsigned long Tag;// Offset=0x48 Size=0x4
};
