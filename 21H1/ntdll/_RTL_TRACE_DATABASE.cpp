struct _RTL_CRITICAL_SECTION// Size=0x18 (Id=224)
{
    struct _RTL_CRITICAL_SECTION_DEBUG * DebugInfo;// Offset=0x0 Size=0x4
    long LockCount;// Offset=0x4 Size=0x4
    long RecursionCount;// Offset=0x8 Size=0x4
    void * OwningThread;// Offset=0xc Size=0x4
    void * LockSemaphore;// Offset=0x10 Size=0x4
    unsigned long SpinCount;// Offset=0x14 Size=0x4
};

struct _RTL_TRACE_DATABASE// Size=0x88 (Id=323)
{
    unsigned long Magic;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
    unsigned long Tag;// Offset=0x8 Size=0x4
    struct _RTL_TRACE_SEGMENT * SegmentList;// Offset=0xc Size=0x4
    unsigned long MaximumSize;// Offset=0x10 Size=0x4
    unsigned long CurrentSize;// Offset=0x14 Size=0x4
    void * Owner;// Offset=0x18 Size=0x4
    struct _RTL_CRITICAL_SECTION Lock;// Offset=0x1c Size=0x18
    unsigned long NoOfBuckets;// Offset=0x34 Size=0x4
    struct _RTL_TRACE_BLOCK ** Buckets;// Offset=0x38 Size=0x4
    unsigned long  ( * HashFunction)(unsigned long ,void ** );// Offset=0x3c Size=0x4
    unsigned long NoOfTraces;// Offset=0x40 Size=0x4
    unsigned long NoOfHits;// Offset=0x44 Size=0x4
    unsigned long HashCounter[16];// Offset=0x48 Size=0x40
};
