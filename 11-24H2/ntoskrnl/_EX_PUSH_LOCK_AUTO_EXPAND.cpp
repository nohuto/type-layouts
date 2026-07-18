struct _EX_PUSH_LOCK// Size=0x8 (Id=120)
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

struct _EX_PUSH_LOCK_AUTO_EXPAND_STATE// Size=0x4 (Id=1162)
{
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long Expanded:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long Transitioning:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long Pageable:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        };
        unsigned long Value;// Offset=0x0 Size=0x4
    };
};

struct _EX_PUSH_LOCK_AUTO_EXPAND// Size=0x10 (Id=655)
{
    struct _EX_PUSH_LOCK LocalLock;// Offset=0x0 Size=0x8
    struct _EX_PUSH_LOCK_AUTO_EXPAND_STATE State;// Offset=0x8 Size=0x4
    unsigned long Stats;// Offset=0xc Size=0x4
};
