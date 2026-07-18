struct _LIST_ENTRY// Size=0x10 (Id=19)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _HEAP_UCR_DESCRIPTOR// Size=0x30 (Id=285)
{
    struct _LIST_ENTRY ListEntry;// Offset=0x0 Size=0x10
    struct _LIST_ENTRY SegmentEntry;// Offset=0x10 Size=0x10
    void * Address;// Offset=0x20 Size=0x8
    unsigned long long Size;// Offset=0x28 Size=0x8
};
