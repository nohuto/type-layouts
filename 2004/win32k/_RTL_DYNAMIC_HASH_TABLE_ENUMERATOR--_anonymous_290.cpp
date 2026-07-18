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

union _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR::_anonymous_290// Size=0xc (Id=290)
{
    union // Size=0xc (Id=0)
    {
        struct _RTL_DYNAMIC_HASH_TABLE_ENTRY HashEntry;// Offset=0x0 Size=0xc
        struct _LIST_ENTRY * CurEntry;// Offset=0x0 Size=0x4
    };
};
