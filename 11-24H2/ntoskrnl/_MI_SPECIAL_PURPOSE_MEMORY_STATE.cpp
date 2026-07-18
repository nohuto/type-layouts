struct _LIST_ENTRY// Size=0x10 (Id=4)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _EX_PUSH_LOCK// Size=0x8 (Id=120)
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

struct _MI_SPECIAL_PURPOSE_MEMORY_STATE// Size=0x38 (Id=1331)
{
    union // Size=0x20 (Id=0)
    {
        struct _LIST_ENTRY TypesList;// Offset=0x0 Size=0x10
        struct _LIST_ENTRY CacheEligibleList;// Offset=0x10 Size=0x10
        struct _EPARTITION * RegularMemoryParentPartitionObject;// Offset=0x0 Size=0x8
        void * SpecialPurposeMemoryParentHandle;// Offset=0x8 Size=0x8
        unsigned long long Attributes[4];// Offset=0x10 Size=0x20
    };
    struct _EX_PUSH_LOCK Lock;// Offset=0x30 Size=0x8
};
