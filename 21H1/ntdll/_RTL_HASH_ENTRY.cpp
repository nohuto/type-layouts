struct _SINGLE_LIST_ENTRY// Size=0x4 (Id=26)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x4
};

struct _RTL_HASH_ENTRY// Size=0x8 (Id=243)
{
    struct _SINGLE_LIST_ENTRY BucketLink;// Offset=0x0 Size=0x4
    unsigned long Key;// Offset=0x4 Size=0x4
};
