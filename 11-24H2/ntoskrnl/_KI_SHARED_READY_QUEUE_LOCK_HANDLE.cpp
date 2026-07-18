struct _KSPIN_LOCK_QUEUE// Size=0x10 (Id=179)
{
    struct _KSPIN_LOCK_QUEUE * Next;// Offset=0x0 Size=0x8
    unsigned long long * Lock;// Offset=0x8 Size=0x8
};

struct _KI_SHARED_READY_QUEUE_LOCK_HANDLE// Size=0x10 (Id=2314)
{
    struct _KSPIN_LOCK_QUEUE Queue;// Offset=0x0 Size=0x10
};
