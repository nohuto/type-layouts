struct _KWAIT_CHAIN// Size=0x8 (Id=1477)
{
    void * Head;// Offset=0x0 Size=0x8
};

struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _FAST_OWNER_ENTRY_INTERNAL// Size=0x28 (Id=2017)
{
    struct _LIST_ENTRY ListEntry;// Offset=0x0 Size=0x10
    void * ThreadAddressAndDisowned;// Offset=0x10 Size=0x8
    void * LockAddress;// Offset=0x18 Size=0x8
    long RecursiveReferenceCount;// Offset=0x20 Size=0x4
    unsigned char AbLockHandle;// Offset=0x24 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char DynamicallyAllocated:1;// Offset=0x25 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char CallerExclusive:1;// Offset=0x25 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char CurrentlyWaitingShared:1;// Offset=0x25 Size=0x1 BitOffset=0x2 BitSize=0x1
    };
    unsigned char Reserved[2];// Offset=0x26 Size=0x2
};

struct _FAST_ERESOURCE_INTERNAL// Size=0x68 (Id=2004)
{
    union FAST_ERESOURCE_LOCK_STATE LockWord;// Offset=0x0 Size=0x8
    struct _KWAIT_CHAIN SharedWaiters;// Offset=0x8 Size=0x8
    struct _KWAIT_CHAIN ExclusiveWaiters;// Offset=0x10 Size=0x8
    unsigned char Reserved;// Offset=0x18 Size=0x1
    char MiscFlags;// Offset=0x19 Size=0x1
    unsigned short Flag;// Offset=0x1a Size=0x2
    unsigned long ResourceTimeoutCount;// Offset=0x1c Size=0x4
    unsigned long Reserved1;// Offset=0x20 Size=0x4
    unsigned long long CreatorBackTraceIndex;// Offset=0x28 Size=0x8
    unsigned long long SpinLock;// Offset=0x30 Size=0x8
    unsigned long NumberOfSharedWaiters;// Offset=0x38 Size=0x4
    unsigned long ContentionCount;// Offset=0x3c Size=0x4
    struct _FAST_OWNER_ENTRY_INTERNAL ExclusiveOwnerEntry;// Offset=0x40 Size=0x28
};
