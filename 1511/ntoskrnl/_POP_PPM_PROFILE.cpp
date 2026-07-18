struct _GUID// Size=0x10 (Id=101)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

union _PPM_POLICY_SETTINGS_MASK// Size=0x8 (Id=1238)
{
    unsigned long long Value;// Offset=0x0 Size=0x8
    struct // Size=0x8 (Id=0)
    {
        unsigned long PerfDecreaseTime:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long PerfIncreaseTime:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long PerfDecreasePolicy:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long PerfIncreasePolicy:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long PerfDecreaseThreshold:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long PerfIncreaseThreshold:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long PerfMinPolicy:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long PerfMaxPolicy:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long PerfTimeCheck:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long PerfBoostPolicy:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long PerfBoostMode:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long AllowThrottling:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long PerfHistoryCount:1;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x1
        unsigned long ParkingPerfState:1;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x1
        unsigned long LatencyHintPerf:1;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x1
        unsigned long LatencyHintUnpark:1;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x1
        unsigned long CoreParkingMinCores:1;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned long CoreParkingMaxCores:1;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x1
        unsigned long CoreParkingDecreasePolicy:1;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x1
        unsigned long CoreParkingIncreasePolicy:1;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0x1
        unsigned long CoreParkingDecreaseTime:1;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x1
        unsigned long CoreParkingIncreaseTime:1;// Offset=0x0 Size=0x4 BitOffset=0x15 BitSize=0x1
        unsigned long CoreParkingOverUtilizationThreshold:1;// Offset=0x0 Size=0x4 BitOffset=0x16 BitSize=0x1
        unsigned long CoreParkingDistributeUtility:1;// Offset=0x0 Size=0x4 BitOffset=0x17 BitSize=0x1
        unsigned long CoreParkingConcurrencyThreshold:1;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x1
        unsigned long CoreParkingHeadroomThreshold:1;// Offset=0x0 Size=0x4 BitOffset=0x19 BitSize=0x1
        unsigned long CoreParkingDistributionThreshold:1;// Offset=0x0 Size=0x4 BitOffset=0x1a BitSize=0x1
        unsigned long IdleAllowScaling:1;// Offset=0x0 Size=0x4 BitOffset=0x1b BitSize=0x1
        unsigned long IdleDisable:1;// Offset=0x0 Size=0x4 BitOffset=0x1c BitSize=0x1
        unsigned long IdleTimeCheck:1;// Offset=0x0 Size=0x4 BitOffset=0x1d BitSize=0x1
        unsigned long IdleDemoteThreshold:1;// Offset=0x0 Size=0x4 BitOffset=0x1e BitSize=0x1
        unsigned long IdlePromoteThreshold:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
        unsigned long HeteroDecreaseTime:1;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long HeteroIncreaseTime:1;// Offset=0x4 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long HeteroDecreaseThreshold:1;// Offset=0x4 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long HeteroIncreaseThreshold:1;// Offset=0x4 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long Class0FloorPerformance:1;// Offset=0x4 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long Class1InitialPerformance:1;// Offset=0x4 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long EnergyPerfPreference:1;// Offset=0x4 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long AutonomousActivityWindow:1;// Offset=0x4 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long AutonomousMode:1;// Offset=0x4 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long DutyCycling:1;// Offset=0x4 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long Spare:22;// Offset=0x4 Size=0x4 BitOffset=0xa BitSize=0x16
    };
};

