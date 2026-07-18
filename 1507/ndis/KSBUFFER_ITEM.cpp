struct _LIST_ENTRY// Size=0x10 (Id=23)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct KSBUFFER_ITEM// Size=0x60 (Id=691)
{
    struct KSDPC_ITEM DpcItem;// Offset=0x0 Size=0x50
    struct _LIST_ENTRY BufferList;// Offset=0x50 Size=0x10
};
