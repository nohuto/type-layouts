struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=393)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _ETW_BUFFER_QUEUE// Size=0x10 (Id=840)
{
    struct _SINGLE_LIST_ENTRY * QueueTail;// Offset=0x0 Size=0x8
    struct _SINGLE_LIST_ENTRY QueueEntry;// Offset=0x8 Size=0x8
};
