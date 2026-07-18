struct _LIST_ENTRY// Size=0x10 (Id=127)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _RESOURCE_HASH_ENTRY// Size=0x20 (Id=4177)
{
    struct _LIST_ENTRY ListEntry;// Offset=0x0 Size=0x10
    void * Address;// Offset=0x10 Size=0x8
    unsigned long ContentionCount;// Offset=0x18 Size=0x4
    unsigned long Number;// Offset=0x1c Size=0x4
};
