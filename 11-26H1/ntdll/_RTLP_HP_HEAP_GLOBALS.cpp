struct _RTLP_HEAP_COMMIT_LIMIT_DATA// Size=0x10 (Id=807)
{
    unsigned long long CommitLimitBytes;// Offset=0x0 Size=0x8
    unsigned long long CommitLimitFailureCode;// Offset=0x8 Size=0x8
};

struct _RTLP_HP_HEAP_GLOBALS// Size=0x80 (Id=496)
{
    unsigned long long HeapKey;// Offset=0x0 Size=0x8
    unsigned long long LfhKey;// Offset=0x8 Size=0x8
    struct _HEAP_FAILURE_INFORMATION * FailureInfo;// Offset=0x10 Size=0x8
    struct _RTLP_HEAP_COMMIT_LIMIT_DATA CommitLimitData;// Offset=0x18 Size=0x10
    union // Size=0x4 (Id=0)
    {
        unsigned long Flags;// Offset=0x28 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long CpuFeaturesChecked:1;// Offset=0x28 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long ErmsSupported:1;// Offset=0x28 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long BMI2Supported:1;// Offset=0x28 Size=0x4 BitOffset=0x2 BitSize=0x1
        };
    };
    unsigned long long RandomSeed;// Offset=0x40 Size=0x8
};
