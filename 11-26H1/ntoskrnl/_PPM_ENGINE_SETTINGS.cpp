union _PPM_POLICY_SETTINGS_MASK// Size=0x10 (Id=862)
{
    unsigned long long Buffer[2];// Offset=0x0 Size=0x10
    struct // Size=0x10 (Id=0)
    {
        unsigned long long PerfDecreaseTime:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long PerfIncreaseTime:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long PerfDecreasePolicy:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long PerfIncreasePolicy:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long PerfDecreaseThreshold:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long PerfIncreaseThreshold:1;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x1
        unsigned long long PerfMinPolicy:1;// Offset=0x0 Size=0x8 BitOffset=0x6 BitSize=0x1
        unsigned long long PerfMaxPolicy:1;// Offset=0x0 Size=0x8 BitOffset=0x7 BitSize=0x1
        unsigned long long PerfTimeCheck:1;// Offset=0x0 Size=0x8 BitOffset=0x8 BitSize=0x1
        unsigned long long PerfBoostPolicy:1;// Offset=0x0 Size=0x8 BitOffset=0x9 BitSize=0x1
        unsigned long long PerfBoostMode:1;// Offset=0x0 Size=0x8 BitOffset=0xa BitSize=0x1
        unsigned long long ThrottlingPolicy:1;// Offset=0x0 Size=0x8 BitOffset=0xb BitSize=0x1
        unsigned long long PerfHistoryCount:1;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0x1
        unsigned long long ParkingPerfState:1;// Offset=0x0 Size=0x8 BitOffset=0xd BitSize=0x1
        unsigned long long LatencyHintPerf:1;// Offset=0x0 Size=0x8 BitOffset=0xe BitSize=0x1
        unsigned long long LatencyHintFreq:1;// Offset=0x0 Size=0x8 BitOffset=0xf BitSize=0x1
        unsigned long long LatencyHintEpp:1;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x1
        unsigned long long LatencyHintUnpark:1;// Offset=0x0 Size=0x8 BitOffset=0x11 BitSize=0x1
        unsigned long long CPMinCores:1;// Offset=0x0 Size=0x8 BitOffset=0x12 BitSize=0x1
        unsigned long long CPMaxCores:1;// Offset=0x0 Size=0x8 BitOffset=0x13 BitSize=0x1
        unsigned long long CPDecreasePolicy:1;// Offset=0x0 Size=0x8 BitOffset=0x14 BitSize=0x1
        unsigned long long CPIncreasePolicy:1;// Offset=0x0 Size=0x8 BitOffset=0x15 BitSize=0x1
        unsigned long long CPDecreaseTime:1;// Offset=0x0 Size=0x8 BitOffset=0x16 BitSize=0x1
        unsigned long long CPIncreaseTime:1;// Offset=0x0 Size=0x8 BitOffset=0x17 BitSize=0x1
        unsigned long long CPOverUtilizationThreshold:1;// Offset=0x0 Size=0x8 BitOffset=0x18 BitSize=0x1
        unsigned long long CPDistributeUtility:1;// Offset=0x0 Size=0x8 BitOffset=0x19 BitSize=0x1
        unsigned long long CPConcurrencyThreshold:1;// Offset=0x0 Size=0x8 BitOffset=0x1a BitSize=0x1
        unsigned long long CPHeadroomThreshold:1;// Offset=0x0 Size=0x8 BitOffset=0x1b BitSize=0x1
        unsigned long long CPDistributeThreshold:1;// Offset=0x0 Size=0x8 BitOffset=0x1c BitSize=0x1
        unsigned long long IdleAllowScaling:1;// Offset=0x0 Size=0x8 BitOffset=0x1d BitSize=0x1
        unsigned long long IdleDisabled:1;// Offset=0x0 Size=0x8 BitOffset=0x1e BitSize=0x1
        unsigned long long IdleTimeCheck:1;// Offset=0x0 Size=0x8 BitOffset=0x1f BitSize=0x1
        unsigned long long IdleDemoteThreshold:1;// Offset=0x0 Size=0x8 BitOffset=0x20 BitSize=0x1
        unsigned long long IdlePromoteThreshold:1;// Offset=0x0 Size=0x8 BitOffset=0x21 BitSize=0x1
        unsigned long long EnergyPerfPreference:1;// Offset=0x0 Size=0x8 BitOffset=0x22 BitSize=0x1
        unsigned long long AutonomousActivityWindow:1;// Offset=0x0 Size=0x8 BitOffset=0x23 BitSize=0x1
        unsigned long long AutonomousMode:1;// Offset=0x0 Size=0x8 BitOffset=0x24 BitSize=0x1
        unsigned long long DutyCycling:1;// Offset=0x0 Size=0x8 BitOffset=0x25 BitSize=0x1
        unsigned long long FrequencyCap:1;// Offset=0x0 Size=0x8 BitOffset=0x26 BitSize=0x1
        unsigned long long FrequencyMin:1;// Offset=0x0 Size=0x8 BitOffset=0x27 BitSize=0x1
        unsigned long long IdleStateMax:1;// Offset=0x0 Size=0x8 BitOffset=0x28 BitSize=0x1
        unsigned long long ResponsivenessDisableThreshold:1;// Offset=0x0 Size=0x8 BitOffset=0x29 BitSize=0x1
        unsigned long long ResponsivenessEnableThreshold:1;// Offset=0x0 Size=0x8 BitOffset=0x2a BitSize=0x1
        unsigned long long ResponsivenessDisableTime:1;// Offset=0x0 Size=0x8 BitOffset=0x2b BitSize=0x1
        unsigned long long ResponsivenessEnableTime:1;// Offset=0x0 Size=0x8 BitOffset=0x2c BitSize=0x1
        unsigned long long ResponsivenessEppCeiling:1;// Offset=0x0 Size=0x8 BitOffset=0x2d BitSize=0x1
        unsigned long long ResponsivenessPerfFloor:1;// Offset=0x0 Size=0x8 BitOffset=0x2e BitSize=0x1
        unsigned long long SoftParkLatency:1;// Offset=0x0 Size=0x8 BitOffset=0x2f BitSize=0x1
        unsigned long long ModuleUnparkPolicy:1;// Offset=0x0 Size=0x8 BitOffset=0x30 BitSize=0x1
        unsigned long long ComplexUnparkPolicy:1;// Offset=0x0 Size=0x8 BitOffset=0x31 BitSize=0x1
        unsigned long long SmtUnparkPolicy:1;// Offset=0x0 Size=0x8 BitOffset=0x32 BitSize=0x1
        unsigned long long RestrictionCount:1;// Offset=0x0 Size=0x8 BitOffset=0x33 BitSize=0x1
        unsigned long long ResourcePriority:1;// Offset=0x0 Size=0x8 BitOffset=0x34 BitSize=0x1
        unsigned long long HeteroDecreaseTime:1;// Offset=0x0 Size=0x8 BitOffset=0x35 BitSize=0x1
        unsigned long long HeteroIncreaseTime:1;// Offset=0x0 Size=0x8 BitOffset=0x36 BitSize=0x1
        unsigned long long HeteroDecreaseThreshold:1;// Offset=0x0 Size=0x8 BitOffset=0x37 BitSize=0x1
        unsigned long long HeteroIncreaseThreshold:1;// Offset=0x0 Size=0x8 BitOffset=0x38 BitSize=0x1
        unsigned long long Class0FloorPerformance:1;// Offset=0x0 Size=0x8 BitOffset=0x39 BitSize=0x1
        unsigned long long Class1InitialPerformance:1;// Offset=0x0 Size=0x8 BitOffset=0x3a BitSize=0x1
        unsigned long long SchedulingPolicy:1;// Offset=0x0 Size=0x8 BitOffset=0x3b BitSize=0x1
        unsigned long long ShortSchedulingPolicy:1;// Offset=0x0 Size=0x8 BitOffset=0x3c BitSize=0x1
        unsigned long long ShortThreadRuntimeThreshold:1;// Offset=0x0 Size=0x8 BitOffset=0x3d BitSize=0x1
        unsigned long long ShortThreadArchClassUpperThreshold:1;// Offset=0x0 Size=0x8 BitOffset=0x3e BitSize=0x1
        unsigned long long ShortThreadArchClassLowerThreshold:1;// Offset=0x0 Size=0x8 BitOffset=0x3f BitSize=0x1
        unsigned long long LongThreadArchClassUpperThreshold:1;// Offset=0x8 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long LongThreadArchClassLowerThreshold:1;// Offset=0x8 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long HeteroPolicy:1;// Offset=0x8 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long HeteroContainmentIncreaseTime:1;// Offset=0x8 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long HeteroContainmentDecreaseTime:1;// Offset=0x8 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long HeteroEfficiencyContainmentThreshold:1;// Offset=0x8 Size=0x8 BitOffset=0x5 BitSize=0x1
        unsigned long long HeteroHybridContainmentThreshold:1;// Offset=0x8 Size=0x8 BitOffset=0x6 BitSize=0x1
        unsigned long long HeteroContainmentPolicy:1;// Offset=0x8 Size=0x8 BitOffset=0x7 BitSize=0x1
        unsigned long long WpsMinEfficiencyThreshold:1;// Offset=0x8 Size=0x8 BitOffset=0x8 BitSize=0x1
        unsigned long long HeteroContainmentEfficiencyImpUtilThreshold:1;// Offset=0x8 Size=0x8 BitOffset=0x9 BitSize=0x1
        unsigned long long HeteroContainmentHybridImpUtilThreshold:1;// Offset=0x8 Size=0x8 BitOffset=0xa BitSize=0x1
    };
};

