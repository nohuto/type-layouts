struct _unnamed_118// Size=0x8 (Id=118)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=119)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_118 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

union _RATE_QUOTA_LIMIT// Size=0x4 (Id=2781)
{
    unsigned long RateData;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long RatePercent:7;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x7
        unsigned long Reserved0:25;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x19
    };
};

struct _QUOTA_LIMITS_EX// Size=0x58 (Id=2713)
{
    unsigned long long PagedPoolLimit;// Offset=0x0 Size=0x8
    unsigned long long NonPagedPoolLimit;// Offset=0x8 Size=0x8
    unsigned long long MinimumWorkingSetSize;// Offset=0x10 Size=0x8
    unsigned long long MaximumWorkingSetSize;// Offset=0x18 Size=0x8
    unsigned long long PagefileLimit;// Offset=0x20 Size=0x8
    union _LARGE_INTEGER TimeLimit;// Offset=0x28 Size=0x8
    unsigned long long WorkingSetLimit;// Offset=0x30 Size=0x8
    unsigned long long Reserved2;// Offset=0x38 Size=0x8
    unsigned long long Reserved3;// Offset=0x40 Size=0x8
    unsigned long long Reserved4;// Offset=0x48 Size=0x8
    unsigned long Flags;// Offset=0x50 Size=0x4
    union _RATE_QUOTA_LIMIT CpuRateLimit;// Offset=0x54 Size=0x4
};
