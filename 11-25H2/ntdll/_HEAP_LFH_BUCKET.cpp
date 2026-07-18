struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=32)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _HEAP_LFH_PTRREF_LIST// Size=0x4 (Id=296)
{
    unsigned short Flink;// Offset=0x0 Size=0x2
    unsigned short Blink;// Offset=0x2 Size=0x2
};

struct _LIST_ENTRY// Size=0x10 (Id=30)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _HEAP_LFH_SUBSEGMENT_OWNER// Size=0x38 (Id=297)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char IsBucket:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char BucketIndex:7;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x7
    };
    union // Size=0x1 (Id=0)
    {
        unsigned char SlotCount;// Offset=0x1 Size=0x1
        unsigned char AvailableSubsegmentCount;// Offset=0x1 Size=0x1
    };
    unsigned short BucketRef;// Offset=0x2 Size=0x2
    unsigned short PrivateSlotMapRef;// Offset=0x4 Size=0x2
    unsigned short HeatMapRef;// Offset=0x6 Size=0x2
    union // Size=0x8 (Id=0)
    {
        struct _SINGLE_LIST_ENTRY OwnerFreeList;// Offset=0x8 Size=0x8
        struct // Size=0x2 (Id=0)
        {
            unsigned short Spare:12;// Offset=0x8 Size=0x2 BitOffset=0x0 BitSize=0xc
        };
    };
    union // Size=0x18 (Id=0)
    {
        unsigned long long Lock;// Offset=0x10 Size=0x8
        struct _SINGLE_LIST_ENTRY SlotStandbyEntry;// Offset=0x10 Size=0x8
        struct _HEAP_LFH_PTRREF_LIST PrivSlotListEntry;// Offset=0x10 Size=0x4
        unsigned long OwnerThreadId;// Offset=0x14 Size=0x4
    };
    struct _LIST_ENTRY AvailableSubsegmentList;// Offset=0x18 Size=0x10
    struct _LIST_ENTRY FullSubsegmentList;// Offset=0x28 Size=0x10
};

struct _HEAP_AFFINITY_MGR// Size=0x10 (Id=258)
{
    char MapInProgress;// Offset=0x0 Size=0x1
    char ContentionCount;// Offset=0x1 Size=0x1
    unsigned char ContentionCountLimit;// Offset=0x2 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char ConservativeAffinity:1;// Offset=0x3 Size=0x1 BitOffset=0x0 BitSize=0x1
    };
    unsigned long long LastContentionTime;// Offset=0x8 Size=0x8
};

struct _HEAP_LFH_BUCKET// Size=0x78 (Id=301)
{
    struct _HEAP_LFH_SUBSEGMENT_OWNER State;// Offset=0x0 Size=0x38
    unsigned long long TotalBlockCount;// Offset=0x38 Size=0x8
    unsigned long long TotalSubsegmentCount;// Offset=0x40 Size=0x8
    unsigned long ReciprocalBlockSize;// Offset=0x48 Size=0x4
    unsigned short HotHeatThreshold;// Offset=0x4c Size=0x2
    unsigned short PrivateHeatThreshold;// Offset=0x4e Size=0x2
    unsigned long long PrivSlotListLock;// Offset=0x50 Size=0x8
    struct _HEAP_LFH_PTRREF_LIST PrivSlotList;// Offset=0x58 Size=0x4
    unsigned char CompactionNeeded;// Offset=0x5c Size=0x1
    unsigned char Spare[7];// Offset=0x5d Size=0x7
    struct _HEAP_AFFINITY_MGR AffinityMgr;// Offset=0x68 Size=0x10
};
