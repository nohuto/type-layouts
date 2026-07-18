struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _EX_PUSH_LOCK// Size=0x8 (Id=120)
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

struct _ALPC_COMPLETION_LIST// Size=0xa0 (Id=899)
{
    struct _LIST_ENTRY Entry;// Offset=0x0 Size=0x10
    struct _EPROCESS * OwnerProcess;// Offset=0x10 Size=0x8
    struct _EX_PUSH_LOCK CompletionListLock;// Offset=0x18 Size=0x8
    struct _MDL * Mdl;// Offset=0x20 Size=0x8
    void * UserVa;// Offset=0x28 Size=0x8
    void * UserLimit;// Offset=0x30 Size=0x8
    void * DataUserVa;// Offset=0x38 Size=0x8
    void * SystemVa;// Offset=0x40 Size=0x8
    unsigned long long TotalSize;// Offset=0x48 Size=0x8
    struct _ALPC_COMPLETION_LIST_HEADER * Header;// Offset=0x50 Size=0x8
    void * List;// Offset=0x58 Size=0x8
    unsigned long long ListSize;// Offset=0x60 Size=0x8
    void * Bitmap;// Offset=0x68 Size=0x8
    unsigned long long BitmapSize;// Offset=0x70 Size=0x8
    void * Data;// Offset=0x78 Size=0x8
    unsigned long long DataSize;// Offset=0x80 Size=0x8
    unsigned long BitmapLimit;// Offset=0x88 Size=0x4
    unsigned long BitmapNextHint;// Offset=0x8c Size=0x4
    unsigned long ConcurrencyCount;// Offset=0x90 Size=0x4
    unsigned long AttributeFlags;// Offset=0x94 Size=0x4
    unsigned long AttributeSize;// Offset=0x98 Size=0x4
};
