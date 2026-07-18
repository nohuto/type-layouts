struct _LIST_ENTRY// Size=0x10 (Id=5)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _OWNER_ENTRY// Size=0x10 (Id=493)
{
    unsigned long long OwnerThread;// Offset=0x0 Size=0x8
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long IoPriorityBoosted:1;// Offset=0x8 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long OwnerReferenced:1;// Offset=0x8 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long IoQoSPriorityBoosted:1;// Offset=0x8 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long OwnerCount:29;// Offset=0x8 Size=0x4 BitOffset=0x3 BitSize=0x1d
        };
        unsigned long TableSize;// Offset=0x8 Size=0x4
    };
};

struct _ERESOURCE// Size=0x68 (Id=429)
{
    struct _LIST_ENTRY SystemResourcesList;// Offset=0x0 Size=0x10
    struct _OWNER_ENTRY * OwnerTable;// Offset=0x10 Size=0x8
    short ActiveCount;// Offset=0x18 Size=0x2
    union // Size=0x2 (Id=0)
    {
        unsigned short Flag;// Offset=0x1a Size=0x2
        unsigned char ReservedLowFlags;// Offset=0x1a Size=0x1
    };
    unsigned char WaiterPriority;// Offset=0x1b Size=0x1
    void * SharedWaiters;// Offset=0x20 Size=0x8
    void * ExclusiveWaiters;// Offset=0x28 Size=0x8
    struct _OWNER_ENTRY OwnerEntry;// Offset=0x30 Size=0x10
    unsigned long ActiveEntries;// Offset=0x40 Size=0x4
    unsigned long ContentionCount;// Offset=0x44 Size=0x4
    unsigned long NumberOfSharedWaiters;// Offset=0x48 Size=0x4
    unsigned long NumberOfExclusiveWaiters;// Offset=0x4c Size=0x4
    void * Reserved2;// Offset=0x50 Size=0x8
    union // Size=0x8 (Id=0)
    {
        void * Address;// Offset=0x58 Size=0x8
        unsigned long long CreatorBackTraceIndex;// Offset=0x58 Size=0x8
    };
    unsigned long long SpinLock;// Offset=0x60 Size=0x8
};
