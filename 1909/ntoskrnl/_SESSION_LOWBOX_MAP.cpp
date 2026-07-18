struct _LIST_ENTRY// Size=0x10 (Id=23)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
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

struct _RTL_BITMAP// Size=0x10 (Id=33)
{
    unsigned long SizeOfBitMap;// Offset=0x0 Size=0x4
    unsigned long * Buffer;// Offset=0x8 Size=0x8
};

struct _SEP_LOWBOX_NUMBER_MAPPING// Size=0x28 (Id=1709)
{
    struct _EX_PUSH_LOCK Lock;// Offset=0x0 Size=0x8
    struct _RTL_BITMAP Bitmap;// Offset=0x8 Size=0x10
    struct _RTL_DYNAMIC_HASH_TABLE * HashTable;// Offset=0x18 Size=0x8
    unsigned char Active;// Offset=0x20 Size=0x1
};

struct _SESSION_LOWBOX_MAP// Size=0x40 (Id=1490)
{
    struct _LIST_ENTRY ListEntry;// Offset=0x0 Size=0x10
    unsigned long SessionId;// Offset=0x10 Size=0x4
    struct _SEP_LOWBOX_NUMBER_MAPPING LowboxMap;// Offset=0x18 Size=0x28
};
