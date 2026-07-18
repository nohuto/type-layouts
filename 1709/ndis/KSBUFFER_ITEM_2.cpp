struct _LIST_ENTRY// Size=0x10 (Id=29)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct KSBUFFER_ITEM// Size=0x60 (Id=780)
{
    struct KSDPC_ITEM DpcItem;// Offset=0x0 Size=0x50
    struct _LIST_ENTRY BufferList;// Offset=0x50 Size=0x10
    void KSBUFFER_ITEM(struct KSBUFFER_ITEM * );
    void KSBUFFER_ITEM(struct KSBUFFER_ITEM & );
    struct KSBUFFER_ITEM & operator=(struct KSBUFFER_ITEM * );
    struct KSBUFFER_ITEM & operator=(struct KSBUFFER_ITEM & );
};
