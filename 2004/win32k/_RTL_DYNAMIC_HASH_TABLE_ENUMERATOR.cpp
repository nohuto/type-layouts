struct _LIST_ENTRY// Size=0x8 (Id=32)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x4
    struct _LIST_ENTRY * Blink;// Offset=0x4 Size=0x4
};

struct _RTL_DYNAMIC_HASH_TABLE_ENTRY// Size=0xc (Id=37)
{
    struct _LIST_ENTRY Linkage;// Offset=0x0 Size=0x8
    unsigned long Signature;// Offset=0x8 Size=0x4
};

struct _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR// Size=0x14 (Id=36)
{
    union // Size=0xc (Id=0)
    {
        struct _RTL_DYNAMIC_HASH_TABLE_ENTRY HashEntry;// Offset=0x0 Size=0xc
        struct _LIST_ENTRY * CurEntry;// Offset=0x0 Size=0x4
        struct _LIST_ENTRY * ChainHead;// Offset=0xc Size=0x4
    };
    unsigned long BucketIndex;// Offset=0x10 Size=0x4
};
