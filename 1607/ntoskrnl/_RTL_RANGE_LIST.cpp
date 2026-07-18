struct _LIST_ENTRY// Size=0x10 (Id=20)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _RTL_RANGE_LIST// Size=0x20 (Id=1061)
{
    struct _LIST_ENTRY ListHead;// Offset=0x0 Size=0x10
    unsigned long Flags;// Offset=0x10 Size=0x4
    unsigned long Count;// Offset=0x14 Size=0x4
    unsigned long Stamp;// Offset=0x18 Size=0x4
};
