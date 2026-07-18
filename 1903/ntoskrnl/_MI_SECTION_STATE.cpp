struct _RTL_AVL_TREE// Size=0x8 (Id=40)
{
    struct _RTL_BALANCED_NODE * Root;// Offset=0x0 Size=0x8
};

struct _EX_PUSH_LOCK// Size=0x8 (Id=92)
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

struct _MMSUBSECTION_FLAGS// Size=0x4 (Id=1535)
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

union _anonymous_810// Size=0x4 (Id=810)
{
    unsigned long LongFlags;// Offset=0x0 Size=0x4
    struct _MMSUBSECTION_FLAGS SubsectionFlags;// Offset=0x0 Size=0x4
};

struct _MI_SUBSECTION_ENTRY1// Size=0x4 (Id=1000)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long CrossPartitionReferences:30;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1e
        unsigned long SubsectionMappedLarge:2;// Offset=0x0 Size=0x4 BitOffset=0x1e BitSize=0x2
    };
};

union _anonymous_811// Size=0x4 (Id=811)
{
    struct _MI_SUBSECTION_ENTRY1 e1;// Offset=0x0 Size=0x4
    unsigned long EntireField;// Offset=0x0 Size=0x4
};

struct _SUBSECTION// Size=0x38 (Id=812)
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
    union _anonymous_810 u;// Offset=0x20 Size=0x4
    unsigned long StartingSector;// Offset=0x24 Size=0x4
    unsigned long NumberOfFullSectors;// Offset=0x28 Size=0x4
    unsigned long PtesInSubsection;// Offset=0x2c Size=0x4
    union _anonymous_811 u1;// Offset=0x30 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long UnusedPtes:30;// Offset=0x34 Size=0x4 BitOffset=0x0 BitSize=0x1e
        unsigned long ExtentQueryNeeded:1;// Offset=0x34 Size=0x4 BitOffset=0x1e BitSize=0x1
        unsigned long DirtyPages:1;// Offset=0x34 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
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

struct _LIST_ENTRY// Size=0x10 (Id=22)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _anonymous_1080// Size=0x8 (Id=1080)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long AllocationType:3;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x3
        unsigned long long Inserted:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
    };
};

struct _anonymous_1081// Size=0x8 (Id=1081)
{
    unsigned long long PrototypePtesFlags;// Offset=0x0 Size=0x8
};

union _anonymous_1082// Size=0x8 (Id=1082)
{
    struct _anonymous_1080 e1;// Offset=0x0 Size=0x8
    struct _anonymous_1081 e2;// Offset=0x0 Size=0x8
};

struct _MI_PROTOTYPE_PTES_NODE// Size=0x20 (Id=1083)
{
    struct _RTL_BALANCED_NODE Node;// Offset=0x0 Size=0x18
    union _anonymous_1082 u1;// Offset=0x18 Size=0x8
};

struct _MSUBSECTION// Size=0x90 (Id=1681)
{
    struct _SUBSECTION Core;// Offset=0x0 Size=0x38
    struct _RTL_BALANCED_NODE SubsectionNode;// Offset=0x38 Size=0x18
    struct _LIST_ENTRY DereferenceList;// Offset=0x50 Size=0x10
    unsigned long long NumberOfMappedViews;// Offset=0x60 Size=0x8
    unsigned long NumberOfPfnReferences;// Offset=0x68 Size=0x4
    unsigned long LargeViews;// Offset=0x6c Size=0x4
    struct _MI_PROTOTYPE_PTES_NODE ProtosNode;// Offset=0x70 Size=0x20
};

struct _MMSECTION_FLAGS// Size=0x4 (Id=656)
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
        unsigned long PreferredNode:6;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x6
        unsigned int GlobalOnlyPerSession:1;// Offset=0x0 Size=0x4 BitOffset=0x1a BitSize=0x1
        unsigned int UserWritable:1;// Offset=0x0 Size=0x4 BitOffset=0x1b BitSize=0x1
        unsigned int SystemVaAllocated:1;// Offset=0x0 Size=0x4 BitOffset=0x1c BitSize=0x1
        unsigned int PreferredFsCompressionBoundary:1;// Offset=0x0 Size=0x4 BitOffset=0x1d BitSize=0x1
        unsigned int UsingFileExtents:1;// Offset=0x0 Size=0x4 BitOffset=0x1e BitSize=0x1
        unsigned int PageSize64K:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
};

union _anonymous_297// Size=0x4 (Id=297)
{
    unsigned long LongFlags;// Offset=0x0 Size=0x4
    struct _MMSECTION_FLAGS Flags;// Offset=0x0 Size=0x4
};

