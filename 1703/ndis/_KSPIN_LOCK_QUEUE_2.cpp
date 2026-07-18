struct _KSPIN_LOCK_QUEUE// Size=0x10 (Id=729)
{
    struct _KSPIN_LOCK_QUEUE * Next;// Offset=0x0 Size=0x8
    unsigned long long * Lock;// Offset=0x8 Size=0x8
    void _KSPIN_LOCK_QUEUE(struct _KSPIN_LOCK_QUEUE * );
    void _KSPIN_LOCK_QUEUE(struct _KSPIN_LOCK_QUEUE & );
    struct _KSPIN_LOCK_QUEUE & operator=(struct _KSPIN_LOCK_QUEUE * );
    struct _KSPIN_LOCK_QUEUE & operator=(struct _KSPIN_LOCK_QUEUE & );
};
