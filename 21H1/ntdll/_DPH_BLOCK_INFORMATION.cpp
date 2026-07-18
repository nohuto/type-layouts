struct _LIST_ENTRY// Size=0x8 (Id=25)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x4
    struct _LIST_ENTRY * Blink;// Offset=0x4 Size=0x4
};

struct _SINGLE_LIST_ENTRY// Size=0x4 (Id=26)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x4
};

struct _DPH_BLOCK_INFORMATION// Size=0x20 (Id=588)
{
    unsigned long StartStamp;// Offset=0x0 Size=0x4
    void * Heap;// Offset=0x4 Size=0x4
    unsigned long RequestedSize;// Offset=0x8 Size=0x4
    unsigned long ActualSize;// Offset=0xc Size=0x4
    union // Size=0x14 (Id=0)
    {
        struct _LIST_ENTRY FreeQueue;// Offset=0x10 Size=0x8
        struct _SINGLE_LIST_ENTRY FreePushList;// Offset=0x10 Size=0x4
        unsigned short TraceIndex;// Offset=0x10 Size=0x2
        void * StackTrace;// Offset=0x18 Size=0x4
    };
    unsigned long EndStamp;// Offset=0x1c Size=0x4
};
