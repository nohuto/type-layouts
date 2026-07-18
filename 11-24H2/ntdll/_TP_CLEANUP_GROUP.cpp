struct _TPP_REFCOUNT// Size=0x4 (Id=347)
{
    long Refcount;// Offset=0x0 Size=0x4
};

struct _RTL_SRWLOCK// Size=0x8 (Id=357)
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

struct _LIST_ENTRY// Size=0x10 (Id=32)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

union _TPP_FLAGS_COUNT// Size=0x8 (Id=348)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Count:60;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x3c
        unsigned long long Flags:4;// Offset=0x0 Size=0x8 BitOffset=0x3c BitSize=0x4
    };
    long long Data;// Offset=0x0 Size=0x8
};

struct _TPP_ITE// Size=0x8 (Id=680)
{
    struct _TPP_ITE_WAITER * First;// Offset=0x0 Size=0x8
};

struct _TPP_BARRIER// Size=0x18 (Id=349)
{
    union _TPP_FLAGS_COUNT Ptr;// Offset=0x0 Size=0x8
    struct _RTL_SRWLOCK WaitLock;// Offset=0x8 Size=0x8
    struct _TPP_ITE WaitList;// Offset=0x10 Size=0x8
};

struct _TP_CLEANUP_GROUP// Size=0x50 (Id=350)
{
    struct _TPP_REFCOUNT Refcount;// Offset=0x0 Size=0x4
    long Released;// Offset=0x4 Size=0x4
    struct _RTL_SRWLOCK MemberLock;// Offset=0x8 Size=0x8
    struct _LIST_ENTRY MemberList;// Offset=0x10 Size=0x10
    struct _TPP_BARRIER Barrier;// Offset=0x20 Size=0x18
    struct _RTL_SRWLOCK CleanupLock;// Offset=0x38 Size=0x8
    struct _LIST_ENTRY CleanupList;// Offset=0x40 Size=0x10
};
