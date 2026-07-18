struct _PPM_PERF_SNAPSHOT// Size=0x80 (Id=872)
{
    unsigned long Initiator;// Offset=0x0 Size=0x4
    unsigned char LogType;// Offset=0x4 Size=0x1
    unsigned char Reset;// Offset=0x5 Size=0x1
    unsigned char Remote;// Offset=0x6 Size=0x1
    unsigned long long InterruptTime;// Offset=0x8 Size=0x8
    unsigned long long RawUnscaledTime;// Offset=0x10 Size=0x8
    unsigned long long TotalUnscaleTime;// Offset=0x18 Size=0x8
    unsigned long CachedScalingFactor[2];// Offset=0x20 Size=0x8
    unsigned long long RawReferenceCount[2];// Offset=0x28 Size=0x10
    unsigned long long RawActualCount[2];// Offset=0x38 Size=0x10
    unsigned long long RawScaledTime[2];// Offset=0x48 Size=0x10
    unsigned long long TotalScaleTime[2];// Offset=0x58 Size=0x10
    unsigned long long HvCurrentTime;// Offset=0x68 Size=0x8
    unsigned long long IdleAccumulation;// Offset=0x70 Size=0x8
    unsigned long Value[2];// Offset=0x78 Size=0x8
};
