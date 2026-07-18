union _unnamed_506// Size=0x8 (Id=506)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long ReadWrite:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long PagingIO:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long Reserved:62;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x3e
    };
    unsigned long long AsUlonglong;// Offset=0x0 Size=0x8
};

struct _STORMQ_SUBMISSION_QUEUE_METADATA_CONTEXT// Size=0x40 (Id=507)
{
    unsigned long Version;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long QueueId;// Offset=0x8 Size=0x4
    unsigned long QueueSlot;// Offset=0xc Size=0x4
    void * VirtualAddress;// Offset=0x10 Size=0x8
    struct _STOR_SCATTER_GATHER_LIST * Sgl;// Offset=0x18 Size=0x8
    void * Mdl;// Offset=0x20 Size=0x8
    union _unnamed_506 Flags;// Offset=0x28 Size=0x8
};
