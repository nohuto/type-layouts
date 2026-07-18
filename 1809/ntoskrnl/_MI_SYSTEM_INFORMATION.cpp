struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=24)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _MI_POOL_FAILURE_REASONS// Size=0x2c (Id=1771)
{
    unsigned long NonPagedNoPtes;// Offset=0x0 Size=0x4
    unsigned long PriorityTooLow;// Offset=0x4 Size=0x4
    unsigned long NonPagedNoPagesAvailable;// Offset=0x8 Size=0x4
    unsigned long PagedNoPtes;// Offset=0xc Size=0x4
    unsigned long SessionPagedNoPtes;// Offset=0x10 Size=0x4
    unsigned long PagedNoPagesAvailable;// Offset=0x14 Size=0x4
    unsigned long SessionPagedNoPagesAvailable;// Offset=0x18 Size=0x4
    unsigned long PagedNoCommit;// Offset=0x1c Size=0x4
    unsigned long SessionPagedNoCommit;// Offset=0x20 Size=0x4
    unsigned long NonPagedNoResidentAvailable;// Offset=0x24 Size=0x4
    unsigned long NonPagedNoCommit;// Offset=0x28 Size=0x4
};

struct _RTL_AVL_TREE// Size=0x8 (Id=40)
{
    struct _RTL_BALANCED_NODE * Root;// Offset=0x0 Size=0x8
};

struct _RTL_BALANCED_NODE// Size=0x18 (Id=39)
{
    union // Size=0x10 (Id=0)
    {
        struct _RTL_BALANCED_NODE * Children[2];// Offset=0x0 Size=0x10
        struct _RTL_BALANCED_NODE * Left;// Offset=0x0 Size=0x8
        struct _RTL_BALANCED_NODE * Right;// Offset=0x8 Size=0x8
    };
    union // Size=0x1 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            union // Size=0x1 (Id=0)
            {
                unsigned char Red:1;// Offset=0x10 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char Balance:2;// Offset=0x10 Size=0x1 BitOffset=0x0 BitSize=0x2
            };
        };
        unsigned long long ParentValue;// Offset=0x10 Size=0x8
    };
};

struct _MI_ACCESS_VIOLATION_RANGE// Size=0x28 (Id=1743)
{
    struct _RTL_BALANCED_NODE Node;// Offset=0x0 Size=0x18
    void * Va;// Offset=0x18 Size=0x8
    void * EndVaInclusive;// Offset=0x20 Size=0x8
};

struct _MI_POOL_STATE// Size=0x148 (Id=1489)
{
    unsigned long long MaximumNonPagedPoolThreshold;// Offset=0x0 Size=0x8
    unsigned long NonPagedPoolSListMaximum[3];// Offset=0x8 Size=0xc
    unsigned long long AllocatedNonPagedPool;// Offset=0x18 Size=0x8
    struct _SINGLE_LIST_ENTRY BadPoolHead;// Offset=0x20 Size=0x8
    unsigned long HighEventSets;// Offset=0x28 Size=0x4
    unsigned char HighEventSetsValid;// Offset=0x2c Size=0x1
    unsigned long PoolFailures[3][3];// Offset=0x30 Size=0x24
    struct _MI_POOL_FAILURE_REASONS PoolFailureReasons;// Offset=0x54 Size=0x2c
    unsigned long long LowPagedPoolThreshold;// Offset=0x80 Size=0x8
    unsigned long long HighPagedPoolThreshold;// Offset=0x88 Size=0x8
    unsigned long PagedPoolSListMaximum;// Offset=0x90 Size=0x4
    unsigned long PreemptiveTrims[4];// Offset=0x94 Size=0x10
    unsigned long long SpecialPagesInUsePeak;// Offset=0xa8 Size=0x8
    unsigned long SpecialPoolRejected[6];// Offset=0xb0 Size=0x18
    unsigned long long SpecialPagesNonPaged;// Offset=0xc8 Size=0x8
    long SpecialPoolPdes;// Offset=0xd0 Size=0x4
    unsigned long SessionSpecialPoolPdesMax;// Offset=0xd4 Size=0x4
    long PermittedFaultsLock;// Offset=0xd8 Size=0x4
    struct _RTL_AVL_TREE PermittedFaultsTree;// Offset=0xe0 Size=0x8
    struct _MI_ACCESS_VIOLATION_RANGE PermittedFaultsInitialNode[2];// Offset=0xe8 Size=0x50
    unsigned long long TotalPagedPoolQuota;// Offset=0x138 Size=0x8
    unsigned long long TotalNonPagedPoolQuota;// Offset=0x140 Size=0x8
};

struct _EX_PUSH_LOCK// Size=0x8 (Id=87)
{
    union // Size=0x8 (Id=0)
    {
        struct // Size=0x8 (Id=0)
        {
            unsigned long long Locked:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
            unsigned long long Waiting:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
            unsigned long long Waking:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
            unsigned long long MultipleShared:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
            unsigned long long Shared:60;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x3c
        };
        unsigned long long Value;// Offset=0x0 Size=0x8
        void * Ptr;// Offset=0x0 Size=0x8
    };
};

struct _MMSUBSECTION_FLAGS// Size=0x4 (Id=1449)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned short SubsectionAccessed:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short Protection:5;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x5
        unsigned short StartingSector4132:10;// Offset=0x0 Size=0x2 BitOffset=0x6 BitSize=0xa
        unsigned short SubsectionStatic:1;// Offset=0x2 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short GlobalMemory:1;// Offset=0x2 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short Spare:1;// Offset=0x2 Size=0x2 BitOffset=0x2 BitSize=0x1
        unsigned short OnDereferenceList:1;// Offset=0x2 Size=0x2 BitOffset=0x3 BitSize=0x1
        unsigned short SectorEndOffset:12;// Offset=0x2 Size=0x2 BitOffset=0x4 BitSize=0xc
    };
};

union _unnamed_744// Size=0x4 (Id=744)
{
    unsigned long LongFlags;// Offset=0x0 Size=0x4
    struct _MMSUBSECTION_FLAGS SubsectionFlags;// Offset=0x0 Size=0x4
};

struct _MI_SUBSECTION_ENTRY1// Size=0x4 (Id=929)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long CrossPartitionReferences:30;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1e
        unsigned long SubsectionMappedLarge:2;// Offset=0x0 Size=0x4 BitOffset=0x1e BitSize=0x2
    };
};

union _unnamed_745// Size=0x4 (Id=745)
{
    struct _MI_SUBSECTION_ENTRY1 e1;// Offset=0x0 Size=0x4
    unsigned long EntireField;// Offset=0x0 Size=0x4
};

struct _SUBSECTION// Size=0x38 (Id=746)
{
    struct _CONTROL_AREA * ControlArea;// Offset=0x0 Size=0x8
    struct _MMPTE * SubsectionBase;// Offset=0x8 Size=0x8
    struct _SUBSECTION * NextSubsection;// Offset=0x10 Size=0x8
    union // Size=0x20 (Id=0)
    {
        struct _RTL_AVL_TREE GlobalPerSessionHead;// Offset=0x18 Size=0x8
        struct _MI_CONTROL_AREA_WAIT_BLOCK * CreationWaitList;// Offset=0x18 Size=0x8
        struct _MI_PER_SESSION_PROTOS * SessionDriverProtos;// Offset=0x18 Size=0x8
    };
    union _unnamed_744 u;// Offset=0x20 Size=0x4
    unsigned long StartingSector;// Offset=0x24 Size=0x4
    unsigned long NumberOfFullSectors;// Offset=0x28 Size=0x4
    unsigned long PtesInSubsection;// Offset=0x2c Size=0x4
    union _unnamed_745 u1;// Offset=0x30 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long UnusedPtes:30;// Offset=0x34 Size=0x4 BitOffset=0x0 BitSize=0x1e
        unsigned long ExtentQueryNeeded:1;// Offset=0x34 Size=0x4 BitOffset=0x1e BitSize=0x1
        unsigned long DirtyPages:1;// Offset=0x34 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
};

struct _LIST_ENTRY// Size=0x10 (Id=22)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _unnamed_1012// Size=0x8 (Id=1012)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long AllocationType:3;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x3
        unsigned long long Inserted:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
    };
};

struct _unnamed_1013// Size=0x8 (Id=1013)
{
    unsigned long long PrototypePtesFlags;// Offset=0x0 Size=0x8
};

union _unnamed_1014// Size=0x8 (Id=1014)
{
    struct _unnamed_1012 e1;// Offset=0x0 Size=0x8
    struct _unnamed_1013 e2;// Offset=0x0 Size=0x8
};

struct _MI_PROTOTYPE_PTES_NODE// Size=0x20 (Id=1015)
{
    struct _RTL_BALANCED_NODE Node;// Offset=0x0 Size=0x18
    union _unnamed_1014 u1;// Offset=0x18 Size=0x8
};

struct _MSUBSECTION// Size=0x90 (Id=1594)
{
    struct _SUBSECTION Core;// Offset=0x0 Size=0x38
    struct _RTL_BALANCED_NODE SubsectionNode;// Offset=0x38 Size=0x18
    struct _LIST_ENTRY DereferenceList;// Offset=0x50 Size=0x10
    unsigned long long NumberOfMappedViews;// Offset=0x60 Size=0x8
    unsigned long NumberOfPfnReferences;// Offset=0x68 Size=0x4
    unsigned long LargeViews;// Offset=0x6c Size=0x4
    struct _MI_PROTOTYPE_PTES_NODE ProtosNode;// Offset=0x70 Size=0x20
};

