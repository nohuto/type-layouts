struct _KSPIN_LOCK_QUEUE// Size=0x8 (Id=224)
{
    struct _KSPIN_LOCK_QUEUE * Next;// Offset=0x0 Size=0x4
    unsigned long * Lock;// Offset=0x4 Size=0x4
    void _KSPIN_LOCK_QUEUE(struct _KSPIN_LOCK_QUEUE * );
    void _KSPIN_LOCK_QUEUE(struct _KSPIN_LOCK_QUEUE & );
    struct _KSPIN_LOCK_QUEUE & operator=(struct _KSPIN_LOCK_QUEUE * );
    struct _KSPIN_LOCK_QUEUE & operator=(struct _KSPIN_LOCK_QUEUE & );
};
