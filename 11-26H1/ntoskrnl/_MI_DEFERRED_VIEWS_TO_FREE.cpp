struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _MI_DEFERRED_VIEWS_TO_FREE// Size=0x20 (Id=2463)
{
    struct _LIST_ENTRY ListHead;// Offset=0x0 Size=0x10
    unsigned long long NumberOfPages;// Offset=0x10 Size=0x8
    unsigned long TbFlushStamp;// Offset=0x18 Size=0x4
};
