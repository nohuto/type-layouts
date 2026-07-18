struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=132)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _ZONE_HEADER// Size=0x18 (Id=3477)
{
    struct _SINGLE_LIST_ENTRY FreeList;// Offset=0x0 Size=0x8
    struct _SINGLE_LIST_ENTRY SegmentList;// Offset=0x8 Size=0x8
    unsigned long BlockSize;// Offset=0x10 Size=0x4
    unsigned long TotalSegmentSize;// Offset=0x14 Size=0x4
};