struct _MMSECTION_FLAGS// Size=0x4 (Id=593)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned int BeingDeleted:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned int BeingCreated:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned int BeingPurged:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned int NoModifiedWriting:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned int FailAllIo:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned int Image:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned int Based:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned int File:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned int AttemptingDelete:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned int PrefetchCreated:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned int PhysicalMemory:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned int ImageControlAreaOnRemovableMedia:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned int Reserve:1;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x1
        unsigned int Commit:1;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x1
        unsigned int NoChange:1;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x1
        unsigned int WasPurged:1;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x1
        unsigned int UserReference:1;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned int GlobalMemory:1;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x1
        unsigned int DeleteOnClose:1;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x1
        unsigned int FilePointerNull:1;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0x1
        unsigned int PreferredNode:6;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x6
        unsigned int GlobalOnlyPerSession:1;// Offset=0x0 Size=0x4 BitOffset=0x1a BitSize=0x1
        unsigned int UserWritable:1;// Offset=0x0 Size=0x4 BitOffset=0x1b BitSize=0x1
        unsigned int SystemVaAllocated:1;// Offset=0x0 Size=0x4 BitOffset=0x1c BitSize=0x1
        unsigned int PreferredFsCompressionBoundary:1;// Offset=0x0 Size=0x4 BitOffset=0x1d BitSize=0x1
        unsigned int UsingFileExtents:1;// Offset=0x0 Size=0x4 BitOffset=0x1e BitSize=0x1
        unsigned int PageSize64K:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
};

union _unnamed_246// Size=0x4 (Id=246)
{
    unsigned long LongFlags;// Offset=0x0 Size=0x4
    struct _MMSECTION_FLAGS Flags;// Offset=0x0 Size=0x4
};

struct _MMSECTION_FLAGS2// Size=0x4 (Id=794)
{
    struct // Size=0x3 (Id=0)
    {
        unsigned short PartitionId:10;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0xa
        unsigned char NoCrossPartitionAccess:1;// Offset=0x2 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char SubsectionCrossPartitionReferenceOverflow:1;// Offset=0x2 Size=0x1 BitOffset=0x1 BitSize=0x1
    };
};

union _unnamed_247// Size=0x4 (Id=247)
{
    unsigned long LongFlags;// Offset=0x0 Size=0x4
    struct _MMSECTION_FLAGS2 Flags;// Offset=0x0 Size=0x4
};

struct _EX_FAST_REF// Size=0x8 (Id=96)
{
    union // Size=0x8 (Id=0)
    {
        void * Object;// Offset=0x0 Size=0x8
        struct // Size=0x8 (Id=0)
        {
            unsigned long long RefCnt:4;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x4
        };
        unsigned long long Value;// Offset=0x0 Size=0x8
    };
};

struct _unnamed_248// Size=0x10 (Id=248)
{
    union // Size=0x4 (Id=0)
    {
        unsigned long NumberOfSystemCacheViews;// Offset=0x0 Size=0x4
        unsigned long ImageRelocationStartBit;// Offset=0x0 Size=0x4
    };
    union // Size=0x4 (Id=0)
    {
        long WritableUserReferences;// Offset=0x4 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long ImageRelocationSizeIn64k:16;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x10
            unsigned long LargePage:1;// Offset=0x4 Size=0x4 BitOffset=0x10 BitSize=0x1
            unsigned long AweSection:1;// Offset=0x4 Size=0x4 BitOffset=0x11 BitSize=0x1
            unsigned long SystemImage:1;// Offset=0x4 Size=0x4 BitOffset=0x12 BitSize=0x1
            unsigned long StrongCode:2;// Offset=0x4 Size=0x4 BitOffset=0x13 BitSize=0x2
            unsigned long CantMove:1;// Offset=0x4 Size=0x4 BitOffset=0x15 BitSize=0x1
            unsigned long BitMap:2;// Offset=0x4 Size=0x4 BitOffset=0x16 BitSize=0x2
            unsigned long ImageActive:1;// Offset=0x4 Size=0x4 BitOffset=0x18 BitSize=0x1
            unsigned long ImageBaseOkToReuse:1;// Offset=0x4 Size=0x4 BitOffset=0x19 BitSize=0x1
        };
    };
    union // Size=0xc (Id=0)
    {
        unsigned long FlushInProgressCount;// Offset=0x8 Size=0x4
        unsigned long NumberOfSubsections;// Offset=0x8 Size=0x4
        struct _MI_IMAGE_SECURITY_REFERENCE * SeImageStub;// Offset=0x8 Size=0x8
    };
};

union _unnamed_249// Size=0x10 (Id=249)
{
    struct _unnamed_248 e2;// Offset=0x0 Size=0x10
};

union _unnamed_250// Size=0x8 (Id=250)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long IoAttributionContext:61;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x3d
        unsigned long long Spare:3;// Offset=0x0 Size=0x8 BitOffset=0x3d BitSize=0x3
    };
    unsigned long long ImageCrossPartitionCharge;// Offset=0x0 Size=0x8
    struct // Size=0x8 (Id=0)
    {
        unsigned long long CommittedPageCount:36;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x24
    };
};

struct _CONTROL_AREA// Size=0x80 (Id=251)
{
    struct _SEGMENT * Segment;// Offset=0x0 Size=0x8
    union // Size=0x10 (Id=0)
    {
        struct _LIST_ENTRY ListHead;// Offset=0x8 Size=0x10
        void * AweContext;// Offset=0x8 Size=0x8
    };
    unsigned long long NumberOfSectionReferences;// Offset=0x18 Size=0x8
    unsigned long long NumberOfPfnReferences;// Offset=0x20 Size=0x8
    unsigned long long NumberOfMappedViews;// Offset=0x28 Size=0x8
    unsigned long long NumberOfUserReferences;// Offset=0x30 Size=0x8
    union _unnamed_246 u;// Offset=0x38 Size=0x4
    union _unnamed_247 u1;// Offset=0x3c Size=0x4
    struct _EX_FAST_REF FilePointer;// Offset=0x40 Size=0x8
    long ControlAreaLock;// Offset=0x48 Size=0x4
    unsigned long ModifiedWriteCount;// Offset=0x4c Size=0x4
    struct _MI_CONTROL_AREA_WAIT_BLOCK * WaitList;// Offset=0x50 Size=0x8
    union _unnamed_249 u2;// Offset=0x58 Size=0x10
    struct _EX_PUSH_LOCK FileObjectLock;// Offset=0x68 Size=0x8
    unsigned long long LockedPages;// Offset=0x70 Size=0x8
    union _unnamed_250 u3;// Offset=0x78 Size=0x8
};

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

struct _MMPFNLIST// Size=0x28 (Id=234)
{
    unsigned long long Total;// Offset=0x0 Size=0x8
    enum _MMLISTS ListName;// Offset=0x8 Size=0x4
    unsigned long long Flink;// Offset=0x10 Size=0x8
    unsigned long long Blink;// Offset=0x18 Size=0x8
    unsigned long long Lock;// Offset=0x20 Size=0x8
};

struct _WORK_QUEUE_ITEM// Size=0x20 (Id=85)
{
    struct _LIST_ENTRY List;// Offset=0x0 Size=0x10
    void  ( * WorkerRoutine)(void * );// Offset=0x10 Size=0x8
    void * Parameter;// Offset=0x18 Size=0x8
};

struct _DISPATCHER_HEADER// Size=0x18 (Id=783)
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
            unsigned char Reserved4:3;// Offset=0x3 Size=0x1 BitOffset=0x3 BitSize=0x3
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

struct _KEVENT// Size=0x18 (Id=70)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
};

struct _RTL_BITMAP// Size=0x10 (Id=33)
{
    unsigned long SizeOfBitMap;// Offset=0x0 Size=0x4
    unsigned long * Buffer;// Offset=0x8 Size=0x8
};

struct _RTL_BITMAP_EX// Size=0x10 (Id=688)
{
    unsigned long long SizeOfBitMap;// Offset=0x0 Size=0x8
    unsigned long long * Buffer;// Offset=0x8 Size=0x8
};

