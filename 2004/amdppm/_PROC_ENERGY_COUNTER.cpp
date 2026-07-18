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

struct _PROC_ENERGY_COUNTER// Size=0xc (Id=501)
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
