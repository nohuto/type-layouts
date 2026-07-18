union RTLP_HP_LFH_PERF_FLAGS// Size=0x4 (Id=487)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long HotspotDetection:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long HotspotFullCommit:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long ActiveSubsegment:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long SmallerSubsegment:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long SingleAffinitySlot:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long ApplyLfhDecommitPolicy:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long EnableGarbageCollection:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
    };
    unsigned long AllFlags;// Offset=0x0 Size=0x4
};