struct _MI_SECTION_STATE// Size=0x2c0 (Id=943)
{
    long SectionObjectPointersLock;// Offset=0x0 Size=0x4
    struct _RTL_AVL_TREE SectionBasedRoot;// Offset=0x8 Size=0x8
    struct _EX_PUSH_LOCK SectionBasedLock;// Offset=0x10 Size=0x8
    unsigned long long UnusedSegmentPagedPool;// Offset=0x18 Size=0x8
    unsigned long DataSectionProtectionMask;// Offset=0x20 Size=0x4
    void * HighSectionBase;// Offset=0x28 Size=0x8
    struct _MSUBSECTION PhysicalSubsection;// Offset=0x30 Size=0x90
    struct _CONTROL_AREA PhysicalControlArea;// Offset=0xc0 Size=0x80
    struct _MMPFNLIST PurgingExtentPages;// Offset=0x140 Size=0x28
    struct _MMPFN * DanglingExtentPages;// Offset=0x168 Size=0x8
    struct _WORK_QUEUE_ITEM DanglingExtentsWorkItem;// Offset=0x170 Size=0x20
    struct _KEVENT DanglingExtentsDeletionComplete;// Offset=0x190 Size=0x18
    unsigned char DanglingExtentsWorkerActive;// Offset=0x1a8 Size=0x1
    unsigned char PurgingExtentsNeedWatchdog;// Offset=0x1a9 Size=0x1
    struct _RTL_AVL_TREE PrototypePtesTree;// Offset=0x1b0 Size=0x8
    long PrototypePtesTreeSpinLock;// Offset=0x1b8 Size=0x4
    unsigned long ImageBias;// Offset=0x1bc Size=0x4
    struct _EX_PUSH_LOCK RelocateBitmapsLock;// Offset=0x1c0 Size=0x8
    struct _RTL_BITMAP ImageBitMap;// Offset=0x1c8 Size=0x10
    unsigned long ImageBias64Low;// Offset=0x1d8 Size=0x4
    unsigned long ImageBias64High;// Offset=0x1dc Size=0x4
    struct _RTL_BITMAP ImageBitMap64Low;// Offset=0x1e0 Size=0x10
    struct _RTL_BITMAP ImageBitMap64High;// Offset=0x1f0 Size=0x10
    struct _RTL_BITMAP ImageBitMapWow64Dll;// Offset=0x200 Size=0x10
    void * ApiSetSection;// Offset=0x210 Size=0x8
    void * ApiSetSchema;// Offset=0x218 Size=0x8
    unsigned long long ApiSetSchemaSize;// Offset=0x220 Size=0x8
    unsigned long LostDataFiles;// Offset=0x228 Size=0x4
    unsigned long LostDataPages;// Offset=0x22c Size=0x4
    unsigned long ImageFailureReason;// Offset=0x230 Size=0x4
    struct _SECTION * CfgBitMapSection32;// Offset=0x238 Size=0x8
    struct _CONTROL_AREA * CfgBitMapControlArea32;// Offset=0x240 Size=0x8
    struct _SECTION * CfgBitMapSection64;// Offset=0x248 Size=0x8
    struct _CONTROL_AREA * CfgBitMapControlArea64;// Offset=0x250 Size=0x8
    struct _RTL_BITMAP_EX KernelCfgBitMap;// Offset=0x258 Size=0x10
    struct _EX_PUSH_LOCK KernelCfgBitMapLock;// Offset=0x268 Size=0x8
    unsigned long ImageCfgFailure;// Offset=0x270 Size=0x4
    unsigned long RetpolineReservePages;// Offset=0x274 Size=0x4
    struct _MDL * RetpolineStubMdl;// Offset=0x278 Size=0x8
    struct _RTL_BITMAP_EX KernelRetpolineBitMap;// Offset=0x280 Size=0x10
    struct _RTL_RETPOLINE_ROUTINES * RetpolineRoutines;// Offset=0x290 Size=0x8
    struct _MMPTE * RetpolineRevertPte;// Offset=0x298 Size=0x8
    unsigned long RetpolineStubPages;// Offset=0x2a0 Size=0x4
    unsigned long ImageBreakpointEnabled;// Offset=0x2a4 Size=0x4
    unsigned long ImageBreakpointChecksum;// Offset=0x2a8 Size=0x4
    unsigned long ImageBreakpointSize;// Offset=0x2ac Size=0x4
    long ImageValidationFailed;// Offset=0x2b0 Size=0x4
    unsigned long HotPatchReserveSize;// Offset=0x2b4 Size=0x4
};

struct _KMUTANT// Size=0x38 (Id=1094)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
    struct _LIST_ENTRY MutantListEntry;// Offset=0x18 Size=0x10
    struct _KTHREAD * OwnerThread;// Offset=0x28 Size=0x8
    unsigned char Abandoned;// Offset=0x30 Size=0x1
    unsigned char ApcDisable;// Offset=0x31 Size=0x1
};

struct _MM_SYSTEM_PAGE_COUNTS// Size=0x10 (Id=1101)
{
    unsigned long SystemCodePage;// Offset=0x0 Size=0x4
    unsigned long SystemDriverPage;// Offset=0x4 Size=0x4
    long TotalSystemCodePages;// Offset=0x8 Size=0x4
    long TotalSystemDriverPages;// Offset=0xc Size=0x4
};

struct _MI_SYSTEM_IMAGE_STATE// Size=0xc0 (Id=857)
{
    struct _LIST_ENTRY FixupList;// Offset=0x0 Size=0x10
    struct _KMUTANT LoadLock;// Offset=0x10 Size=0x38
    long FixupLock;// Offset=0x48 Size=0x4
    unsigned char FirstLoadEver;// Offset=0x4c Size=0x1
    unsigned char LargePageAll;// Offset=0x4d Size=0x1
    unsigned long long LastPage;// Offset=0x50 Size=0x8
    struct _LIST_ENTRY LargePageList;// Offset=0x58 Size=0x10
    struct _LIST_ENTRY StrongCodeLoadFailureList;// Offset=0x68 Size=0x10
    struct _KLDR_DATA_TABLE_ENTRY * BeingDeleted;// Offset=0x78 Size=0x8
    struct _EX_PUSH_LOCK MappingRangesPushLock;// Offset=0x80 Size=0x8
    struct _MI_DRIVER_VA * MappingRanges[2];// Offset=0x88 Size=0x10
    unsigned long long PageCount;// Offset=0x98 Size=0x8
    struct _MM_SYSTEM_PAGE_COUNTS PageCounts;// Offset=0xa0 Size=0x10
    struct _EX_PUSH_LOCK CollidedLock;// Offset=0xb0 Size=0x8
    struct _RTL_AVL_TREE ImageTree;// Offset=0xb8 Size=0x8
};

struct _MMSESSION// Size=0x20 (Id=673)
{
    struct _EX_PUSH_LOCK SystemSpaceViewLock;// Offset=0x0 Size=0x8
    struct _EX_PUSH_LOCK * SystemSpaceViewLockPointer;// Offset=0x8 Size=0x8
    struct _RTL_AVL_TREE ViewRoot;// Offset=0x10 Size=0x8
    unsigned long ViewCount;// Offset=0x18 Size=0x4
    unsigned long BitmapFailures;// Offset=0x1c Size=0x4
};

struct _MI_HUGE_SYSTEM_VIEW_HEAD// Size=0x10 (Id=1321)
{
    struct _RTL_AVL_TREE ViewRoot;// Offset=0x0 Size=0x8
    unsigned long ViewCount;// Offset=0x8 Size=0x4
    long Lock;// Offset=0xc Size=0x4
};

struct _MI_SESSION_STATE// Size=0x1090 (Id=940)
{
    struct _MMSESSION SystemSession;// Offset=0x0 Size=0x20
    unsigned long DetachTimeStamp;// Offset=0x20 Size=0x4
    unsigned char CodePageEdited;// Offset=0x24 Size=0x1
    unsigned long * DynamicPoolBitBuffer;// Offset=0x28 Size=0x8
    unsigned long long * DynamicVaBitBuffer;// Offset=0x30 Size=0x8
    unsigned long long DynamicVaBitBufferPages;// Offset=0x38 Size=0x8
    void * DynamicVaStart;// Offset=0x40 Size=0x8
    void * ImageVaStart;// Offset=0x48 Size=0x8
    struct _MI_HUGE_SYSTEM_VIEW_HEAD SystemViewBuckets[256];// Offset=0x50 Size=0x1000
    unsigned long * DynamicPtesBitBuffer;// Offset=0x1050 Size=0x8
    struct _EX_PUSH_LOCK IdLock;// Offset=0x1058 Size=0x8
    struct _EPROCESS * LeaderProcess;// Offset=0x1060 Size=0x8
    struct _EX_PUSH_LOCK InitializeLock;// Offset=0x1068 Size=0x8
    struct _MMWSL_INSTANCE * WorkingSetList;// Offset=0x1070 Size=0x8
    void * SessionBase;// Offset=0x1078 Size=0x8
    void * SessionCore;// Offset=0x1080 Size=0x8
    struct _RTL_AVL_TREE SessionIdNodes;// Offset=0x1088 Size=0x8
};

struct _unnamed_31// Size=0x8 (Id=31)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=32)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_31 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _MI_PROCESS_STATE// Size=0x48 (Id=845)
{
    void * SystemDllBase;// Offset=0x0 Size=0x8
    unsigned long ColorSeed;// Offset=0x8 Size=0x4
    long RotatingUniprocessorNumber;// Offset=0xc Size=0x4
    union _LARGE_INTEGER CriticalSectionTimeout;// Offset=0x10 Size=0x8
    struct _LIST_ENTRY ProcessList;// Offset=0x18 Size=0x10
    struct _MMPTE * SharedUserDataPte[2];// Offset=0x28 Size=0x10
    void * HypervisorSharedVa;// Offset=0x38 Size=0x8
    unsigned long long VadSecureCookie;// Offset=0x40 Size=0x8
};

enum _MI_PFN_CACHE_ATTRIBUTE
{
    MiNonCached=0,
    MiCached=1,
    MiWriteCombined=2,
    MiNotMapped=3
};

struct _MI_ZERO_COST_COUNTS// Size=0x10 (Id=1530)
{
    unsigned long long NativeSum;// Offset=0x0 Size=0x8
    unsigned long long CachedSum;// Offset=0x8 Size=0x8
};

