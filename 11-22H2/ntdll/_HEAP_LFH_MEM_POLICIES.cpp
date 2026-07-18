struct _HEAP_LFH_MEM_POLICIES// Size=0x4 (Id=449)
{
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long DisableAffinity:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long SlowSubsegmentGrowth:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long Spare:30;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1e
        };
        unsigned long AllPolicies;// Offset=0x0 Size=0x4
    };
};
