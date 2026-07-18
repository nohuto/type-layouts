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

struct _MMPFNLIST// Size=0x28 (Id=210)
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

struct _MDL// Size=0x30 (Id=168)
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

struct _unnamed_1094// Size=0x38 (Id=1094)
{
    struct _MDL Mdl;// Offset=0x0 Size=0x30
    unsigned long long Page[1];// Offset=0x30 Size=0x8
};

struct _MI_PAGEFILE_TRACES// Size=0x78 (Id=1095)
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
    struct _unnamed_1094 MdlHack;// Offset=0x40 Size=0x38
};

struct _MI_VISIBLE_PARTITION// Size=0x1100 (Id=512)
{
    unsigned long long LowestPhysicalPage;// Offset=0x0 Size=0x8
    unsigned long long HighestPhysicalPage;// Offset=0x8 Size=0x8
    unsigned long long NumberOfPhysicalPages;// Offset=0x10 Size=0x8
    unsigned long NumberOfPagingFiles;// Offset=0x18 Size=0x4
    struct _MMPAGING_FILE * PagingFile[16];// Offset=0x20 Size=0x80
    unsigned long long AvailablePages;// Offset=0xc0 Size=0x8
    unsigned long long ResidentAvailablePages;// Offset=0x100 Size=0x8
    unsigned long long TotalCommittedPages;// Offset=0x108 Size=0x8
    struct _MMPFNLIST ModifiedPageListHead;// Offset=0x140 Size=0x28
    struct _MMPFNLIST ModifiedNoWritePageListHead;// Offset=0x180 Size=0x28
    unsigned long long TotalCommitLimit;// Offset=0x1a8 Size=0x8
    unsigned long long TotalPagesForPagingFile;// Offset=0x1b0 Size=0x8
    unsigned long long VadPhysicalPages;// Offset=0x1b8 Size=0x8
    unsigned long long ProcessLockedFilePages;// Offset=0x1c0 Size=0x8
    unsigned long ChargeCommitmentFailures[4];// Offset=0x1c8 Size=0x10
    unsigned long long PageTableBitmapPages;// Offset=0x1d8 Size=0x8
    long PageFileTraceIndex;// Offset=0x1e0 Size=0x4
    struct _MI_PAGEFILE_TRACES PageFileTraces[32];// Offset=0x1e8 Size=0xf00
};