struct _MI_HARDWARE_STATE// Size=0x180 (Id=1496)
{
    unsigned long NodeMask;// Offset=0x0 Size=0x4
    unsigned long NumaLastRangeIndex;// Offset=0x4 Size=0x4
    unsigned char NumaTableCaptured;// Offset=0x8 Size=0x1
    unsigned char NodeShift;// Offset=0x9 Size=0x1
    unsigned char ChannelShift;// Offset=0xa Size=0x1
    wchar_t * NodeGraph;// Offset=0x10 Size=0x8
    struct _MI_SYSTEM_NODE_INFORMATION * SystemNodeInformation;// Offset=0x18 Size=0x8
    struct _HAL_NODE_RANGE * NumaMemoryRanges;// Offset=0x20 Size=0x8
    struct _HAL_CHANNEL_MEMORY_RANGES * ChannelMemoryRanges;// Offset=0x28 Size=0x8
    unsigned long SecondLevelCacheSize;// Offset=0x30 Size=0x4
    unsigned long FirstLevelCacheSize;// Offset=0x34 Size=0x4
    unsigned long PhysicalAddressBits;// Offset=0x38 Size=0x4
    unsigned char ProcessorCachesFlushedOnPowerLoss;// Offset=0x3c Size=0x1
    unsigned long long TotalPagesAllowed;// Offset=0x40 Size=0x8
    unsigned long SecondaryColorMask;// Offset=0x48 Size=0x4
    unsigned long SecondaryColors;// Offset=0x4c Size=0x4
    unsigned long FlushTbForAttributeChange;// Offset=0x50 Size=0x4
    unsigned long FlushCacheForAttributeChange;// Offset=0x54 Size=0x4
    unsigned long FlushCacheForPageAttributeChange;// Offset=0x58 Size=0x4
    unsigned long CacheFlushPromoteThreshold;// Offset=0x5c Size=0x4
    unsigned long long InvalidPteMask;// Offset=0x80 Size=0x8
    unsigned long LargePageColors[3];// Offset=0xc0 Size=0xc
    unsigned long long FlushTbThreshold;// Offset=0xd0 Size=0x8
    enum _MI_PFN_CACHE_ATTRIBUTE OptimalZeroingAttribute[4][4];// Offset=0xd8 Size=0x40
    unsigned char AttributeChangeRequiresReZero;// Offset=0x118 Size=0x1
    struct _MI_ZERO_COST_COUNTS ZeroCostCounts[2];// Offset=0x120 Size=0x20
    unsigned long long VsmKernelPageCount;// Offset=0x140 Size=0x8
    struct _RTL_AVL_TREE EnclaveRegions;// Offset=0x148 Size=0x8
    void * EnclaveMetadataPage;// Offset=0x150 Size=0x8
    struct _RTL_BITMAP * EnclaveMetadataBitMap;// Offset=0x158 Size=0x8
    struct _EX_PUSH_LOCK EnclaveMetadataEntryLock;// Offset=0x160 Size=0x8
    long EnclaveMetadataPageLock;// Offset=0x168 Size=0x4
};

struct _MI_DYNAMIC_BITMAP// Size=0x48 (Id=1298)
{
    struct _RTL_BITMAP_EX Bitmap;// Offset=0x0 Size=0x10
    unsigned long long MaximumSize;// Offset=0x10 Size=0x8
    unsigned long long Hint;// Offset=0x18 Size=0x8
    void * BaseVa;// Offset=0x20 Size=0x8
    unsigned long long SizeTopDown;// Offset=0x28 Size=0x8
    unsigned long long HintTopDown;// Offset=0x30 Size=0x8
    void * BaseVaTopDown;// Offset=0x38 Size=0x8
    unsigned long long SpinLock;// Offset=0x40 Size=0x8
};

struct _MMWSL_INSTANCE// Size=0x28 (Id=1052)
{
    struct _MMPTE * NextPteToTrim;// Offset=0x0 Size=0x8
    struct _MMPTE * NextPteToAge;// Offset=0x8 Size=0x8
    struct _MMPTE * NextPteToAccessClear;// Offset=0x10 Size=0x8
    unsigned long LastAccessClearingRemainder;// Offset=0x18 Size=0x4
    unsigned long LastAgingRemainder;// Offset=0x1c Size=0x4
    unsigned long long LockedEntries;// Offset=0x20 Size=0x8
};

struct _MI_SYSTEM_VA_STATE// Size=0x500 (Id=1144)
{
    unsigned long long SystemTablesLock;// Offset=0x0 Size=0x8
    unsigned long long AvailableSystemCacheVa;// Offset=0x8 Size=0x8
    struct _MI_DYNAMIC_BITMAP DynamicBitMapKernelStacks;// Offset=0x10 Size=0x48
    struct _MI_DYNAMIC_BITMAP DynamicBitMapSystemPtes;// Offset=0x58 Size=0x48
    struct _MI_DYNAMIC_BITMAP DynamicBitMapDriverImages[2];// Offset=0xa0 Size=0x90
    struct _MI_DYNAMIC_BITMAP DynamicBitMapPagedPool;// Offset=0x130 Size=0x48
    struct _MI_DYNAMIC_BITMAP DynamicBitMapSpecialPool[2];// Offset=0x178 Size=0x90
    struct _MI_DYNAMIC_BITMAP DynamicBitMapSystemCache;// Offset=0x208 Size=0x48
    void * HalPrivateVaStart;// Offset=0x250 Size=0x8
    unsigned long long HalPrivateVaSize;// Offset=0x258 Size=0x8
    unsigned long SystemVaAssignment[8];// Offset=0x260 Size=0x20
    unsigned long SystemVaAssignmentHint;// Offset=0x280 Size=0x4
    unsigned long TopLevelPteLockBits[32];// Offset=0x284 Size=0x80
    long DeleteKvaLock;// Offset=0x304 Size=0x4
    struct _MI_WSLE * WsleArrays[8];// Offset=0x308 Size=0x40
    struct _MI_HYPER_SPACE * PagableHyperSpace;// Offset=0x348 Size=0x8
    void * HyperSpaceEnd;// Offset=0x350 Size=0x8
    struct _KEVENT FreeSystemCacheVa;// Offset=0x358 Size=0x18
    unsigned long long SystemVaLock;// Offset=0x370 Size=0x8
    unsigned long long SystemCacheViewLock;// Offset=0x378 Size=0x8
    struct _MMWSL_INSTANCE SystemWorkingSetList[8];// Offset=0x380 Size=0x140
    unsigned long long SelfmapLock[4];// Offset=0x4c0 Size=0x20
};

struct _MI_COMBINE_STATE// Size=0x18 (Id=1372)
{
    long ActiveSpinLock;// Offset=0x0 Size=0x4
    unsigned long CombiningThreadCount;// Offset=0x4 Size=0x4
    struct _RTL_AVL_TREE ActiveThreadTree;// Offset=0x8 Size=0x8
    unsigned long long ZeroPageHashValue;// Offset=0x10 Size=0x8
};

struct _MI_PAGELIST_STATE// Size=0x28 (Id=1390)
{
    long ActiveSpinLock;// Offset=0x0 Size=0x4
    struct _RTL_AVL_TREE ActiveThreadTree;// Offset=0x8 Size=0x8
    long ActiveZeroSpinLock;// Offset=0x10 Size=0x4
    struct _RTL_AVL_TREE ActiveZeroThreadTree;// Offset=0x18 Size=0x8
    unsigned long NumberOfLargePageListHeads;// Offset=0x20 Size=0x4
};

struct _MI_PARTITION_STATE// Size=0x60 (Id=877)
{
    unsigned long long PartitionLock;// Offset=0x0 Size=0x8
    struct _EX_PUSH_LOCK PartitionIdLock;// Offset=0x8 Size=0x8
    unsigned long long InitialPartitionIdBits;// Offset=0x10 Size=0x8
    struct _LIST_ENTRY PartitionList;// Offset=0x18 Size=0x10
    struct _RTL_BITMAP * PartitionIdBitmap;// Offset=0x28 Size=0x8
    struct _RTL_BITMAP InitialPartitionIdBitmap;// Offset=0x30 Size=0x10
    struct _MI_PARTITION * TempPartitionPointers[1];// Offset=0x40 Size=0x8
    struct _MI_PARTITION ** Partition;// Offset=0x48 Size=0x8
    unsigned long long TotalPagesInChildPartitions;// Offset=0x50 Size=0x8
    unsigned long CrossPartitionDenials;// Offset=0x58 Size=0x4
    unsigned char MultiplePartitionsExist;// Offset=0x5c Size=0x1
};

struct _MI_RESUME_WORKITEM// Size=0x38 (Id=1685)
{
    struct _KEVENT ResumeCompleteEvent;// Offset=0x0 Size=0x18
    struct _WORK_QUEUE_ITEM WorkItem;// Offset=0x18 Size=0x20
};

struct _MI_SHUTDOWN_STATE// Size=0x78 (Id=1195)
{
    unsigned char CrashDumpInitialized;// Offset=0x0 Size=0x1
    unsigned char ConnectedStandbyActive;// Offset=0x1 Size=0x1
    unsigned char ZeroPageFileAtShutdown;// Offset=0x2 Size=0x1
    unsigned long SystemShutdown;// Offset=0x4 Size=0x4
    long ShutdownFlushInProgress;// Offset=0x8 Size=0x4
    unsigned long MirroringActive;// Offset=0xc Size=0x4
    struct _MI_RESUME_WORKITEM ResumeItem;// Offset=0x10 Size=0x38
    struct _ETHREAD * MirrorHoldsPfn;// Offset=0x48 Size=0x8
    struct _RTL_BITMAP_EX MirrorBitMaps[2];// Offset=0x50 Size=0x20
    struct _MMPTE * CrashDumpPte;// Offset=0x70 Size=0x8
};

struct _MI_BAD_MEMORY_EVENT_ENTRY// Size=0x38 (Id=1608)
{
    unsigned long BugCheckCode;// Offset=0x0 Size=0x4
    long Active;// Offset=0x4 Size=0x4
    unsigned long Data;// Offset=0x8 Size=0x4
    union _LARGE_INTEGER PhysicalAddress;// Offset=0x10 Size=0x8
    struct _WORK_QUEUE_ITEM WorkItem;// Offset=0x18 Size=0x20
};

