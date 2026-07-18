enum _STOR_SPINLOCK
{
    DpcLock=1,
    StartIoLock=2,
    InterruptLock=3
};

struct _unnamed_128// Size=0x10 (Id=128)
{
    void * Next;// Offset=0x0 Size=0x8
    void * Lock;// Offset=0x8 Size=0x8
};

struct _unnamed_129// Size=0x18 (Id=129)
{
    struct _unnamed_128 LockQueue;// Offset=0x0 Size=0x10
    unsigned char OldIrql;// Offset=0x10 Size=0x1
};

struct _STOR_LOCK_HANDLE// Size=0x20 (Id=130)
{
    enum _STOR_SPINLOCK Lock;// Offset=0x0 Size=0x4
    struct _unnamed_129 Context;// Offset=0x8 Size=0x18
};
