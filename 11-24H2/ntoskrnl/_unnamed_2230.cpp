struct _RTL_BALANCED_NODE// Size=0x18 (Id=116)
{
    union // Size=0x10 (Id=0)
    {
        struct _RTL_BALANCED_NODE * Children[2];// Offset=0x0 Size=0x10
        struct _RTL_BALANCED_NODE * Left;// Offset=0x0 Size=0x8
        struct _RTL_BALANCED_NODE * Right;// Offset=0x8 Size=0x8
    };
    union // Size=0x1 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            union // Size=0x1 (Id=0)
            {
                unsigned char Red:1;// Offset=0x10 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char Balance:2;// Offset=0x10 Size=0x1 BitOffset=0x0 BitSize=0x2
            };
        };
        unsigned long long ParentValue;// Offset=0x10 Size=0x8
    };
};

struct _LIST_ENTRY// Size=0x10 (Id=4)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _MI_COMBINE_BLOCK_BASE// Size=0x18 (Id=2410)
{
    void * Next;// Offset=0x0 Size=0x8
    unsigned long NumberOfActiveBlocks;// Offset=0x8 Size=0x4
    struct _MI_PAGE_COMBINING_SUPPORT * Pcs;// Offset=0x10 Size=0x8
};

union _unnamed_2230// Size=0x18 (Id=2230)
{
    struct _RTL_BALANCED_NODE ActiveNode;// Offset=0x0 Size=0x18
    struct _LIST_ENTRY ListEntry;// Offset=0x0 Size=0x10
    struct _MI_COMBINE_BLOCK_BASE CombineBase;// Offset=0x0 Size=0x18
};
