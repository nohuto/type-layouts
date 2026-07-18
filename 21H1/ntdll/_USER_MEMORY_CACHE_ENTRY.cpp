struct _SINGLE_LIST_ENTRY// Size=0x4 (Id=26)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x4
};

union _SLIST_HEADER// Size=0x8 (Id=70)
{
    unsigned long long Alignment;// Offset=0x0 Size=0x8
    struct _SINGLE_LIST_ENTRY Next;// Offset=0x0 Size=0x4
    unsigned short Depth;// Offset=0x4 Size=0x2
    unsigned short CpuId;// Offset=0x6 Size=0x2
};

struct _USER_MEMORY_CACHE_ENTRY// Size=0x20 (Id=532)
{
    union _SLIST_HEADER UserBlocks;// Offset=0x0 Size=0x8
    unsigned long AvailableBlocks;// Offset=0x8 Size=0x4
    unsigned long MinimumDepth;// Offset=0xc Size=0x4
    unsigned long CacheShiftThreshold;// Offset=0x10 Size=0x4
    unsigned short Allocations;// Offset=0x14 Size=0x2
    unsigned short Frees;// Offset=0x16 Size=0x2
    unsigned short CacheHits;// Offset=0x18 Size=0x2
};
