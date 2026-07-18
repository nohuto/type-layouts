struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _CM_KCB_LAYER_INFO// Size=0x40 (Id=1059)
{
    struct _LIST_ENTRY LayerListEntry;// Offset=0x0 Size=0x10
    struct _CM_KEY_CONTROL_BLOCK * Kcb;// Offset=0x10 Size=0x8
    struct _CM_KCB_LAYER_INFO * LowerLayer;// Offset=0x18 Size=0x8
    struct _LIST_ENTRY UpperLayerListHead;// Offset=0x20 Size=0x10
    struct _LIST_ENTRY DiscardedUpperLayerListHead;// Offset=0x30 Size=0x10
};
