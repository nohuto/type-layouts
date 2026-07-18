struct _XIL_COMMON_BUFFER_POLICY// Size=0x10 (Id=863)
{
    unsigned long InitialCount;// Offset=0x0 Size=0x4
    unsigned long PreallocationThreshold;// Offset=0x4 Size=0x4
    unsigned long PreallocationCount;// Offset=0x8 Size=0x4
    unsigned long ReclamationThreshold;// Offset=0xc Size=0x4
};

struct _LIST_ENTRY// Size=0x10 (Id=37)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _XILCORE_COMMON_BUFFER_SEGMENTER// Size=0x40 (Id=837)
{
    unsigned long SegmentSize;// Offset=0x0 Size=0x4
    unsigned long SegmentsPerPage;// Offset=0x4 Size=0x4
    struct _XIL_COMMON_BUFFER_POLICY Policy;// Offset=0x8 Size=0x10
    unsigned long NumberOfListEntries;// Offset=0x18 Size=0x4
    unsigned long AvailableListEntries;// Offset=0x1c Size=0x4
    struct _LIST_ENTRY List;// Offset=0x20 Size=0x10
    struct _LIST_ENTRY SegmentHeaderList;// Offset=0x30 Size=0x10
};
