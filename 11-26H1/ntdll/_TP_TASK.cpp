struct _LIST_ENTRY// Size=0x10 (Id=33)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _TP_TASK// Size=0x20 (Id=379)
{
    struct _TP_TASK_CALLBACKS * Callbacks;// Offset=0x0 Size=0x8
    unsigned long NumaNode;// Offset=0x8 Size=0x4
    unsigned char IdealProcessor;// Offset=0xc Size=0x1
    struct _LIST_ENTRY ListEntry;// Offset=0x10 Size=0x10
};
