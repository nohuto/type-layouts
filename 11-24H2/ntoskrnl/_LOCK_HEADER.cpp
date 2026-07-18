struct _RTL_AVL_TREE// Size=0x8 (Id=117)
{
    struct _RTL_BALANCED_NODE * Root;// Offset=0x0 Size=0x8
};

struct _LOCK_HEADER// Size=0x20 (Id=1178)
{
    struct _RTL_AVL_TREE LockTree;// Offset=0x0 Size=0x8
    struct _RTL_AVL_TREE LockMdlSwitchedTree;// Offset=0x8 Size=0x8
    unsigned long long Count;// Offset=0x10 Size=0x8
    long Lock;// Offset=0x18 Size=0x4
    unsigned long Valid;// Offset=0x1c Size=0x4
};
