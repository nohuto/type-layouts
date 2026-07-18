struct _LIST_ENTRY// Size=0x10 (Id=28)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _NDIS_IF_STACK_ENTRY// Size=0x28 (Id=623)
{
    struct _LIST_ENTRY Link;// Offset=0x0 Size=0x10
    unsigned long HigherLayerIfIndex;// Offset=0x10 Size=0x4
    unsigned long LowerLayerIfIndex;// Offset=0x14 Size=0x4
    struct _NDIS_IF_BLOCK * HigherLayerIf;// Offset=0x18 Size=0x8
    struct _NDIS_IF_BLOCK * LowerLayerIf;// Offset=0x20 Size=0x8
};
