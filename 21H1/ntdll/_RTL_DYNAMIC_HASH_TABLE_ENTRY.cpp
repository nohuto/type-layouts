struct _LIST_ENTRY// Size=0x8 (Id=25)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x4
    struct _LIST_ENTRY * Blink;// Offset=0x4 Size=0x4
};

struct _RTL_DYNAMIC_HASH_TABLE_ENTRY// Size=0xc (Id=330)
{
    struct _LIST_ENTRY Linkage;// Offset=0x0 Size=0x8
    unsigned long Signature;// Offset=0x8 Size=0x4
};
