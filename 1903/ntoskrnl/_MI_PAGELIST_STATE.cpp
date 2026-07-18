struct _RTL_AVL_TREE// Size=0x8 (Id=40)
{
    struct _RTL_BALANCED_NODE * Root;// Offset=0x0 Size=0x8
};

struct _MI_PAGELIST_STATE// Size=0x28 (Id=1476)
{
    long ActiveSpinLock;// Offset=0x0 Size=0x4
    struct _RTL_AVL_TREE ActiveThreadTree;// Offset=0x8 Size=0x8
    long ActiveZeroSpinLock;// Offset=0x10 Size=0x4
    struct _RTL_AVL_TREE ActiveZeroThreadTree;// Offset=0x18 Size=0x8
    unsigned long NumberOfLargePageListHeads;// Offset=0x20 Size=0x4
};
