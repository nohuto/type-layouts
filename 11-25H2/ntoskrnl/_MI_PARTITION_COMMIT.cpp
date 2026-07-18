struct _MI_PARTITION_COMMIT// Size=0x50 (Id=1944)
{
    unsigned long long PeakCommitment;// Offset=0x0 Size=0x8
    unsigned long long TotalCommitLimitMaximum;// Offset=0x8 Size=0x8
    unsigned long Popups[2];// Offset=0x10 Size=0x8
    unsigned long long LowCommitThreshold;// Offset=0x18 Size=0x8
    unsigned long long HighCommitThreshold;// Offset=0x20 Size=0x8
    unsigned long long ExtremelyHighCommitThreshold;// Offset=0x28 Size=0x8
    unsigned long long IdealCommitTarget;// Offset=0x30 Size=0x8
    long Lock;// Offset=0x38 Size=0x4
    unsigned long long SystemCommitReserve;// Offset=0x40 Size=0x8
    unsigned long long OverCommit;// Offset=0x48 Size=0x8
};
