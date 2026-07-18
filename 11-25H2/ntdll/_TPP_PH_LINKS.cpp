struct _LIST_ENTRY// Size=0x10 (Id=30)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _TPP_PH_LINKS// Size=0x28 (Id=702)
{
    struct _LIST_ENTRY Siblings;// Offset=0x0 Size=0x10
    struct _LIST_ENTRY Children;// Offset=0x10 Size=0x10
    long long Key;// Offset=0x20 Size=0x8
};