struct _MI_PROBE_RAISE_TRACKER// Size=0x44 (Id=1665)
{
    unsigned long UserRangeInKernel;// Offset=0x0 Size=0x4
    unsigned long FaultFailed;// Offset=0x4 Size=0x4
    unsigned long WriteFaultFailed;// Offset=0x8 Size=0x4
    unsigned long LargePageFailed;// Offset=0xc Size=0x4
    unsigned long UserAccessToKernelPte;// Offset=0x10 Size=0x4
    unsigned long BadPageLocation;// Offset=0x14 Size=0x4
    unsigned long InsufficientCharge;// Offset=0x18 Size=0x4
    unsigned long PageTableCharge;// Offset=0x1c Size=0x4
    unsigned long NoPhysicalMapping;// Offset=0x20 Size=0x4
    unsigned long NoIoReference;// Offset=0x24 Size=0x4
    unsigned long ProbeFailed;// Offset=0x28 Size=0x4
    unsigned long PteIsZero;// Offset=0x2c Size=0x4
    unsigned long StrongCodeWrite;// Offset=0x30 Size=0x4
    unsigned long ReducedCloneCommitChargeFailed;// Offset=0x34 Size=0x4
    unsigned long CopyOnWriteAtDispatchNoPages;// Offset=0x38 Size=0x4
    unsigned long NoPageTablesAllowed;// Offset=0x3c Size=0x4
    unsigned long EnclavePageFailed;// Offset=0x40 Size=0x4
};

struct _MI_FORCED_COMMITS// Size=0x8 (Id=1637)
{
    unsigned long Regular;// Offset=0x0 Size=0x4
    unsigned long Wrap;// Offset=0x4 Size=0x4
};

struct _MI_RESAVAIL_FAILURES// Size=0x8 (Id=1657)
{
    unsigned long Wrap;// Offset=0x0 Size=0x4
    unsigned long NoCharge;// Offset=0x4 Size=0x4
};

struct _MI_ERROR_STATE// Size=0xc8 (Id=1502)
{
    struct _MI_BAD_MEMORY_EVENT_ENTRY BadMemoryEventEntry;// Offset=0x0 Size=0x38
    unsigned long long PageOfInterest;// Offset=0x38 Size=0x8
    struct _MI_PROBE_RAISE_TRACKER ProbeRaises;// Offset=0x40 Size=0x44
    struct _MI_FORCED_COMMITS ForcedCommits;// Offset=0x84 Size=0x8
    unsigned long WsleFailures[1];// Offset=0x8c Size=0x4
    unsigned long PageHashErrors;// Offset=0x90 Size=0x4
    unsigned long CheckZeroCount;// Offset=0x94 Size=0x4
    long ZeroedPageSingleBitErrorsDetected;// Offset=0x98 Size=0x4
    long BadPagesDetected;// Offset=0x9c Size=0x4
    long ScrubPasses;// Offset=0xa0 Size=0x4
    long ScrubBadPagesFound;// Offset=0xa4 Size=0x4
    unsigned long UserViewFailures;// Offset=0xa8 Size=0x4
    unsigned long UserViewCollisionFailures;// Offset=0xac Size=0x4
    unsigned long UserAllocateFailures;// Offset=0xb0 Size=0x4
    unsigned long UserAllocateCollisionFailures;// Offset=0xb4 Size=0x4
    struct _MI_RESAVAIL_FAILURES ResavailFailures;// Offset=0xb8 Size=0x8
    unsigned char PendingBadPages;// Offset=0xc0 Size=0x1
    unsigned char InitFailure;// Offset=0xc1 Size=0x1
    unsigned char StopBadMaps;// Offset=0xc2 Size=0x1
};

struct _MI_ACCESS_LOG_STATE// Size=0x80 (Id=1107)
{
    struct _MM_PAGE_ACCESS_INFO_HEADER * CcAccessLog;// Offset=0x0 Size=0x8
    struct _WORK_QUEUE_ITEM DisableAccessLogging;// Offset=0x8 Size=0x20
    unsigned long Enabled;// Offset=0x28 Size=0x4
    unsigned long MinLoggingPriority;// Offset=0x2c Size=0x4
    unsigned long long AccessLoggingLock;// Offset=0x40 Size=0x8
};

struct _MI_DEBUGGER_STATE// Size=0x118 (Id=1190)
{
    unsigned char TransientWrite;// Offset=0x0 Size=0x1
    unsigned char CodePageEdited;// Offset=0x1 Size=0x1
    struct _MMPTE * DebugPte;// Offset=0x8 Size=0x8
    unsigned long PoisonedTb;// Offset=0x10 Size=0x4
    long InDebugger;// Offset=0x14 Size=0x4
    void * Pfns[32];// Offset=0x18 Size=0x100
};

struct _unnamed_71// Size=0x10 (Id=71)
{
    struct // Size=0x10 (Id=0)
    {
        unsigned long long Depth:16;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x10
        unsigned long long Sequence:48;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x30
        unsigned long long Reserved:4;// Offset=0x8 Size=0x8 BitOffset=0x0 BitSize=0x4
        unsigned long long NextEntry:60;// Offset=0x8 Size=0x8 BitOffset=0x4 BitSize=0x3c
    };
};

union _SLIST_HEADER// Size=0x10 (Id=72)
{
    unsigned long long Alignment;// Offset=0x0 Size=0x8
    unsigned long long Region;// Offset=0x8 Size=0x8
    struct _unnamed_71 HeaderX64;// Offset=0x0 Size=0x10
};

struct _KDPC// Size=0x40 (Id=170)
{
    union // Size=0x4 (Id=0)
    {
        unsigned long TargetInfoAsUlong;// Offset=0x0 Size=0x4
        unsigned char Type;// Offset=0x0 Size=0x1
        unsigned char Importance;// Offset=0x1 Size=0x1
        unsigned short Number;// Offset=0x2 Size=0x2
    };
    struct _SINGLE_LIST_ENTRY DpcListEntry;// Offset=0x8 Size=0x8
    unsigned long long ProcessorHistory;// Offset=0x10 Size=0x8
    void  ( * DeferredRoutine)(struct _KDPC * ,void * ,void * ,void * );// Offset=0x18 Size=0x8
    void * DeferredContext;// Offset=0x20 Size=0x8
    void * SystemArgument1;// Offset=0x28 Size=0x8
    void * SystemArgument2;// Offset=0x30 Size=0x8
    void * DpcData;// Offset=0x38 Size=0x8
};

struct _MI_STANDBY_STATE// Size=0x90 (Id=1361)
{
    unsigned long long FirstDecayPage;// Offset=0x0 Size=0x8
    union _SLIST_HEADER PfnDecayFreeSList;// Offset=0x10 Size=0x10
    struct _MM_PAGE_ACCESS_INFO_HEADER * PfnRepurposeLog;// Offset=0x20 Size=0x8
    struct _KDPC AllocatePfnRepurposeDpc;// Offset=0x28 Size=0x40
    union _SLIST_HEADER PageHeatListSlist;// Offset=0x70 Size=0x10
    long PageHeatListDisableAllocation;// Offset=0x80 Size=0x4
};

enum _POOL_TYPE
{
    NonPagedPool=0,
    NonPagedPoolExecute=0,
    PagedPool=1,
    NonPagedPoolMustSucceed=2,
    DontUseThisType=3,
    NonPagedPoolCacheAligned=4,
    PagedPoolCacheAligned=5,
    NonPagedPoolCacheAlignedMustS=6,
    MaxPoolType=7,
    NonPagedPoolBase=0,
    NonPagedPoolBaseMustSucceed=2,
    NonPagedPoolBaseCacheAligned=4,
    NonPagedPoolBaseCacheAlignedMustS=6,
    NonPagedPoolSession=32,
    PagedPoolSession=33,
    NonPagedPoolMustSucceedSession=34,
    DontUseThisTypeSession=35,
    NonPagedPoolCacheAlignedSession=36,
    PagedPoolCacheAlignedSession=37,
    NonPagedPoolCacheAlignedMustSSession=38,
    NonPagedPoolNx=512,
    NonPagedPoolNxCacheAligned=516,
    NonPagedPoolSessionNx=544
};

struct _GENERAL_LOOKASIDE// Size=0x80 (Id=90)
{
    union // Size=0x10 (Id=0)
    {
        union _SLIST_HEADER ListHead;// Offset=0x0 Size=0x10
        struct _SINGLE_LIST_ENTRY SingleListHead;// Offset=0x0 Size=0x8
        unsigned short Depth;// Offset=0x10 Size=0x2
    };
    unsigned short MaximumDepth;// Offset=0x12 Size=0x2
    unsigned long TotalAllocates;// Offset=0x14 Size=0x4
    union // Size=0x4 (Id=0)
    {
        unsigned long AllocateMisses;// Offset=0x18 Size=0x4
        unsigned long AllocateHits;// Offset=0x18 Size=0x4
    };
    unsigned long TotalFrees;// Offset=0x1c Size=0x4
    union // Size=0x4 (Id=0)
    {
        unsigned long FreeMisses;// Offset=0x20 Size=0x4
        unsigned long FreeHits;// Offset=0x20 Size=0x4
    };
    enum _POOL_TYPE Type;// Offset=0x24 Size=0x4
    unsigned long Tag;// Offset=0x28 Size=0x4
    unsigned long Size;// Offset=0x2c Size=0x4
    union // Size=0x8 (Id=0)
    {
        void *  ( * AllocateEx)(enum _POOL_TYPE ,unsigned long long ,unsigned long ,struct _LOOKASIDE_LIST_EX * );// Offset=0x30 Size=0x8
        void *  ( * Allocate)(enum _POOL_TYPE ,unsigned long long ,unsigned long );// Offset=0x30 Size=0x8
    };
    union // Size=0x8 (Id=0)
    {
        void  ( * FreeEx)(void * ,struct _LOOKASIDE_LIST_EX * );// Offset=0x38 Size=0x8
        void  ( * Free)(void * );// Offset=0x38 Size=0x8
    };
    struct _LIST_ENTRY ListEntry;// Offset=0x40 Size=0x10
    unsigned long LastTotalAllocates;// Offset=0x50 Size=0x4
    union // Size=0x4 (Id=0)
    {
        unsigned long LastAllocateMisses;// Offset=0x54 Size=0x4
        unsigned long LastAllocateHits;// Offset=0x54 Size=0x4
    };
    unsigned long Future[2];// Offset=0x58 Size=0x8
};

