struct _PERFINFO_PAGECOMBINE_AGGREGATE_STAT// Size=0x20 (Id=3757)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long StatType:6;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x6
        unsigned long Spare:26;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1a
    };
    unsigned long CombineScanCount;// Offset=0x4 Size=0x4
    unsigned long long PagesScanned;// Offset=0x8 Size=0x8
    unsigned long long PagesCombined;// Offset=0x10 Size=0x8
    long CombinedBlocksInUse;// Offset=0x18 Size=0x4
    long SumCombinedBlocksReferenceCount;// Offset=0x1c Size=0x4
};