struct _MMSECTION_FLAGS2// Size=0x4 (Id=860)
{
    struct // Size=0x3 (Id=0)
    {
        unsigned short PartitionId:10;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0xa
        unsigned char NoCrossPartitionAccess:1;// Offset=0x2 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char SubsectionCrossPartitionReferenceOverflow:1;// Offset=0x2 Size=0x1 BitOffset=0x1 BitSize=0x1
    };
};

union _anonymous_298// Size=0x4 (Id=298)
{
    unsigned long LongFlags;// Offset=0x0 Size=0x4
    struct _MMSECTION_FLAGS2 Flags;// Offset=0x0 Size=0x4
};

struct _EX_FAST_REF// Size=0x8 (Id=101)
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

struct _anonymous_299// Size=0x10 (Id=299)
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
            unsigned long SystemImage:1;// Offset=0x4 Size=0x4 BitOffset=0x10 BitSize=0x1
            unsigned long CantMove:1;// Offset=0x4 Size=0x4 BitOffset=0x11 BitSize=0x1
            unsigned long StrongCode:2;// Offset=0x4 Size=0x4 BitOffset=0x12 BitSize=0x2
            unsigned long BitMap:2;// Offset=0x4 Size=0x4 BitOffset=0x14 BitSize=0x2
            unsigned long ImageActive:1;// Offset=0x4 Size=0x4 BitOffset=0x16 BitSize=0x1
            unsigned long ImageBaseOkToReuse:1;// Offset=0x4 Size=0x4 BitOffset=0x17 BitSize=0x1
        };
    };
    union // Size=0xc (Id=0)
    {
        unsigned long FlushInProgressCount;// Offset=0x8 Size=0x4
        unsigned long NumberOfSubsections;// Offset=0x8 Size=0x4
        struct _MI_IMAGE_SECURITY_REFERENCE * SeImageStub;// Offset=0x8 Size=0x8
    };
};

union _anonymous_300// Size=0x10 (Id=300)
{
    struct _anonymous_299 e2;// Offset=0x0 Size=0x10
};

union _anonymous_301// Size=0x8 (Id=301)
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

struct _CONTROL_AREA// Size=0x80 (Id=302)
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
    union _anonymous_297 u;// Offset=0x38 Size=0x4
    union _anonymous_298 u1;// Offset=0x3c Size=0x4
    struct _EX_FAST_REF FilePointer;// Offset=0x40 Size=0x8
    long ControlAreaLock;// Offset=0x48 Size=0x4
    unsigned long ModifiedWriteCount;// Offset=0x4c Size=0x4
    struct _MI_CONTROL_AREA_WAIT_BLOCK * WaitList;// Offset=0x50 Size=0x8
    union _anonymous_300 u2;// Offset=0x58 Size=0x10
    struct _EX_PUSH_LOCK FileObjectLock;// Offset=0x68 Size=0x8
    unsigned long long LockedPages;// Offset=0x70 Size=0x8
    union _anonymous_301 u3;// Offset=0x78 Size=0x8
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

struct _MMPFNLIST// Size=0x28 (Id=285)
{
    unsigned long long Total;// Offset=0x0 Size=0x8
    enum _MMLISTS ListName;// Offset=0x8 Size=0x4
    unsigned long long Flink;// Offset=0x10 Size=0x8
    unsigned long long Blink;// Offset=0x18 Size=0x8
    unsigned long long Lock;// Offset=0x20 Size=0x8
};

struct _WORK_QUEUE_ITEM// Size=0x20 (Id=90)
{
    struct _LIST_ENTRY List;// Offset=0x0 Size=0x10
    void  ( * WorkerRoutine)(void * );// Offset=0x10 Size=0x8
    void * Parameter;// Offset=0x18 Size=0x8
};

struct _DISPATCHER_HEADER// Size=0x18 (Id=849)
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

struct _KGATE// Size=0x18 (Id=981)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
};

struct _MI_EXTENT_DELETION_WAIT_BLOCK// Size=0x20 (Id=1543)
{
    struct _MI_EXTENT_DELETION_WAIT_BLOCK * Next;// Offset=0x0 Size=0x8
    struct _KGATE Gate;// Offset=0x8 Size=0x18
};

struct _RTL_BITMAP_EX// Size=0x10 (Id=753)
{
    unsigned long long SizeOfBitMap;// Offset=0x0 Size=0x8
    unsigned long long * Buffer;// Offset=0x8 Size=0x8
};

struct _MI_DLL_OVERFLOW_AREA// Size=0x20 (Id=1244)
{
    void * RangeStart;// Offset=0x0 Size=0x8
    void * NextVa;// Offset=0x8 Size=0x8
    void * RangeStartAbove2gb;// Offset=0x10 Size=0x8
    void * NextVaAbove2gb;// Offset=0x18 Size=0x8
};

