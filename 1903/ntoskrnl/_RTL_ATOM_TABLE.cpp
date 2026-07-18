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

struct _RTL_ATOM_TABLE// Size=0x28 (Id=1005)
{
    unsigned long Signature;// Offset=0x0 Size=0x4
    long ReferenceCount;// Offset=0x4 Size=0x4
    struct _EX_PUSH_LOCK PushLock;// Offset=0x8 Size=0x8
    struct _HANDLE_TABLE * ExHandleTable;// Offset=0x10 Size=0x8
    unsigned long Flags;// Offset=0x18 Size=0x4
    unsigned long NumberOfBuckets;// Offset=0x1c Size=0x4
    struct _RTL_ATOM_TABLE_ENTRY * Buckets[1];// Offset=0x20 Size=0x8
};
