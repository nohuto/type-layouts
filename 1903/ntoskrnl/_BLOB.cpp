struct _LIST_ENTRY// Size=0x10 (Id=22)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _SLIST_ENTRY// Size=0x10 (Id=80)
{
    struct _SLIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _anonymous_544// Size=0x1 (Id=544)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char ReferenceCache:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Lookaside:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char Initializing:1;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char Deleted:1;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x1
    };
};

union _anonymous_545// Size=0x1 (Id=545)
{
    struct _anonymous_544 s1;// Offset=0x0 Size=0x1
    unsigned char Flags;// Offset=0x0 Size=0x1
};

struct _EX_PUSH_LOCK// Size=0x8 (Id=92)
{
    union // Size=0x8 (Id=0)
    {
        struct // Size=0x8 (Id=0)
        {
            unsigned long long Locked:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
            unsigned long long Waiting:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
            unsigned long long Waking:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
            unsigned long long MultipleShared:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
            unsigned long long Shared:60;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x3c
        };
        unsigned long long Value;// Offset=0x0 Size=0x8
        void * Ptr;// Offset=0x0 Size=0x8
    };
};

struct _BLOB// Size=0x30 (Id=546)
{
    union // Size=0x10 (Id=0)
    {
        struct _LIST_ENTRY ResourceList;// Offset=0x0 Size=0x10
        struct _SLIST_ENTRY FreeListEntry;// Offset=0x0 Size=0x10
    };
    union _anonymous_545 u1;// Offset=0x10 Size=0x1
    unsigned char ResourceId;// Offset=0x11 Size=0x1
    short CachedReferences;// Offset=0x12 Size=0x2
    long long ReferenceCount;// Offset=0x18 Size=0x8
    struct _EX_PUSH_LOCK Lock;// Offset=0x20 Size=0x8
};
