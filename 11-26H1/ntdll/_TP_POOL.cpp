struct _TPP_REFCOUNT// Size=0x4 (Id=347)
{
    long Refcount;// Offset=0x0 Size=0x4
};

union _TPP_POOL_QUEUE_STATE// Size=0x8 (Id=633)
{
    long long Exchange;// Offset=0x0 Size=0x8
    struct // Size=0x4 (Id=0)
    {
        long RunningThreadGoal:16;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x10
        unsigned long PendingReleaseCount:16;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x10
    };
    unsigned long QueueLength;// Offset=0x4 Size=0x4
};

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

struct _LIST_ENTRY// Size=0x10 (Id=33)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _TPP_PH// Size=0x8 (Id=782)
{
    struct _TPP_PH_LINKS * Root;// Offset=0x0 Size=0x8
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

struct _TPP_CALLER// Size=0x8 (Id=447)
{
    void * ReturnAddress;// Offset=0x0 Size=0x8
};

struct _RTL_CONDITION_VARIABLE// Size=0x8 (Id=643)
{
    union // Size=0x8 (Id=0)
    {
        struct // Size=0x8 (Id=0)
        {
            unsigned long long WakeCount:3;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x3
            unsigned long long Waking:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        };
        unsigned long long Value;// Offset=0x0 Size=0x8
        void * Ptr;// Offset=0x0 Size=0x8
    };
};

struct _TP_POOL// Size=0x1d8 (Id=361)
{
    struct _TPP_REFCOUNT Refcount;// Offset=0x0 Size=0x4
    union _TPP_POOL_QUEUE_STATE QueueState;// Offset=0x8 Size=0x8
    struct _TPP_QUEUE * TaskQueue[3];// Offset=0x10 Size=0x18
    struct _TPP_NUMA_NODE * NumaNode;// Offset=0x28 Size=0x8
    struct _GROUP_AFFINITY * ProximityInfo;// Offset=0x30 Size=0x8
    void * WorkerFactory;// Offset=0x38 Size=0x8
    void * CompletionPort;// Offset=0x40 Size=0x8
    struct _RTL_SRWLOCK Lock;// Offset=0x48 Size=0x8
    struct _LIST_ENTRY PoolObjectList;// Offset=0x50 Size=0x10
    struct _LIST_ENTRY WorkerList;// Offset=0x60 Size=0x10
    struct _TPP_TIMER_QUEUE TimerQueue;// Offset=0x70 Size=0x100
    struct _RTL_SRWLOCK ShutdownLock;// Offset=0x170 Size=0x8
    unsigned char ShutdownInitiated;// Offset=0x178 Size=0x1
    unsigned char Released;// Offset=0x179 Size=0x1
    unsigned short PoolFlags;// Offset=0x17a Size=0x2
    struct _LIST_ENTRY PoolLinks;// Offset=0x180 Size=0x10
    struct _TPP_CALLER AllocCaller;// Offset=0x190 Size=0x8
    struct _TPP_CALLER ReleaseCaller;// Offset=0x198 Size=0x8
    long AvailableWorkerCount;// Offset=0x1a0 Size=0x4
    long LongRunningWorkerCount;// Offset=0x1a4 Size=0x4
    unsigned long LastProcCount;// Offset=0x1a8 Size=0x4
    long NodeStatus;// Offset=0x1ac Size=0x4
    long BindingCount;// Offset=0x1b0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long CallbackChecksDisabled:1;// Offset=0x1b4 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long TrimTarget:11;// Offset=0x1b4 Size=0x4 BitOffset=0x1 BitSize=0xb
        unsigned long TrimmedThrdCount:11;// Offset=0x1b4 Size=0x4 BitOffset=0xc BitSize=0xb
    };
    unsigned long SelectedCpuSetCount;// Offset=0x1b8 Size=0x4
    struct _RTL_CONDITION_VARIABLE TrimComplete;// Offset=0x1c0 Size=0x8
    struct _LIST_ENTRY TrimmedWorkerList;// Offset=0x1c8 Size=0x10
};
