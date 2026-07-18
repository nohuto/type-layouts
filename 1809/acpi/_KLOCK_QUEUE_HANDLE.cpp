struct _KSPIN_LOCK_QUEUE// Size=0x10 (Id=67)
{
    struct _KSPIN_LOCK_QUEUE * Next;// Offset=0x0 Size=0x8
    unsigned long long * Lock;// Offset=0x8 Size=0x8
};

struct _KLOCK_QUEUE_HANDLE// Size=0x18 (Id=369)
{
    struct _KSPIN_LOCK_QUEUE LockQueue;// Offset=0x0 Size=0x10
    unsigned char OldIrql;// Offset=0x10 Size=0x1
};
