struct _LIST_ENTRY// Size=0x10 (Id=22)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _KSEVENT_ENTRY// Size=0x58 (Id=352)
{
    struct _LIST_ENTRY ListEntry;// Offset=0x0 Size=0x10
    void * Object;// Offset=0x10 Size=0x8
    union // Size=0x8 (Id=0)
    {
        struct KSDPC_ITEM * DpcItem;// Offset=0x18 Size=0x8
        struct KSBUFFER_ITEM * BufferItem;// Offset=0x18 Size=0x8
    };
    struct KSEVENTDATA * EventData;// Offset=0x20 Size=0x8
    unsigned long NotificationType;// Offset=0x28 Size=0x4
    struct KSEVENT_SET * EventSet;// Offset=0x30 Size=0x8
    struct KSEVENT_ITEM * EventItem;// Offset=0x38 Size=0x8
    struct _FILE_OBJECT * FileObject;// Offset=0x40 Size=0x8
    unsigned long SemaphoreAdjustment;// Offset=0x48 Size=0x4
    unsigned long Reserved;// Offset=0x4c Size=0x4
    unsigned long Flags;// Offset=0x50 Size=0x4
};