struct _MI_SECTION_WOW_STATE// Size=0x40 (Id=1324)
{
    struct _RTL_BITMAP_EX ImageBitMap;// Offset=0x0 Size=0x10
    struct _MI_DLL_OVERFLOW_AREA OverflowArea;// Offset=0x10 Size=0x20
    struct _SECTION * CfgBitMapSection;// Offset=0x30 Size=0x8
    struct _CONTROL_AREA * CfgBitMapControlArea;// Offset=0x38 Size=0x8
};

struct _MI_SECTION_STATE// Size=0x340 (Id=1015)
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
    struct _MI_EXTENT_DELETION_WAIT_BLOCK DanglingExtentsDeletionWaitList;// Offset=0x190 Size=0x20
    unsigned char FileOnlyMemoryPfnsCreated;// Offset=0x1b0 Size=0x1
    unsigned char DanglingExtentsWorkerActive;// Offset=0x1b1 Size=0x1
    unsigned char PurgingExtentsNeedWatchdog;// Offset=0x1b2 Size=0x1
    struct _RTL_AVL_TREE PrototypePtesTree;// Offset=0x1b8 Size=0x8
    long PrototypePtesTreeSpinLock;// Offset=0x1c0 Size=0x4
    struct _EX_PUSH_LOCK RelocateBitmapsLock;// Offset=0x1c8 Size=0x8
    struct _RTL_BITMAP_EX ImageBitMapNative;// Offset=0x1d0 Size=0x10
    unsigned long long ImageBiasNative;// Offset=0x1e0 Size=0x8
    struct _MI_DLL_OVERFLOW_AREA OverflowArea;// Offset=0x1e8 Size=0x20
    struct _MI_SECTION_WOW_STATE Wow[1];// Offset=0x208 Size=0x40
    unsigned long long ImageBiasWow;// Offset=0x248 Size=0x8
    struct _RTL_BITMAP_EX ImageBitMapWowScratch;// Offset=0x250 Size=0x10
    struct _RTL_BITMAP_EX ImageBitMap64Low;// Offset=0x260 Size=0x10
    unsigned long long ImageBias64Low;// Offset=0x270 Size=0x8
    void * ApiSetSection;// Offset=0x278 Size=0x8
    void * ApiSetSchema;// Offset=0x280 Size=0x8
    unsigned long long ApiSetSchemaSize;// Offset=0x288 Size=0x8
    unsigned long LostDataFiles;// Offset=0x290 Size=0x4
    unsigned long LostDataPages;// Offset=0x294 Size=0x4
    unsigned long ImageFailureReason;// Offset=0x298 Size=0x4
    struct _SECTION * CfgBitMapSection;// Offset=0x2a0 Size=0x8
    struct _CONTROL_AREA * CfgBitMapControlArea;// Offset=0x2a8 Size=0x8
    struct _RTL_BITMAP_EX KernelCfgBitMap;// Offset=0x2b0 Size=0x10
    struct _EX_PUSH_LOCK KernelCfgBitMapLock;// Offset=0x2c0 Size=0x8
    unsigned long ImageCfgFailure;// Offset=0x2c8 Size=0x4
    unsigned long RetpolineReservePages;// Offset=0x2cc Size=0x4
    struct _MDL * RetpolineStubMdl;// Offset=0x2d0 Size=0x8
    struct _RTL_BITMAP_EX KernelRetpolineBitMap;// Offset=0x2d8 Size=0x10
    struct _RTL_RETPOLINE_ROUTINES * RetpolineRoutines;// Offset=0x2e8 Size=0x8
    struct _MMPTE * RetpolineRevertPte;// Offset=0x2f0 Size=0x8
    struct _LIST_ENTRY NonRetpolineImageLoadList;// Offset=0x2f8 Size=0x10
    unsigned long RetpolineStubPages;// Offset=0x308 Size=0x4
    unsigned long ImageBreakpointEnabled;// Offset=0x30c Size=0x4
    unsigned long ImageBreakpointChecksum;// Offset=0x310 Size=0x4
    unsigned long ImageBreakpointSize;// Offset=0x314 Size=0x4
    long ImageValidationFailed;// Offset=0x318 Size=0x4
    struct _RTL_AVL_TREE ImageExtentTree;// Offset=0x320 Size=0x8
    struct _EX_PUSH_LOCK ImageExtentTreeLock;// Offset=0x328 Size=0x8
    unsigned long HotPatchReserveSize;// Offset=0x330 Size=0x4
};
