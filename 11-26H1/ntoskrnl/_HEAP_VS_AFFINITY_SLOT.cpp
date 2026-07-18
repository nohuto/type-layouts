struct _RTL_RB_TREE// Size=0x10 (Id=115)
{
    struct _RTL_BALANCED_NODE * Root;// Offset=0x0 Size=0x8
    union // Size=0x1 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            unsigned char Encoded:1;// Offset=0x8 Size=0x1 BitOffset=0x0 BitSize=0x1
        };
        struct _RTL_BALANCED_NODE * Min;// Offset=0x8 Size=0x8
    };
};

struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _unnamed_542// Size=0x10 (Id=542)
{
    struct // Size=0x10 (Id=0)
    {
        unsigned long long Depth:16;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x10
        unsigned long long Sequence:48;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x30
        unsigned long long Reserved:4;// Offset=0x8 Size=0x8 BitOffset=0x0 BitSize=0x4
        unsigned long long NextEntry:60;// Offset=0x8 Size=0x8 BitOffset=0x4 BitSize=0x3c
    };
};

union _SLIST_HEADER// Size=0x10 (Id=543)
{
    unsigned long long Alignment;// Offset=0x0 Size=0x8
    unsigned long long Region;// Offset=0x8 Size=0x8
    struct _unnamed_542 HeaderX64;// Offset=0x0 Size=0x10
};

struct _HEAP_VS_DELAY_FREE_CONTEXT// Size=0x10 (Id=1468)
{
    union _SLIST_HEADER ListHead;// Offset=0x0 Size=0x10
};

struct _HEAP_VS_AFFINITY_SLOT// Size=0x80 (Id=949)
{
    struct _HEAP_VS_CONTEXT * VsContext;// Offset=0x0 Size=0x8
    unsigned long long Lock;// Offset=0x8 Size=0x8
    struct _RTL_RB_TREE FreeChunkTree;// Offset=0x10 Size=0x10
    struct _LIST_ENTRY SubsegmentList;// Offset=0x20 Size=0x10
    struct _HEAP_VS_DELAY_FREE_CONTEXT DelayFreeContext;// Offset=0x40 Size=0x10
};
