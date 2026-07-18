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

struct _ETW_PMC_SUPPORT// Size=0x28 (Id=462)
{
    enum _KPROFILE_SOURCE Source[4];// Offset=0x0 Size=0x10
    unsigned long HookIdCount;// Offset=0x10 Size=0x4
    unsigned short HookId[4];// Offset=0x14 Size=0x8
    unsigned long CountersCount;// Offset=0x1c Size=0x4
    struct _HAL_PMC_COUNTERS * ProcessorCtrs[1];// Offset=0x20 Size=0x8
};
