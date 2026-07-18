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

struct _RTL_BITMAP_EX// Size=0x10 (Id=1113)
{
    unsigned long long SizeOfBitMap;// Offset=0x0 Size=0x8
    unsigned long long * Buffer;// Offset=0x8 Size=0x8
};

struct _MM_SYSTEM_PAGE_COUNTS// Size=0x10 (Id=1537)
{
    unsigned long SystemCodePage;// Offset=0x0 Size=0x4
    unsigned long SystemDriverPage;// Offset=0x4 Size=0x4
    long TotalSystemCodePages;// Offset=0x8 Size=0x4
    long TotalSystemDriverPages;// Offset=0xc Size=0x4
};

struct _RTL_AVL_TREE// Size=0x8 (Id=117)
{
    struct _RTL_BALANCED_NODE * Root;// Offset=0x0 Size=0x8
};

struct _RTL_FUNCTION_OVERRIDE_CAPABILITIES// Size=0x50 (Id=1810)
{
    unsigned char AMD64Capabilities[40];// Offset=0x0 Size=0x28
    unsigned char AMD64KernelCapabilities[40];// Offset=0x28 Size=0x28
};

struct _MI_SYSTEM_IMAGE_STATE// Size=0x110 (Id=1287)
{
    struct _LIST_ENTRY FixupList;// Offset=0x0 Size=0x10
    struct _EX_PUSH_LOCK LoadLock;// Offset=0x10 Size=0x8
    struct _ETHREAD * LoadLockOwner;// Offset=0x18 Size=0x8
    unsigned long LoadLockCount;// Offset=0x20 Size=0x4
    long FixupLock;// Offset=0x24 Size=0x4
    struct _EX_PUSH_LOCK EncodeDecodeLock;// Offset=0x28 Size=0x8
    unsigned long EncodeDecodeDepth;// Offset=0x30 Size=0x4
    unsigned char FirstLoadEver;// Offset=0x34 Size=0x1
    unsigned char LargePageAll;// Offset=0x35 Size=0x1
    unsigned char SystemImagesLoaded;// Offset=0x36 Size=0x1
    struct _LIST_ENTRY LargePageList;// Offset=0x38 Size=0x10
    struct _LIST_ENTRY StrongCodeLoadFailureList;// Offset=0x48 Size=0x10
    struct _KLDR_DATA_TABLE_ENTRY * SystemBase[1];// Offset=0x58 Size=0x8
    struct _RTL_BITMAP_EX BaseImageDiscardedBitmaps[1];// Offset=0x60 Size=0x10
    struct _KLDR_DATA_TABLE_ENTRY * BeingDeleted;// Offset=0x70 Size=0x8
    struct _EX_PUSH_LOCK MappingRangesPushLock;// Offset=0x78 Size=0x8
    struct _MI_DRIVER_VA * MappingRanges[2];// Offset=0x80 Size=0x10
    struct _MM_SYSTEM_PAGE_COUNTS PageCounts;// Offset=0x90 Size=0x10
    struct _EX_PUSH_LOCK CollidedLock;// Offset=0xa0 Size=0x8
    struct _RTL_AVL_TREE ImageTree;// Offset=0xa8 Size=0x8
    struct _KLDR_DATA_TABLE_ENTRY * LoadInProgress;// Offset=0xb0 Size=0x8
    unsigned long long ImportEntriesReplaced;// Offset=0xb8 Size=0x8
    struct _RTL_FUNCTION_OVERRIDE_CAPABILITIES FunctionOverrideCapabilities;// Offset=0xc0 Size=0x50
};
