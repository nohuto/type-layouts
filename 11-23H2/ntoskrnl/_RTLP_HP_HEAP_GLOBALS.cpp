struct _RTL_HEAP_MEMORY_LIMIT_DATA// Size=0x20 (Id=1073)
{
    unsigned long long CommitLimitBytes;// Offset=0x0 Size=0x8
    unsigned long long CommitLimitFailureCode;// Offset=0x8 Size=0x8
    unsigned long long MaxAllocationSizeBytes;// Offset=0x10 Size=0x8
    unsigned long long AllocationLimitFailureCode;// Offset=0x18 Size=0x8
};

struct _unnamed_1285// Size=0x4 (Id=1285)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long ErmsSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long ErmsChecked:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
    };
};

struct _RTLP_HP_HEAP_GLOBALS// Size=0x40 (Id=1286)
{
    unsigned long long HeapKey;// Offset=0x0 Size=0x8
    unsigned long long LfhKey;// Offset=0x8 Size=0x8
    struct _HEAP_FAILURE_INFORMATION * FailureInfo;// Offset=0x10 Size=0x8
    struct _RTL_HEAP_MEMORY_LIMIT_DATA CommitLimitData;// Offset=0x18 Size=0x20
    union // Size=0x4 (Id=0)
    {
        unsigned long Flags;// Offset=0x38 Size=0x4
        struct _unnamed_1285 FlagsBits;// Offset=0x38 Size=0x4
    };
};
