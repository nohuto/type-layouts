struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _VI_DEADLOCK_THREAD// Size=0x38 (Id=1220)
{
    struct _KTHREAD * Thread;// Offset=0x0 Size=0x8
    struct _VI_DEADLOCK_NODE * CurrentSpinNode;// Offset=0x8 Size=0x8
    struct _VI_DEADLOCK_NODE * CurrentOtherNode;// Offset=0x10 Size=0x8
    union // Size=0x10 (Id=0)
    {
        struct _LIST_ENTRY ListEntry;// Offset=0x18 Size=0x10
        struct _LIST_ENTRY FreeListEntry;// Offset=0x18 Size=0x10
    };
    unsigned long NodeCount;// Offset=0x28 Size=0x4
    unsigned long PagingCount;// Offset=0x2c Size=0x4
    unsigned char ThreadUsesEresources;// Offset=0x30 Size=0x1
};
