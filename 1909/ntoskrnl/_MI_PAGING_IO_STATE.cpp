struct _RTL_AVL_TREE// Size=0x8 (Id=40)
{
    struct _RTL_BALANCED_NODE * Root;// Offset=0x0 Size=0x8
};

struct _anonymous_77// Size=0x10 (Id=77)
{
    struct // Size=0x10 (Id=0)
    {
        unsigned long long Depth:16;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x10
        unsigned long long Sequence:48;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x30
        unsigned long long Reserved:4;// Offset=0x8 Size=0x8 BitOffset=0x0 BitSize=0x4
        unsigned long long NextEntry:60;// Offset=0x8 Size=0x8 BitOffset=0x4 BitSize=0x3c
    };
};

union _SLIST_HEADER// Size=0x10 (Id=78)
{
    unsigned long long Alignment;// Offset=0x0 Size=0x8
    unsigned long long Region;// Offset=0x8 Size=0x8
    struct _anonymous_77 HeaderX64;// Offset=0x0 Size=0x10
};

struct _MI_PAGING_IO_STATE// Size=0x50 (Id=1444)
{
    struct _RTL_AVL_TREE PageFileHead;// Offset=0x0 Size=0x8
    long PageFileHeadSpinLock;// Offset=0x8 Size=0x4
    long PrefetchSeekThreshold;// Offset=0xc Size=0x4
    union _SLIST_HEADER InPageSupportSListHead[2];// Offset=0x10 Size=0x20
    unsigned char InPageSupportSListMinimum[2];// Offset=0x30 Size=0x2
    unsigned long InPageSinglePages;// Offset=0x34 Size=0x4
    long DelayPageFaults;// Offset=0x38 Size=0x4
    unsigned long FileCompressionBoundary;// Offset=0x3c Size=0x4
    unsigned char MdlsAdjusted;// Offset=0x40 Size=0x1
};
