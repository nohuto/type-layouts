struct _unnamed_2312// Size=0x10 (Id=2312)
{
    void * UserData;// Offset=0x0 Size=0x8
    void * Owner;// Offset=0x8 Size=0x8
};

struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _unnamed_2313// Size=0x10 (Id=2313)
{
    struct _LIST_ENTRY ListHead;// Offset=0x0 Size=0x10
};

struct _RTLP_RANGE_LIST_ENTRY// Size=0x38 (Id=2314)
{
    unsigned long long Start;// Offset=0x0 Size=0x8
    unsigned long long End;// Offset=0x8 Size=0x8
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_2312 Allocated;// Offset=0x10 Size=0x10
        struct _unnamed_2313 Merged;// Offset=0x10 Size=0x10
    };
    unsigned char Attributes;// Offset=0x20 Size=0x1
    unsigned char PublicFlags;// Offset=0x21 Size=0x1
    unsigned short PrivateFlags;// Offset=0x22 Size=0x2
    struct _LIST_ENTRY ListEntry;// Offset=0x28 Size=0x10
};
