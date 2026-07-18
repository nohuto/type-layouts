struct _LIST_ENTRY// Size=0x8 (Id=25)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x4
    struct _LIST_ENTRY * Blink;// Offset=0x4 Size=0x4
};

struct _RTL_BALANCED_NODE// Size=0xc (Id=38)
{
    union // Size=0x8 (Id=0)
    {
        struct _RTL_BALANCED_NODE * Children[2];// Offset=0x0 Size=0x8
        struct _RTL_BALANCED_NODE * Left;// Offset=0x0 Size=0x4
        struct _RTL_BALANCED_NODE * Right;// Offset=0x4 Size=0x4
    };
    union // Size=0x1 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            union // Size=0x1 (Id=0)
            {
                unsigned char Red:1;// Offset=0x8 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char Balance:2;// Offset=0x8 Size=0x1 BitOffset=0x0 BitSize=0x2
            };
        };
        unsigned long ParentValue;// Offset=0x8 Size=0x4
    };
};

struct _HEAP_DESCRIPTOR_KEY// Size=0x4 (Id=271)
{
    union // Size=0x4 (Id=0)
    {
        unsigned long Key;// Offset=0x0 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long Ignore:8;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x8
            unsigned long EncodedCommittedPageCount:16;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x10
            unsigned long UnitCount:8;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x8
        };
    };
};

struct _HEAP_PAGE_RANGE_DESCRIPTOR// Size=0x10 (Id=265)
{
    union // Size=0xc (Id=0)
    {
        struct _RTL_BALANCED_NODE TreeNode;// Offset=0x0 Size=0xc
        unsigned long TreeSignature;// Offset=0x0 Size=0x4
        unsigned long UnusedBytes;// Offset=0x4 Size=0x4
        struct // Size=0x2 (Id=0)
        {
            unsigned short ExtraPresent:1;// Offset=0x8 Size=0x2 BitOffset=0x0 BitSize=0x1
            unsigned short Spare0:15;// Offset=0x8 Size=0x2 BitOffset=0x1 BitSize=0xf
        };
        unsigned char RangeFlags;// Offset=0xc Size=0x1
    };
    union // Size=0x10 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            unsigned char RangeFlagBits:5;// Offset=0xc Size=0x1 BitOffset=0x0 BitSize=0x5
            unsigned char CommittedPageCount:3;// Offset=0xc Size=0x1 BitOffset=0x5 BitSize=0x3
        };
        struct _HEAP_DESCRIPTOR_KEY Key;// Offset=0xc Size=0x4
        unsigned char Align[3];// Offset=0xc Size=0x3
        unsigned char UnitOffset;// Offset=0xf Size=0x1
    };
    unsigned char UnitSize;// Offset=0xf Size=0x1
};

union _HEAP_PAGE_SEGMENT// Size=0x1000 (Id=267)
{
    struct _LIST_ENTRY ListEntry;// Offset=0x0 Size=0x8
    unsigned long Signature;// Offset=0x8 Size=0x4
    union _HEAP_SEGMENT_MGR_COMMIT_STATE * SegmentCommitState;// Offset=0xc Size=0x4
    unsigned char UnusedWatermark;// Offset=0x10 Size=0x1
    struct _HEAP_PAGE_RANGE_DESCRIPTOR DescArray[256];// Offset=0x0 Size=0x1000
};
