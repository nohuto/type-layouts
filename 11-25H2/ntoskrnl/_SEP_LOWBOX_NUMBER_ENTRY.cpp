struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _RTL_DYNAMIC_HASH_TABLE_ENTRY// Size=0x18 (Id=139)
{
    struct _LIST_ENTRY Linkage;// Offset=0x0 Size=0x10
    unsigned long long Signature;// Offset=0x10 Size=0x8
};

struct _SEP_LOWBOX_NUMBER_ENTRY// Size=0x38 (Id=1584)
{
    struct _RTL_DYNAMIC_HASH_TABLE_ENTRY HashEntry;// Offset=0x0 Size=0x18
    long long ReferenceCount;// Offset=0x18 Size=0x8
    void * PackageSid;// Offset=0x20 Size=0x8
    unsigned long LowboxNumber;// Offset=0x28 Size=0x4
    void * AtomTable;// Offset=0x30 Size=0x8
};
