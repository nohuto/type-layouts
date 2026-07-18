struct _HEAP_LFH_BLOCK_SLIST// Size=0x2 (Id=304)
{
    unsigned short Next;// Offset=0x0 Size=0x2
};

union _HEAP_LFH_BLOCK_LIST// Size=0x4 (Id=303)
{
    unsigned short Next;// Offset=0x0 Size=0x2
    unsigned short Count;// Offset=0x2 Size=0x2
    struct _HEAP_LFH_BLOCK_SLIST SList;// Offset=0x0 Size=0x2
    unsigned long ListFields;// Offset=0x0 Size=0x4
};

union _HEAP_LFH_SUBSEGMENT_STATE// Size=0x8 (Id=301)
{
    unsigned short DelayFreeList;// Offset=0x0 Size=0x2
    unsigned short DelayFreeCount;// Offset=0x2 Size=0x2
    unsigned short Owner;// Offset=0x4 Size=0x2
    unsigned char Location;// Offset=0x6 Size=0x1
    long DelayFreeFields;// Offset=0x0 Size=0x4
    long OwnerLocation;// Offset=0x4 Size=0x4
    union _HEAP_LFH_BLOCK_LIST FreeList;// Offset=0x0 Size=0x4
    void * AllBits;// Offset=0x0 Size=0x8
};
