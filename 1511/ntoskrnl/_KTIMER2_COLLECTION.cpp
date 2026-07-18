struct _RTL_RB_TREE// Size=0x10 (Id=34)
{
    struct _RTL_BALANCED_NODE * Root;// Offset=0x0 Size=0x8
    struct _RTL_BALANCED_NODE * Min;// Offset=0x8 Size=0x8
};

struct _KTIMER2_COLLECTION// Size=0x18 (Id=639)
{
    struct _RTL_RB_TREE Tree;// Offset=0x0 Size=0x10
    unsigned long long NextDueTime;// Offset=0x10 Size=0x8
};
