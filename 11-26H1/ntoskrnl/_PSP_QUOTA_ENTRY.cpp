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
