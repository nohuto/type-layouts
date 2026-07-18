struct _LIST_ENTRY// Size=0x8 (Id=32)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x4
    struct _LIST_ENTRY * Blink;// Offset=0x4 Size=0x4
};

struct _OWNER_ENTRY// Size=0x8 (Id=612)
{
    unsigned long OwnerThread;// Offset=0x0 Size=0x4
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long IoPriorityBoosted:1;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long OwnerReferenced:1;// Offset=0x4 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long IoQoSPriorityBoosted:1;// Offset=0x4 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long OwnerCount:29;// Offset=0x4 Size=0x4 BitOffset=0x3 BitSize=0x1d
        };
        unsigned long TableSize;// Offset=0x4 Size=0x4
    };
};

struct _ERESOURCE// Size=0x38 (Id=595)
{
    struct _LIST_ENTRY SystemResourcesList;// Offset=0x0 Size=0x8
    struct _OWNER_ENTRY * OwnerTable;// Offset=0x8 Size=0x4
    short ActiveCount;// Offset=0xc Size=0x2
    union // Size=0x2 (Id=0)
    {
        unsigned short Flag;// Offset=0xe Size=0x2
        unsigned char ReservedLowFlags;// Offset=0xe Size=0x1
    };
    unsigned char WaiterPriority;// Offset=0xf Size=0x1
    void * SharedWaiters;// Offset=0x10 Size=0x4
    void * ExclusiveWaiters;// Offset=0x14 Size=0x4
    struct _OWNER_ENTRY OwnerEntry;// Offset=0x18 Size=0x8
    unsigned long ActiveEntries;// Offset=0x20 Size=0x4
    unsigned long ContentionCount;// Offset=0x24 Size=0x4
    unsigned long NumberOfSharedWaiters;// Offset=0x28 Size=0x4
    unsigned long NumberOfExclusiveWaiters;// Offset=0x2c Size=0x4
    union // Size=0x4 (Id=0)
    {
        void * Address;// Offset=0x30 Size=0x4
        unsigned long CreatorBackTraceIndex;// Offset=0x30 Size=0x4
    };
    unsigned long SpinLock;// Offset=0x34 Size=0x4
};
