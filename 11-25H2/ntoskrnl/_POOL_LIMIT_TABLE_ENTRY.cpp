struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=510)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _RTL_HASH_ENTRY// Size=0x10 (Id=637)
{
    struct _SINGLE_LIST_ENTRY BucketLink;// Offset=0x0 Size=0x8
    unsigned long long Key;// Offset=0x8 Size=0x8
};

struct _POOL_LIMIT_INFO// Size=0x18 (Id=1617)
{
    unsigned long long HardMemoryLimit;// Offset=0x0 Size=0x8
    unsigned long long NotificationLimit;// Offset=0x8 Size=0x8
    unsigned long long MemoryIssued;// Offset=0x10 Size=0x8
};

struct _WNF_STATE_NAME// Size=0x8 (Id=1085)
{
    unsigned long Data[2];// Offset=0x0 Size=0x8
};

struct _SLIST_ENTRY// Size=0x10 (Id=544)
{
    struct _SLIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _POOL_LIMIT_TABLE_ENTRY// Size=0x70 (Id=1265)
{
    union // Size=0x10 (Id=0)
    {
        struct _RTL_HASH_ENTRY HashEntry;// Offset=0x0 Size=0x10
        unsigned long long Reserved;// Offset=0x0 Size=0x8
        struct _SINGLE_LIST_ENTRY SListEntry;// Offset=0x8 Size=0x8
    };
    struct _POOL_LIMIT_INFO LimitInfo[2];// Offset=0x10 Size=0x30
    struct _WNF_STATE_NAME NotificationObject;// Offset=0x40 Size=0x8
    struct _SLIST_ENTRY NotificationEntry;// Offset=0x50 Size=0x10
    unsigned long Scheduled;// Offset=0x60 Size=0x4
};
