struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _HALP_ALLOC_CONTEXT// Size=0x18 (Id=121)
{
    struct _LIST_ENTRY BufferList;// Offset=0x0 Size=0x10
    unsigned long long Lock;// Offset=0x10 Size=0x8
};
