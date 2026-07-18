struct _RTL_BALANCED_NODE// Size=0x18 (Id=51)
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

struct _HEAP_DESCRIPTOR_KEY// Size=0x4 (Id=302)
{
    union // Size=0x4 (Id=0)
    {
        unsigned long Key;// Offset=0x0 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long EncodedCommittedPageCount:16;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x10
            unsigned long LargePageCost:8;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x8
            unsigned long UnitCount:8;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x8
        };
    };
};

struct _HEAP_PAGE_RANGE_DESCRIPTOR// Size=0x20 (Id=296)
{
    union // Size=0x18 (Id=0)
    {
        struct _RTL_BALANCED_NODE TreeNode;// Offset=0x0 Size=0x18
        unsigned long TreeSignature;// Offset=0x0 Size=0x4
        unsigned long UnusedBytes;// Offset=0x4 Size=0x4
        struct // Size=0x2 (Id=0)
        {
            unsigned short ExtraPresent:1;// Offset=0x8 Size=0x2 BitOffset=0x0 BitSize=0x1
            unsigned short Spare0:15;// Offset=0x8 Size=0x2 BitOffset=0x1 BitSize=0xf
        };
        unsigned char RangeFlags;// Offset=0x18 Size=0x1
    };
    unsigned char CommittedPageCount;// Offset=0x19 Size=0x1
    unsigned short Spare;// Offset=0x1a Size=0x2
    union // Size=0x4 (Id=0)
    {
        struct _HEAP_DESCRIPTOR_KEY Key;// Offset=0x1c Size=0x4
        unsigned char Align[3];// Offset=0x1c Size=0x3
    };
    union // Size=0x1 (Id=0)
    {
        unsigned char UnitOffset;// Offset=0x1f Size=0x1
        unsigned char UnitSize;// Offset=0x1f Size=0x1
    };
};
