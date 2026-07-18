struct _LIST_ENTRY// Size=0x10 (Id=23)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct EXTENSION_WORKER// Size=0x18 (Id=388)
{
    unsigned long PendingEvents;// Offset=0x0 Size=0x4
    struct _LIST_ENTRY Link;// Offset=0x8 Size=0x10
};
