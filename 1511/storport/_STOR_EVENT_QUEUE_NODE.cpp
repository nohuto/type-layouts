struct _LIST_ENTRY// Size=0x10 (Id=4)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _STOR_EVENT_QUEUE_NODE// Size=0x38 (Id=199)
{
    struct _LIST_ENTRY List;// Offset=0x0 Size=0x10
    struct _LIST_ENTRY SortedList;// Offset=0x10 Size=0x10
    struct _LIST_ENTRY * SearchPointer;// Offset=0x20 Size=0x8
    unsigned long long Lock;// Offset=0x28 Size=0x8
    unsigned long Timeout;// Offset=0x30 Size=0x4
};
