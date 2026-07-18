struct _LIST_ENTRY// Size=0x10 (Id=22)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _RTL_DYNAMIC_HASH_TABLE_ENTRY// Size=0x18 (Id=766)
{
    struct _LIST_ENTRY Linkage;// Offset=0x0 Size=0x10
    unsigned long long Signature;// Offset=0x10 Size=0x8
};

enum _SEP_CACHED_HANDLES_ENTRY_TYPE
{
    SepCachedHandlesEntryLowbox=0,
    SepCachedHandlesEntryBnoIsolation=1
};

struct _UNICODE_STRING// Size=0x10 (Id=85)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _SEP_CACHED_HANDLES_ENTRY_DESCRIPTOR// Size=0x18 (Id=1321)
{
    enum _SEP_CACHED_HANDLES_ENTRY_TYPE DescriptorType;// Offset=0x0 Size=0x4
    union // Size=0x8 (Id=0)
    {
        void * PackageSid;// Offset=0x8 Size=0x8
        struct _UNICODE_STRING IsolationPrefix;// Offset=0x8 Size=0x10
    };
};

struct _SEP_CACHED_HANDLES_ENTRY// Size=0x48 (Id=734)
{
    struct _RTL_DYNAMIC_HASH_TABLE_ENTRY HashEntry;// Offset=0x0 Size=0x18
    long long ReferenceCount;// Offset=0x18 Size=0x8
    struct _SEP_CACHED_HANDLES_ENTRY_DESCRIPTOR EntryDescriptor;// Offset=0x20 Size=0x18
    unsigned long HandleCount;// Offset=0x38 Size=0x4
    void ** Handles;// Offset=0x40 Size=0x8
};
