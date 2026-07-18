struct _HEAP_SUBALLOCATOR_CALLBACKS// Size=0x14 (Id=208)
{
    unsigned long Allocate;// Offset=0x0 Size=0x4
    unsigned long Free;// Offset=0x4 Size=0x4
    unsigned long Commit;// Offset=0x8 Size=0x4
    unsigned long Decommit;// Offset=0xc Size=0x4
    unsigned long ExtendContext;// Offset=0x10 Size=0x4
};

struct _RTL_HP_LFH_CONFIG// Size=0x4 (Id=414)
{
    unsigned short MaxBlockSize;// Offset=0x0 Size=0x2
    struct // Size=0x2 (Id=0)
    {
        unsigned short WitholdPageCrossingBlocks:1;// Offset=0x2 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short DisableRandomization:1;// Offset=0x2 Size=0x2 BitOffset=0x1 BitSize=0x1
    };
};

struct _HEAP_LFH_SUBSEGMENT_STAT// Size=0x2 (Id=511)
{
    unsigned char Index;// Offset=0x0 Size=0x1
    unsigned char Count;// Offset=0x1 Size=0x1
};

union _HEAP_LFH_SUBSEGMENT_STATS// Size=0x4 (Id=441)
{
    struct _HEAP_LFH_SUBSEGMENT_STAT Buckets[2];// Offset=0x0 Size=0x4
    void * AllStats;// Offset=0x0 Size=0x4
};

struct _HEAP_LFH_CONTEXT// Size=0x2c0 (Id=251)
{
    void * BackendCtx;// Offset=0x0 Size=0x4
    struct _HEAP_SUBALLOCATOR_CALLBACKS Callbacks;// Offset=0x4 Size=0x14
    unsigned char * AffinityModArray;// Offset=0x18 Size=0x4
    unsigned char MaxAffinity;// Offset=0x1c Size=0x1
    unsigned char LockType;// Offset=0x1d Size=0x1
    short MemStatsOffset;// Offset=0x1e Size=0x2
    struct _RTL_HP_LFH_CONFIG Config;// Offset=0x20 Size=0x4
    union _HEAP_LFH_SUBSEGMENT_STATS BucketStats;// Offset=0x40 Size=0x4
    unsigned long SubsegmentCreationLock;// Offset=0x44 Size=0x4
    struct _HEAP_LFH_BUCKET * Buckets[129];// Offset=0x80 Size=0x204
};
