struct _MI_FREE_LARGE_PAGES// Size=0x430 (Id=2009)
{
    unsigned long long LargePageFreeCount[2];// Offset=0x0 Size=0x10
    unsigned long long LargePageFreeCountHiLow[2][2];// Offset=0x10 Size=0x20
    unsigned long long LargePagesCount[2][2][4][4];// Offset=0x30 Size=0x200
    struct _MI_FREE_LARGE_PAGE_LIST * LargePageEntries[2][2][4][4];// Offset=0x230 Size=0x200
};

struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _WORK_QUEUE_ITEM// Size=0x20 (Id=27)
{
    struct _LIST_ENTRY List;// Offset=0x0 Size=0x10
    void  ( * WorkerRoutine)(void * );// Offset=0x10 Size=0x8
    void * Parameter;// Offset=0x18 Size=0x8
};

struct _MI_REBUILD_LARGE_PAGE_TIMER// Size=0x28 (Id=1875)
{
    struct _WORK_QUEUE_ITEM WorkItem;// Offset=0x0 Size=0x20
    unsigned char SecondsLeft;// Offset=0x20 Size=0x1
    unsigned char RebuildActive;// Offset=0x21 Size=0x1
    unsigned char NextPassDelta;// Offset=0x22 Size=0x1
    unsigned char LargeSubPagesActive;// Offset=0x23 Size=0x1
};

struct _MMPFNLIST_SHORT// Size=0x18 (Id=1979)
{
    unsigned long long Total;// Offset=0x0 Size=0x8
    unsigned long long Flink;// Offset=0x8 Size=0x8
    unsigned long long Blink;// Offset=0x10 Size=0x8
};

struct _RTL_BITMAP// Size=0x10 (Id=13)
{
    unsigned long SizeOfBitMap;// Offset=0x0 Size=0x4
    unsigned long * Buffer;// Offset=0x8 Size=0x8
};

struct _anonymous_1851// Size=0x4 (Id=1851)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long ChannelsHotCold:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Spare:31;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1f
    };
};

struct _EX_PUSH_LOCK// Size=0x8 (Id=122)
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

struct _MI_PAGE_COLORS// Size=0x10 (Id=1908)
{
    unsigned long PageSize[4];// Offset=0x0 Size=0x10
};

enum _MI_WRITE_TYPES
{
    WriteTypeCached=0,
    WriteTypeNonTemporal=1,
    WriteTypeMaximum=2
};

struct _MI_WRITE_CALIBRATION// Size=0x20 (Id=1952)
{
    unsigned long MaximumNumberProcessors;// Offset=0x0 Size=0x4
    enum _MI_WRITE_TYPES OptimalWriteType;// Offset=0x4 Size=0x4
    unsigned long long PerProcessorNumberOfBytes;// Offset=0x8 Size=0x8
    unsigned long OptimalWriteProcessors[2];// Offset=0x10 Size=0x8
    struct _MI_WRITE_MODES * RawTimeStamps;// Offset=0x18 Size=0x8
};

struct _GROUP_AFFINITY// Size=0x10 (Id=256)
{
    unsigned long long Mask;// Offset=0x0 Size=0x8
    unsigned short Group;// Offset=0x8 Size=0x2
    unsigned short Reserved[3];// Offset=0xa Size=0x6
};

struct _MI_NODE_INFORMATION// Size=0x11c0 (Id=1852)
{
    struct _MI_FREE_LARGE_PAGES FreeLargePages[3];// Offset=0x0 Size=0xc90
    struct _MI_REBUILD_LARGE_PAGE_TIMER LargePageRebuildTimer;// Offset=0xc90 Size=0x28
    struct _MMPFNLIST_SHORT StandbyPageList[4][8];// Offset=0xcb8 Size=0x300
    struct _RTL_BITMAP FreePageListHeadsBitmap[2];// Offset=0xfc0 Size=0x20
    unsigned long FreePageListHeadsBitmapBuffer[16];// Offset=0xfe0 Size=0x40
    unsigned long long FreeCount[2];// Offset=0x1020 Size=0x10
    unsigned long long TotalPages[4];// Offset=0x1030 Size=0x20
    unsigned long long TotalPagesEntireNode;// Offset=0x1050 Size=0x8
    unsigned long CurrentHugeRangeColor;// Offset=0x1058 Size=0x4
    unsigned long long HugeIoRangeFreeCount[2];// Offset=0x1060 Size=0x10
    unsigned long MmShiftedColor;// Offset=0x1070 Size=0x4
    unsigned long Color;// Offset=0x1074 Size=0x4
    unsigned long long ChannelFreeCount[4][2];// Offset=0x1078 Size=0x40
    struct _anonymous_1851 Flags;// Offset=0x10b8 Size=0x4
    unsigned long LargeListMoveInProgress;// Offset=0x10bc Size=0x4
    struct _MI_LARGE_PAGE_LISTS_CHANGING * LargeListWaiters;// Offset=0x10c0 Size=0x8
    struct _EX_PUSH_LOCK NodeLock;// Offset=0x10c8 Size=0x8
    unsigned long long ZeroThreadHugeMapLock;// Offset=0x10d0 Size=0x8
    unsigned char ChannelStatus;// Offset=0x10d8 Size=0x1
    unsigned char ChannelOrdering[4];// Offset=0x10d9 Size=0x4
    unsigned char LockedChannelOrdering[4];// Offset=0x10dd Size=0x4
    unsigned char PowerAttribute[4];// Offset=0x10e1 Size=0x4
    unsigned long long LargePageLock;// Offset=0x10e8 Size=0x8
    struct _MI_PAGE_COLORS PageColorTable;// Offset=0x10f0 Size=0x10
    unsigned long long NumberOfPagesGoingBad;// Offset=0x1100 Size=0x8
    struct _MI_WRITE_CALIBRATION WriteCalibration;// Offset=0x1108 Size=0x20
    void * BootZeroContext;// Offset=0x1128 Size=0x8
    void * BootZeroPageTimesPerProcessor;// Offset=0x1130 Size=0x8
    void * ZeroingVaBase;// Offset=0x1138 Size=0x8
    unsigned long long TotalBytesToZero;// Offset=0x1140 Size=0x8
    unsigned long long PerProcessorNumberOfBytesToZero;// Offset=0x1148 Size=0x8
    void * ZeroingContext;// Offset=0x1150 Size=0x8
    unsigned long ZeroingProcessorCount;// Offset=0x1158 Size=0x4
    long ZeroHand;// Offset=0x115c Size=0x4
    long FinishedProcessors;// Offset=0x1160 Size=0x4
    unsigned long long CyclesToZeroOneLargePage;// Offset=0x1168 Size=0x8
    unsigned long long * ScaledCyclesToZeroOneLargePage;// Offset=0x1170 Size=0x8
    struct _GROUP_AFFINITY GroupAffinity;// Offset=0x1178 Size=0x10
    unsigned short ProcessorCount;// Offset=0x1188 Size=0x2
    unsigned char BackgroundZeroingActive;// Offset=0x118a Size=0x1
    struct _PHYSICAL_MEMORY_DESCRIPTOR * ZeroingPhysicalMemoryBlock;// Offset=0x1190 Size=0x8
};
