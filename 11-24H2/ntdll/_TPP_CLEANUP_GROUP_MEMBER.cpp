struct _TPP_REFCOUNT// Size=0x4 (Id=347)
{
    long Refcount;// Offset=0x0 Size=0x4
};

struct _LIST_ENTRY// Size=0x10 (Id=32)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

union _TPP_FLAGS_COUNT// Size=0x8 (Id=348)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Count:60;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x3c
        unsigned long long Flags:4;// Offset=0x0 Size=0x8 BitOffset=0x3c BitSize=0x4
    };
    long long Data;// Offset=0x0 Size=0x8
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

struct _TPP_ITE// Size=0x8 (Id=680)
{
    struct _TPP_ITE_WAITER * First;// Offset=0x0 Size=0x8
};

struct _TPP_BARRIER// Size=0x18 (Id=349)
{
    union _TPP_FLAGS_COUNT Ptr;// Offset=0x0 Size=0x8
    struct _RTL_SRWLOCK WaitLock;// Offset=0x8 Size=0x8
    struct _TPP_ITE WaitList;// Offset=0x10 Size=0x8
};

struct _GUID// Size=0x10 (Id=52)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _ALPC_WORK_ON_BEHALF_TICKET// Size=0x8 (Id=386)
{
    unsigned long ThreadId;// Offset=0x0 Size=0x4
    unsigned long ThreadCreationTimeLow;// Offset=0x4 Size=0x4
};

struct _TPP_CALLER// Size=0x8 (Id=444)
{
    void * ReturnAddress;// Offset=0x0 Size=0x8
};

enum _TP_CALLBACK_PRIORITY
{
    TP_CALLBACK_PRIORITY_HIGH=0,
    TP_CALLBACK_PRIORITY_NORMAL=1,
    TP_CALLBACK_PRIORITY_LOW=2,
    TP_CALLBACK_PRIORITY_INVALID=3,
    TP_CALLBACK_PRIORITY_COUNT=3
};

struct _TPP_CLEANUP_GROUP_MEMBER// Size=0xc8 (Id=352)
{
    struct _TPP_REFCOUNT Refcount;// Offset=0x0 Size=0x4
    struct _TPP_CLEANUP_GROUP_MEMBER_VFUNCS * VFuncs;// Offset=0x8 Size=0x8
    struct _TP_CLEANUP_GROUP * CleanupGroup;// Offset=0x10 Size=0x8
    void  ( * CleanupGroupCancelCallback)(void * ,void * );// Offset=0x18 Size=0x8
    void  ( * FinalizationCallback)(struct _TP_CALLBACK_INSTANCE * ,void * );// Offset=0x20 Size=0x8
    struct _LIST_ENTRY CleanupGroupMemberLinks;// Offset=0x28 Size=0x10
    struct _TPP_BARRIER CallbackBarrier;// Offset=0x38 Size=0x18
    union // Size=0x58 (Id=0)
    {
        void * Callback;// Offset=0x50 Size=0x8
        void  ( * WorkCallback)(struct _TP_CALLBACK_INSTANCE * ,void * ,struct _TP_WORK * );// Offset=0x50 Size=0x8
        void  ( * SimpleCallback)(struct _TP_CALLBACK_INSTANCE * ,void * );// Offset=0x50 Size=0x8
        void  ( * TimerCallback)(struct _TP_CALLBACK_INSTANCE * ,void * ,struct _TP_TIMER * );// Offset=0x50 Size=0x8
        void  ( * WaitCallback)(struct _TP_CALLBACK_INSTANCE * ,void * ,struct _TP_WAIT * ,long );// Offset=0x50 Size=0x8
        void  ( * IoCallback)(struct _TP_CALLBACK_INSTANCE * ,void * ,void * ,struct _IO_STATUS_BLOCK * ,struct _TP_IO * );// Offset=0x50 Size=0x8
        void  ( * AlpcCallback)(struct _TP_CALLBACK_INSTANCE * ,void * ,struct _TP_ALPC * );// Offset=0x50 Size=0x8
        void  ( * AlpcCallbackEx)(struct _TP_CALLBACK_INSTANCE * ,void * ,struct _TP_ALPC * ,void * );// Offset=0x50 Size=0x8
        void  ( * JobCallback)(struct _TP_CALLBACK_INSTANCE * ,void * ,struct _TP_JOB * ,unsigned long long ,void * ,long );// Offset=0x50 Size=0x8
    };
    void * Context;// Offset=0x58 Size=0x8
    struct _ACTIVATION_CONTEXT * ActivationContext;// Offset=0x60 Size=0x8
    void * SubProcessTag;// Offset=0x68 Size=0x8
    struct _GUID ActivityId;// Offset=0x70 Size=0x10
    struct _ALPC_WORK_ON_BEHALF_TICKET WorkOnBehalfTicket;// Offset=0x80 Size=0x8
    void * RaceDll;// Offset=0x88 Size=0x8
    struct _TP_POOL * Pool;// Offset=0x90 Size=0x8
    struct _LIST_ENTRY PoolObjectLinks;// Offset=0x98 Size=0x10
    union // Size=0x4 (Id=0)
    {
        long Flags;// Offset=0xa8 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long LongFunction:1;// Offset=0xa8 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long Persistent:1;// Offset=0xa8 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long UnusedPublic:14;// Offset=0xa8 Size=0x4 BitOffset=0x2 BitSize=0xe
            unsigned long Released:1;// Offset=0xa8 Size=0x4 BitOffset=0x10 BitSize=0x1
            unsigned long CleanupGroupReleased:1;// Offset=0xa8 Size=0x4 BitOffset=0x11 BitSize=0x1
            unsigned long InCleanupGroupCleanupList:1;// Offset=0xa8 Size=0x4 BitOffset=0x12 BitSize=0x1
            unsigned long UnusedPrivate:13;// Offset=0xa8 Size=0x4 BitOffset=0x13 BitSize=0xd
        };
    };
    struct _TPP_CALLER AllocCaller;// Offset=0xb0 Size=0x8
    struct _TPP_CALLER ReleaseCaller;// Offset=0xb8 Size=0x8
    enum _TP_CALLBACK_PRIORITY CallbackPriority;// Offset=0xc0 Size=0x4
};
