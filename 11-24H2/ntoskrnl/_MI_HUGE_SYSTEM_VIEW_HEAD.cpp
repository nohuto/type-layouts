struct _RTL_AVL_TREE// Size=0x8 (Id=117)
{
    struct _RTL_BALANCED_NODE * Root;// Offset=0x0 Size=0x8
};

struct _MI_HUGE_SYSTEM_VIEW_HEAD// Size=0x10 (Id=1941)
{
    struct _RTL_AVL_TREE ViewRoot;// Offset=0x0 Size=0x8
    unsigned long ViewCount;// Offset=0x8 Size=0x4
    long Lock;// Offset=0xc Size=0x4
};
