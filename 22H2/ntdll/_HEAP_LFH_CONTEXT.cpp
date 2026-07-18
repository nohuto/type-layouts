struct _HEAP_SUBALLOCATOR_CALLBACKS// Size=0x28 (Id=222)
{
    unsigned long long Allocate;// Offset=0x0 Size=0x8
    unsigned long long Free;// Offset=0x8 Size=0x8
    unsigned long long Commit;// Offset=0x10 Size=0x8
    unsigned long long Decommit;// Offset=0x18 Size=0x8
    unsigned long long ExtendContext;// Offset=0x20 Size=0x8
};

struct _RTL_HP_LFH_CONFIG// Size=0x4 (Id=432)
{
    unsigned short MaxBlockSize;// Offset=0x0 Size=0x2
    struct // Size=0x2 (Id=0)
    {
        unsigned short WitholdPageCrossingBlocks:1;// Offset=0x2 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short DisableRandomization:1;// Offset=0x2 Size=0x2 BitOffset=0x1 BitSize=0x1
    };
};

struct _HEAP_LFH_SUBSEGMENT_STAT// Size=0x2 (Id=533)
{
    unsigned char Index;// Offset=0x0 Size=0x1
    unsigned char Count;// Offset=0x1 Size=0x1
};

union _HEAP_LFH_SUBSEGMENT_STATS// Size=0x8 (Id=458)
{
    struct _HEAP_LFH_SUBSEGMENT_STAT Buckets[4];// Offset=0x0 Size=0x8
    void * AllStats;// Offset=0x0 Size=0x8
};

struct _HEAP_LFH_CONTEXT// Size=0x4c0 (Id=265)
{
    void * BackendCtx;// Offset=0x0 Size=0x8
    struct _HEAP_SUBALLOCATOR_CALLBACKS Callbacks;// Offset=0x8 Size=0x28
    unsigned char * AffinityModArray;// Offset=0x30 Size=0x8
    unsigned char MaxAffinity;// Offset=0x38 Size=0x1
    unsigned char LockType;// Offset=0x39 Size=0x1
    short MemStatsOffset;// Offset=0x3a Size=0x2
    struct _RTL_HP_LFH_CONFIG Config;// Offset=0x3c Size=0x4
    union _HEAP_LFH_SUBSEGMENT_STATS BucketStats;// Offset=0x40 Size=0x8
    unsigned long long SubsegmentCreationLock;// Offset=0x48 Size=0x8
    struct _HEAP_LFH_BUCKET * Buckets[129];// Offset=0x80 Size=0x408
};
