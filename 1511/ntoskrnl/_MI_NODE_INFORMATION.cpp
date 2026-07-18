struct _LIST_ENTRY// Size=0x10 (Id=20)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _MMPFNLIST_SHORT// Size=0x18 (Id=1087)
{
    unsigned long long Total;// Offset=0x0 Size=0x8
    unsigned long long Flink;// Offset=0x8 Size=0x8
    unsigned long long Blink;// Offset=0x10 Size=0x8
};

struct _unnamed_890// Size=0x4 (Id=890)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long ChannelsHotCold:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Spare:31;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1f
    };
};

struct _EX_PUSH_LOCK// Size=0x8 (Id=81)
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

struct _MI_NODE_INFORMATION// Size=0x538 (Id=891)
{
    unsigned long long LargePageFreeCount[2];// Offset=0x0 Size=0x10
    struct _LIST_ENTRY LargePages[2][2][4];// Offset=0x10 Size=0x100
    unsigned long long LargePagesCount[2][2][4];// Offset=0x110 Size=0x80
    struct _MMPFNLIST_SHORT StandbyPageList[4][8];// Offset=0x190 Size=0x300
    unsigned long long FreeCount[2];// Offset=0x490 Size=0x10
    unsigned long long TotalPages[4];// Offset=0x4a0 Size=0x20
    unsigned long long TotalPagesEntireNode;// Offset=0x4c0 Size=0x8
    unsigned long MmShiftedColor;// Offset=0x4c8 Size=0x4
    unsigned long Color;// Offset=0x4cc Size=0x4
    unsigned long long ChannelFreeCount[4][2];// Offset=0x4d0 Size=0x40
    struct _unnamed_890 Flags;// Offset=0x510 Size=0x4
    struct _EX_PUSH_LOCK NodeLock;// Offset=0x518 Size=0x8
    unsigned char ChannelStatus;// Offset=0x520 Size=0x1
    unsigned char ChannelOrdering[4];// Offset=0x521 Size=0x4
    unsigned char LockedChannelOrdering[4];// Offset=0x525 Size=0x4
    unsigned char PowerAttribute[4];// Offset=0x529 Size=0x4
    unsigned long long LargePageLock;// Offset=0x530 Size=0x8
};
