struct _LIST_ENTRY// Size=0x10 (Id=4)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _STOR_EVENT_QUEUE_ENTRY// Size=0x30 (Id=198)
{
    struct _LIST_ENTRY NextLink;// Offset=0x0 Size=0x10
    struct _LIST_ENTRY SortedListEntry;// Offset=0x10 Size=0x10
    unsigned long Timeout;// Offset=0x20 Size=0x4
    unsigned long Node;// Offset=0x24 Size=0x4
    unsigned long long StartTime;// Offset=0x28 Size=0x8
};
