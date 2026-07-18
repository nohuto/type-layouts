struct _unnamed_31// Size=0x8 (Id=31)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=638)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_31 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _unnamed_409// Size=0x68 (Id=409)
{
    struct _SHARED_CACHE_MAP * SharedCacheMap;// Offset=0x0 Size=0x8
    union _LARGE_INTEGER FileOffset;// Offset=0x8 Size=0x8
    struct _FILE_OBJECT * FileObject;// Offset=0x10 Size=0x8
    unsigned long Length;// Offset=0x18 Size=0x4
    struct _SINGLE_LIST_ENTRY * PrefetchList;// Offset=0x20 Size=0x8
    unsigned long PrefetchPagePriority;// Offset=0x28 Size=0x4
    struct _MDL * Mdl;// Offset=0x30 Size=0x8
    struct _IO_STATUS_BLOCK * IoStatusBlock;// Offset=0x38 Size=0x8
    struct _CC_ASYNC_READ_CONTEXT * CallbackContext;// Offset=0x40 Size=0x8
    struct _EPROCESS * OriginatingProcess;// Offset=0x48 Size=0x8
    struct _ETHREAD * IoIssuerThread;// Offset=0x50 Size=0x8
    void * DiskIoAttribution;// Offset=0x58 Size=0x8
    char RequestorMode;// Offset=0x60 Size=0x1
    unsigned long NestingLevel;// Offset=0x64 Size=0x4
};
