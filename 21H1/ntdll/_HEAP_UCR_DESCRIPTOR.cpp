struct _LIST_ENTRY// Size=0x8 (Id=25)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x4
    struct _LIST_ENTRY * Blink;// Offset=0x4 Size=0x4
};

struct _HEAP_UCR_DESCRIPTOR// Size=0x18 (Id=632)
{
    struct _LIST_ENTRY ListEntry;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY SegmentEntry;// Offset=0x8 Size=0x8
    void * Address;// Offset=0x10 Size=0x4
    unsigned long Size;// Offset=0x14 Size=0x4
};
