struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _KRESOURCEMANAGER_COMPLETION_BINDING// Size=0x28 (Id=1664)
{
    struct _LIST_ENTRY NotificationListHead;// Offset=0x0 Size=0x10
    void * Port;// Offset=0x10 Size=0x8
    unsigned long long Key;// Offset=0x18 Size=0x8
    struct _EPROCESS * BindingProcess;// Offset=0x20 Size=0x8
};
