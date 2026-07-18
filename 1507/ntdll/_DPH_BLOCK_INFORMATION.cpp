struct _LIST_ENTRY// Size=0x10 (Id=19)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _SLIST_ENTRY// Size=0x10 (Id=63)
{
    struct _SLIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _DPH_BLOCK_INFORMATION// Size=0x40 (Id=310)
{
    unsigned long StartStamp;// Offset=0x0 Size=0x4
    void * Heap;// Offset=0x8 Size=0x8
    unsigned long long RequestedSize;// Offset=0x10 Size=0x8
    unsigned long long ActualSize;// Offset=0x18 Size=0x8
    union // Size=0x30 (Id=0)
    {
        struct _LIST_ENTRY FreeQueue;// Offset=0x20 Size=0x10
        struct _SLIST_ENTRY FreePushList;// Offset=0x20 Size=0x10
        unsigned short TraceIndex;// Offset=0x20 Size=0x2
        void * StackTrace;// Offset=0x30 Size=0x8
    };
    unsigned long Padding;// Offset=0x38 Size=0x4
    unsigned long EndStamp;// Offset=0x3c Size=0x4
};
