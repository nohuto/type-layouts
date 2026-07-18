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

struct _INTERLOCK_SEQ// Size=0x4 (Id=238)
{
    union // Size=0x4 (Id=0)
    {
        unsigned short Depth;// Offset=0x0 Size=0x2
        struct // Size=0x2 (Id=0)
        {
            unsigned short Hint:15;// Offset=0x2 Size=0x2 BitOffset=0x0 BitSize=0xf
            unsigned short Lock:1;// Offset=0x2 Size=0x2 BitOffset=0xf BitSize=0x1
        };
        unsigned short Hint16;// Offset=0x2 Size=0x2
        long Exchg;// Offset=0x0 Size=0x4
    };
};

struct _HEAP_SUBSEGMENT// Size=0x28 (Id=239)
{
    struct _HEAP_LOCAL_SEGMENT_INFO * LocalInfo;// Offset=0x0 Size=0x4
    struct _HEAP_USERDATA_HEADER * UserBlocks;// Offset=0x4 Size=0x4
    union _SLIST_HEADER DelayFreeList;// Offset=0x8 Size=0x8
    struct _INTERLOCK_SEQ AggregateExchg;// Offset=0x10 Size=0x4
    union // Size=0x1c (Id=0)
    {
        unsigned short BlockSize;// Offset=0x14 Size=0x2
        unsigned short Flags;// Offset=0x16 Size=0x2
        unsigned short BlockCount;// Offset=0x18 Size=0x2
        unsigned char SizeIndex;// Offset=0x1a Size=0x1
        unsigned char AffinityIndex;// Offset=0x1b Size=0x1
        unsigned long Alignment[2];// Offset=0x14 Size=0x8
    };
    unsigned long Lock;// Offset=0x1c Size=0x4
    struct _SINGLE_LIST_ENTRY SFreeListEntry;// Offset=0x20 Size=0x4
};
