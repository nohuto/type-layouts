enum _BLOB_ID
{
    BLOB_TYPE_UNKNOWN=0,
    BLOB_TYPE_CONNECTION_INFO=1,
    BLOB_TYPE_MESSAGE=2,
    BLOB_TYPE_SECURITY_CONTEXT=3,
    BLOB_TYPE_SECTION=4,
    BLOB_TYPE_REGION=5,
    BLOB_TYPE_VIEW=6,
    BLOB_TYPE_RESERVE=7,
    BLOB_TYPE_DIRECT_TRANSFER=8,
    BLOB_TYPE_HANDLE_DATA=9,
    BLOB_TYPE_MAX_ID=10
};

struct _BLOB_TYPE// Size=0x38 (Id=1870)
{
    enum _BLOB_ID ResourceId;// Offset=0x0 Size=0x4
    unsigned long PoolTag;// Offset=0x4 Size=0x4
    unsigned long LookasideIndex;// Offset=0x8 Size=0x4
    unsigned long Flags;// Offset=0xc Size=0x4
    struct _BLOB_COUNTERS * Counters;// Offset=0x10 Size=0x8
    void  ( * CleanupProcedure)(void * );// Offset=0x18 Size=0x8
    void  ( * DeleteProcedure)(void * );// Offset=0x20 Size=0x8
    long  ( * DestroyProcedure)(void * );// Offset=0x28 Size=0x8
    unsigned long long UsualSize;// Offset=0x30 Size=0x8
};
