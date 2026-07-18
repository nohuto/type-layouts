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

struct _HANDLE_TABLE_FREE_LIST// Size=0x40 (Id=296)
{
    struct _EX_PUSH_LOCK FreeListLock;// Offset=0x0 Size=0x8
    union _HANDLE_TABLE_ENTRY * FirstFreeHandleEntry;// Offset=0x8 Size=0x8
    union _HANDLE_TABLE_ENTRY * LastFreeHandleEntry;// Offset=0x10 Size=0x8
    long HandleCount;// Offset=0x18 Size=0x4
    unsigned long HighWaterMark;// Offset=0x1c Size=0x4
};
