struct _RTL_SRWLOCK// Size=0x8 (Id=357)
{
    union // Size=0x8 (Id=0)
    {
        struct // Size=0x8 (Id=0)
        {
            unsigned long long Locked:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
            unsigned long long Waiting:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
            unsigned long long Waking:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
            unsigned long long MultipleShared:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
            unsigned long long Shared:60;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x3c
        };
        unsigned long long Value;// Offset=0x0 Size=0x8
        void * Ptr;// Offset=0x0 Size=0x8
    };
};

struct _TPP_PH// Size=0x8 (Id=782)
{
    struct _TPP_PH_LINKS * Root;// Offset=0x0 Size=0x8
};

struct _LIST_ENTRY// Size=0x10 (Id=33)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _TP_TASK// Size=0x20 (Id=379)
{
    struct _TP_TASK_CALLBACKS * Callbacks;// Offset=0x0 Size=0x8
    unsigned long NumaNode;// Offset=0x8 Size=0x4
    unsigned char IdealProcessor;// Offset=0xc Size=0x1
    struct _LIST_ENTRY ListEntry;// Offset=0x10 Size=0x10
};

struct _TP_DIRECT// Size=0x48 (Id=688)
{
    struct _TP_TASK Task;// Offset=0x0 Size=0x20
    unsigned long long Lock;// Offset=0x20 Size=0x8
    struct _LIST_ENTRY IoCompletionInformationList;// Offset=0x28 Size=0x10
    void  ( * Callback)(struct _TP_CALLBACK_INSTANCE * ,struct _TP_DIRECT * ,void * ,struct _IO_STATUS_BLOCK * );// Offset=0x38 Size=0x8
    unsigned long NumaNode;// Offset=0x40 Size=0x4
    unsigned char IdealProcessor;// Offset=0x44 Size=0x1
};

struct _TPP_TIMER_SUBQUEUE// Size=0x78 (Id=716)
{
    long long Expiration;// Offset=0x0 Size=0x8
    struct _TPP_PH WindowStart;// Offset=0x8 Size=0x8
    struct _TPP_PH WindowEnd;// Offset=0x10 Size=0x8
    void * Timer;// Offset=0x18 Size=0x8
    void * TimerPkt;// Offset=0x20 Size=0x8
    struct _TP_DIRECT Direct;// Offset=0x28 Size=0x48
    unsigned long ExpirationWindow;// Offset=0x70 Size=0x4
};

struct _TPP_TIMER_QUEUE// Size=0x100 (Id=572)
{
    struct _RTL_SRWLOCK Lock;// Offset=0x0 Size=0x8
    struct _TPP_TIMER_SUBQUEUE AbsoluteQueue;// Offset=0x8 Size=0x78
    struct _TPP_TIMER_SUBQUEUE RelativeQueue;// Offset=0x80 Size=0x78
    long AllocatedTimerCount;// Offset=0xf8 Size=0x4
};
