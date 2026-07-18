struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=68)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _ZONE_SEGMENT_HEADER// Size=0x10 (Id=2270)
{
    struct _SINGLE_LIST_ENTRY SegmentList;// Offset=0x0 Size=0x8
    void * Reserved;// Offset=0x8 Size=0x8
};