struct _NPAGED_LOOKASIDE_LIST// Size=0x80 (Id=76)
{
    struct _GENERAL_LOOKASIDE L;// Offset=0x0 Size=0x80
};

enum _MI_SYSTEM_VA_TYPE
{
    MiVaUnused=0,
    MiVaSessionSpace=1,
    MiVaProcessSpace=2,
    MiVaBootLoaded=3,
    MiVaPfnDatabase=4,
    MiVaNonPagedPool=5,
    MiVaPagedPool=6,
    MiVaSpecialPoolPaged=7,
    MiVaSystemCache=8,
    MiVaSystemPtes=9,
    MiVaHal=10,
    MiVaSessionGlobalSpace=11,
    MiVaDriverImages=12,
    MiVaSpecialPoolNonPaged=13,
    MiVaSystemPtesLarge=14,
    MiVaKernelStacks=15,
    MiVaMaximumType=16
};

struct _MI_SYSTEM_PTE_TYPE// Size=0x60 (Id=254)
{
    struct _RTL_BITMAP_EX Bitmap;// Offset=0x0 Size=0x10
    struct _MMPTE * BasePte;// Offset=0x10 Size=0x8
    unsigned long Flags;// Offset=0x18 Size=0x4
    enum _MI_SYSTEM_VA_TYPE VaType;// Offset=0x1c Size=0x4
    unsigned long * FailureCount;// Offset=0x20 Size=0x8
    unsigned long PteFailures;// Offset=0x28 Size=0x4
    union // Size=0x8 (Id=0)
    {
        unsigned long long SpinLock;// Offset=0x30 Size=0x8
        struct _EX_PUSH_LOCK * GlobalPushLock;// Offset=0x30 Size=0x8
    };
    unsigned long long TotalSystemPtes;// Offset=0x38 Size=0x8
    unsigned long long Hint;// Offset=0x40 Size=0x8
    unsigned long long LowestBitEverAllocated;// Offset=0x48 Size=0x8
    struct _MI_CACHED_PTES * CachedPtes;// Offset=0x50 Size=0x8
    unsigned long long TotalFreeSystemPtes;// Offset=0x58 Size=0x8
};

struct _MI_ULTRA_VA_CONTEXT// Size=0x40 (Id=1158)
{
    unsigned long long Lock;// Offset=0x0 Size=0x8
    void * ZeroMapping;// Offset=0x8 Size=0x8
    unsigned long long AllocationHintBit;// Offset=0x10 Size=0x8
    struct _RTL_BITMAP_EX Bitmap[2];// Offset=0x18 Size=0x20
    long ConcurrencyMaximum;// Offset=0x38 Size=0x4
    long ConcurrencyCount;// Offset=0x3c Size=0x4
};

struct _MI_SYSTEM_PTE_STATE// Size=0x200 (Id=1117)
{
    struct _NPAGED_LOOKASIDE_LIST MdlTrackerLookaside;// Offset=0x0 Size=0x80
    union _SLIST_HEADER DeadPteTrackerSListHead;// Offset=0x80 Size=0x10
    unsigned long long PteTrackerLock;// Offset=0x90 Size=0x8
    struct _RTL_BITMAP_EX PteTrackingBitmap;// Offset=0x98 Size=0x10
    struct _MI_CACHED_PTES * CachedPteHeads;// Offset=0xa8 Size=0x8
    struct _MI_CACHED_PTES * CachedKernelStackPteHeads;// Offset=0xb0 Size=0x8
    struct _MI_SYSTEM_PTE_TYPE SystemViewPteInfo;// Offset=0xb8 Size=0x60
    struct _MI_SYSTEM_PTE_TYPE KernelStackPteInfo;// Offset=0x118 Size=0x60
    unsigned long StackGrowthFailures;// Offset=0x178 Size=0x4
    unsigned char KernelStackPages;// Offset=0x17c Size=0x1
    unsigned char TrackPtesAborted;// Offset=0x17d Size=0x1
    unsigned char AdjustCounter;// Offset=0x17e Size=0x1
    long ReservedMappingLock;// Offset=0x180 Size=0x4
    struct _RTL_AVL_TREE ReservedMappingTree;// Offset=0x188 Size=0x8
    struct _MMPFN * ReservedMappingPageTablePfns;// Offset=0x190 Size=0x8
    struct _RTL_AVL_TREE OutswappedKernelStackRoot;// Offset=0x198 Size=0x8
    long OutswappedKernelStackLock;// Offset=0x1a0 Size=0x4
    struct _MI_ULTRA_VA_CONTEXT UltraSpaceContext;// Offset=0x1a8 Size=0x40
    unsigned long NumberOfUltraMdlMaps;// Offset=0x1e8 Size=0x4
    struct _MI_ULTRA_MDL_NODE * UltraMdlNodeMappings;// Offset=0x1f0 Size=0x8
};

struct _MI_IO_CACHE_STATS// Size=0x28 (Id=1727)
{
    unsigned long long UnusedBlocks;// Offset=0x0 Size=0x8
    unsigned long ActiveCacheMatch;// Offset=0x8 Size=0x4
    unsigned long ActiveCacheOverride;// Offset=0xc Size=0x4
    unsigned long UnmappedCacheFlush;// Offset=0x10 Size=0x4
    unsigned long UnmappedCacheMatch;// Offset=0x14 Size=0x4
    unsigned long UnmappedCacheConflict;// Offset=0x18 Size=0x4
    unsigned long PermanentIoAttributeConflict;// Offset=0x1c Size=0x4
    unsigned long PermanentIoNodeConflict;// Offset=0x20 Size=0x4
};

struct _MI_IO_PAGE_STATE// Size=0x68 (Id=1642)
{
    long IoPfnLock;// Offset=0x0 Size=0x4
    struct _RTL_AVL_TREE IoPfnRoot[3];// Offset=0x8 Size=0x18
    struct _LIST_ENTRY UnusedCachedMaps;// Offset=0x20 Size=0x10
    unsigned long OldestCacheFlushTimeStamp;// Offset=0x30 Size=0x4
    struct _MI_IO_CACHE_STATS IoCacheStats;// Offset=0x38 Size=0x28
    struct _RTL_AVL_TREE InvariantIoSpace;// Offset=0x60 Size=0x8
};

struct _MI_PAGING_IO_STATE// Size=0x50 (Id=1356)
{
    struct _RTL_AVL_TREE PageFileHead;// Offset=0x0 Size=0x8
    long PageFileHeadSpinLock;// Offset=0x8 Size=0x4
    long PrefetchSeekThreshold;// Offset=0xc Size=0x4
    union _SLIST_HEADER InPageSupportSListHead[2];// Offset=0x10 Size=0x20
    unsigned char InPageSupportSListMinimum[2];// Offset=0x30 Size=0x2
    unsigned long InPageSinglePages;// Offset=0x34 Size=0x4
    long DelayPageFaults;// Offset=0x38 Size=0x4
    unsigned long FileCompressionBoundary;// Offset=0x3c Size=0x4
    unsigned char MdlsAdjusted;// Offset=0x40 Size=0x1
};

struct _MMPTE_HARDWARE// Size=0x8 (Id=696)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Valid:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long Dirty1:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long Owner:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long WriteThrough:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long CacheDisable:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long Accessed:1;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x1
        unsigned long long Dirty:1;// Offset=0x0 Size=0x8 BitOffset=0x6 BitSize=0x1
        unsigned long long LargePage:1;// Offset=0x0 Size=0x8 BitOffset=0x7 BitSize=0x1
        unsigned long long Global:1;// Offset=0x0 Size=0x8 BitOffset=0x8 BitSize=0x1
        unsigned long long CopyOnWrite:1;// Offset=0x0 Size=0x8 BitOffset=0x9 BitSize=0x1
        unsigned long long Unused:1;// Offset=0x0 Size=0x8 BitOffset=0xa BitSize=0x1
        unsigned long long Write:1;// Offset=0x0 Size=0x8 BitOffset=0xb BitSize=0x1
        unsigned long long PageFrameNumber:36;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0x24
        unsigned long long ReservedForHardware:4;// Offset=0x0 Size=0x8 BitOffset=0x30 BitSize=0x4
        unsigned long long ReservedForSoftware:4;// Offset=0x0 Size=0x8 BitOffset=0x34 BitSize=0x4
        unsigned long long WsleAge:4;// Offset=0x0 Size=0x8 BitOffset=0x38 BitSize=0x4
        unsigned long long WsleProtection:3;// Offset=0x0 Size=0x8 BitOffset=0x3c BitSize=0x3
        unsigned long long NoExecute:1;// Offset=0x0 Size=0x8 BitOffset=0x3f BitSize=0x1
    };
};

