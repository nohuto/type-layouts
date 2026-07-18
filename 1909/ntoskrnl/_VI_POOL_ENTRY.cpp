struct _VI_POOL_PAGE_HEADER// Size=0x18 (Id=1398)
{
    struct _SLIST_ENTRY * NextPage;// Offset=0x0 Size=0x8
    void * VerifierEntry;// Offset=0x8 Size=0x8
    unsigned long long Signature;// Offset=0x10 Size=0x8
};

struct _VI_POOL_ENTRY_INUSE// Size=0x20 (Id=1264)
{
    void * VirtualAddress;// Offset=0x0 Size=0x8
    void * CallingAddress;// Offset=0x8 Size=0x8
    unsigned long long NumberOfBytes;// Offset=0x10 Size=0x8
    unsigned long long Tag;// Offset=0x18 Size=0x8
};

struct _VI_POOL_ENTRY// Size=0x20 (Id=1228)
{
    union // Size=0x20 (Id=0)
    {
        struct _VI_POOL_PAGE_HEADER PageHeader;// Offset=0x0 Size=0x18
        struct _VI_POOL_ENTRY_INUSE InUse;// Offset=0x0 Size=0x20
        struct _SLIST_ENTRY * NextFree;// Offset=0x0 Size=0x8
    };
};
