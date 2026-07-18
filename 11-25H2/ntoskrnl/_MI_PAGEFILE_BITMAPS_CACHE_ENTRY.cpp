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

struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _MI_PAGEFILE_BITMAPS_CACHE_ENTRY// Size=0x38 (Id=2329)
{
    union // Size=0x18 (Id=0)
    {
        struct _RTL_BALANCED_NODE LengthTreeNode;// Offset=0x0 Size=0x18
        struct _LIST_ENTRY FreeListEntry;// Offset=0x0 Size=0x10
        struct _RTL_BALANCED_NODE LocationTreeNode;// Offset=0x18 Size=0x18
    };
    unsigned long StartingIndex;// Offset=0x30 Size=0x4
    unsigned long Length;// Offset=0x34 Size=0x4
};
