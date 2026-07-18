struct _RTL_CRITICAL_SECTION// Size=0x18 (Id=224)
{
    struct _RTL_CRITICAL_SECTION_DEBUG * DebugInfo;// Offset=0x0 Size=0x4
    long LockCount;// Offset=0x4 Size=0x4
    long RecursionCount;// Offset=0x8 Size=0x4
    void * OwningThread;// Offset=0xc Size=0x4
    void * LockSemaphore;// Offset=0x10 Size=0x4
    unsigned long SpinCount;// Offset=0x14 Size=0x4
};

union _anonymous_222// Size=0x18 (Id=222)
{
    struct _RTL_CRITICAL_SECTION CriticalSection;// Offset=0x0 Size=0x18
};

struct _HEAP_LOCK// Size=0x18 (Id=223)
{
    union _anonymous_222 Lock;// Offset=0x0 Size=0x18
};
