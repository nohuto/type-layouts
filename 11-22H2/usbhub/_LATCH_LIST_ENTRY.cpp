struct _LIST_ENTRY// Size=0x10 (Id=4)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _LATCH_LIST_ENTRY// Size=0x30 (Id=295)
{
    unsigned long Sig;// Offset=0x0 Size=0x4
    struct _LIST_ENTRY Link;// Offset=0x8 Size=0x10
    unsigned long Tag;// Offset=0x18 Size=0x4
    struct _DEVICE_OBJECT * Pdo;// Offset=0x20 Size=0x8
    void * Object;// Offset=0x28 Size=0x8
};
