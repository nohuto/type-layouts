enum _STOR_SPINLOCK
{
    DpcLock=1,
    StartIoLock=2,
    InterruptLock=3,
    ThreadedDpcLock=4,
    DpcLevelLock=5
};

struct _anonymous_141// Size=0x10 (Id=141)
{
    void * Next;// Offset=0x0 Size=0x8
    void * Lock;// Offset=0x8 Size=0x8
};

struct _anonymous_142// Size=0x18 (Id=142)
{
    struct _anonymous_141 LockQueue;// Offset=0x0 Size=0x10
    unsigned char OldIrql;// Offset=0x10 Size=0x1
};

struct _STOR_LOCK_HANDLE// Size=0x20 (Id=143)
{
    enum _STOR_SPINLOCK Lock;// Offset=0x0 Size=0x4
    struct _anonymous_142 Context;// Offset=0x8 Size=0x18
};
