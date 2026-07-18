struct _LIST_ENTRY// Size=0x10 (Id=35)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _LFH_BLOCK_ZONE// Size=0x18 (Id=622)
{
    struct _LIST_ENTRY ListEntry;// Offset=0x0 Size=0x10
    long NextIndex;// Offset=0x10 Size=0x4
};
