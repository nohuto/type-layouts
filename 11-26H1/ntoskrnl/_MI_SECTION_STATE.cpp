struct _RTL_AVL_TREE// Size=0x8 (Id=117)
{
    struct _RTL_BALANCED_NODE * Root;// Offset=0x0 Size=0x8
};

struct _EX_PUSH_LOCK// Size=0x8 (Id=120)
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

struct _MI_UNUSED_SEGMENT_TRACES// Size=0x20 (Id=2020)
{
    unsigned long long ElapsedTime;// Offset=0x0 Size=0x8
    unsigned long long PagesMoved;// Offset=0x8 Size=0x8
    unsigned long long PagesFlushed;// Offset=0x10 Size=0x8
    unsigned long NumberOfThreads;// Offset=0x18 Size=0x4
};

union _MMSUBSECTION_FLAGS// Size=0x4 (Id=2187)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long SubsectionAccessed:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Protection:5;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x5
        unsigned long StartingSector4132:10;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0xa
        unsigned long SubsectionStatic:1;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned long GlobalMemory:1;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x1
        unsigned long ExtentQueryNeeded:1;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x1
        unsigned long OnDereferenceList:1;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0x1
        unsigned long SectorEndOffset:12;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0xc
    };
    unsigned long EntireField;// Offset=0x0 Size=0x4
};

union _MI_SUBSECTION_ENTRY1// Size=0x4 (Id=1552)
{
    unsigned long EntireField;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long CrossPartitionReferences:30;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1e
        unsigned long SubsectionMappedLarge:2;// Offset=0x0 Size=0x4 BitOffset=0x1e BitSize=0x2
    };
};

struct _SUBSECTION// Size=0x38 (Id=704)
{
    struct _CONTROL_AREA * ControlArea;// Offset=0x0 Size=0x8
    struct _MMPTE * SubsectionBase;// Offset=0x8 Size=0x8
    struct _SUBSECTION * NextSubsection;// Offset=0x10 Size=0x8
    union // Size=0x8 (Id=0)
    {
        struct _RTL_AVL_TREE GlobalPerSessionHead;// Offset=0x18 Size=0x8
        struct _MI_CONTROL_AREA_WAIT_BLOCK * CreationWaitList;// Offset=0x18 Size=0x8
    };
    union _MMSUBSECTION_FLAGS SubsectionFlags;// Offset=0x20 Size=0x4
    unsigned long StartingSector;// Offset=0x24 Size=0x4
    unsigned long NumberOfFullSectors;// Offset=0x28 Size=0x4
    unsigned long PtesInSubsection;// Offset=0x2c Size=0x4
    union _MI_SUBSECTION_ENTRY1 u1;// Offset=0x30 Size=0x4
    unsigned long UnusedPtes;// Offset=0x34 Size=0x4
};

struct _RTL_BALANCED_NODE// Size=0x18 (Id=116)
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

struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _unnamed_1651// Size=0x8 (Id=1651)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long AllocationType:3;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x3
        unsigned long long Inserted:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
    };
};

struct _unnamed_1652// Size=0x8 (Id=1652)
{
    unsigned long long PrototypePtesFlags;// Offset=0x0 Size=0x8
};

union _unnamed_1653// Size=0x8 (Id=1653)
{
    struct _unnamed_1651 e1;// Offset=0x0 Size=0x8
    struct _unnamed_1652 e2;// Offset=0x0 Size=0x8
};

struct _MI_PROTOTYPE_PTES_NODE// Size=0x20 (Id=1654)
{
    struct _RTL_BALANCED_NODE Node;// Offset=0x0 Size=0x18
    union _unnamed_1653 u1;// Offset=0x18 Size=0x8
};

union _MSUBSECTION_STATE// Size=0x4 (Id=2415)
{
    unsigned long EntireField;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long ModifiedPagesExist:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long FlushEntireSubsectionInProgress:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
    };
};

struct _MSUBSECTION// Size=0xa0 (Id=2324)
{
    struct _SUBSECTION Core;// Offset=0x0 Size=0x38
    struct _RTL_BALANCED_NODE SubsectionNode;// Offset=0x38 Size=0x18
    unsigned long long NumberOfMappedViews;// Offset=0x50 Size=0x8
    struct _LIST_ENTRY DereferenceList;// Offset=0x58 Size=0x10
    unsigned long NumberOfPfnReferences;// Offset=0x68 Size=0x4
    unsigned long LargeViews;// Offset=0x6c Size=0x4
    void * SubsectionExtentList;// Offset=0x70 Size=0x8
    struct _MI_PROTOTYPE_PTES_NODE ProtosNode;// Offset=0x78 Size=0x20
    union _MSUBSECTION_STATE State;// Offset=0x98 Size=0x4
};

