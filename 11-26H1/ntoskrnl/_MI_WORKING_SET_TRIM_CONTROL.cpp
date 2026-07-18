struct _MI_WS_CLAIM_INFORMATION// Size=0x50 (Id=1677)
{
    unsigned long long AgeDistribution[8];// Offset=0x0 Size=0x40
    unsigned long long VeryOldWsles;// Offset=0x40 Size=0x8
    unsigned char HardMaximumAgingNeeded;// Offset=0x48 Size=0x1
    unsigned char HardMaximumTrimmingNeeded;// Offset=0x49 Size=0x1
};

struct _MI_WORKING_SET_TRIM_HISTOGRAM// Size=0x98 (Id=2287)
{
    unsigned long long StartTime;// Offset=0x0 Size=0x8
    unsigned long long ElapsedTime;// Offset=0x8 Size=0x8
    unsigned long long StartAvailablePages[2];// Offset=0x10 Size=0x10
    unsigned long long EndAvailablePages[2];// Offset=0x20 Size=0x10
    unsigned long long TrimGoal;// Offset=0x30 Size=0x8
    unsigned long long PagesTrimmed;// Offset=0x38 Size=0x8
    struct _MI_WS_CLAIM_INFORMATION Claim;// Offset=0x40 Size=0x50
    unsigned short NumPasses;// Offset=0x90 Size=0x2
    unsigned short TrimStamp;// Offset=0x92 Size=0x2
    enum MI_TRIM_REASON TrimReason;// Offset=0x94 Size=0x4
};

enum _MEMORY_PARTITION_TRIM_WHILE_AGING_STATE
{
    MmTrimWhileAgingOff=0,
    MmTrimWhileAgingLowPriority=1,
    MmTrimWhileAgingPassive=2,
    MmTrimWhileAgingNormal=3,
    MmTrimWhileAgingAggressive=4,
    MmTrimWhileAgingMax=5
};

struct _MI_WORKING_SET_TRIM_CONTROL// Size=0xa20 (Id=1604)
{
    unsigned short TrimStamp;// Offset=0x0 Size=0x2
    unsigned long long AvailableDeviationAverage;// Offset=0x8 Size=0x8
    unsigned long long AvailableDeviation[8];// Offset=0x10 Size=0x40
    unsigned long NumPasses[5];// Offset=0x50 Size=0x14
    unsigned long Delays;// Offset=0x64 Size=0x4
    unsigned char HistogramIndex;// Offset=0x68 Size=0x1
    struct _MI_WORKING_SET_TRIM_HISTOGRAM Histogram[16];// Offset=0x70 Size=0x980
    unsigned long long LowPriorityWsThreshold;// Offset=0x9f0 Size=0x8
    unsigned long long LastAvailable;// Offset=0x9f8 Size=0x8
    unsigned long long MinAvailableGoal;// Offset=0xa00 Size=0x8
    unsigned long long IdealAvailableGoal;// Offset=0xa08 Size=0x8
    enum _MEMORY_PARTITION_TRIM_WHILE_AGING_STATE TrimWhileAgingState;// Offset=0xa10 Size=0x4
    long ManyLowPriorityAgesExist;// Offset=0xa14 Size=0x4
    unsigned char TrimActive;// Offset=0xa18 Size=0x1
};
