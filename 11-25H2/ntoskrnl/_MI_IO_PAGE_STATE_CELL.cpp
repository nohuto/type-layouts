struct _RTL_AVL_TREE// Size=0x8 (Id=117)
{
    struct _RTL_BALANCED_NODE * Root;// Offset=0x0 Size=0x8
};

struct _MI_IO_PAGE_STATE_CELL// Size=0x40 (Id=2451)
{
    struct _RTL_AVL_TREE PfnRoot;// Offset=0x0 Size=0x8
    unsigned long long UnmappedNodeCount;// Offset=0x8 Size=0x8
    unsigned long long UnmappedHugeIoSpaceNodeCount;// Offset=0x10 Size=0x8
    unsigned long long TotalNodeCount;// Offset=0x18 Size=0x8
    unsigned long long ResumePageForDeleteScans;// Offset=0x20 Size=0x8
};
