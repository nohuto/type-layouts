struct _RTL_BITMAP// Size=0x10 (Id=13)
{
    unsigned long SizeOfBitMap;// Offset=0x0 Size=0x4
    unsigned long * Buffer;// Offset=0x8 Size=0x8
};

struct _JOB_RATE_CONTROL_HEADER// Size=0x28 (Id=1271)
{
    void * RateControlQuotaReference;// Offset=0x0 Size=0x8
    struct _RTL_BITMAP OverQuotaHistory;// Offset=0x8 Size=0x10
    unsigned char * BitMapBuffer;// Offset=0x18 Size=0x8
    unsigned long long BitMapBufferSize;// Offset=0x20 Size=0x8
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

struct _KSCHEDULING_GROUP_POLICY// Size=0x8 (Id=2199)
{
    union // Size=0x4 (Id=0)
    {
        unsigned long Value;// Offset=0x0 Size=0x4
        unsigned short Weight;// Offset=0x0 Size=0x2
        unsigned short MinRate;// Offset=0x0 Size=0x2
        unsigned short MaxRate;// Offset=0x2 Size=0x2
    };
    union // Size=0x4 (Id=0)
    {
        unsigned long AllFlags;// Offset=0x4 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long Type:1;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long Disabled:1;// Offset=0x4 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long RankBias:1;// Offset=0x4 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long PerProcessorLimits:1;// Offset=0x4 Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long Spare1:28;// Offset=0x4 Size=0x4 BitOffset=0x4 BitSize=0x1c
        };
    };
};

union _KSCHEDULING_GROUP_MAX_QUOTA_TRACKER// Size=0x10 (Id=2327)
{
    long long CyclesRemaining;// Offset=0x0 Size=0x8
    unsigned long long LastRefill;// Offset=0x8 Size=0x8
    long long AsLong64s[2];// Offset=0x0 Size=0x10
};

struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _RTL_BALANCED_NODE// Size=0x18 (Id=116)
{
    union // Size=0x10 (Id=0)
    {
        struct _RTL_BALANCED_NODE * Children[2];// Offset=0x0 Size=0x10
        struct _RTL_BALANCED_NODE * Left;// Offset=0x0 Size=0x8
        struct _RTL_BALANCED_NODE * Right;// Offset=0x8 Size=0x8
    };
    union // Size=0x1 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            union // Size=0x1 (Id=0)
            {
                unsigned char Red:1;// Offset=0x10 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char Balance:2;// Offset=0x10 Size=0x1 BitOffset=0x0 BitSize=0x2
            };
        };
        unsigned long long ParentValue;// Offset=0x10 Size=0x8
    };
};

struct _RTL_RB_TREE// Size=0x10 (Id=115)
{
    struct _RTL_BALANCED_NODE * Root;// Offset=0x0 Size=0x8
    union // Size=0x1 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            unsigned char Encoded:1;// Offset=0x8 Size=0x1 BitOffset=0x0 BitSize=0x1
        };
        struct _RTL_BALANCED_NODE * Min;// Offset=0x8 Size=0x8
    };
};

struct _KSCB// Size=0x1d0 (Id=1723)
{
    unsigned long long GenerationCycles;// Offset=0x0 Size=0x8
    unsigned long long MinQuotaCycleTarget;// Offset=0x8 Size=0x8
    unsigned long long MaxQuotaCycleTarget;// Offset=0x10 Size=0x8
    unsigned long long RankCycleTarget;// Offset=0x18 Size=0x8
    unsigned long long LongTermCycles;// Offset=0x20 Size=0x8
    unsigned long long LastReportedCycles;// Offset=0x28 Size=0x8
    unsigned long long OverQuotaHistory;// Offset=0x30 Size=0x8
    unsigned long long ReadyTime;// Offset=0x38 Size=0x8
    unsigned long long InsertTime;// Offset=0x40 Size=0x8
    struct _LIST_ENTRY PerProcessorList;// Offset=0x48 Size=0x10
    struct _LIST_ENTRY PerProcessorActiveList;// Offset=0x58 Size=0x10
    struct _RTL_BALANCED_NODE QueueNode;// Offset=0x68 Size=0x18
    union // Size=0x2 (Id=0)
    {
        struct // Size=0x2 (Id=0)
        {
            unsigned short Inserted:1;// Offset=0x80 Size=0x2 BitOffset=0x0 BitSize=0x1
            unsigned short MaxOverQuota:1;// Offset=0x80 Size=0x2 BitOffset=0x1 BitSize=0x1
            unsigned short MinOverQuota:1;// Offset=0x80 Size=0x2 BitOffset=0x2 BitSize=0x1
            unsigned short RankBias:1;// Offset=0x80 Size=0x2 BitOffset=0x3 BitSize=0x1
            unsigned short UnconstrainedMaxQuota:1;// Offset=0x80 Size=0x2 BitOffset=0x4 BitSize=0x1
            unsigned short UnconstrainedMinQuota:1;// Offset=0x80 Size=0x2 BitOffset=0x5 BitSize=0x1
            unsigned short ShareRankOwner:1;// Offset=0x80 Size=0x2 BitOffset=0x6 BitSize=0x1
            unsigned short PerProcHardCap:1;// Offset=0x80 Size=0x2 BitOffset=0x7 BitSize=0x1
            unsigned short Referenced:1;// Offset=0x80 Size=0x2 BitOffset=0x8 BitSize=0x1
            unsigned short Active:1;// Offset=0x80 Size=0x2 BitOffset=0x9 BitSize=0x1
            unsigned short Age:2;// Offset=0x80 Size=0x2 BitOffset=0xa BitSize=0x2
            unsigned short SparePrcbLockFlags:4;// Offset=0x80 Size=0x2 BitOffset=0xc BitSize=0x4
        };
        unsigned short PrcbLockFlags;// Offset=0x80 Size=0x2
    };
    unsigned char Depth;// Offset=0x82 Size=0x1
    unsigned char Pad1;// Offset=0x83 Size=0x1
    unsigned long OwningProcessorIndex;// Offset=0x84 Size=0x4
    unsigned short ReadySummary;// Offset=0x88 Size=0x2
    unsigned short Pad2;// Offset=0x8a Size=0x2
    unsigned long Rank;// Offset=0x8c Size=0x4
    unsigned long * ShareRank;// Offset=0x90 Size=0x8
    unsigned long OwnerShareRank;// Offset=0x98 Size=0x4
    struct _LIST_ENTRY ReadyListHead[16];// Offset=0xa0 Size=0x100
    unsigned long long ActiveChildScbs;// Offset=0x1a0 Size=0x8
    struct _RTL_RB_TREE ChildScbQueue;// Offset=0x1a8 Size=0x10
    struct _KSCB * Parent;// Offset=0x1b8 Size=0x8
    struct _KSCB * Root;// Offset=0x1c0 Size=0x8
    struct _SINGLE_LIST_ENTRY TracingListEntry;// Offset=0x1c8 Size=0x8
};

