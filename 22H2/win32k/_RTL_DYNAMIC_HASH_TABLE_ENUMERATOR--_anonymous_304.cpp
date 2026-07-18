struct _LIST_ENTRY// Size=0x10 (Id=31)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _RTL_DYNAMIC_HASH_TABLE_ENTRY// Size=0x18 (Id=37)
{
    struct _LIST_ENTRY Linkage;// Offset=0x0 Size=0x10
    unsigned long long Signature;// Offset=0x10 Size=0x8
};

union _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR::_anonymous_304// Size=0x18 (Id=304)
{
    union // Size=0x18 (Id=0)
    {
        struct _RTL_DYNAMIC_HASH_TABLE_ENTRY HashEntry;// Offset=0x0 Size=0x18
        struct _LIST_ENTRY * CurEntry;// Offset=0x0 Size=0x8
    };
};
