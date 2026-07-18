enum _MMLISTS
{
    ZeroedPageList=0,
    FreePageList=1,
    StandbyPageList=2,
    ModifiedPageList=3,
    ModifiedNoWritePageList=4,
    BadPageList=5,
    ActiveAndValid=6,
    TransitionPage=7
};

struct _MMPFNLIST// Size=0x28 (Id=533)
{
    unsigned long long Total;// Offset=0x0 Size=0x8
    enum _MMLISTS ListName;// Offset=0x8 Size=0x4
    unsigned long long Flink;// Offset=0x10 Size=0x8
    unsigned long long Blink;// Offset=0x18 Size=0x8
    unsigned long long Lock;// Offset=0x20 Size=0x8
};

struct _LIST_ENTRY// Size=0x10 (Id=4)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _DISPATCHER_HEADER// Size=0x18 (Id=157)
{
    union // Size=0x4 (Id=0)
    {
        long Lock;// Offset=0x0 Size=0x4
        long LockNV;// Offset=0x0 Size=0x4
        unsigned char Type;// Offset=0x0 Size=0x1
        unsigned char Signalling;// Offset=0x1 Size=0x1
        unsigned char Size;// Offset=0x2 Size=0x1
        unsigned char Reserved1;// Offset=0x3 Size=0x1
        unsigned char TimerType;// Offset=0x0 Size=0x1
        union // Size=0x1 (Id=0)
        {
            unsigned char TimerControlFlags;// Offset=0x1 Size=0x1
            struct // Size=0x1 (Id=0)
            {
                unsigned char Absolute:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char Wake:1;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x1
                unsigned char EncodedTolerableDelay:6;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x6
            };
        };
        unsigned char Hand;// Offset=0x2 Size=0x1
        unsigned char TimerMiscFlags;// Offset=0x3 Size=0x1
        struct // Size=0x1 (Id=0)
        {
            unsigned char Index:6;// Offset=0x3 Size=0x1 BitOffset=0x0 BitSize=0x6
            unsigned char Inserted:1;// Offset=0x3 Size=0x1 BitOffset=0x6 BitSize=0x1
            unsigned char Expired:1;// Offset=0x3 Size=0x1 BitOffset=0x7 BitSize=0x1
        };
        unsigned char Timer2Type;// Offset=0x0 Size=0x1
        union // Size=0x1 (Id=0)
        {
            unsigned char Timer2Flags;// Offset=0x1 Size=0x1
            struct // Size=0x1 (Id=0)
            {
                unsigned char Timer2Inserted:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char Timer2Expiring:1;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x1
                unsigned char Timer2CancelPending:1;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x1
                unsigned char Timer2SetPending:1;// Offset=0x1 Size=0x1 BitOffset=0x3 BitSize=0x1
                unsigned char Timer2Running:1;// Offset=0x1 Size=0x1 BitOffset=0x4 BitSize=0x1
                unsigned char Timer2Disabled:1;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x1
                unsigned char Timer2ReservedFlags:2;// Offset=0x1 Size=0x1 BitOffset=0x6 BitSize=0x2
            };
        };
        unsigned char Timer2ComponentId;// Offset=0x2 Size=0x1
        unsigned char Timer2RelativeId;// Offset=0x3 Size=0x1
        unsigned char QueueType;// Offset=0x0 Size=0x1
        union // Size=0x1 (Id=0)
        {
            unsigned char QueueControlFlags;// Offset=0x1 Size=0x1
            struct // Size=0x1 (Id=0)
            {
                unsigned char Abandoned:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char DisableIncrement:1;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x1
                unsigned char QueueReservedControlFlags:6;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x6
            };
        };
        unsigned char QueueSize;// Offset=0x2 Size=0x1
        unsigned char QueueReserved;// Offset=0x3 Size=0x1
        unsigned char ThreadType;// Offset=0x0 Size=0x1
        unsigned char ThreadReserved;// Offset=0x1 Size=0x1
        union // Size=0x1 (Id=0)
        {
            unsigned char ThreadControlFlags;// Offset=0x2 Size=0x1
            struct // Size=0x1 (Id=0)
            {
                unsigned char CycleProfiling:1;// Offset=0x2 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char CounterProfiling:1;// Offset=0x2 Size=0x1 BitOffset=0x1 BitSize=0x1
                unsigned char GroupScheduling:1;// Offset=0x2 Size=0x1 BitOffset=0x2 BitSize=0x1
                unsigned char AffinitySet:1;// Offset=0x2 Size=0x1 BitOffset=0x3 BitSize=0x1
                unsigned char Tagged:1;// Offset=0x2 Size=0x1 BitOffset=0x4 BitSize=0x1
                unsigned char EnergyProfiling:1;// Offset=0x2 Size=0x1 BitOffset=0x5 BitSize=0x1
                unsigned char SchedulerAssist:1;// Offset=0x2 Size=0x1 BitOffset=0x6 BitSize=0x1
                unsigned char ThreadReservedControlFlags:1;// Offset=0x2 Size=0x1 BitOffset=0x7 BitSize=0x1
            };
        };
        unsigned char DebugActive;// Offset=0x3 Size=0x1
        struct // Size=0x1 (Id=0)
        {
            unsigned char ActiveDR7:1;// Offset=0x3 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char Instrumented:1;// Offset=0x3 Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char Minimal:1;// Offset=0x3 Size=0x1 BitOffset=0x2 BitSize=0x1
            unsigned char Reserved4:2;// Offset=0x3 Size=0x1 BitOffset=0x3 BitSize=0x2
            unsigned char AltSyscall:1;// Offset=0x3 Size=0x1 BitOffset=0x5 BitSize=0x1
            unsigned char UmsScheduled:1;// Offset=0x3 Size=0x1 BitOffset=0x6 BitSize=0x1
            unsigned char UmsPrimary:1;// Offset=0x3 Size=0x1 BitOffset=0x7 BitSize=0x1
        };
        unsigned char MutantType;// Offset=0x0 Size=0x1
        unsigned char MutantSize;// Offset=0x1 Size=0x1
        unsigned char DpcActive;// Offset=0x2 Size=0x1
        unsigned char MutantReserved;// Offset=0x3 Size=0x1
    };
    long SignalState;// Offset=0x4 Size=0x4
    struct _LIST_ENTRY WaitListHead;// Offset=0x8 Size=0x10
};

