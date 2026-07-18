struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _FAST_OWNER_ENTRY_INTERNAL// Size=0x28 (Id=1914)
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
