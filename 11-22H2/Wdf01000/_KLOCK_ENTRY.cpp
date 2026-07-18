struct _KLOCK_ENTRY_LOCK_STATE// Size=0x10 (Id=1181)
{
    union // Size=0x8 (Id=0)
    {
        struct // Size=0x8 (Id=0)
        {
            unsigned long long CrossThreadReleasable:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
            unsigned long long Busy:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
            unsigned long long Reserved:61;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x3d
            unsigned long long InTree:1;// Offset=0x0 Size=0x8 BitOffset=0x3f BitSize=0x1
        };
        void * LockState;// Offset=0x0 Size=0x8
    };
    union // Size=0x8 (Id=0)
    {
        void * SessionState;// Offset=0x8 Size=0x8
        unsigned long SessionId;// Offset=0x8 Size=0x4
    };
    unsigned long SessionPad;// Offset=0xc Size=0x4
};

struct _RTL_BALANCED_NODE// Size=0x18 (Id=1838)
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

struct _RTL_RB_TREE// Size=0x10 (Id=1237)
{
    struct _RTL_BALANCED_NODE * Root;// Offset=0x0 Size=0x8
    union // Size=0x1 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            unsigned char Encoded:1;// Offset=0x8 Size=0x1 BitOffset=0x0 BitSize=0x1
        };
        struct _RTL_BALANCED_NODE * Min;// Offset=0x8 Size=0x8
    };
};

union _KLOCK_ENTRY_BOOST_BITMAP// Size=0x8 (Id=1040)
{
    unsigned long long AllFields;// Offset=0x0 Size=0x8
    unsigned long AllBoosts;// Offset=0x0 Size=0x4
    unsigned long WaiterCounts;// Offset=0x4 Size=0x4
    struct // Size=0x8 (Id=0)
    {
        unsigned long CpuBoostsBitmap:30;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1e
        unsigned long IoBoost:1;// Offset=0x0 Size=0x4 BitOffset=0x1e BitSize=0x1
        unsigned long IoQoSBoost:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
        unsigned long IoNormalPriorityWaiterCount:8;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long IoQoSWaiterCount:7;// Offset=0x4 Size=0x4 BitOffset=0x8 BitSize=0x7
    };
};

struct _KLOCK_ENTRY// Size=0x60 (Id=1208)
{
    union // Size=0x10 (Id=0)
    {
        struct _KLOCK_ENTRY_LOCK_STATE LockState;// Offset=0x0 Size=0x10
        void * LockUnsafe;// Offset=0x0 Size=0x8
        unsigned char CrossThreadReleasableAndBusyByte;// Offset=0x0 Size=0x1
        unsigned char Reserved[6];// Offset=0x1 Size=0x6
        unsigned char InTreeByte;// Offset=0x7 Size=0x1
        void * SessionState;// Offset=0x8 Size=0x8
    };
    unsigned long SessionId;// Offset=0x8 Size=0x4
    unsigned long SessionPad;// Offset=0xc Size=0x4
    union // Size=0x4 (Id=0)
    {
        unsigned long EntryFlags;// Offset=0x10 Size=0x4
        unsigned char EntryIndex;// Offset=0x10 Size=0x1
    };
    unsigned char WaitingByte;// Offset=0x11 Size=0x1
    unsigned char AcquiredByte;// Offset=0x12 Size=0x1
    union // Size=0x1 (Id=0)
    {
        unsigned char CrossThreadFlags;// Offset=0x13 Size=0x1
        struct // Size=0x1 (Id=0)
        {
            unsigned char HeadNodeBit:1;// Offset=0x13 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char IoPriorityBit:1;// Offset=0x13 Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char IoQoSWaiter:1;// Offset=0x13 Size=0x1 BitOffset=0x2 BitSize=0x1
            unsigned char Spare1:5;// Offset=0x13 Size=0x1 BitOffset=0x3 BitSize=0x5
            unsigned long StaticState:8;// Offset=0x10 Size=0x4 BitOffset=0x0 BitSize=0x8
            unsigned long AllFlags:24;// Offset=0x10 Size=0x4 BitOffset=0x8 BitSize=0x18
        };
    };
    unsigned long SpareFlags;// Offset=0x14 Size=0x4
    struct _RTL_BALANCED_NODE TreeNode;// Offset=0x18 Size=0x18
    union // Size=0x50 (Id=0)
    {
        struct _RTL_RB_TREE OwnerTree;// Offset=0x30 Size=0x10
        struct _RTL_RB_TREE WaiterTree;// Offset=0x40 Size=0x10
        char CpuPriorityKey;// Offset=0x30 Size=0x1
        unsigned long long EntryLock;// Offset=0x50 Size=0x8
    };
    union _KLOCK_ENTRY_BOOST_BITMAP BoostBitmap;// Offset=0x58 Size=0x8
};
