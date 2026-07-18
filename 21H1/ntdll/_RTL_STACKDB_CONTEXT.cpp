struct _RTL_HASH_TABLE// Size=0xc (Id=242)
{
    unsigned long EntryCount;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long MaskBitCount:5;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x5
        unsigned long BucketCount:27;// Offset=0x4 Size=0x4 BitOffset=0x5 BitSize=0x1b
    };
    struct _SINGLE_LIST_ENTRY * Buckets;// Offset=0x8 Size=0x4
};

struct _RTL_SRWLOCK// Size=0x4 (Id=468)
{
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long Locked:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long Waiting:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long Waking:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long MultipleShared:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long Shared:28;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1c
        };
        unsigned long Value;// Offset=0x0 Size=0x4
        void * Ptr;// Offset=0x0 Size=0x4
    };
};

struct _RTL_STACKDB_CONTEXT// Size=0x2c (Id=248)
{
    struct _RTL_HASH_TABLE StackSegmentTable;// Offset=0x0 Size=0xc
    struct _RTL_HASH_TABLE StackEntryTable;// Offset=0xc Size=0xc
    struct _RTL_SRWLOCK StackEntryTableLock;// Offset=0x18 Size=0x4
    struct _RTL_SRWLOCK SegmentTableLock;// Offset=0x1c Size=0x4
    void *  ( * Allocate)(unsigned long ,void * );// Offset=0x20 Size=0x4
    void  ( * Free)(void * ,void * );// Offset=0x24 Size=0x4
    void * AllocatorContext;// Offset=0x28 Size=0x4
};
