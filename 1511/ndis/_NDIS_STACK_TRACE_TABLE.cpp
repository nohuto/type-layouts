struct _RTL_DYNAMIC_HASH_TABLE// Size=0x28 (Id=29)
{
    unsigned long Flags;// Offset=0x0 Size=0x4
    unsigned long Shift;// Offset=0x4 Size=0x4
    unsigned long TableSize;// Offset=0x8 Size=0x4
    unsigned long Pivot;// Offset=0xc Size=0x4
    unsigned long DivisorMask;// Offset=0x10 Size=0x4
    unsigned long NumEntries;// Offset=0x14 Size=0x4
    unsigned long NonEmptyBuckets;// Offset=0x18 Size=0x4
    unsigned long NumEnumerators;// Offset=0x1c Size=0x4
    void * Directory;// Offset=0x20 Size=0x8
};

struct _NDIS_STACK_TRACE_TABLE// Size=0x40 (Id=562)
{
    unsigned long long Lock;// Offset=0x0 Size=0x8
    unsigned char Allocated;// Offset=0x8 Size=0x1
    unsigned char Collisions;// Offset=0x9 Size=0x1
    unsigned char DroppedStacks;// Offset=0xa Size=0x1
    unsigned char NumStackFrames;// Offset=0xb Size=0x1
    struct _RTL_DYNAMIC_HASH_TABLE HashTable;// Offset=0x10 Size=0x28
    unsigned long AllocationFailures;// Offset=0x38 Size=0x4
};
