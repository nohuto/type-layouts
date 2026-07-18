struct _RTL_BALANCED_NODE// Size=0xc (Id=38)
{
    union // Size=0x8 (Id=0)
    {
        struct _RTL_BALANCED_NODE * Children[2];// Offset=0x0 Size=0x8
        struct _RTL_BALANCED_NODE * Left;// Offset=0x0 Size=0x4
        struct _RTL_BALANCED_NODE * Right;// Offset=0x4 Size=0x4
    };
    union // Size=0x1 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            union // Size=0x1 (Id=0)
            {
                unsigned char Red:1;// Offset=0x8 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char Balance:2;// Offset=0x8 Size=0x1 BitOffset=0x0 BitSize=0x2
            };
        };
        unsigned long ParentValue;// Offset=0x8 Size=0x4
    };
};

struct _HEAP_LARGE_ALLOC_DATA// Size=0x14 (Id=281)
{
    struct _RTL_BALANCED_NODE TreeNode;// Offset=0x0 Size=0xc
    union // Size=0x4 (Id=0)
    {
        unsigned long VirtualAddress;// Offset=0xc Size=0x4
        struct // Size=0x8 (Id=0)
        {
            unsigned long UnusedBytes:16;// Offset=0xc Size=0x4 BitOffset=0x0 BitSize=0x10
            unsigned long ExtraPresent:1;// Offset=0x10 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long GuardPageCount:1;// Offset=0x10 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long GuardPageAlignment:6;// Offset=0x10 Size=0x4 BitOffset=0x2 BitSize=0x6
            unsigned long Spare:4;// Offset=0x10 Size=0x4 BitOffset=0x8 BitSize=0x4
            unsigned long AllocatedPages:20;// Offset=0x10 Size=0x4 BitOffset=0xc BitSize=0x14
        };
    };
};
