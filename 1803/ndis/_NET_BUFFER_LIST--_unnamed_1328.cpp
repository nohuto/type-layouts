union _SLIST_HEADER// Size=0x10 (Id=68)
{
    unsigned long long Alignment;// Offset=0x0 Size=0x8
    unsigned long long Region;// Offset=0x8 Size=0x8
    struct <unnamed-type-HeaderX64>// Size=0x10 (Id=13595)
    {
        unsigned long long Depth:16;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x10
        unsigned long long Sequence:48;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x30
        unsigned long long Reserved:4;// Offset=0x8 Size=0x8 BitOffset=0x0 BitSize=0x4
        unsigned long long NextEntry:60;// Offset=0x8 Size=0x8 BitOffset=0x4 BitSize=0x3c
    };
    struct _SLIST_HEADER::<unnamed-type-HeaderX64> HeaderX64;// Offset=0x0 Size=0x10
};

struct _NET_BUFFER_LIST_DATA// Size=0x10 (Id=175)
{
    struct _NET_BUFFER_LIST * Next;// Offset=0x0 Size=0x8
    struct _NET_BUFFER * FirstNetBuffer;// Offset=0x8 Size=0x8
};

union _NET_BUFFER_LIST_HEADER// Size=0x10 (Id=174)
{
    struct _NET_BUFFER_LIST_DATA NetBufferListData;// Offset=0x0 Size=0x10
    union _SLIST_HEADER Link;// Offset=0x0 Size=0x10
};

union _NET_BUFFER_LIST::_unnamed_1328// Size=0x10 (Id=1328)
{
    struct _NET_BUFFER_LIST * Next;// Offset=0x0 Size=0x8
    struct _NET_BUFFER * FirstNetBuffer;// Offset=0x8 Size=0x8
    union _SLIST_HEADER Link;// Offset=0x0 Size=0x10
    union _NET_BUFFER_LIST_HEADER NetBufferListHeader;// Offset=0x0 Size=0x10
};