struct _KSCHEDULING_GROUP// Size=0x280 (Id=1215)
{
    struct _KSCHEDULING_GROUP_POLICY Policy;// Offset=0x0 Size=0x8
    unsigned long RelativeWeight;// Offset=0x8 Size=0x4
    unsigned long ChildMinRate;// Offset=0xc Size=0x4
    unsigned long ChildMinWeight;// Offset=0x10 Size=0x4
    unsigned long ChildTotalWeight;// Offset=0x14 Size=0x4
    unsigned long long QueryHistoryTimeStamp;// Offset=0x18 Size=0x8
    long long NotificationCycles;// Offset=0x20 Size=0x8
    long long MaxQuotaLimitCycles;// Offset=0x28 Size=0x8
    union _KSCHEDULING_GROUP_MAX_QUOTA_TRACKER MaxQuotaTracker;// Offset=0x30 Size=0x10
    union // Size=0x10 (Id=0)
    {
        struct _LIST_ENTRY SchedulingGroupList;// Offset=0x40 Size=0x10
        struct _LIST_ENTRY Sibling;// Offset=0x40 Size=0x10
    };
    struct _KDPC * NotificationDpc;// Offset=0x50 Size=0x8
    struct _LIST_ENTRY ChildList;// Offset=0x58 Size=0x10
    struct _KSCHEDULING_GROUP * Parent;// Offset=0x68 Size=0x8
    struct _KSCB PerProcessor[1];// Offset=0x80 Size=0x1d0
};

struct _JOB_CPU_RATE_CONTROL// Size=0x300 (Id=1608)
{
    struct _JOB_RATE_CONTROL_HEADER Header;// Offset=0x0 Size=0x28
    union // Size=0x4 (Id=0)
    {
        unsigned long AllFlags;// Offset=0x28 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long HardCap:1;// Offset=0x28 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long NotifyWhenThrottled:1;// Offset=0x28 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long WeightBased:1;// Offset=0x28 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long RankBias:1;// Offset=0x28 Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long CycleTimeNotification:1;// Offset=0x28 Size=0x4 BitOffset=0x4 BitSize=0x1
            unsigned long MinMaxRate:1;// Offset=0x28 Size=0x4 BitOffset=0x5 BitSize=0x1
            unsigned long Disabled:1;// Offset=0x28 Size=0x4 BitOffset=0x6 BitSize=0x1
            unsigned long PerProcessorCaps:1;// Offset=0x28 Size=0x4 BitOffset=0x7 BitSize=0x1
            unsigned long Reserved:24;// Offset=0x28 Size=0x4 BitOffset=0x8 BitSize=0x18
        };
    };
    union // Size=0x2e (Id=0)
    {
        unsigned long Value;// Offset=0x2c Size=0x4
        unsigned short Weight;// Offset=0x2c Size=0x2
        unsigned short MinRate;// Offset=0x2c Size=0x2
    };
    unsigned short MaxRate;// Offset=0x2e Size=0x2
    struct _KDPC NotificationDpc;// Offset=0x30 Size=0x40
    struct _KSCHEDULING_GROUP SchedulingGroup;// Offset=0x80 Size=0x280
};
