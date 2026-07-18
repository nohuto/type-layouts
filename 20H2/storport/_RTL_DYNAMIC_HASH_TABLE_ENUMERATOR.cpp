struct _LIST_ENTRY// Size=0x10 (Id=4)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _RTL_DYNAMIC_HASH_TABLE_ENTRY// Size=0x18 (Id=372)
{
    struct _LIST_ENTRY Linkage;// Offset=0x0 Size=0x10
    unsigned long long Signature;// Offset=0x10 Size=0x8
};

struct _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR// Size=0x28 (Id=106)
{
    union // Size=0x18 (Id=0)
    {
        struct _RTL_DYNAMIC_HASH_TABLE_ENTRY HashEntry;// Offset=0x0 Size=0x18
        struct _LIST_ENTRY * CurEntry;// Offset=0x0 Size=0x8
        struct _LIST_ENTRY * ChainHead;// Offset=0x18 Size=0x8
    };
    unsigned long BucketIndex;// Offset=0x20 Size=0x4
};
