union _LARGE_INTEGER// Size=0x8 (Id=258)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct <unnamed-type-u>// Size=0x8 (Id=11990)
    {
        unsigned long LowPart;// Offset=0x0 Size=0x4
        long HighPart;// Offset=0x4 Size=0x4
    };
    struct _LARGE_INTEGER::<unnamed-type-u> u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _ETW_KERNEL_TRACE_TIMESTAMP// Size=0x20 (Id=2369)
{
    union _LARGE_INTEGER KernelTraceTimeStamp[4];// Offset=0x0 Size=0x20
};
