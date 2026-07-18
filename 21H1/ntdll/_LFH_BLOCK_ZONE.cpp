struct _LIST_ENTRY// Size=0x8 (Id=25)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x4
    struct _LIST_ENTRY * Blink;// Offset=0x4 Size=0x4
};

struct _LFH_BLOCK_ZONE// Size=0xc (Id=577)
{
    struct _LIST_ENTRY ListEntry;// Offset=0x0 Size=0x8
    long NextIndex;// Offset=0x8 Size=0x4
};
