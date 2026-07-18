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
