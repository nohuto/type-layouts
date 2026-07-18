struct _LIST_ENTRY// Size=0x10 (Id=30)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

union _unnamed_668// Size=0x4 (Id=668)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Internal:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long LegacyNoSerialize:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long WalkLockRelease:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long Unused:29;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1d
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

struct _RTL_SRWLOCK// Size=0x8 (Id=355)
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

struct _unnamed_669// Size=0x10 (Id=669)
{
    unsigned long Count;// Offset=0x0 Size=0x4
    unsigned long Owner;// Offset=0x4 Size=0x4
    struct _RTL_SRWLOCK Lock;// Offset=0x8 Size=0x8
};

struct _RTLP_PROCESS_HEAP_DESCRIPTOR// Size=0x30 (Id=670)
{
    struct _LIST_ENTRY DescriptorLink;// Offset=0x0 Size=0x10
    void * Heap;// Offset=0x10 Size=0x8
    union _unnamed_668 Flags;// Offset=0x18 Size=0x4
    struct _unnamed_669 PseudoGlobalLock;// Offset=0x20 Size=0x10
};
