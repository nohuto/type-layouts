struct _LIST_ENTRY// Size=0x10 (Id=23)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _CALL_HASH_ENTRY// Size=0x28 (Id=1722)
{
    struct _LIST_ENTRY ListEntry;// Offset=0x0 Size=0x10
    void * CallersAddress;// Offset=0x10 Size=0x8
    void * CallersCaller;// Offset=0x18 Size=0x8
    unsigned long CallCount;// Offset=0x20 Size=0x4
};