struct _MMPTE_PROTOTYPE// Size=0x8 (Id=1130)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Valid:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long DemandFillProto:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long HiberVerifyConverted:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long ReadOnly:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long SwizzleBit:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long Protection:5;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x5
        unsigned long long Prototype:1;// Offset=0x0 Size=0x8 BitOffset=0xa BitSize=0x1
        unsigned long long Combined:1;// Offset=0x0 Size=0x8 BitOffset=0xb BitSize=0x1
        unsigned long long Unused1:4;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0x4
        long long ProtoAddress:48;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x30
    };
};

struct _MMPTE_SOFTWARE// Size=0x8 (Id=955)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Valid:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long PageFileReserved:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long PageFileAllocated:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long ColdPage:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long SwizzleBit:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long Protection:5;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x5
        unsigned long long Prototype:1;// Offset=0x0 Size=0x8 BitOffset=0xa BitSize=0x1
        unsigned long long Transition:1;// Offset=0x0 Size=0x8 BitOffset=0xb BitSize=0x1
        unsigned long long PageFileLow:4;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0x4
        unsigned long long UsedPageTableEntries:10;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0xa
        unsigned long long ShadowStack:1;// Offset=0x0 Size=0x8 BitOffset=0x1a BitSize=0x1
        unsigned long long Unused:5;// Offset=0x0 Size=0x8 BitOffset=0x1b BitSize=0x5
        unsigned long long PageFileHigh:32;// Offset=0x0 Size=0x8 BitOffset=0x20 BitSize=0x20
    };
};

struct _MMPTE_TIMESTAMP// Size=0x8 (Id=1215)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long MustBeZero:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long Unused:3;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x3
        unsigned long long SwizzleBit:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long Protection:5;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x5
        unsigned long long Prototype:1;// Offset=0x0 Size=0x8 BitOffset=0xa BitSize=0x1
        unsigned long long Transition:1;// Offset=0x0 Size=0x8 BitOffset=0xb BitSize=0x1
        unsigned long long PageFileLow:4;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0x4
        unsigned long long Reserved:16;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x10
        unsigned long long GlobalTimeStamp:32;// Offset=0x0 Size=0x8 BitOffset=0x20 BitSize=0x20
    };
};

struct _MMPTE_TRANSITION// Size=0x8 (Id=1512)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Valid:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long Write:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long Spare:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long IoTracker:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long SwizzleBit:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long Protection:5;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x5
        unsigned long long Prototype:1;// Offset=0x0 Size=0x8 BitOffset=0xa BitSize=0x1
        unsigned long long Transition:1;// Offset=0x0 Size=0x8 BitOffset=0xb BitSize=0x1
        unsigned long long PageFrameNumber:36;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0x24
        unsigned long long Unused:16;// Offset=0x0 Size=0x8 BitOffset=0x30 BitSize=0x10
    };
};

struct _MMPTE_SUBSECTION// Size=0x8 (Id=690)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Valid:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long Unused0:3;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x3
        unsigned long long SwizzleBit:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long Protection:5;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x5
        unsigned long long Prototype:1;// Offset=0x0 Size=0x8 BitOffset=0xa BitSize=0x1
        unsigned long long ColdPage:1;// Offset=0x0 Size=0x8 BitOffset=0xb BitSize=0x1
        unsigned long long Unused1:3;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0x3
        unsigned long long ExecutePrivilege:1;// Offset=0x0 Size=0x8 BitOffset=0xf BitSize=0x1
        long long SubsectionAddress:48;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x30
    };
};

struct _MMPTE_LIST// Size=0x8 (Id=1303)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Valid:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long OneEntry:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long filler0:2;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x2
        unsigned long long SwizzleBit:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long Protection:5;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x5
        unsigned long long Prototype:1;// Offset=0x0 Size=0x8 BitOffset=0xa BitSize=0x1
        unsigned long long Transition:1;// Offset=0x0 Size=0x8 BitOffset=0xb BitSize=0x1
        unsigned long long filler1:16;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0x10
        unsigned long long NextEntry:36;// Offset=0x0 Size=0x8 BitOffset=0x1c BitSize=0x24
    };
};

union _unnamed_226// Size=0x8 (Id=226)
{
    unsigned long long Long;// Offset=0x0 Size=0x8
    unsigned long long VolatileLong;// Offset=0x0 Size=0x8
    struct _MMPTE_HARDWARE Hard;// Offset=0x0 Size=0x8
    struct _MMPTE_PROTOTYPE Proto;// Offset=0x0 Size=0x8
    struct _MMPTE_SOFTWARE Soft;// Offset=0x0 Size=0x8
    struct _MMPTE_TIMESTAMP TimeStamp;// Offset=0x0 Size=0x8
    struct _MMPTE_TRANSITION Trans;// Offset=0x0 Size=0x8
    struct _MMPTE_SUBSECTION Subsect;// Offset=0x0 Size=0x8
    struct _MMPTE_LIST List;// Offset=0x0 Size=0x8
};

struct _MMPTE// Size=0x8 (Id=227)
{
    union _unnamed_226 u;// Offset=0x0 Size=0x8
};

struct _MI_COMMON_PAGE_STATE// Size=0xa8 (Id=1504)
{
    struct _MMPFN * PageOfOnesPfn;// Offset=0x0 Size=0x8
    unsigned long long PageOfOnes;// Offset=0x8 Size=0x8
    struct _MMPFN * DummyPagePfn;// Offset=0x10 Size=0x8
    unsigned long long DummyPage;// Offset=0x18 Size=0x8
    unsigned long long PageOfZeroes;// Offset=0x20 Size=0x8
    void * ZeroMapping;// Offset=0x28 Size=0x8
    void * OnesMapping;// Offset=0x30 Size=0x8
    unsigned long long ZeroCrc;// Offset=0x38 Size=0x8
    unsigned long long OnesCrc;// Offset=0x40 Size=0x8
    unsigned long long BitmapGapFrames[4];// Offset=0x48 Size=0x20
    unsigned long long PfnGapFrames[4];// Offset=0x68 Size=0x20
    unsigned long long PageTableOfZeroes;// Offset=0x88 Size=0x8
    struct _MMPTE PdeOfZeroes;// Offset=0x90 Size=0x8
    unsigned long long PageTableOfOnes;// Offset=0x98 Size=0x8
    struct _MMPTE PdeOfOnes;// Offset=0xa0 Size=0x8
};

struct _MI_SYSTEM_TRIM_STATE// Size=0x40 (Id=1090)
{
    unsigned long long ExpansionLock;// Offset=0x0 Size=0x8
    long TrimInProgressCount;// Offset=0x8 Size=0x4
    struct _KEVENT PeriodicWorkingSetEvent;// Offset=0x10 Size=0x18
    unsigned long TrimAllPageFaultCount[3];// Offset=0x28 Size=0xc
};

struct _MI_PTE_CHAIN_HEAD// Size=0x18 (Id=795)
{
    struct _MMPTE Flink;// Offset=0x0 Size=0x8
    struct _MMPTE Blink;// Offset=0x8 Size=0x8
    struct _MMPTE * PteBase;// Offset=0x10 Size=0x8
};

struct _MI_SPECIAL_POOL// Size=0x40 (Id=709)
{
    unsigned long long Lock;// Offset=0x0 Size=0x8
    struct _MI_PTE_CHAIN_HEAD Paged;// Offset=0x8 Size=0x18
    struct _MI_PTE_CHAIN_HEAD NonPaged;// Offset=0x20 Size=0x18
    unsigned long long PagesInUse;// Offset=0x38 Size=0x8
};

struct _MM_PAGED_POOL_INFO// Size=0x38 (Id=762)
{
    struct _EX_PUSH_LOCK Lock;// Offset=0x0 Size=0x8
    struct _RTL_BITMAP_EX PagedPoolAllocationMap;// Offset=0x8 Size=0x10
    struct _MMPTE * FirstPteForPagedPool;// Offset=0x18 Size=0x8
    unsigned long long MaximumSize;// Offset=0x20 Size=0x8
    unsigned long long PagedPoolHint;// Offset=0x28 Size=0x8
    unsigned long long AllocatedPagedPool;// Offset=0x30 Size=0x8
};

struct _MMSUPPORT_FLAGS// Size=0x4 (Id=1292)
{
    union // Size=0x2 (Id=0)
    {
        struct // Size=0x2 (Id=0)
        {
            unsigned char WorkingSetType:3;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x3
            unsigned char Reserved0:3;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x3
            unsigned char MaximumWorkingSetHard:1;// Offset=0x0 Size=0x1 BitOffset=0x6 BitSize=0x1
            unsigned char MinimumWorkingSetHard:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
            unsigned char SessionMaster:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char TrimmerState:2;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x2
            unsigned char Reserved:1;// Offset=0x1 Size=0x1 BitOffset=0x3 BitSize=0x1
            unsigned char PageStealers:4;// Offset=0x1 Size=0x1 BitOffset=0x4 BitSize=0x4
        };
        unsigned short u1;// Offset=0x0 Size=0x2
    };
    unsigned char MemoryPriority;// Offset=0x2 Size=0x1
    union // Size=0x1 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            unsigned char WsleDeleted:1;// Offset=0x3 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char SvmEnabled:1;// Offset=0x3 Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char ForceAge:1;// Offset=0x3 Size=0x1 BitOffset=0x2 BitSize=0x1
            unsigned char ForceTrim:1;// Offset=0x3 Size=0x1 BitOffset=0x3 BitSize=0x1
            unsigned char NewMaximum:1;// Offset=0x3 Size=0x1 BitOffset=0x4 BitSize=0x1
            unsigned char CommitReleaseState:2;// Offset=0x3 Size=0x1 BitOffset=0x5 BitSize=0x2
        };
        unsigned char u2;// Offset=0x3 Size=0x1
    };
};

