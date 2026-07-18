union _LARGE_INTEGER// Size=0x8 (Id=915)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct <unnamed-type-u>// Size=0x8 (Id=12193)
    {
        unsigned long LowPart;// Offset=0x0 Size=0x4
        long HighPart;// Offset=0x4 Size=0x4
    };
    struct _LARGE_INTEGER::<unnamed-type-u> u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _QUOTA_LIMITS// Size=0x30 (Id=319)
{
    unsigned long long PagedPoolLimit;// Offset=0x0 Size=0x8
    unsigned long long NonPagedPoolLimit;// Offset=0x8 Size=0x8
    unsigned long long MinimumWorkingSetSize;// Offset=0x10 Size=0x8
    unsigned long long MaximumWorkingSetSize;// Offset=0x18 Size=0x8
    unsigned long long PagefileLimit;// Offset=0x20 Size=0x8
    union _LARGE_INTEGER TimeLimit;// Offset=0x28 Size=0x8
};