union _MMSECTION_FLAGS// Size=0x4 (Id=1135)
{
    unsigned long FullValue;// Offset=0x0 Size=0x4
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
        unsigned int NoCrossPartitionAccess:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
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
        unsigned long PreferredNode:7;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x7
        unsigned int SubsectionCrossPartitionReferenceOverflow:1;// Offset=0x0 Size=0x4 BitOffset=0x1b BitSize=0x1
        unsigned int UsingFileExtents:2;// Offset=0x0 Size=0x4 BitOffset=0x1c BitSize=0x2
        unsigned int ControlAreaOnUnusedList:1;// Offset=0x0 Size=0x4 BitOffset=0x1e BitSize=0x1
        unsigned int PageSize64K:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
};

union _unnamed_681// Size=0x4 (Id=681)
{
    unsigned long LongFlags;// Offset=0x0 Size=0x4
    union _MMSECTION_FLAGS Flags;// Offset=0x0 Size=0x4
};

union _MMSECTION_FLAGS1// Size=0x4 (Id=1227)
{
    unsigned long FullValue;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long PartitionId:10;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0xa
        unsigned long SectionOfInterest:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long SecurePages:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long Unused:20;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x14
    };
};

struct _EX_FAST_REF// Size=0x8 (Id=551)
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

union _MMSECTION_FLAGS2// Size=0x4 (Id=1378)
{
    unsigned long FullValue;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long ImageRelocationSizeIn64k:16;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x10
        unsigned long SystemImage:1;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned long CantMove:1;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x1
        unsigned long StrongCode:2;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x2
        unsigned long BitMap:2;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x2
        unsigned long ImageActive:1;// Offset=0x0 Size=0x4 BitOffset=0x16 BitSize=0x1
        unsigned long ImageBaseOkToReuse:1;// Offset=0x0 Size=0x4 BitOffset=0x17 BitSize=0x1
    };
};

union _MI_IMAGE_INFO_REF// Size=0x8 (Id=692)
{
    long long FullValue;// Offset=0x0 Size=0x8
    struct _MI_IMAGE_ADDITIONAL_INFO * PointerValue;// Offset=0x0 Size=0x8
    struct // Size=0x8 (Id=0)
    {
        union // Size=0x8 (Id=0)
        {
            unsigned long long AllFlags:3;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x3
            unsigned long long DebugRecordsPresent:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        };
    };
};

struct _unnamed_682// Size=0x10 (Id=682)
{
    union // Size=0x4 (Id=0)
    {
        unsigned long NumberOfSystemCacheViews;// Offset=0x0 Size=0x4
        unsigned long ImageRelocationStartBit;// Offset=0x0 Size=0x4
    };
    union // Size=0x4 (Id=0)
    {
        long WritableUserReferences;// Offset=0x4 Size=0x4
        union _MMSECTION_FLAGS2 Flags;// Offset=0x4 Size=0x4
    };
    union // Size=0x4 (Id=0)
    {
        unsigned long NumberOfSubsections;// Offset=0x8 Size=0x4
        union _MI_IMAGE_INFO_REF ImageInfoRef;// Offset=0x8 Size=0x8
    };
};

union _unnamed_683// Size=0x10 (Id=683)
{
    struct _unnamed_682 e2;// Offset=0x0 Size=0x10
};

union _unnamed_684// Size=0x8 (Id=684)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Spare:3;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x3
        unsigned long long IoAttributionContext:61;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x3d
    };
    unsigned long long ImageCrossPartitionCharge;// Offset=0x0 Size=0x8
    struct // Size=0x8 (Id=0)
    {
        unsigned long long CommittedPageCount:36;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x24
    };
};

struct _CONTROL_AREA// Size=0x80 (Id=685)
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
    union _unnamed_681 u;// Offset=0x38 Size=0x4
    union _MMSECTION_FLAGS1 Flags1;// Offset=0x3c Size=0x4
    struct _EX_FAST_REF FilePointer;// Offset=0x40 Size=0x8
    long ControlAreaLock;// Offset=0x48 Size=0x4
    unsigned long ModifiedWriteCount;// Offset=0x4c Size=0x4
    struct _MI_CONTROL_AREA_WAIT_BLOCK * WaitList;// Offset=0x50 Size=0x8
    union _unnamed_683 u2;// Offset=0x58 Size=0x10
    struct _EX_PUSH_LOCK FileObjectLock;// Offset=0x68 Size=0x8
    unsigned long long LockedPages;// Offset=0x70 Size=0x8
    union _unnamed_684 u3;// Offset=0x78 Size=0x8
};

