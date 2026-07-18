struct _LIST_ENTRY// Size=0x10 (Id=23)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

union _unnamed_1167// Size=0x4 (Id=1167)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Active:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long OnlyTryAcquireUsed:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long ReleasedOutOfOrder:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long SequenceNumber:29;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1d
    };
    unsigned long Whole;// Offset=0x0 Size=0x4
};

struct _VI_DEADLOCK_NODE// Size=0xd0 (Id=1168)
{
    struct _VI_DEADLOCK_NODE * Parent;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY ChildrenList;// Offset=0x8 Size=0x10
    struct _LIST_ENTRY SiblingsList;// Offset=0x18 Size=0x10
    union // Size=0x10 (Id=0)
    {
        struct _LIST_ENTRY ResourceList;// Offset=0x28 Size=0x10
        struct _LIST_ENTRY FreeListEntry;// Offset=0x28 Size=0x10
    };
    struct _VI_DEADLOCK_RESOURCE * Root;// Offset=0x38 Size=0x8
    struct _VI_DEADLOCK_THREAD * ThreadEntry;// Offset=0x40 Size=0x8
    union _unnamed_1167 u1;// Offset=0x48 Size=0x4
    long ChildrenCount;// Offset=0x4c Size=0x4
    void * StackTrace[8];// Offset=0x50 Size=0x40
    void * ParentStackTrace[8];// Offset=0x90 Size=0x40
};
