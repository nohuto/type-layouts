struct _RTL_BALANCED_NODE// Size=0x18 (Id=51)
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

struct _HEAP_LARGE_ALLOC_DATA// Size=0x28 (Id=313)
{
    struct _RTL_BALANCED_NODE TreeNode;// Offset=0x0 Size=0x18
    union // Size=0x8 (Id=0)
    {
        unsigned long long VirtualAddress;// Offset=0x18 Size=0x8
        struct // Size=0x10 (Id=0)
        {
            unsigned long long UnusedBytes:16;// Offset=0x18 Size=0x8 BitOffset=0x0 BitSize=0x10
            unsigned long long ExtraPresent:1;// Offset=0x20 Size=0x8 BitOffset=0x0 BitSize=0x1
            unsigned long long GuardPageCount:1;// Offset=0x20 Size=0x8 BitOffset=0x1 BitSize=0x1
            unsigned long long GuardPageAlignment:6;// Offset=0x20 Size=0x8 BitOffset=0x2 BitSize=0x6
            unsigned long long Spare:4;// Offset=0x20 Size=0x8 BitOffset=0x8 BitSize=0x4
            unsigned long long AllocatedPages:52;// Offset=0x20 Size=0x8 BitOffset=0xc BitSize=0x34
        };
    };
};