struct _PPM_ENGINE_SETTINGS// Size=0x570 (Id=359)
{
    union _PPM_POLICY_SETTINGS_MASK ExplicitSetting[2];// Offset=0x0 Size=0x10
    unsigned char ThrottlingPolicy;// Offset=0x10 Size=0x1
    unsigned long PerfTimeCheck;// Offset=0x14 Size=0x4
    unsigned char PerfHistoryCount[2];// Offset=0x18 Size=0x2
    unsigned char PerfMinPolicy[2];// Offset=0x1a Size=0x2
    unsigned char PerfMaxPolicy[2];// Offset=0x1c Size=0x2
    unsigned char PerfDecreaseTime[2];// Offset=0x1e Size=0x2
    unsigned char PerfIncreaseTime[2];// Offset=0x20 Size=0x2
    unsigned char PerfDecreasePolicy[2];// Offset=0x22 Size=0x2
    unsigned char PerfIncreasePolicy[2];// Offset=0x24 Size=0x2
    unsigned char PerfDecreaseThreshold[2];// Offset=0x26 Size=0x2
    unsigned char PerfIncreaseThreshold[2];// Offset=0x28 Size=0x2
    unsigned long PerfBoostPolicy;// Offset=0x2c Size=0x4
    unsigned long PerfBoostMode;// Offset=0x30 Size=0x4
    unsigned long PerfReductionTolerance;// Offset=0x34 Size=0x4
    unsigned long EnergyPerfPreference;// Offset=0x38 Size=0x4
    unsigned long AutonomousActivityWindow;// Offset=0x3c Size=0x4
    unsigned char AutonomousPreference;// Offset=0x40 Size=0x1
    unsigned char LatencyHintPerf[2];// Offset=0x41 Size=0x2
    unsigned char LatencyHintUnpark[2];// Offset=0x43 Size=0x2
    unsigned char DutyCycling;// Offset=0x45 Size=0x1
    unsigned char ParkingPerfState[2];// Offset=0x46 Size=0x2
    unsigned char DistributeUtility;// Offset=0x48 Size=0x1
    unsigned char CoreParkingOverUtilizationThreshold;// Offset=0x49 Size=0x1
    unsigned char CoreParkingConcurrencyThreshold;// Offset=0x4a Size=0x1
    unsigned char CoreParkingHeadroomThreshold;// Offset=0x4b Size=0x1
    unsigned char CoreParkingDistributionThreshold;// Offset=0x4c Size=0x1
    unsigned char CoreParkingDecreasePolicy;// Offset=0x4d Size=0x1
    unsigned char CoreParkingIncreasePolicy;// Offset=0x4e Size=0x1
    unsigned long CoreParkingDecreaseTime;// Offset=0x50 Size=0x4
    unsigned long CoreParkingIncreaseTime;// Offset=0x54 Size=0x4
    unsigned char CoreParkingMinCores[2];// Offset=0x58 Size=0x2
    unsigned char CoreParkingMaxCores[2];// Offset=0x5a Size=0x2
    unsigned char AllowScaling;// Offset=0x5c Size=0x1
    unsigned char IdleDisabled;// Offset=0x5d Size=0x1
    unsigned long IdleTimeCheck;// Offset=0x60 Size=0x4
    unsigned char IdleDemotePercent;// Offset=0x64 Size=0x1
    unsigned char IdlePromotePercent;// Offset=0x65 Size=0x1
    unsigned char HeteroDecreaseTime;// Offset=0x66 Size=0x1
    unsigned char HeteroIncreaseTime;// Offset=0x67 Size=0x1
    unsigned char HeteroDecreaseThreshold[640];// Offset=0x68 Size=0x280
    unsigned char HeteroIncreaseThreshold[640];// Offset=0x2e8 Size=0x280
    unsigned char Class0FloorPerformance;// Offset=0x568 Size=0x1
    unsigned char Class1InitialPerformance;// Offset=0x569 Size=0x1
};

struct _POP_PPM_PROFILE// Size=0xb30 (Id=358)
{
    unsigned short * Name;// Offset=0x0 Size=0x8
    unsigned char Id;// Offset=0x8 Size=0x1
    struct _GUID Guid;// Offset=0xc Size=0x10
    unsigned long Flags;// Offset=0x1c Size=0x4
    unsigned char Priority;// Offset=0x20 Size=0x1
    struct _PPM_ENGINE_SETTINGS Settings[2];// Offset=0x28 Size=0xae0
    unsigned long long StartTime;// Offset=0xb08 Size=0x8
    unsigned long long Count;// Offset=0xb10 Size=0x8
    unsigned long long MaxDuration;// Offset=0xb18 Size=0x8
    unsigned long long MinDuration;// Offset=0xb20 Size=0x8
    unsigned long long TotalDuration;// Offset=0xb28 Size=0x8
};
