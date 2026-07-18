struct _RTL_AVL_TREE// Size=0x8 (Id=120)
{
    struct _RTL_BALANCED_NODE * Root;// Offset=0x0 Size=0x8
};

struct _anonymous_23// Size=0x10 (Id=23)
{
    struct // Size=0x10 (Id=0)
    {
        unsigned long long Depth:16;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x10
        unsigned long long Sequence:48;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x30
        unsigned long long Reserved:4;// Offset=0x8 Size=0x8 BitOffset=0x0 BitSize=0x4
        unsigned long long NextEntry:60;// Offset=0x8 Size=0x8 BitOffset=0x4 BitSize=0x3c
    };
};

union _SLIST_HEADER// Size=0x10 (Id=24)
{
    unsigned long long Alignment;// Offset=0x0 Size=0x8
    unsigned long long Region;// Offset=0x8 Size=0x8
    struct _anonymous_23 HeaderX64;// Offset=0x0 Size=0x10
};

struct _MI_PAGING_IO_STATE// Size=0xb0 (Id=1613)
{
    struct _RTL_AVL_TREE PageFileHead;// Offset=0x0 Size=0x8
    long PageFileHeadSpinLock;// Offset=0x8 Size=0x4
    long PrefetchSeekThreshold;// Offset=0xc Size=0x4
    unsigned long InPageSinglePages;// Offset=0x10 Size=0x4
    union _SLIST_HEADER InPageSupportSListHead[2];// Offset=0x20 Size=0x20
    union _SLIST_HEADER ReservedInPageSupportSListHead[2];// Offset=0x40 Size=0x20
    unsigned char InPageSupportSListMinimum[2];// Offset=0x60 Size=0x2
    struct _MMINPAGE_SUPPORT * FirstReservedInPageBlock[2];// Offset=0x68 Size=0x10
    struct _MMINPAGE_SUPPORT * LastReservedInPageBlock[2];// Offset=0x78 Size=0x10
    struct _MMPTE * ReservedPtes;// Offset=0x88 Size=0x8
    unsigned long long ReservedPtesLock;// Offset=0x90 Size=0x8
    unsigned long ReservedPtesBitBuffer;// Offset=0x98 Size=0x4
    long DelayPageFaults;// Offset=0x9c Size=0x4
    unsigned long FileCompressionBoundary;// Offset=0xa0 Size=0x4
    unsigned char MdlsAdjusted;// Offset=0xa4 Size=0x1
};
