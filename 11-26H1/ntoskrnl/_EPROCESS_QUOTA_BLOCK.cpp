struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _PSP_QUOTA_ENTRY// Size=0x80 (Id=2242)
{
    union // Size=0x40 (Id=0)
    {
        unsigned char CacheAlign[64];// Offset=0x0 Size=0x40
        unsigned long long Usage;// Offset=0x0 Size=0x8
        unsigned long long Peak;// Offset=0x8 Size=0x8
        unsigned long long Limit;// Offset=0x40 Size=0x8
    };
    unsigned long long Return;// Offset=0x48 Size=0x8
    struct _LIST_ENTRY ExpansionLink;// Offset=0x50 Size=0x10
};

struct _EPROCESS_QUOTA_BLOCK// Size=0x240 (Id=1738)
{
    struct _PSP_QUOTA_ENTRY QuotaEntry[4];// Offset=0x0 Size=0x200
    unsigned long ReferenceCount;// Offset=0x200 Size=0x4
    unsigned long ProcessCount;// Offset=0x204 Size=0x4
    struct _LIST_ENTRY QuotaList;// Offset=0x208 Size=0x10
};
