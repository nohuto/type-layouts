union RTLP_HP_LFH_PERF_FLAGS// Size=0x4 (Id=925)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long HotspotDetection:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long LfhSubsegmentPrefetch:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long ThreadPrivateSlot:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long VsAffinitySlots:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long OpportunisticLargePreCommit:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long LfhForcedAffinity:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long LfhConservativeAffinity:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long LfhCachelinePadding:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long LfhSubsegmentHeat:2;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x2
        unsigned long SegCachedCommitLimitRatio:2;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x2
        unsigned long HotSubsegmentSizeShift:2;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x2
        unsigned long HotThresholdHighShift:2;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x2
        unsigned long LfhDisable:1;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned long AsanEnable:1;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x1
        unsigned long Spare:6;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x6
        unsigned long Reserved:8;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x8
    };
    unsigned long AllFlags;// Offset=0x0 Size=0x4
};
