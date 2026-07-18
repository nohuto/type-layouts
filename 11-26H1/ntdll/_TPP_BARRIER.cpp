union _TPP_FLAGS_COUNT// Size=0x8 (Id=718)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Count:60;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x3c
        unsigned long long Flags:4;// Offset=0x0 Size=0x8 BitOffset=0x3c BitSize=0x4
    };
    long long Data;// Offset=0x0 Size=0x8
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

struct _TPP_ITE// Size=0x8 (Id=683)
{
    struct _TPP_ITE_WAITER * First;// Offset=0x0 Size=0x8
};

struct _TPP_BARRIER// Size=0x18 (Id=349)
{
    union _TPP_FLAGS_COUNT Ptr;// Offset=0x0 Size=0x8
    struct _RTL_SRWLOCK WaitLock;// Offset=0x8 Size=0x8
    struct _TPP_ITE WaitList;// Offset=0x10 Size=0x8
};
