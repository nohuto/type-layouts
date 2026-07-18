struct _unnamed_98// Size=0x10 (Id=98)
{
    struct // Size=0x10 (Id=0)
    {
        unsigned long long Depth:16;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x10
        unsigned long long Sequence:48;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x30
        unsigned long long Reserved:4;// Offset=0x8 Size=0x8 BitOffset=0x0 BitSize=0x4
        unsigned long long NextEntry:60;// Offset=0x8 Size=0x8 BitOffset=0x4 BitSize=0x3c
    };
};

union _SLIST_HEADER// Size=0x10 (Id=99)
{
    unsigned long long Alignment;// Offset=0x0 Size=0x8
    unsigned long long Region;// Offset=0x8 Size=0x8
    struct _unnamed_98 HeaderX64;// Offset=0x0 Size=0x10
};

struct _INTERLOCK_SEQ// Size=0x4 (Id=405)
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

struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=36)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _HEAP_SUBSEGMENT// Size=0x40 (Id=270)
{
    struct _HEAP_LOCAL_SEGMENT_INFO * LocalInfo;// Offset=0x0 Size=0x8
    struct _HEAP_USERDATA_HEADER * UserBlocks;// Offset=0x8 Size=0x8
    union _SLIST_HEADER DelayFreeList;// Offset=0x10 Size=0x10
    struct _INTERLOCK_SEQ AggregateExchg;// Offset=0x20 Size=0x4
    union // Size=0x2c (Id=0)
    {
        unsigned short BlockSize;// Offset=0x24 Size=0x2
        unsigned short Flags;// Offset=0x26 Size=0x2
        unsigned short BlockCount;// Offset=0x28 Size=0x2
        unsigned char SizeIndex;// Offset=0x2a Size=0x1
        unsigned char AffinityIndex;// Offset=0x2b Size=0x1
        unsigned long Alignment[2];// Offset=0x24 Size=0x8
    };
    unsigned long Lock;// Offset=0x2c Size=0x4
    struct _SINGLE_LIST_ENTRY SFreeListEntry;// Offset=0x30 Size=0x8
};
