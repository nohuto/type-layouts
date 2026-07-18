struct _RTL_HEAP_MEMORY_LIMIT_DATA// Size=0x10 (Id=311)
{
    unsigned long CommitLimitBytes;// Offset=0x0 Size=0x4
    unsigned long CommitLimitFailureCode;// Offset=0x4 Size=0x4
    unsigned long MaxAllocationSizeBytes;// Offset=0x8 Size=0x4
    unsigned long AllocationLimitFailureCode;// Offset=0xc Size=0x4
};

struct _RTLP_HP_HEAP_GLOBALS// Size=0x1c (Id=386)
{
    unsigned long HeapKey;// Offset=0x0 Size=0x4
    unsigned long LfhKey;// Offset=0x4 Size=0x4
    struct _HEAP_FAILURE_INFORMATION * FailureInfo;// Offset=0x8 Size=0x4
    struct _RTL_HEAP_MEMORY_LIMIT_DATA CommitLimitData;// Offset=0xc Size=0x10
};
