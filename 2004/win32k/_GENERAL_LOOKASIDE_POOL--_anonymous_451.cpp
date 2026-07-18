struct _SINGLE_LIST_ENTRY// Size=0x4 (Id=33)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x4
};

union _SLIST_HEADER// Size=0x8 (Id=65)
{
    unsigned long long Alignment;// Offset=0x0 Size=0x8
    struct _SINGLE_LIST_ENTRY Next;// Offset=0x0 Size=0x4
    unsigned short Depth;// Offset=0x4 Size=0x2
    unsigned short CpuId;// Offset=0x6 Size=0x2
};

union _GENERAL_LOOKASIDE_POOL::_anonymous_451// Size=0x8 (Id=451)
{
    union // Size=0x8 (Id=0)
    {
        union _SLIST_HEADER ListHead;// Offset=0x0 Size=0x8
        struct _SINGLE_LIST_ENTRY SingleListHead;// Offset=0x0 Size=0x4
    };
};
