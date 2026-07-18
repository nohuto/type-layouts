struct _MI_AGING_FACTORS// Size=0x50 (Id=2396)
{
    unsigned long long AvailablePages[8];// Offset=0x0 Size=0x40
    unsigned long long AverageAvailValue;// Offset=0x40 Size=0x8
    unsigned long AvailableDeviationPosition;// Offset=0x48 Size=0x4
};

struct _MI_WS_CLAIM_INFORMATION// Size=0x50 (Id=1677)
{
    unsigned long long AgeDistribution[8];// Offset=0x0 Size=0x40
    unsigned long long VeryOldWsles;// Offset=0x40 Size=0x8
    unsigned char HardMaximumAgingNeeded;// Offset=0x48 Size=0x1
    unsigned char HardMaximumTrimmingNeeded;// Offset=0x49 Size=0x1
};

struct _MI_WORKING_SET_CONFIGURATION// Size=0xf0 (Id=1448)
{
    unsigned long long SecondsTillNextTrim;// Offset=0x0 Size=0x8
    unsigned long long AvailablePages;// Offset=0x8 Size=0x8
    unsigned long long AvailableGoal;// Offset=0x10 Size=0x8
    unsigned long long MaxAvailableGoal;// Offset=0x18 Size=0x8
    unsigned long AgePercent;// Offset=0x20 Size=0x4
    unsigned long MinAgePercent;// Offset=0x24 Size=0x4
    unsigned long StandbyRemoved;// Offset=0x28 Size=0x4
    unsigned long LastStandbyRePurposed;// Offset=0x2c Size=0x4
    unsigned long StandbyRemovedAtLastTrim;// Offset=0x30 Size=0x4
    struct _MI_AGING_FACTORS AgingFactors;// Offset=0x38 Size=0x50
    unsigned char PrivatePageTrimAge;// Offset=0x88 Size=0x1
    unsigned char SharedPageTrimAge;// Offset=0x89 Size=0x1
    unsigned char AgeForSlowStandby;// Offset=0x8a Size=0x1
    unsigned long long OldPagesNeeded;// Offset=0x90 Size=0x8
    struct _MI_WS_CLAIM_INFORMATION Claim;// Offset=0x98 Size=0x50
    unsigned long long TotalPagesInChildPartitions;// Offset=0xe8 Size=0x8
};
