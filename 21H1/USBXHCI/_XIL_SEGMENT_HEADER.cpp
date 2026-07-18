struct _LIST_ENTRY// Size=0x10 (Id=23)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _XIL_SEGMENT_HEADER// Size=0x20 (Id=622)
{
    struct _LIST_ENTRY ListEntry;// Offset=0x0 Size=0x10
    unsigned char PendingFree;// Offset=0x10 Size=0x1
    struct _XIL_COMMON_BUFFER_PAGE * CommonBufferPage;// Offset=0x18 Size=0x8
};