struct _MMSUPPORT_INSTANCE// Size=0xc0 (Id=1120)
{
    unsigned long NextPageColor;// Offset=0x0 Size=0x4
    unsigned long PageFaultCount;// Offset=0x4 Size=0x4
    unsigned long long TrimmedPageCount;// Offset=0x8 Size=0x8
    struct _MMWSL_INSTANCE * VmWorkingSetList;// Offset=0x10 Size=0x8
    struct _LIST_ENTRY WorkingSetExpansionLinks;// Offset=0x18 Size=0x10
    unsigned long long AgeDistribution[8];// Offset=0x28 Size=0x40
    struct _KGATE * ExitOutswapGate;// Offset=0x68 Size=0x8
    unsigned long long MinimumWorkingSetSize;// Offset=0x70 Size=0x8
    unsigned long long WorkingSetLeafSize;// Offset=0x78 Size=0x8
    unsigned long long WorkingSetLeafPrivateSize;// Offset=0x80 Size=0x8
    unsigned long long WorkingSetSize;// Offset=0x88 Size=0x8
    unsigned long long WorkingSetPrivateSize;// Offset=0x90 Size=0x8
    unsigned long long MaximumWorkingSetSize;// Offset=0x98 Size=0x8
    unsigned long long PeakWorkingSetSize;// Offset=0xa0 Size=0x8
    unsigned long HardFaultCount;// Offset=0xa8 Size=0x4
    unsigned short LastTrimStamp;// Offset=0xac Size=0x2
    unsigned short PartitionId;// Offset=0xae Size=0x2
    unsigned long long SelfmapLock;// Offset=0xb0 Size=0x8
    struct _MMSUPPORT_FLAGS Flags;// Offset=0xb8 Size=0x4
};

struct _MMSUPPORT_SHARED// Size=0x50 (Id=1149)
{
    long WorkingSetLock;// Offset=0x0 Size=0x4
    long GoodCitizenWaiting;// Offset=0x4 Size=0x4
    unsigned long long ReleasedCommitDebt;// Offset=0x8 Size=0x8
    unsigned long long ResetPagesRepurposedCount;// Offset=0x10 Size=0x8
    void * WsSwapSupport;// Offset=0x18 Size=0x8
    void * CommitReleaseContext;// Offset=0x20 Size=0x8
    long WorkingSetCoreLock;// Offset=0x28 Size=0x4
    void * AccessLog;// Offset=0x30 Size=0x8
    unsigned long long ChargedWslePages;// Offset=0x38 Size=0x8
    unsigned long long ActualWslePages;// Offset=0x40 Size=0x8
    void * ShadowMapping;// Offset=0x48 Size=0x8
};

struct _MMSUPPORT_FULL// Size=0x110 (Id=843)
{
    struct _MMSUPPORT_INSTANCE Instance;// Offset=0x0 Size=0xc0
    struct _MMSUPPORT_SHARED Shared;// Offset=0xc0 Size=0x50
};

struct _MMSUPPORT_AGGREGATION// Size=0x20 (Id=846)
{
    unsigned long PageFaultCount;// Offset=0x0 Size=0x4
    unsigned long long WorkingSetSize;// Offset=0x8 Size=0x8
    unsigned long long WorkingSetLeafSize;// Offset=0x10 Size=0x8
    unsigned long long PeakWorkingSetSize;// Offset=0x18 Size=0x8
};

struct _SYSPTES_HEADER// Size=0x118 (Id=1501)
{
    struct _LIST_ENTRY ListHead[16];// Offset=0x0 Size=0x100
    unsigned long long Count;// Offset=0x100 Size=0x8
    unsigned long long NumberOfEntries;// Offset=0x108 Size=0x8
    unsigned long long NumberOfEntriesPeak;// Offset=0x110 Size=0x8
};

struct _MI_SYSTEM_VA_ASSIGNMENT// Size=0x10 (Id=1757)
{
    void * BaseAddress;// Offset=0x0 Size=0x8
    unsigned long long NumberOfBytes;// Offset=0x8 Size=0x8
};

struct _MI_VISIBLE_STATE// Size=0xc40 (Id=1589)
{
    struct _MI_SPECIAL_POOL SpecialPool;// Offset=0x0 Size=0x40
    struct _LIST_ENTRY SessionWsList;// Offset=0x40 Size=0x10
    struct _RTL_BITMAP * SessionIdBitmap;// Offset=0x50 Size=0x8
    struct _MM_PAGED_POOL_INFO PagedPoolInfo;// Offset=0x58 Size=0x38
    unsigned long long MaximumNonPagedPoolInPages;// Offset=0x90 Size=0x8
    unsigned long long SizeOfPagedPoolInPages;// Offset=0x98 Size=0x8
    struct _MI_SYSTEM_PTE_TYPE SystemPteInfo;// Offset=0xa0 Size=0x60
    unsigned long long NonPagedPoolCommit;// Offset=0x100 Size=0x8
    unsigned long long SmallNonPagedPtesCommit;// Offset=0x108 Size=0x8
    unsigned long long BootCommit;// Offset=0x110 Size=0x8
    unsigned long long MdlPagesAllocated;// Offset=0x118 Size=0x8
    unsigned long long SystemPageTableCommit;// Offset=0x120 Size=0x8
    unsigned long long SpecialPagesInUse;// Offset=0x128 Size=0x8
    unsigned long long ProcessCommit;// Offset=0x130 Size=0x8
    long DriverCommit;// Offset=0x138 Size=0x4
    unsigned long long PfnDatabaseCommit;// Offset=0x140 Size=0x8
    struct _MMSUPPORT_FULL SystemWs[6];// Offset=0x180 Size=0x660
    struct _MMSUPPORT_SHARED SystemCacheShared;// Offset=0x800 Size=0x50
    struct _MMSUPPORT_AGGREGATION AggregateSystemWs[1];// Offset=0x880 Size=0x20
    unsigned long MapCacheFailures;// Offset=0x8a0 Size=0x4
    unsigned long long PagefileHashPages;// Offset=0x8a8 Size=0x8
    struct _SYSPTES_HEADER PteHeader;// Offset=0x8b0 Size=0x118
    struct _MI_SPECIAL_POOL * SessionSpecialPool;// Offset=0x9c8 Size=0x8
    unsigned long long SystemVaTypeCount[16];// Offset=0x9d0 Size=0x80
    unsigned char SystemVaType[256];// Offset=0xa50 Size=0x100
    struct _MI_SYSTEM_VA_ASSIGNMENT SystemVaRegions[14];// Offset=0xb50 Size=0xe0
};

struct _MI_SYSTEM_INFORMATION// Size=0x3100 (Id=821)
{
    struct _MI_POOL_STATE Pools;// Offset=0x0 Size=0x148
    struct _MI_SECTION_STATE Sections;// Offset=0x180 Size=0x2c0
    struct _MI_SYSTEM_IMAGE_STATE SystemImages;// Offset=0x440 Size=0xc0
    struct _MI_SESSION_STATE Sessions;// Offset=0x500 Size=0x1090
    struct _MI_PROCESS_STATE Processes;// Offset=0x1590 Size=0x48
    struct _MI_HARDWARE_STATE Hardware;// Offset=0x1600 Size=0x180
    struct _MI_SYSTEM_VA_STATE SystemVa;// Offset=0x1780 Size=0x500
    struct _MI_COMBINE_STATE PageCombines;// Offset=0x1c80 Size=0x18
    struct _MI_PAGELIST_STATE PageLists;// Offset=0x1c98 Size=0x28
    struct _MI_PARTITION_STATE Partitions;// Offset=0x1cc0 Size=0x60
    struct _MI_SHUTDOWN_STATE Shutdowns;// Offset=0x1d20 Size=0x78
    struct _MI_ERROR_STATE Errors;// Offset=0x1d98 Size=0xc8
    struct _MI_ACCESS_LOG_STATE AccessLog;// Offset=0x1e80 Size=0x80
    struct _MI_DEBUGGER_STATE Debugger;// Offset=0x1f00 Size=0x118
    struct _MI_STANDBY_STATE Standby;// Offset=0x2020 Size=0x90
    struct _MI_SYSTEM_PTE_STATE SystemPtes;// Offset=0x20c0 Size=0x200
    struct _MI_IO_PAGE_STATE IoPages;// Offset=0x22c0 Size=0x68
    struct _MI_PAGING_IO_STATE PagingIo;// Offset=0x2330 Size=0x50
    struct _MI_COMMON_PAGE_STATE CommonPages;// Offset=0x2380 Size=0xa8
    struct _MI_SYSTEM_TRIM_STATE Trims;// Offset=0x2440 Size=0x40
    unsigned long long Cookie;// Offset=0x2480 Size=0x8
    void ** BootRegistryRuns;// Offset=0x2488 Size=0x8
    long ZeroingDisabled;// Offset=0x2490 Size=0x4
    unsigned char FullyInitialized;// Offset=0x2494 Size=0x1
    unsigned char SafeBooted;// Offset=0x2495 Size=0x1
    struct _TlgProvider_t * TraceLogging;// Offset=0x2498 Size=0x8
    struct _MI_VISIBLE_STATE Vs;// Offset=0x24c0 Size=0xc40
};