struct _KEVENT// Size=0x18 (Id=20)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
};

struct _MI_DECAY_TIMER_LINKAGE// Size=0x8 (Id=1617)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Spare0:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long PreviousDecayPfn:31;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1f
        unsigned long long Spare1:1;// Offset=0x0 Size=0x8 BitOffset=0x20 BitSize=0x1
        unsigned long long NextDecayPfn:31;// Offset=0x0 Size=0x8 BitOffset=0x21 BitSize=0x1f
    };
};

union _anonymous_1278// Size=0x8 (Id=1278)
{
    unsigned long long Long;// Offset=0x0 Size=0x8
    struct _MI_DECAY_TIMER_LINKAGE e1;// Offset=0x0 Size=0x8
};

struct _MI_DECAY_TIMER_LINK// Size=0x8 (Id=1279)
{
    union _anonymous_1278 u1;// Offset=0x0 Size=0x8
};

struct _WORK_QUEUE_ITEM// Size=0x20 (Id=27)
{
    struct _LIST_ENTRY List;// Offset=0x0 Size=0x10
    void  ( * WorkerRoutine)(void * );// Offset=0x10 Size=0x8
    void * Parameter;// Offset=0x18 Size=0x8
};

struct _MI_LDW_WORK_CONTEXT// Size=0x38 (Id=1443)
{
    struct _WORK_QUEUE_ITEM WorkItem;// Offset=0x0 Size=0x20
    struct _FILE_OBJECT * FileObject;// Offset=0x20 Size=0x8
    long ErrorStatus;// Offset=0x28 Size=0x4
    long Active;// Offset=0x2c Size=0x4
    unsigned char FreeWhenDone;// Offset=0x30 Size=0x1
};

struct _RTL_AVL_TREE// Size=0x8 (Id=120)
{
    struct _RTL_BALANCED_NODE * Root;// Offset=0x0 Size=0x8
};

struct _MI_AVAILABLE_PAGE_WAIT_STATES// Size=0x20 (Id=1477)
{
    struct _KEVENT Event;// Offset=0x0 Size=0x18
    unsigned long EventSets;// Offset=0x18 Size=0x4
};

struct _RTL_BITMAP_EX// Size=0x10 (Id=987)
{
    unsigned long long SizeOfBitMap;// Offset=0x0 Size=0x8
    unsigned long long * Buffer;// Offset=0x8 Size=0x8
};

struct _RTL_RB_TREE// Size=0x10 (Id=118)
{
    struct _RTL_BALANCED_NODE * Root;// Offset=0x0 Size=0x8
    union // Size=0x1 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            unsigned char Encoded:1;// Offset=0x8 Size=0x1 BitOffset=0x0 BitSize=0x1
        };
        struct _RTL_BALANCED_NODE * Min;// Offset=0x8 Size=0x8
    };
};

enum _MI_SLAB_ALLOCATOR_TYPE
{
    MiSlabAllocatorTypeSlatProtected=0,
    MiSlabAllocatorTypeUnprotected=1,
    MiSlabAllocatorTypeMax=2
};

enum _MI_SLAB_ALLOCATOR_PROTECTION
{
    MiSlabAllocatorProtectionReadExecute=0,
    MiSlabAllocatorProtectionReadOnly=1,
    MiSlabAllocatorProtectionNoAccess=2,
    MiSlabAllocatorProtectionReadWrite=3,
    MiSlabAllocatorProtectionMax=4
};

union _anonymous_1614// Size=0x4 (Id=1614)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long EntryBecameEmpty:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Spare:31;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1f
    };
    unsigned long AllFlags;// Offset=0x0 Size=0x4
};

