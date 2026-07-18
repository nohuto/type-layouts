struct _LIST_ENTRY// Size=0x10 (Id=22)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _PROCESSOR_PACKAGE// Size=0x30 (Id=595)
{
    struct _LIST_ENTRY Link;// Offset=0x0 Size=0x10
    struct _LIST_ENTRY DevExtHead;// Offset=0x10 Size=0x10
    unsigned long Id;// Offset=0x20 Size=0x4
    unsigned long Total;// Offset=0x24 Size=0x4
    unsigned long Count;// Offset=0x28 Size=0x4
};
