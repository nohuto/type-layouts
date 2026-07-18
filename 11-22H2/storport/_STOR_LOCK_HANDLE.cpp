enum _STOR_SPINLOCK
{
    DpcLock=1,
    StartIoLock=2,
    InterruptLock=3,
    ThreadedDpcLock=4,
    DpcLevelLock=5
};

struct _unnamed_139// Size=0x10 (Id=139)
{
    void * Next;// Offset=0x0 Size=0x8
    void * Lock;// Offset=0x8 Size=0x8
};

struct _unnamed_140// Size=0x18 (Id=140)
{
    struct _unnamed_139 LockQueue;// Offset=0x0 Size=0x10
    unsigned char OldIrql;// Offset=0x10 Size=0x1
};

struct _STOR_LOCK_HANDLE// Size=0x20 (Id=141)
{
    enum _STOR_SPINLOCK Lock;// Offset=0x0 Size=0x4
    struct _unnamed_140 Context;// Offset=0x8 Size=0x18
};
