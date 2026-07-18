struct _KSCHEDULING_GROUP_POLICY// Size=0x8 (Id=635)
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

struct _LIST_ENTRY// Size=0x10 (Id=36)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _RTL_BALANCED_NODE// Size=0x18 (Id=52)
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

struct _RTL_RB_TREE// Size=0x10 (Id=51)
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

struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=37)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _KSCB// Size=0x1b8 (Id=441)
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
    struct _RTL_BALANCED_NODE QueueNode;// Offset=0x58 Size=0x18
    union // Size=0x2 (Id=0)
    {
        struct // Size=0x2 (Id=0)
        {
            unsigned short Inserted:1;// Offset=0x70 Size=0x2 BitOffset=0x0 BitSize=0x1
            unsigned short MaxOverQuota:1;// Offset=0x70 Size=0x2 BitOffset=0x1 BitSize=0x1
            unsigned short MinOverQuota:1;// Offset=0x70 Size=0x2 BitOffset=0x2 BitSize=0x1
            unsigned short RankBias:1;// Offset=0x70 Size=0x2 BitOffset=0x3 BitSize=0x1
            unsigned short UnconstrainedMaxQuota:1;// Offset=0x70 Size=0x2 BitOffset=0x4 BitSize=0x1
            unsigned short UnconstrainedMinQuota:1;// Offset=0x70 Size=0x2 BitOffset=0x5 BitSize=0x1
            unsigned short ShareRankOwner:1;// Offset=0x70 Size=0x2 BitOffset=0x6 BitSize=0x1
            unsigned short PerProcHardCap:1;// Offset=0x70 Size=0x2 BitOffset=0x7 BitSize=0x1
            unsigned short Referenced:1;// Offset=0x70 Size=0x2 BitOffset=0x8 BitSize=0x1
        };
        unsigned short PrcbLockFlags;// Offset=0x70 Size=0x2
    };
    unsigned char Depth;// Offset=0x72 Size=0x1
    unsigned char Pad1;// Offset=0x73 Size=0x1
    unsigned long OwningProcessorIndex;// Offset=0x74 Size=0x4
    unsigned short ReadySummary;// Offset=0x78 Size=0x2
    unsigned short Pad2;// Offset=0x7a Size=0x2
    unsigned long Rank;// Offset=0x7c Size=0x4
    unsigned long * ShareRank;// Offset=0x80 Size=0x8
    unsigned long OwnerShareRank;// Offset=0x88 Size=0x4
    struct _LIST_ENTRY ReadyListHead[16];// Offset=0x90 Size=0x100
    struct _RTL_RB_TREE ChildScbQueue;// Offset=0x190 Size=0x10
    struct _KSCB * Parent;// Offset=0x1a0 Size=0x8
    struct _KSCB * Root;// Offset=0x1a8 Size=0x8
    struct _SINGLE_LIST_ENTRY TracingListEntry;// Offset=0x1b0 Size=0x8
};

struct _KSCHEDULING_GROUP// Size=0x240 (Id=286)
{
    struct _KSCHEDULING_GROUP_POLICY Policy;// Offset=0x0 Size=0x8
    unsigned long RelativeWeight;// Offset=0x8 Size=0x4
    unsigned long ChildMinRate;// Offset=0xc Size=0x4
    unsigned long ChildMinWeight;// Offset=0x10 Size=0x4
    unsigned long ChildTotalWeight;// Offset=0x14 Size=0x4
    unsigned long long QueryHistoryTimeStamp;// Offset=0x18 Size=0x8
    long long NotificationCycles;// Offset=0x20 Size=0x8
    long long MaxQuotaLimitCycles;// Offset=0x28 Size=0x8
    long long MaxQuotaCyclesRemaining;// Offset=0x30 Size=0x8
    union // Size=0x10 (Id=0)
    {
        struct _LIST_ENTRY SchedulingGroupList;// Offset=0x38 Size=0x10
        struct _LIST_ENTRY Sibling;// Offset=0x38 Size=0x10
    };
    struct _KDPC * NotificationDpc;// Offset=0x48 Size=0x8
    struct _LIST_ENTRY ChildList;// Offset=0x50 Size=0x10
    struct _KSCHEDULING_GROUP * Parent;// Offset=0x60 Size=0x8
    struct _KSCB PerProcessor[1];// Offset=0x80 Size=0x1b8
};
