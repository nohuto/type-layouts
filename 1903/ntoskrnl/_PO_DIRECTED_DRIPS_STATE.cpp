struct _LIST_ENTRY// Size=0x10 (Id=22)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _PO_DIRECTED_DRIPS_STATE// Size=0x38 (Id=776)
{
    struct _LIST_ENTRY QueueLink;// Offset=0x0 Size=0x10
    struct _LIST_ENTRY VisitedQueueLink;// Offset=0x10 Size=0x10
    unsigned long Flags;// Offset=0x20 Size=0x4
    unsigned long CachedFlags;// Offset=0x24 Size=0x4
    unsigned long DeviceUsageCount;// Offset=0x28 Size=0x4
    void * Diagnostic;// Offset=0x30 Size=0x8
};
