struct _HEAP_SUBALLOCATOR_CALLBACKS// Size=0x28 (Id=205)
{
    unsigned long long Allocate;// Offset=0x0 Size=0x8
    unsigned long long Free;// Offset=0x8 Size=0x8
    unsigned long long Commit;// Offset=0x10 Size=0x8
    unsigned long long Decommit;// Offset=0x18 Size=0x8
    unsigned long long ExtendContext;// Offset=0x20 Size=0x8
};

struct _RTL_SRWLOCK// Size=0x8 (Id=204)
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

struct _HEAP_LFH_SUBSEGMENT_STAT// Size=0x2 (Id=460)
{
    unsigned char Index;// Offset=0x0 Size=0x1
    unsigned char Count;// Offset=0x1 Size=0x1
};

union _HEAP_LFH_SUBSEGMENT_STATS// Size=0x8 (Id=397)
{
    struct _HEAP_LFH_SUBSEGMENT_STAT Buckets[4];// Offset=0x0 Size=0x8
    void * AllStats;// Offset=0x0 Size=0x8
};

struct _unnamed_69// Size=0x10 (Id=69)
{
    struct // Size=0x10 (Id=0)
    {
        unsigned long long Depth:16;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x10
        unsigned long long Sequence:48;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x30
        unsigned long long Reserved:4;// Offset=0x8 Size=0x8 BitOffset=0x0 BitSize=0x4
        unsigned long long NextEntry:60;// Offset=0x8 Size=0x8 BitOffset=0x4 BitSize=0x3c
    };
};

union _SLIST_HEADER// Size=0x10 (Id=70)
{
    unsigned long long Alignment;// Offset=0x0 Size=0x8
    unsigned long long Region;// Offset=0x8 Size=0x8
    struct _unnamed_69 HeaderX64;// Offset=0x0 Size=0x10
};

struct _HEAP_LFH_SUBSEGMENT_CACHE// Size=0x70 (Id=566)
{
    union _SLIST_HEADER SLists[7];// Offset=0x0 Size=0x70
};

struct _HEAP_LFH_CONTEXT// Size=0x4e0 (Id=241)
{
    void * BackendCtx;// Offset=0x0 Size=0x8
    struct _HEAP_SUBALLOCATOR_CALLBACKS Callbacks;// Offset=0x8 Size=0x28
    unsigned char MaxAffinity;// Offset=0x30 Size=0x1
    unsigned char * AffinityModArray;// Offset=0x38 Size=0x8
    struct _HEAP_RUNTIME_MEMORY_STATS * MemStats;// Offset=0x40 Size=0x8
    struct _RTL_SRWLOCK SubsegmentCreationLock;// Offset=0x48 Size=0x8
    union _HEAP_LFH_SUBSEGMENT_STATS BucketStats;// Offset=0x50 Size=0x8
    struct _HEAP_LFH_SUBSEGMENT_CACHE SubsegmentCache;// Offset=0x60 Size=0x70
    struct _HEAP_LFH_BUCKET * Buckets[129];// Offset=0xd0 Size=0x408
};
