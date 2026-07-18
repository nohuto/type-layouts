struct _EX_PUSH_LOCK// Size=0x4 (Id=83)
{
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long Locked:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long Waiting:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long Waking:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long MultipleShared:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long Shared:28;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1c
        };
        unsigned long Value;// Offset=0x0 Size=0x4
        void * Ptr;// Offset=0x0 Size=0x4
    };
};

struct _WNF_LOCK// Size=0x4 (Id=710)
{
    struct _EX_PUSH_LOCK PushLock;// Offset=0x0 Size=0x4
};

struct _WNF_SILODRIVERSTATE// Size=0x30 (Id=685)
{
    struct _WNF_SCOPE_MAP * ScopeMap;// Offset=0x0 Size=0x4
    void * PermanentNameStoreRootKey;// Offset=0x4 Size=0x4
    void * PersistentNameStoreRootKey;// Offset=0x8 Size=0x4
    long long PermanentNameSequenceNumber;// Offset=0x10 Size=0x8
    struct _WNF_LOCK PermanentNameSequenceNumberLock;// Offset=0x18 Size=0x4
    long long PermanentNameSequenceNumberPool;// Offset=0x20 Size=0x8
    long long RuntimeNameSequenceNumber;// Offset=0x28 Size=0x8
};
