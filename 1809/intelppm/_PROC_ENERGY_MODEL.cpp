union _PROC_POWER_COORDINATES// Size=0x4 (Id=444)
{
    unsigned long PowerCoordinates;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long FrequencyPercent:8;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long PowerEnvelope:24;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x18
    };
};

enum _KPROFILE_SOURCE
{
    ProfileTime=0,
    ProfileAlignmentFixup=1,
    ProfileTotalIssues=2,
    ProfilePipelineDry=3,
    ProfileLoadInstructions=4,
    ProfilePipelineFrozen=5,
    ProfileBranchInstructions=6,
    ProfileTotalNonissues=7,
    ProfileDcacheMisses=8,
    ProfileIcacheMisses=9,
    ProfileCacheMisses=10,
    ProfileBranchMispredictions=11,
    ProfileStoreInstructions=12,
    ProfileFpInstructions=13,
    ProfileIntegerInstructions=14,
    Profile2Issue=15,
    Profile3Issue=16,
    Profile4Issue=17,
    ProfileSpecialInstructions=18,
    ProfileTotalCycles=19,
    ProfileIcacheIssues=20,
    ProfileDcacheAccesses=21,
    ProfileMemoryBarrierCycles=22,
    ProfileLoadLinkedIssues=23,
    ProfileMaximum=24
};

struct _PROC_ENERGY_COUNTER// Size=0xc (Id=478)
{
    union // Size=0x4 (Id=0)
    {
        unsigned long CounterId;// Offset=0x0 Size=0x4
        enum _KPROFILE_SOURCE ProfileSource;// Offset=0x0 Size=0x4
    };
    union // Size=0x4 (Id=0)
    {
        unsigned long CounterType;// Offset=0x4 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long MachineSpecificCounter:1;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long Reserved:15;// Offset=0x4 Size=0x4 BitOffset=0x1 BitSize=0xf
            unsigned long CounterDescriptor:16;// Offset=0x4 Size=0x4 BitOffset=0x10 BitSize=0x10
        };
    };
    union // Size=0x4 (Id=0)
    {
        unsigned long FactorDWord;// Offset=0x8 Size=0x4
        float FactorFloat;// Offset=0x8 Size=0x4
    };
};

struct _PROC_ENERGY_MODEL// Size=0x100 (Id=437)
{
    unsigned long PowerEnvelope;// Offset=0x0 Size=0x4
    union // Size=0x4 (Id=0)
    {
        unsigned long PowerCurveMetadata;// Offset=0x4 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long UsePowerCurve:1;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long PointCount:7;// Offset=0x4 Size=0x4 BitOffset=0x1 BitSize=0x7
            unsigned long Reserved:24;// Offset=0x4 Size=0x4 BitOffset=0x8 BitSize=0x18
        };
    };
    union _PROC_POWER_COORDINATES PowerCurve[8];// Offset=0x8 Size=0x20
    unsigned long NumberOfCounters;// Offset=0x28 Size=0x4
    struct _PROC_ENERGY_COUNTER EnergyCounters[16];// Offset=0x2c Size=0xc0
    void  ( * ComputeEnergy)(unsigned long ,unsigned long long ,unsigned long long ,unsigned long ,unsigned long long * );// Offset=0xf0 Size=0x8
    void  ( * SnapEnergyCounters)(unsigned long ,unsigned char ,unsigned char );// Offset=0xf8 Size=0x8
};
