struct _unnamed_542// Size=0x10 (Id=542)
{
    struct // Size=0x10 (Id=0)
    {
        unsigned long long Depth:16;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x10
        unsigned long long Sequence:48;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x30
        unsigned long long Reserved:4;// Offset=0x8 Size=0x8 BitOffset=0x0 BitSize=0x4
        unsigned long long NextEntry:60;// Offset=0x8 Size=0x8 BitOffset=0x4 BitSize=0x3c
    };
};

union _SLIST_HEADER// Size=0x10 (Id=543)
{
    unsigned long long Alignment;// Offset=0x0 Size=0x8
    unsigned long long Region;// Offset=0x8 Size=0x8
    struct _unnamed_542 HeaderX64;// Offset=0x0 Size=0x10
};

struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=519)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _KDPC// Size=0x40 (Id=83)
{
    union // Size=0x4 (Id=0)
    {
        unsigned long TargetInfoAsUlong;// Offset=0x0 Size=0x4
        unsigned char Type;// Offset=0x0 Size=0x1
        unsigned char Importance;// Offset=0x1 Size=0x1
        unsigned short Number;// Offset=0x2 Size=0x2
    };
    struct _SINGLE_LIST_ENTRY DpcListEntry;// Offset=0x8 Size=0x8
    unsigned long long ProcessorHistory;// Offset=0x10 Size=0x8
    void  ( * DeferredRoutine)(struct _KDPC * ,void * ,void * ,void * );// Offset=0x18 Size=0x8
    void * DeferredContext;// Offset=0x20 Size=0x8
    void * SystemArgument1;// Offset=0x28 Size=0x8
    void * SystemArgument2;// Offset=0x30 Size=0x8
    void * DpcData;// Offset=0x38 Size=0x8
};

struct _ETW_APC_POOL// Size=0xc0 (Id=2233)
{
    struct _WMI_LOGGER_CONTEXT * LoggerContext;// Offset=0x0 Size=0x8
    unsigned long long ApcSpinLock;// Offset=0x8 Size=0x8
    union _SLIST_HEADER ApcGlobalListHead;// Offset=0x10 Size=0x10
    union _SLIST_HEADER ApcFreeListHead;// Offset=0x20 Size=0x10
    void * DpcContext1;// Offset=0x30 Size=0x8
    void * DpcContext2;// Offset=0x38 Size=0x8
    void * DpcContext3;// Offset=0x40 Size=0x8
    void  ( * DpcNormalRoutine)(struct _ETW_APC_POOL * ,struct _KTHREAD * ,void ** ,void ** ,void ** );// Offset=0x48 Size=0x8
    void  ( * DpcCancelRoutine)(struct _ETW_APC_POOL * ,struct _KTHREAD * ,void ** ,void ** ,void ** );// Offset=0x50 Size=0x8
    struct _ETHREAD * DpcThread;// Offset=0x58 Size=0x8
    struct _KDPC Dpc;// Offset=0x60 Size=0x40
    long Flags;// Offset=0xa0 Size=0x4
    long ApcCount;// Offset=0xa4 Size=0x4
    unsigned long MinimumApcCount;// Offset=0xa8 Size=0x4
    unsigned long MaximumApcCount;// Offset=0xac Size=0x4
    long OutstandingApcCount;// Offset=0xb0 Size=0x4
    long MaxOutstandingApcCount;// Offset=0xb4 Size=0x4
};

struct _ETW_STACK_TRACE_BLOCK// Size=0xd0 (Id=1938)
{
    struct _ETW_APC_POOL ApcPool;// Offset=0x0 Size=0xc0
    long StackCaptureAttemptCount;// Offset=0xc0 Size=0x4
    long StackExpansionFailureCount;// Offset=0xc4 Size=0x4
};
