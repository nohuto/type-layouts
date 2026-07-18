struct _RTL_HEAP_MEMORY_LIMIT_DATA// Size=0x20 (Id=316)
{
    unsigned long long CommitLimitBytes;// Offset=0x0 Size=0x8
    unsigned long long CommitLimitFailureCode;// Offset=0x8 Size=0x8
    unsigned long long MaxAllocationSizeBytes;// Offset=0x10 Size=0x8
    unsigned long long AllocationLimitFailureCode;// Offset=0x18 Size=0x8
};

struct _RTLP_HP_HEAP_GLOBALS// Size=0x38 (Id=384)
{
    unsigned long long HeapKey;// Offset=0x0 Size=0x8
    unsigned long long LfhKey;// Offset=0x8 Size=0x8
    struct _HEAP_FAILURE_INFORMATION * FailureInfo;// Offset=0x10 Size=0x8
    struct _RTL_HEAP_MEMORY_LIMIT_DATA CommitLimitData;// Offset=0x18 Size=0x20
};
