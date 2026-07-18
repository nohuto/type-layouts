union _LARGE_INTEGER// Size=0x8 (Id=1084)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct <unnamed-type-u>// Size=0x8 (Id=13869)
    {
        unsigned long LowPart;// Offset=0x0 Size=0x4
        long HighPart;// Offset=0x4 Size=0x4
    };
    struct _LARGE_INTEGER::<unnamed-type-u> u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _PERFINFO_CC_LOGGED_STREAM_INFO// Size=0x28 (Id=2105)
{
    unsigned long long FileObjectKey;// Offset=0x0 Size=0x8
    unsigned long ReasonForFlush;// Offset=0x8 Size=0x4
    unsigned long PagesToWrite;// Offset=0xc Size=0x4
    unsigned long long DirtyLoggedPages;// Offset=0x10 Size=0x8
    unsigned long long DirtyLoggedPageThreshold;// Offset=0x18 Size=0x8
    union _LARGE_INTEGER LargestLsnForLWS;// Offset=0x20 Size=0x8
};
