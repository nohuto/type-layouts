struct _RTL_BALANCED_NODE// Size=0x18 (Id=119)
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

struct _LOCK_TRACKER// Size=0x90 (Id=1088)
{
    struct _RTL_BALANCED_NODE LockTrackerNode;// Offset=0x0 Size=0x18
    struct _MDL * Mdl;// Offset=0x18 Size=0x8
    void * StartVa;// Offset=0x20 Size=0x8
    unsigned long long Count;// Offset=0x28 Size=0x8
    unsigned long Offset;// Offset=0x30 Size=0x4
    unsigned long Length;// Offset=0x34 Size=0x4
    unsigned long Who;// Offset=0x38 Size=0x4
    unsigned long Hash;// Offset=0x3c Size=0x4
    unsigned long long Page;// Offset=0x40 Size=0x8
    void * StackTrace[8];// Offset=0x48 Size=0x40
    struct _EPROCESS * Process;// Offset=0x88 Size=0x8
};
