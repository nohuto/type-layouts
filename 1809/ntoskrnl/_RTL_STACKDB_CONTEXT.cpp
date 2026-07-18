struct _RTL_HASH_TABLE// Size=0x10 (Id=213)
{
    unsigned long EntryCount;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long MaskBitCount:5;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x5
        unsigned long BucketCount:27;// Offset=0x4 Size=0x4 BitOffset=0x5 BitSize=0x1b
    };
    struct _SINGLE_LIST_ENTRY * Buckets;// Offset=0x8 Size=0x8
};

struct _RTL_SRWLOCK// Size=0x8 (Id=1083)
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

struct _RTL_STACKDB_CONTEXT// Size=0x48 (Id=444)
{
    struct _RTL_HASH_TABLE StackSegmentTable;// Offset=0x0 Size=0x10
    struct _RTL_HASH_TABLE StackEntryTable;// Offset=0x10 Size=0x10
    struct _RTL_SRWLOCK StackEntryTableLock;// Offset=0x20 Size=0x8
    struct _RTL_SRWLOCK SegmentTableLock;// Offset=0x28 Size=0x8
    void *  ( * Allocate)(unsigned long long ,void * );// Offset=0x30 Size=0x8
    void  ( * Free)(void * ,void * );// Offset=0x38 Size=0x8
    void * AllocatorContext;// Offset=0x40 Size=0x8
};
