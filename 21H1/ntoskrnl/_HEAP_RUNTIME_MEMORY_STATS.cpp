struct _HEAP_OPPORTUNISTIC_LARGE_PAGE_STATS// Size=0x10 (Id=1668)
{
    unsigned long long SmallPagesInUseWithinLarge;// Offset=0x0 Size=0x8
    unsigned long long OpportunisticLargePageCount;// Offset=0x8 Size=0x8
};

struct _RTL_HP_SEG_ALLOC_POLICY// Size=0x18 (Id=1250)
{
    unsigned long long MinLargePages;// Offset=0x0 Size=0x8
    unsigned long long MaxLargePages;// Offset=0x8 Size=0x8
    unsigned char MinUtilization;// Offset=0x10 Size=0x1
};

struct _HEAP_RUNTIME_MEMORY_STATS// Size=0x58 (Id=757)
{
    unsigned long long TotalReservedPages;// Offset=0x0 Size=0x8
    unsigned long long TotalCommittedPages;// Offset=0x8 Size=0x8
    unsigned long long FreeCommittedPages;// Offset=0x10 Size=0x8
    unsigned long long LfhFreeCommittedPages;// Offset=0x18 Size=0x8
    struct _HEAP_OPPORTUNISTIC_LARGE_PAGE_STATS LargePageStats[2];// Offset=0x20 Size=0x20
    struct _RTL_HP_SEG_ALLOC_POLICY LargePageUtilizationPolicy;// Offset=0x40 Size=0x18
};