enum _KHETERO_CPU_POLICY
{
    KHeteroCpuPolicyAll=0,
    KHeteroCpuPolicyLarge=1,
    KHeteroCpuPolicyLargeOrIdle=2,
    KHeteroCpuPolicySmall=3,
    KHeteroCpuPolicySmallOrIdle=4,
    KHeteroCpuPolicyDynamic=5,
    KHeteroCpuPolicyStaticMax=5,
    KHeteroCpuPolicyBiasedSmall=6,
    KHeteroCpuPolicyBiasedLarge=7,
    KHeteroCpuPolicyDefault=8,
    KHeteroCpuPolicyMax=9
};

enum _PPM_HETERO_POLICY
{
    PpmHeteroPolicyNone=0,
    PpmHeteroPolicyManual=1,
    PpmHeteroPolicySmallOnly=2,
    PpmHeteroPolicyLargeOnly=3,
    PpmHeteroPolicyDynamic=4,
    PpmHeteroPolicyMaximum=5
};

struct _PPM_ENGINE_SETTINGS// Size=0x2c8 (Id=869)
{
    union _PPM_POLICY_SETTINGS_MASK ExplicitSetting[3];// Offset=0x0 Size=0x30
    unsigned char ThrottlingPolicy;// Offset=0x30 Size=0x1
    unsigned long PerfTimeCheck;// Offset=0x34 Size=0x4
    unsigned char PerfHistoryCount[3];// Offset=0x38 Size=0x3
    unsigned char PerfMinPolicy[3];// Offset=0x3b Size=0x3
    unsigned char PerfMaxPolicy[3];// Offset=0x3e Size=0x3
    unsigned char PerfDecreaseTime[3];// Offset=0x41 Size=0x3
    unsigned char PerfIncreaseTime[3];// Offset=0x44 Size=0x3
    unsigned char PerfDecreasePolicy[3];// Offset=0x47 Size=0x3
    unsigned char PerfIncreasePolicy[3];// Offset=0x4a Size=0x3
    unsigned char PerfDecreaseThreshold[3];// Offset=0x4d Size=0x3
    unsigned char PerfIncreaseThreshold[3];// Offset=0x50 Size=0x3
    unsigned long PerfFrequencyCap[3];// Offset=0x54 Size=0xc
    unsigned long PerfFrequencyMin[3];// Offset=0x60 Size=0xc
    unsigned long PerfBoostPolicy;// Offset=0x6c Size=0x4
    unsigned long PerfBoostMode;// Offset=0x70 Size=0x4
    unsigned long PerfReductionTolerance;// Offset=0x74 Size=0x4
    unsigned long EnergyPerfPreference[3];// Offset=0x78 Size=0xc
    unsigned long AutonomousActivityWindow;// Offset=0x84 Size=0x4
    unsigned char AutonomousPreference;// Offset=0x88 Size=0x1
    unsigned char LatencyHintPerf[3];// Offset=0x89 Size=0x3
    unsigned long LatencyHintFreq[3];// Offset=0x8c Size=0xc
    unsigned char LatencyHintEpp[3];// Offset=0x98 Size=0x3
    unsigned char LatencyHintUnpark[3];// Offset=0x9b Size=0x3
    unsigned long ResponsivenessDisableThreshold[3];// Offset=0xa0 Size=0xc
    unsigned long ResponsivenessEnableThreshold[3];// Offset=0xac Size=0xc
    unsigned char ResponsivenessDisableTime[3];// Offset=0xb8 Size=0x3
    unsigned char ResponsivenessEnableTime[3];// Offset=0xbb Size=0x3
    unsigned long ResponsivenessEppCeiling[3];// Offset=0xc0 Size=0xc
    unsigned long ResponsivenessPerfFloor[3];// Offset=0xcc Size=0xc
    unsigned char DutyCycling;// Offset=0xd8 Size=0x1
    unsigned char ParkingPerfState[3];// Offset=0xd9 Size=0x3
    unsigned char DistributeUtility;// Offset=0xdc Size=0x1
    unsigned char CoreParkingOverUtilizationThreshold;// Offset=0xdd Size=0x1
    unsigned char CoreParkingConcurrencyThreshold;// Offset=0xde Size=0x1
    unsigned char CoreParkingHeadroomThreshold;// Offset=0xdf Size=0x1
    unsigned char CoreParkingDistributionThreshold;// Offset=0xe0 Size=0x1
    unsigned char CoreParkingDecreasePolicy;// Offset=0xe1 Size=0x1
    unsigned char CoreParkingIncreasePolicy;// Offset=0xe2 Size=0x1
    unsigned long CoreParkingDecreaseTime;// Offset=0xe4 Size=0x4
    unsigned long CoreParkingIncreaseTime;// Offset=0xe8 Size=0x4
    unsigned char CoreParkingMinCores[3];// Offset=0xec Size=0x3
    unsigned char CoreParkingMaxCores[3];// Offset=0xef Size=0x3
    unsigned long SoftParkLatency;// Offset=0xf4 Size=0x4
    unsigned char AllowScaling;// Offset=0xf8 Size=0x1
    unsigned char IdleDisabled;// Offset=0xf9 Size=0x1
    unsigned long IdleTimeCheck;// Offset=0xfc Size=0x4
    unsigned char IdleDemotePercent;// Offset=0x100 Size=0x1
    unsigned char IdlePromotePercent;// Offset=0x101 Size=0x1
    unsigned char IdleStateMax;// Offset=0x102 Size=0x1
    unsigned char ResourcePriority[3];// Offset=0x103 Size=0x3
    unsigned char HeteroDecreaseTime;// Offset=0x106 Size=0x1
    unsigned char HeteroIncreaseTime;// Offset=0x107 Size=0x1
    unsigned char HeteroDecreaseThreshold[3][64];// Offset=0x108 Size=0xc0
    unsigned char HeteroIncreaseThreshold[3][64];// Offset=0x1c8 Size=0xc0
    unsigned char Class0FloorPerformance;// Offset=0x288 Size=0x1
    unsigned char Class1InitialPerformance;// Offset=0x289 Size=0x1
    unsigned long ShortThreadRuntimeThreshold;// Offset=0x28c Size=0x4
    enum _KHETERO_CPU_POLICY ThreadPolicies[2];// Offset=0x290 Size=0x8
    unsigned char ArchClassLowerThreshold[2];// Offset=0x298 Size=0x2
    unsigned char ArchClassUpperThreshold[2];// Offset=0x29a Size=0x2
    unsigned char ModuleUnparkPolicy;// Offset=0x29c Size=0x1
    unsigned char ComplexUnparkPolicy;// Offset=0x29d Size=0x1
    unsigned char SmtUnparkPolicy;// Offset=0x29e Size=0x1
    enum _PPM_HETERO_POLICY HeteroPolicy;// Offset=0x2a0 Size=0x4
    unsigned long HeteroContainmentDecreaseTime;// Offset=0x2a4 Size=0x4
    unsigned long HeteroContainmentIncreaseTime;// Offset=0x2a8 Size=0x4
    unsigned long HeteroEfficiencyContainmentThreshold;// Offset=0x2ac Size=0x4
    unsigned long HeteroHybridContainmentThreshold;// Offset=0x2b0 Size=0x4
    unsigned long HeteroContainmentPolicy;// Offset=0x2b4 Size=0x4
    unsigned long WpsMinEfficiencyThreshold;// Offset=0x2b8 Size=0x4
    unsigned long HeteroContainmentEfficiencyImpUtilThreshold;// Offset=0x2bc Size=0x4
    unsigned long HeteroContainmentHybridImpUtilThreshold;// Offset=0x2c0 Size=0x4
    unsigned char RestrictionCount;// Offset=0x2c4 Size=0x1
};
