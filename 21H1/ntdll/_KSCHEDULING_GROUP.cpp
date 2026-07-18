struct _KSCHEDULING_GROUP_POLICY// Size=0x8 (Id=612)
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
            unsigned long Spare1:29;// Offset=0x4 Size=0x4 BitOffset=0x3 BitSize=0x1d
        };
    };
};

struct _LIST_ENTRY// Size=0x8 (Id=25)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x4
    struct _LIST_ENTRY * Blink;// Offset=0x4 Size=0x4
};

struct _RTL_BALANCED_NODE// Size=0xc (Id=38)
{
    union // Size=0x8 (Id=0)
    {
        struct _RTL_BALANCED_NODE * Children[2];// Offset=0x0 Size=0x8
        struct _RTL_BALANCED_NODE * Left;// Offset=0x0 Size=0x4
        struct _RTL_BALANCED_NODE * Right;// Offset=0x4 Size=0x4
    };
    union // Size=0x1 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            union // Size=0x1 (Id=0)
            {
                unsigned char Red:1;// Offset=0x8 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char Balance:2;// Offset=0x8 Size=0x1 BitOffset=0x0 BitSize=0x2
            };
        };
        unsigned long ParentValue;// Offset=0x8 Size=0x4
    };
};

struct _RTL_RB_TREE// Size=0x8 (Id=37)
{
    struct _RTL_BALANCED_NODE * Root;// Offset=0x0 Size=0x4
    union // Size=0x1 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            unsigned char Encoded:1;// Offset=0x4 Size=0x1 BitOffset=0x0 BitSize=0x1
        };
        struct _RTL_BALANCED_NODE * Min;// Offset=0x4 Size=0x4
    };
};

struct _KSCB// Size=0x100 (Id=469)
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
    struct _LIST_ENTRY PerProcessorList;// Offset=0x48 Size=0x8
    struct _RTL_BALANCED_NODE QueueNode;// Offset=0x50 Size=0xc
    struct // Size=0x1 (Id=0)
    {
        unsigned char Inserted:1;// Offset=0x5c Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char MaxOverQuota:1;// Offset=0x5c Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char MinOverQuota:1;// Offset=0x5c Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char RankBias:1;// Offset=0x5c Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char SoftCap:1;// Offset=0x5c Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char ShareRankOwner:1;// Offset=0x5c Size=0x1 BitOffset=0x5 BitSize=0x1
        unsigned char Spare1:2;// Offset=0x5c Size=0x1 BitOffset=0x6 BitSize=0x2
    };
    unsigned char Depth;// Offset=0x5d Size=0x1
    unsigned short ReadySummary;// Offset=0x5e Size=0x2
    unsigned long Rank;// Offset=0x60 Size=0x4
    unsigned long * ShareRank;// Offset=0x64 Size=0x4
    unsigned long OwnerShareRank;// Offset=0x68 Size=0x4
    struct _LIST_ENTRY ReadyListHead[16];// Offset=0x6c Size=0x80
    struct _RTL_RB_TREE ChildScbQueue;// Offset=0xec Size=0x8
    struct _KSCB * Parent;// Offset=0xf4 Size=0x4
    struct _KSCB * Root;// Offset=0xf8 Size=0x4
};

struct _KSCHEDULING_GROUP// Size=0x180 (Id=313)
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
    union // Size=0x8 (Id=0)
    {
        struct _LIST_ENTRY SchedulingGroupList;// Offset=0x38 Size=0x8
        struct _LIST_ENTRY Sibling;// Offset=0x38 Size=0x8
    };
    struct _KDPC * NotificationDpc;// Offset=0x40 Size=0x4
    struct _LIST_ENTRY ChildList;// Offset=0x44 Size=0x8
    struct _KSCHEDULING_GROUP * Parent;// Offset=0x4c Size=0x4
    struct _KSCB PerProcessor[1];// Offset=0x80 Size=0x100
};
