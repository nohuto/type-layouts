struct _LIST_ENTRY// Size=0x10 (Id=20)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

union _unnamed_937// Size=0x8 (Id=937)
{
    void * InstancedWorkingSet;// Offset=0x0 Size=0x8
};

struct _MMSUPPORT_FLAGS// Size=0x4 (Id=1072)
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
            unsigned char VmExiting:1;// Offset=0x3 Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char ExpansionFailed:1;// Offset=0x3 Size=0x1 BitOffset=0x2 BitSize=0x1
            unsigned char SvmEnabled:1;// Offset=0x3 Size=0x1 BitOffset=0x3 BitSize=0x1
            unsigned char ForceAge:1;// Offset=0x3 Size=0x1 BitOffset=0x4 BitSize=0x1
            unsigned char NewMaximum:1;// Offset=0x3 Size=0x1 BitOffset=0x5 BitSize=0x1
            unsigned char CommitReleaseState:2;// Offset=0x3 Size=0x1 BitOffset=0x6 BitSize=0x2
        };
        unsigned char u2;// Offset=0x3 Size=0x1
    };
};

struct _MMSUPPORT_INSTANCE// Size=0xc0 (Id=938)
{
    unsigned short NextPageColor;// Offset=0x0 Size=0x2
    unsigned short LastTrimStamp;// Offset=0x2 Size=0x2
    unsigned long PageFaultCount;// Offset=0x4 Size=0x4
    unsigned long long TrimmedPageCount;// Offset=0x8 Size=0x8
    struct _MMWSL_INSTANCE * VmWorkingSetList;// Offset=0x10 Size=0x8
    struct _LIST_ENTRY WorkingSetExpansionLinks;// Offset=0x18 Size=0x10
    unsigned long long AgeDistribution[7];// Offset=0x28 Size=0x38
    struct _KGATE * ExitOutswapGate;// Offset=0x60 Size=0x8
    unsigned long long MinimumWorkingSetSize;// Offset=0x68 Size=0x8
    unsigned long long WorkingSetLeafSize;// Offset=0x70 Size=0x8
    unsigned long long WorkingSetLeafPrivateSize;// Offset=0x78 Size=0x8
    unsigned long long WorkingSetSize;// Offset=0x80 Size=0x8
    unsigned long long WorkingSetPrivateSize;// Offset=0x88 Size=0x8
    unsigned long long MaximumWorkingSetSize;// Offset=0x90 Size=0x8
    unsigned long long PeakWorkingSetSize;// Offset=0x98 Size=0x8
    unsigned long HardFaultCount;// Offset=0xa0 Size=0x4
    unsigned short PartitionId;// Offset=0xa4 Size=0x2
    unsigned short Pad0;// Offset=0xa6 Size=0x2
    union _unnamed_937 u1;// Offset=0xa8 Size=0x8
    unsigned long long Reserved0;// Offset=0xb0 Size=0x8
    struct _MMSUPPORT_FLAGS Flags;// Offset=0xb8 Size=0x4
};

struct _MI_ACTIVE_WSLE_LISTHEAD// Size=0x10 (Id=1391)
{
    unsigned long long Flink;// Offset=0x0 Size=0x8
    unsigned long long Blink;// Offset=0x8 Size=0x8
};

