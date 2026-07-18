struct _RTL_AVL_TREE// Size=0x8 (Id=117)
{
    struct _RTL_BALANCED_NODE * Root;// Offset=0x0 Size=0x8
};

struct _MI_PAGEFILE_METADATA_LAYOUT// Size=0x8 (Id=2432)
{
    unsigned long EntryInBytes;// Offset=0x0 Size=0x4
    unsigned long OwningPteOffset;// Offset=0x4 Size=0x4
};

struct _unnamed_542// Size=0x10 (Id=542)
{
    struct // Size=0x10 (Id=0)
    {
        unsigned long long Depth:16;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x10
        unsigned long long Sequence:48;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x30
        unsigned long long Reserved:4;// Offset=0x8 Size=0x8 BitOffset=0x0 BitSize=0x4
        unsigned long long NextEntry:60;// Offset=0x8 Size=0x8 BitOffset=0x4 BitSize=0x3c
    };
};

union _SLIST_HEADER// Size=0x10 (Id=543)
{
    unsigned long long Alignment;// Offset=0x0 Size=0x8
    unsigned long long Region;// Offset=0x8 Size=0x8
    struct _unnamed_542 HeaderX64;// Offset=0x0 Size=0x10
};

struct _MI_PAGING_IO_STATE// Size=0xb0 (Id=2089)
{
    struct _RTL_AVL_TREE PageFileHead;// Offset=0x0 Size=0x8
    long PageFileHeadSpinLock;// Offset=0x8 Size=0x4
    struct _MI_PAGEFILE_METADATA_LAYOUT PageFileMetadata;// Offset=0xc Size=0x8
    long PrefetchSeekThreshold;// Offset=0x14 Size=0x4
    unsigned long InPageSinglePages;// Offset=0x18 Size=0x4
    union _SLIST_HEADER InPageSupportSListHead[2];// Offset=0x20 Size=0x20
    union _SLIST_HEADER ReservedInPageSupportSListHead[2];// Offset=0x40 Size=0x20
    unsigned char InPageSupportSListMinimum[2];// Offset=0x60 Size=0x2
    struct _MMINPAGE_SUPPORT * FirstReservedInPageBlock[2];// Offset=0x68 Size=0x10
    struct _MMINPAGE_SUPPORT * LastReservedInPageBlock[2];// Offset=0x78 Size=0x10
    struct _MMPTE * ReservedPtes;// Offset=0x88 Size=0x8
    long ReservedPtesLock;// Offset=0x90 Size=0x4
    unsigned long ReservedPtesBitBuffer;// Offset=0x94 Size=0x4
    long DelayPageFaults;// Offset=0x98 Size=0x4
    unsigned char MdlsAdjusted;// Offset=0x9c Size=0x1
    long NumberOfFailedStoreReads;// Offset=0xa0 Size=0x4
    long PagefileFsSizeReductionFailed;// Offset=0xa4 Size=0x4
    long LastPagefileFsSizeReductionFailStatus;// Offset=0xa8 Size=0x4
};
