struct _MI_FREE_LARGE_PAGES// Size=0x110 (Id=1871)
{
    unsigned long long LargePageFreeCount[2];// Offset=0x0 Size=0x10
    unsigned long long LargePagesCount[2][2][4];// Offset=0x10 Size=0x80
    struct _MI_FREE_LARGE_PAGE_LIST * LargePageEntries[2][2][4];// Offset=0x90 Size=0x80
};

struct _LIST_ENTRY// Size=0x10 (Id=23)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _WORK_QUEUE_ITEM// Size=0x20 (Id=90)
{
    struct _LIST_ENTRY List;// Offset=0x0 Size=0x10
    void  ( * WorkerRoutine)(void * );// Offset=0x10 Size=0x8
    void * Parameter;// Offset=0x18 Size=0x8
};

struct _MI_REBUILD_LARGE_PAGE_TIMER// Size=0x28 (Id=1735)
{
    struct _WORK_QUEUE_ITEM WorkItem;// Offset=0x0 Size=0x20
    unsigned char SecondsLeft;// Offset=0x20 Size=0x1
    unsigned char RebuildActive;// Offset=0x21 Size=0x1
    unsigned char NextPassDelta;// Offset=0x22 Size=0x1
    unsigned char LargeSubPagesActive;// Offset=0x23 Size=0x1
};

struct _MMPFNLIST_SHORT// Size=0x18 (Id=1845)
{
    unsigned long long Total;// Offset=0x0 Size=0x8
    unsigned long long Flink;// Offset=0x8 Size=0x8
    unsigned long long Blink;// Offset=0x10 Size=0x8
};

struct _RTL_BITMAP// Size=0x10 (Id=33)
{
    unsigned long SizeOfBitMap;// Offset=0x0 Size=0x4
    unsigned long * Buffer;// Offset=0x8 Size=0x8
};

struct _anonymous_1713// Size=0x4 (Id=1713)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long ChannelsHotCold:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Spare:31;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1f
    };
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

struct _MI_PAGE_COLORS// Size=0x10 (Id=1769)
{
    unsigned long PageSize[4];// Offset=0x0 Size=0x10
};

struct _MI_NODE_INFORMATION// Size=0x7c0 (Id=1714)
{
    struct _MI_FREE_LARGE_PAGES FreeLargePages[3];// Offset=0x0 Size=0x330
    struct _MI_REBUILD_LARGE_PAGE_TIMER LargePageRebuildTimer;// Offset=0x330 Size=0x28
    struct _MMPFNLIST_SHORT StandbyPageList[4][8];// Offset=0x358 Size=0x300
    struct _RTL_BITMAP FreePageListHeadsBitmap[2];// Offset=0x680 Size=0x20
    unsigned long FreePageListHeadsBitmapBuffer[16];// Offset=0x6a0 Size=0x40
    unsigned long long FreeCount[2];// Offset=0x6e0 Size=0x10
    unsigned long long TotalPages[4];// Offset=0x6f0 Size=0x20
    unsigned long long TotalPagesEntireNode;// Offset=0x710 Size=0x8
    unsigned long CurrentHugeRangeColor;// Offset=0x718 Size=0x4
    unsigned long long HugeIoRangeFreeCount[2];// Offset=0x720 Size=0x10
    unsigned long MmShiftedColor;// Offset=0x730 Size=0x4
    unsigned long Color;// Offset=0x734 Size=0x4
    unsigned long long ChannelFreeCount[4][2];// Offset=0x738 Size=0x40
    struct _anonymous_1713 Flags;// Offset=0x778 Size=0x4
    struct _EX_PUSH_LOCK NodeLock;// Offset=0x780 Size=0x8
    unsigned long long ZeroThreadHugeMapLock;// Offset=0x788 Size=0x8
    unsigned char LargeListMoveInProgress;// Offset=0x790 Size=0x1
    unsigned char ChannelStatus;// Offset=0x791 Size=0x1
    unsigned char ChannelOrdering[4];// Offset=0x792 Size=0x4
    unsigned char LockedChannelOrdering[4];// Offset=0x796 Size=0x4
    unsigned char PowerAttribute[4];// Offset=0x79a Size=0x4
    unsigned long long LargePageLock;// Offset=0x7a0 Size=0x8
    struct _MI_PAGE_COLORS PageColorTable;// Offset=0x7a8 Size=0x10
};
