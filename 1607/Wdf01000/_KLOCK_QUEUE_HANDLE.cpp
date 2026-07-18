struct _KSPIN_LOCK_QUEUE// Size=0x10 (Id=1171)
{
    struct _KSPIN_LOCK_QUEUE * Next;// Offset=0x0 Size=0x8
    unsigned long long * Lock;// Offset=0x8 Size=0x8
    void _KSPIN_LOCK_QUEUE(struct _KSPIN_LOCK_QUEUE * );
    void _KSPIN_LOCK_QUEUE(struct _KSPIN_LOCK_QUEUE & );
    struct _KSPIN_LOCK_QUEUE & operator=(struct _KSPIN_LOCK_QUEUE * );
    struct _KSPIN_LOCK_QUEUE & operator=(struct _KSPIN_LOCK_QUEUE & );
};

struct _KLOCK_QUEUE_HANDLE// Size=0x18 (Id=3319)
{
    struct _KSPIN_LOCK_QUEUE LockQueue;// Offset=0x0 Size=0x10
    unsigned char OldIrql;// Offset=0x10 Size=0x1
    void _KLOCK_QUEUE_HANDLE(struct _KLOCK_QUEUE_HANDLE * );
    void _KLOCK_QUEUE_HANDLE(struct _KLOCK_QUEUE_HANDLE & );
    struct _KLOCK_QUEUE_HANDLE & operator=(struct _KLOCK_QUEUE_HANDLE * );
    struct _KLOCK_QUEUE_HANDLE & operator=(struct _KLOCK_QUEUE_HANDLE & );
};
