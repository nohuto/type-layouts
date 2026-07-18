struct _HEAP_OPPORTUNISTIC_LARGE_PAGE_STATS// Size=0x8 (Id=587)
{
    unsigned long SmallPagesInUseWithinLarge;// Offset=0x0 Size=0x4
    unsigned long OpportunisticLargePageCount;// Offset=0x4 Size=0x4
};

struct _RTL_HP_SEG_ALLOC_POLICY// Size=0xc (Id=430)
{
    unsigned long MinLargePages;// Offset=0x0 Size=0x4
    unsigned long MaxLargePages;// Offset=0x4 Size=0x4
    unsigned char MinUtilization;// Offset=0x8 Size=0x1
};

struct _HEAP_RUNTIME_MEMORY_STATS// Size=0x2c (Id=270)
{
    unsigned long TotalReservedPages;// Offset=0x0 Size=0x4
    unsigned long TotalCommittedPages;// Offset=0x4 Size=0x4
    unsigned long FreeCommittedPages;// Offset=0x8 Size=0x4
    unsigned long LfhFreeCommittedPages;// Offset=0xc Size=0x4
    struct _HEAP_OPPORTUNISTIC_LARGE_PAGE_STATS LargePageStats[2];// Offset=0x10 Size=0x10
    struct _RTL_HP_SEG_ALLOC_POLICY LargePageUtilizationPolicy;// Offset=0x20 Size=0xc
};
