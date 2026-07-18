struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=21)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _ETW_BUFFER_QUEUE// Size=0x18 (Id=1112)
{
    struct _SINGLE_LIST_ENTRY * QueueHead;// Offset=0x0 Size=0x8
    struct _SINGLE_LIST_ENTRY * QueueTail;// Offset=0x8 Size=0x8
    struct _SINGLE_LIST_ENTRY QueueEntry;// Offset=0x10 Size=0x8
};
