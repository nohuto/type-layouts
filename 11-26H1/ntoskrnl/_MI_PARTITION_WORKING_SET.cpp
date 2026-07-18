struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _MMSUPPORT_FLAGS// Size=0x4 (Id=672)
{
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            unsigned char WorkingSetType:4;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x4
            unsigned char MaximumWorkingSetHard:1;// Offset=0x0 Size=0x1 BitOffset=0x4 BitSize=0x1
            unsigned char MinimumWorkingSetHard:1;// Offset=0x0 Size=0x1 BitOffset=0x5 BitSize=0x1
            unsigned char LinearAddressProtected:1;// Offset=0x0 Size=0x1 BitOffset=0x6 BitSize=0x1
            unsigned char Reserved0:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
        };
        unsigned char u1;// Offset=0x0 Size=0x1
        unsigned char Reserved1;// Offset=0x1 Size=0x1
        unsigned char MemoryPriority;// Offset=0x2 Size=0x1
        struct // Size=0x1 (Id=0)
        {
            unsigned char WsleDeleted:1;// Offset=0x3 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char SvmEnabled:1;// Offset=0x3 Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char ForceAge:1;// Offset=0x3 Size=0x1 BitOffset=0x2 BitSize=0x1
            unsigned char ForceTrim:1;// Offset=0x3 Size=0x1 BitOffset=0x3 BitSize=0x1
            unsigned char CommitReleaseState:2;// Offset=0x3 Size=0x1 BitOffset=0x4 BitSize=0x2
            unsigned char Reserved3:2;// Offset=0x3 Size=0x1 BitOffset=0x6 BitSize=0x2
        };
        unsigned char u2;// Offset=0x3 Size=0x1
        unsigned long EntireFlags;// Offset=0x0 Size=0x4
    };
};

struct _MMSUPPORT_INSTANCE// Size=0xc0 (Id=674)
{
    unsigned long NextPageColor;// Offset=0x0 Size=0x4
    unsigned long PageFaultCount;// Offset=0x4 Size=0x4
    unsigned long long PeakWorkingSetSize;// Offset=0x8 Size=0x8
    struct _MMWSL_INSTANCE * VmWorkingSetList;// Offset=0x10 Size=0x8
    struct _LIST_ENTRY WorkingSetExpansionLinks[2];// Offset=0x18 Size=0x20
    unsigned long long AgeDistribution[8];// Offset=0x38 Size=0x40
    unsigned long long MinimumWorkingSetSize;// Offset=0x78 Size=0x8
    unsigned long long MaximumWorkingSetSize;// Offset=0x80 Size=0x8
    unsigned long long WorkingSetLeafSize;// Offset=0x88 Size=0x8
    unsigned long long WorkingSetLeafPrivateSize;// Offset=0x90 Size=0x8
    unsigned long long WorkingSetSize;// Offset=0x98 Size=0x8
    unsigned long long WorkingSetPrivateSize;// Offset=0xa0 Size=0x8
    unsigned long HardFaultCount;// Offset=0xa8 Size=0x4
    unsigned short LastTrimStamp;// Offset=0xac Size=0x2
    unsigned short PartitionId;// Offset=0xae Size=0x2
    unsigned long long SelfmapLock;// Offset=0xb0 Size=0x8
    struct _MMSUPPORT_FLAGS Flags;// Offset=0xb8 Size=0x4
    long InterlockedFlags;// Offset=0xbc Size=0x4
};

struct _MI_WORKING_SET_PAGE_TABLE_AGE_LINKS// Size=0x18 (Id=2581)
{
    long Lock;// Offset=0x0 Size=0x4
    unsigned long EntryCount;// Offset=0x4 Size=0x4
    struct _MMPFN * Flink;// Offset=0x8 Size=0x8
    struct _MMPFN * Blink;// Offset=0x10 Size=0x8
};

struct _MMWSL_INSTANCE// Size=0x110 (Id=2143)
{
    struct _MMPTE * PteResumePoint[3];// Offset=0x0 Size=0x18
    unsigned long LastAccessClearingRemainder;// Offset=0x18 Size=0x4
    unsigned long LastAgingRemainder;// Offset=0x1c Size=0x4
    unsigned long long LockedEntries;// Offset=0x20 Size=0x8
    struct _MI_WORKING_SET_HARD_LIMIT * HardLimit;// Offset=0x28 Size=0x8
    unsigned long long TrimmedPageCount;// Offset=0x30 Size=0x8
    unsigned long AttachedThreads;// Offset=0x38 Size=0x4
    long long AddedLeafPages;// Offset=0x40 Size=0x8
    struct _KGATE * ExitOutswapGate;// Offset=0x48 Size=0x8
    struct _MI_WORKING_SET_PAGE_TABLE_AGE_LINKS ActivePageTableLinks[8];// Offset=0x50 Size=0xc0
};

struct _MI_PARTITION_WORKING_SET// Size=0x200 (Id=2027)
{
    struct _MMSUPPORT_INSTANCE VmInstance;// Offset=0x0 Size=0xc0
    struct _MMWSL_INSTANCE VmWorkingSetList;// Offset=0xc0 Size=0x110
};
