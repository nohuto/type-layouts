struct _LIST_ENTRY// Size=0x10 (Id=4)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _STOR_EVENT_SUBQUEUE// Size=0x40 (Id=235)
{
    struct _LIST_ENTRY List;// Offset=0x0 Size=0x10
    struct _LIST_ENTRY SortedList;// Offset=0x10 Size=0x10
    struct _LIST_ENTRY * SearchPointer;// Offset=0x20 Size=0x8
    unsigned long long Lock;// Offset=0x28 Size=0x8
    unsigned long Timeout;// Offset=0x30 Size=0x4
};

struct _STOR_EVENT_QUEUE// Size=0x80 (Id=234)
{
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long SortedQueueEnabled:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long QosModeEnabled:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long AbortSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long Reserved:29;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1d
        };
        unsigned long Flags;// Offset=0x0 Size=0x4
    };
    unsigned long TimePerTick;// Offset=0x4 Size=0x4
    unsigned long ProcessorQueueCount;// Offset=0x8 Size=0x4
    struct _STOR_EVENT_SUBQUEUE ProcessorQueues[1];// Offset=0x40 Size=0x40
};