struct _MI_PAGE_CHAIN_HEAD// Size=0x18 (Id=2361)
{
    struct _MMPFN * Head;// Offset=0x0 Size=0x8
    struct _MMPFN * Tail;// Offset=0x8 Size=0x8
    unsigned long long NumberOfEntries;// Offset=0x10 Size=0x8
};

struct _DISPATCHER_HEADER// Size=0x18 (Id=174)
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
            unsigned char Emulation:1;// Offset=0x3 Size=0x1 BitOffset=0x6 BitSize=0x1
            unsigned char Reserved5:1;// Offset=0x3 Size=0x1 BitOffset=0x7 BitSize=0x1
        };
        unsigned char MutantType;// Offset=0x0 Size=0x1
        unsigned char MutantSize;// Offset=0x1 Size=0x1
        unsigned char DpcActive;// Offset=0x2 Size=0x1
        unsigned char MutantReserved;// Offset=0x3 Size=0x1
    };
    long SignalState;// Offset=0x4 Size=0x4
    struct _LIST_ENTRY WaitListHead;// Offset=0x8 Size=0x10
};

struct _KGATE// Size=0x18 (Id=1524)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
};

struct _MI_EXTENT_DELETION_WAIT_BLOCK// Size=0x20 (Id=2194)
{
    struct _MI_EXTENT_DELETION_WAIT_BLOCK * Next;// Offset=0x0 Size=0x8
    struct _KGATE Gate;// Offset=0x8 Size=0x18
};

struct _KEVENT// Size=0x18 (Id=20)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
};

struct _RTL_BITMAP_EX// Size=0x10 (Id=1254)
{
    unsigned long long SizeOfBitMap;// Offset=0x0 Size=0x8
    unsigned long long * Buffer;// Offset=0x8 Size=0x8
};

struct _MI_DLL_OVERFLOW_AREA// Size=0x20 (Id=1851)
{
    void * RangeStart;// Offset=0x0 Size=0x8
    void * NextVa;// Offset=0x8 Size=0x8
    void * RangeStartAbove2gb;// Offset=0x10 Size=0x8
    void * NextVaAbove2gb;// Offset=0x18 Size=0x8
};

struct _MI_SECTION_WOW_STATE// Size=0x40 (Id=1923)
{
    struct _RTL_BITMAP_EX ImageBitMap;// Offset=0x0 Size=0x10
    struct _MI_DLL_OVERFLOW_AREA OverflowArea;// Offset=0x10 Size=0x20
    struct _SECTION * CfgBitMapSection;// Offset=0x30 Size=0x8
    struct _CONTROL_AREA * CfgBitMapControlArea;// Offset=0x38 Size=0x8
};

