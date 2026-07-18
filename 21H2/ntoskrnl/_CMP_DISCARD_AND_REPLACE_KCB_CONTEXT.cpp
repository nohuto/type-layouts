struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _CMP_DISCARD_AND_REPLACE_KCB_CONTEXT// Size=0x20 (Id=1276)
{
    struct _CM_KEY_CONTROL_BLOCK * BaseKcb;// Offset=0x0 Size=0x8
    long PrepareStatus;// Offset=0x8 Size=0x4
    struct _LIST_ENTRY ClonedKcbListHead;// Offset=0x10 Size=0x10
};