struct _MMWSL_INSTANCE// Size=0x1a0 (Id=1178)
{
    unsigned long long NextSlot;// Offset=0x0 Size=0x8
    unsigned long long NextAgingSlot;// Offset=0x8 Size=0x8
    unsigned long long NextAccessClearingSlot;// Offset=0x10 Size=0x8
    unsigned long LastAccessClearingRemainder;// Offset=0x18 Size=0x4
    unsigned long LastAgingRemainder;// Offset=0x1c Size=0x4
    unsigned long long ActiveWsleCounts[16];// Offset=0x20 Size=0x80
    struct _MI_ACTIVE_WSLE_LISTHEAD ActiveWsles[16];// Offset=0xa0 Size=0x100
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

struct _MMPFNLIST// Size=0x28 (Id=209)
{
    unsigned long long Total;// Offset=0x0 Size=0x8
    enum _MMLISTS ListName;// Offset=0x8 Size=0x4
    unsigned long long Flink;// Offset=0x10 Size=0x8
    unsigned long long Blink;// Offset=0x18 Size=0x8
    unsigned long long Lock;// Offset=0x20 Size=0x8
};

struct _unnamed_28// Size=0x8 (Id=28)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=29)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_28 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _MDL// Size=0x30 (Id=167)
{
    struct _MDL * Next;// Offset=0x0 Size=0x8
    short Size;// Offset=0x8 Size=0x2
    short MdlFlags;// Offset=0xa Size=0x2
    unsigned short AllocationProcessorNumber;// Offset=0xc Size=0x2
    unsigned short Reserved;// Offset=0xe Size=0x2
    struct _EPROCESS * Process;// Offset=0x10 Size=0x8
    void * MappedSystemVa;// Offset=0x18 Size=0x8
    void * StartVa;// Offset=0x20 Size=0x8
    unsigned long ByteCount;// Offset=0x28 Size=0x4
    unsigned long ByteOffset;// Offset=0x2c Size=0x4
};

struct _unnamed_1184// Size=0x38 (Id=1184)
{
    struct _MDL Mdl;// Offset=0x0 Size=0x30
    unsigned long long Page[1];// Offset=0x30 Size=0x8
};

struct _MI_PAGEFILE_TRACES// Size=0x78 (Id=1185)
{
    long Status;// Offset=0x0 Size=0x4
    unsigned short PartitionId;// Offset=0x4 Size=0x2
    unsigned char Priority;// Offset=0x6 Size=0x1
    unsigned char IrpPriority;// Offset=0x7 Size=0x1
    unsigned char ReservationWrite;// Offset=0x8 Size=0x1
    union _LARGE_INTEGER CurrentTime;// Offset=0x10 Size=0x8
    unsigned long long AvailablePages;// Offset=0x18 Size=0x8
    unsigned long long ModifiedPagesTotal;// Offset=0x20 Size=0x8
    unsigned long long ModifiedPagefilePages;// Offset=0x28 Size=0x8
    unsigned long long ModifiedNoWritePages;// Offset=0x30 Size=0x8
    unsigned long long ModifiedPagefileNoReservationPages;// Offset=0x38 Size=0x8
    struct _unnamed_1184 MdlHack;// Offset=0x40 Size=0x38
};

struct _MI_VISIBLE_PARTITION// Size=0x1380 (Id=1048)
{
    unsigned long long LowestPhysicalPage;// Offset=0x0 Size=0x8
    unsigned long long HighestPhysicalPage;// Offset=0x8 Size=0x8
    unsigned long long NumberOfPhysicalPages;// Offset=0x10 Size=0x8
    unsigned long NumberOfPagingFiles;// Offset=0x18 Size=0x4
    struct _MMPAGING_FILE * PagingFile[16];// Offset=0x20 Size=0x80
    unsigned long long AvailablePages;// Offset=0xc0 Size=0x8
    unsigned long long ResidentAvailablePages;// Offset=0x100 Size=0x8
    struct _MMSUPPORT_INSTANCE PartitionWs[1];// Offset=0x140 Size=0xc0
    struct _MMWSL_INSTANCE PartitionWorkingSetLists[1];// Offset=0x200 Size=0x1a0
    unsigned char SystemCacheInitialized;// Offset=0x3a0 Size=0x1
    unsigned long long TotalCommittedPages;// Offset=0x3a8 Size=0x8
    struct _MMPFNLIST ModifiedPageListHead;// Offset=0x3c0 Size=0x28
    struct _MMPFNLIST ModifiedNoWritePageListHead;// Offset=0x400 Size=0x28
    unsigned long long TotalCommitLimit;// Offset=0x428 Size=0x8
    unsigned long long TotalPagesForPagingFile;// Offset=0x430 Size=0x8
    unsigned long long VadPhysicalPages;// Offset=0x438 Size=0x8
    unsigned long long ProcessLockedFilePages;// Offset=0x440 Size=0x8
    unsigned long ChargeCommitmentFailures[4];// Offset=0x448 Size=0x10
    unsigned long long PageTableBitmapPages;// Offset=0x458 Size=0x8
    long PageFileTraceIndex;// Offset=0x460 Size=0x4
    struct _MI_PAGEFILE_TRACES PageFileTraces[32];// Offset=0x468 Size=0xf00
};