struct _MI_SECTION_STATE// Size=0xc00 (Id=1568)
{
    long SectionObjectPointersLock;// Offset=0x0 Size=0x4
    struct _RTL_AVL_TREE SectionBasedRoot;// Offset=0x8 Size=0x8
    struct _EX_PUSH_LOCK SectionBasedLock;// Offset=0x10 Size=0x8
    unsigned long long UnusedSegmentPagedPool;// Offset=0x18 Size=0x8
    long CalibrationIndex;// Offset=0x20 Size=0x4
    struct _MI_UNUSED_SEGMENT_TRACES CalibrationData[64];// Offset=0x28 Size=0x800
    unsigned long DataSectionProtectionMask;// Offset=0x828 Size=0x4
    void * HighSectionBase;// Offset=0x830 Size=0x8
    struct _MSUBSECTION PhysicalSubsection;// Offset=0x838 Size=0xa0
    struct _CONTROL_AREA PhysicalControlArea;// Offset=0x8d8 Size=0x80
    struct _MI_PAGE_CHAIN_HEAD FileOnlyReapList;// Offset=0x958 Size=0x18
    struct _MI_PAGE_CHAIN_HEAD FileOnlyReapFailedList;// Offset=0x970 Size=0x18
    unsigned long long LastReapFailRetryTime;// Offset=0x988 Size=0x8
    struct _MI_EXTENT_DELETION_WAIT_BLOCK FileOnlyReaperWaitList;// Offset=0x990 Size=0x20
    struct _KEVENT FileOnlyReaperWorkerEvent;// Offset=0x9b0 Size=0x18
    struct _ETHREAD * FileOnlyReaperWorkerThread;// Offset=0x9c8 Size=0x8
    unsigned char FileOnlyMemoryPfnsCreated;// Offset=0x9d0 Size=0x1
    unsigned char FileOnlyReaperWorkerActive;// Offset=0x9d1 Size=0x1
    unsigned char FileOnlyImagesNotSupported;// Offset=0x9d2 Size=0x1
    struct _RTL_AVL_TREE PrototypePtesTree;// Offset=0x9d8 Size=0x8
    long PrototypePtesTreeSpinLock;// Offset=0x9e0 Size=0x4
    struct _LIST_ENTRY DanglingNonPagedProtos;// Offset=0x9e8 Size=0x10
    struct _EX_PUSH_LOCK PrivateFixupMappingLock;// Offset=0x9f8 Size=0x8
    struct _MMPTE * PrivateFixupPte;// Offset=0xa00 Size=0x8
    struct _EX_PUSH_LOCK RelocateBitmapsLock;// Offset=0xa08 Size=0x8
    struct _RTL_BITMAP_EX ImageBitMapNative;// Offset=0xa10 Size=0x10
    unsigned long long ImageBiasNative;// Offset=0xa20 Size=0x8
    struct _MI_DLL_OVERFLOW_AREA OverflowArea;// Offset=0xa28 Size=0x20
    struct _MI_SECTION_WOW_STATE Wow[1];// Offset=0xa48 Size=0x40
    unsigned long long ImageBiasWow;// Offset=0xa88 Size=0x8
    struct _RTL_BITMAP_EX ImageBitMapWowScratch;// Offset=0xa90 Size=0x10
    struct _RTL_BITMAP_EX ImageBitMap64Low;// Offset=0xaa0 Size=0x10
    unsigned long long ImageBias64Low;// Offset=0xab0 Size=0x8
    void * ApiSetSection;// Offset=0xab8 Size=0x8
    void * ApiSetSchema;// Offset=0xac0 Size=0x8
    unsigned long long ApiSetSchemaSize;// Offset=0xac8 Size=0x8
    unsigned long LostDataFiles;// Offset=0xad0 Size=0x4
    unsigned long LostDataPages;// Offset=0xad4 Size=0x4
    unsigned long ImageFailureReason;// Offset=0xad8 Size=0x4
    struct _SECTION * CfgBitMapSection;// Offset=0xae0 Size=0x8
    struct _CONTROL_AREA * CfgBitMapControlArea;// Offset=0xae8 Size=0x8
    struct _RTL_BITMAP_EX KernelCfgBitMap;// Offset=0xaf0 Size=0x10
    struct _EX_PUSH_LOCK KernelCfgBitMapLock;// Offset=0xb00 Size=0x8
    unsigned long ImageCfgFailure;// Offset=0xb08 Size=0x4
    void * KernelScpStartAddress;// Offset=0xb10 Size=0x8
    unsigned long KernelScpReservePages;// Offset=0xb18 Size=0x4
    unsigned long KernelScpPages;// Offset=0xb1c Size=0x4
    struct _MDL * KernelScpMdl;// Offset=0xb20 Size=0x8
    long RetpolineBootStatus;// Offset=0xb28 Size=0x4
    struct _MMPTE * RetpolineRevertPte;// Offset=0xb30 Size=0x8
    struct _RTL_BITMAP_EX KernelRetpolineBitMap;// Offset=0xb38 Size=0x10
    struct _LIST_ENTRY NonRetpolineImageLoadList;// Offset=0xb48 Size=0x10
    unsigned long ImageBreakpointEnabled;// Offset=0xb58 Size=0x4
    unsigned long ImageBreakpointChecksum;// Offset=0xb5c Size=0x4
    unsigned long ImageBreakpointSize;// Offset=0xb60 Size=0x4
    long ImageValidationFailed;// Offset=0xb64 Size=0x4
    long FileOnlyFaultInPageErrors;// Offset=0xb68 Size=0x4
    long LastFileOnlyFaultInPageErrorStatus;// Offset=0xb6c Size=0x4
    struct _RTL_AVL_TREE ExtentTree[2];// Offset=0xb70 Size=0x10
    struct _EX_PUSH_LOCK ExtentTreeLock;// Offset=0xb80 Size=0x8
    unsigned long ImageViewExtensionOffsets[3];// Offset=0xb88 Size=0xc
    unsigned long TotalImageViewExtensionSize;// Offset=0xb94 Size=0x4
    unsigned long TotalImageViewReservationSize;// Offset=0xb98 Size=0x4
    struct _MI_COMBINE_BLOCK * ScpCfgPages[4];// Offset=0xba0 Size=0x20
    struct _MI_COMBINE_BLOCK * EmulatedScpCfgPages[4];// Offset=0xbc0 Size=0x20
};