struct _MI_SLAB_ALLOCATOR_CONTEXT// Size=0x78 (Id=1615)
{
    struct _RTL_RB_TREE AllocationsTree;// Offset=0x0 Size=0x10
    long Lock;// Offset=0x10 Size=0x4
    struct _MI_SLAB_ALLOCATOR_ENTRY * SlabEntryHint;// Offset=0x18 Size=0x8
    unsigned long long FreePageCount;// Offset=0x20 Size=0x8
    unsigned long long SlabEntryCount;// Offset=0x28 Size=0x8
    enum _MI_SLAB_ALLOCATOR_TYPE Type;// Offset=0x30 Size=0x4
    enum _MI_SLAB_ALLOCATOR_PROTECTION Protection;// Offset=0x34 Size=0x4
    union _anonymous_1614 Flags;// Offset=0x38 Size=0x4
    struct _MMPFNLIST StandbyList;// Offset=0x40 Size=0x28
    unsigned long long LastReplenishTime;// Offset=0x68 Size=0x8
    unsigned long long LastFailureTime;// Offset=0x70 Size=0x8
};

struct _MI_PARTITION_PAGE_LISTS// Size=0xfc0 (Id=1277)
{
    struct _MMPFNLIST * FreePagesByColor[2];// Offset=0x0 Size=0x10
    struct _MMPFNLIST ZeroedPageListHead;// Offset=0x40 Size=0x28
    struct _MMPFNLIST FreePageListHead;// Offset=0x80 Size=0x28
    struct _MMPFNLIST StandbyPageListHead;// Offset=0xc0 Size=0x28
    struct _MMPFNLIST StandbyPageListByPriority[8];// Offset=0x100 Size=0x140
    struct _MMPFNLIST ModifiedPageListNoReservation;// Offset=0x240 Size=0x28
    struct _MMPFNLIST ModifiedPageListByReservation[16];// Offset=0x280 Size=0x280
    struct _MMPFNLIST MappedPageListHead[16];// Offset=0x500 Size=0x280
    struct _MMPFNLIST BadPageListHead;// Offset=0x780 Size=0x28
    struct _MMPFNLIST EnclavePageListHead;// Offset=0x7c0 Size=0x28
    union _SLIST_HEADER * FreePageSlist[2];// Offset=0x7e8 Size=0x10
    struct _MMPFNLIST * PageLocationList[8];// Offset=0x7f8 Size=0x40
    unsigned long StandbyRepurposedByPriority[8];// Offset=0x838 Size=0x20
    unsigned long long TransitionSharedPages;// Offset=0x880 Size=0x8
    unsigned long long TransitionSharedPagesPeak[6];// Offset=0x888 Size=0x30
    struct _KEVENT MappedPageListHeadEvent[16];// Offset=0x8b8 Size=0x180
    struct _MI_DECAY_TIMER_LINK DecayClusterTimerHeads[4];// Offset=0xa38 Size=0x20
    unsigned long DecayHand;// Offset=0xa58 Size=0x4
    unsigned char StandbyListDiscard;// Offset=0xa5c Size=0x1
    unsigned char FreeListDiscard;// Offset=0xa5d Size=0x1
    unsigned char PfnBitMapsReady;// Offset=0xa5e Size=0x1
    unsigned long long LastDecayHandUpdateTime;// Offset=0xa60 Size=0x8
    struct _MI_LDW_WORK_CONTEXT LastChanceLdwContext;// Offset=0xa68 Size=0x38
    struct _RTL_AVL_TREE HugePfnBadPages;// Offset=0xaa0 Size=0x8
    unsigned long long AvailableEventsLock;// Offset=0xac0 Size=0x8
    struct _MI_AVAILABLE_PAGE_WAIT_STATES AvailablePageWaitStates[3];// Offset=0xac8 Size=0x60
    void * MirrorListLocks;// Offset=0xb28 Size=0x8
    unsigned long long TransitionPrivatePages;// Offset=0xb40 Size=0x8
    struct _RTL_BITMAP_EX LargePfnBitMap[2];// Offset=0xb48 Size=0x20
    struct _MI_FREE_LARGE_PAGE_LIST * LargePageListHeads;// Offset=0xb68 Size=0x8
    unsigned char * MediumPagesOnFreeZeroList;// Offset=0xb70 Size=0x8
    struct _RTL_BITMAP_EX LargePageRebuildCandidates;// Offset=0xb78 Size=0x10
    wchar_t * LargePagesOnFreeZeroList;// Offset=0xb88 Size=0x8
    long HugePageRebuildCandidatesExist;// Offset=0xb90 Size=0x4
    struct _KEVENT LargePageCandidatesExistEvent;// Offset=0xb98 Size=0x18
    unsigned long long LowMemoryThreshold;// Offset=0xbb0 Size=0x8
    unsigned long long HighMemoryThreshold;// Offset=0xbb8 Size=0x8
    struct _MI_SLAB_ALLOCATOR_CONTEXT SlabContexts[2][4];// Offset=0xbc0 Size=0x3c0
    struct _RTL_BITMAP_EX SlabPfnBitMap;// Offset=0xf80 Size=0x10
    void * HugePfnLists;// Offset=0xf90 Size=0x8
    unsigned long long AvailableHugeIoRanges;// Offset=0xf98 Size=0x8
};
