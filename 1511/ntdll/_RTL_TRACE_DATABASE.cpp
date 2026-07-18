struct _RTL_CRITICAL_SECTION// Size=0x28 (Id=191)
{
    struct _RTL_CRITICAL_SECTION_DEBUG * DebugInfo;// Offset=0x0 Size=0x8
    long LockCount;// Offset=0x8 Size=0x4
    long RecursionCount;// Offset=0xc Size=0x4
    void * OwningThread;// Offset=0x10 Size=0x8
    void * LockSemaphore;// Offset=0x18 Size=0x8
    unsigned long long SpinCount;// Offset=0x20 Size=0x8
};

struct _RTL_TRACE_DATABASE// Size=0xc0 (Id=477)
{
    unsigned long Magic;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
    unsigned long Tag;// Offset=0x8 Size=0x4
    struct _RTL_TRACE_SEGMENT * SegmentList;// Offset=0x10 Size=0x8
    unsigned long long MaximumSize;// Offset=0x18 Size=0x8
    unsigned long long CurrentSize;// Offset=0x20 Size=0x8
    void * Owner;// Offset=0x28 Size=0x8
    struct _RTL_CRITICAL_SECTION Lock;// Offset=0x30 Size=0x28
    unsigned long NoOfBuckets;// Offset=0x58 Size=0x4
    struct _RTL_TRACE_BLOCK ** Buckets;// Offset=0x60 Size=0x8
    unsigned long  ( * HashFunction)(unsigned long ,void ** );// Offset=0x68 Size=0x8
    unsigned long long NoOfTraces;// Offset=0x70 Size=0x8
    unsigned long long NoOfHits;// Offset=0x78 Size=0x8
    unsigned long HashCounter[16];// Offset=0x80 Size=0x40
};
