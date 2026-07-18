enum _SEP_CACHED_HANDLES_ENTRY_TYPE
{
    SepCachedHandlesEntryLowbox=0,
    SepCachedHandlesEntryBnoIsolation=1
};

struct _UNICODE_STRING// Size=0x10 (Id=6)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _SEP_CACHED_HANDLES_ENTRY_DESCRIPTOR// Size=0x18 (Id=1503)
{
    enum _SEP_CACHED_HANDLES_ENTRY_TYPE DescriptorType;// Offset=0x0 Size=0x4
    union // Size=0x8 (Id=0)
    {
        void * PackageSid;// Offset=0x8 Size=0x8
        struct _UNICODE_STRING IsolationPrefix;// Offset=0x8 Size=0x10
    };
};
