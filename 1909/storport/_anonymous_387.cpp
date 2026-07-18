struct _LIST_ENTRY// Size=0x10 (Id=5)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _anonymous_387// Size=0x20 (Id=387)
{
    struct _LIST_ENTRY List;// Offset=0x0 Size=0x10
    unsigned long Count;// Offset=0x10 Size=0x4
    unsigned long long Lock;// Offset=0x18 Size=0x8
};
