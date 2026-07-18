struct _LIST_ENTRY// Size=0x10 (Id=22)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _WORK_QUEUE_ITEM// Size=0x20 (Id=81)
{
    struct _LIST_ENTRY List;// Offset=0x0 Size=0x10
    void  ( * WorkerRoutine)(void * );// Offset=0x10 Size=0x8
    void * Parameter;// Offset=0x18 Size=0x8
};

struct _MI_REBUILD_LARGE_PAGE_TIMER// Size=0x28 (Id=1415)
{
    struct _WORK_QUEUE_ITEM WorkItem;// Offset=0x0 Size=0x20
    unsigned char SecondsLeft;// Offset=0x20 Size=0x1
    unsigned char RebuildActive;// Offset=0x21 Size=0x1
    unsigned char NextPassDelta;// Offset=0x22 Size=0x1
    unsigned char LargeSubPagesActive;// Offset=0x23 Size=0x1
};

struct _MMPFNLIST_SHORT// Size=0x18 (Id=1498)
{
    unsigned long long Total;// Offset=0x0 Size=0x8
    unsigned long long Flink;// Offset=0x8 Size=0x8
    unsigned long long Blink;// Offset=0x10 Size=0x8
};

struct _unnamed_1396// Size=0x4 (Id=1396)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long ChannelsHotCold:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Spare:31;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1f
    };
};

struct _EX_PUSH_LOCK// Size=0x8 (Id=83)
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

struct _MI_NODE_INFORMATION// Size=0x888 (Id=1397)
{
    unsigned long long LargePageFreeCount[3][2];// Offset=0x0 Size=0x30
    struct _LIST_ENTRY LargePages[3][2][2][4];// Offset=0x30 Size=0x300
    unsigned long long LargePagesCount[3][2][2][4];// Offset=0x330 Size=0x180
    struct _MI_REBUILD_LARGE_PAGE_TIMER LargePageRebuildTimer;// Offset=0x4b0 Size=0x28
    struct _MMPFNLIST_SHORT StandbyPageList[4][8];// Offset=0x4d8 Size=0x300
    unsigned long long FreeCount[2];// Offset=0x7d8 Size=0x10
    unsigned long long TotalPages[4];// Offset=0x7e8 Size=0x20
    unsigned long long TotalPagesEntireNode;// Offset=0x808 Size=0x8
    unsigned long MmShiftedColor;// Offset=0x810 Size=0x4
    unsigned long Color;// Offset=0x814 Size=0x4
    unsigned long long ChannelFreeCount[4][2];// Offset=0x818 Size=0x40
    struct _unnamed_1396 Flags;// Offset=0x858 Size=0x4
    struct _EX_PUSH_LOCK NodeLock;// Offset=0x860 Size=0x8
    unsigned long long ZeroThreadHugeMapLock;// Offset=0x868 Size=0x8
    unsigned char ChannelStatus;// Offset=0x870 Size=0x1
    unsigned char ChannelOrdering[4];// Offset=0x871 Size=0x4
    unsigned char LockedChannelOrdering[4];// Offset=0x875 Size=0x4
    unsigned char PowerAttribute[4];// Offset=0x879 Size=0x4
    unsigned long long LargePageLock;// Offset=0x880 Size=0x8
};
