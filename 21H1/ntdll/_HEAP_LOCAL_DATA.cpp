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

struct _HEAP_LOCAL_DATA// Size=0x18 (Id=277)
{
    union _SLIST_HEADER DeletedSubSegments;// Offset=0x0 Size=0x8
    struct _LFH_BLOCK_ZONE * CrtZone;// Offset=0x8 Size=0x4
    struct _LFH_HEAP * LowFragHeap;// Offset=0xc Size=0x4
    unsigned long Sequence;// Offset=0x10 Size=0x4
    unsigned long DeleteRateThreshold;// Offset=0x14 Size=0x4
};
