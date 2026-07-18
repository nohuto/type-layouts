struct _GROUP_AFFINITY// Size=0x10 (Id=296)
{
    unsigned long long Mask;// Offset=0x0 Size=0x8
    unsigned short Group;// Offset=0x8 Size=0x2
    unsigned short Reserved[3];// Offset=0xa Size=0x6
};

struct _flags// Size=0x1 (Id=1461)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char SmtSetsPresent:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Fill:7;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x7
    };
};

union _KQOS_GROUPING_SETS// Size=0x10 (Id=1233)
{
    unsigned long long SingleCoreSet;// Offset=0x0 Size=0x8
    unsigned long long SmtSet;// Offset=0x8 Size=0x8
};

union _KRANK_LIST// Size=0x40 (Id=2183)
{
    unsigned char Ranks[64];// Offset=0x0 Size=0x40
    unsigned long long AsUlong64s[8];// Offset=0x0 Size=0x40
};

struct _KSCHEDULER_SUBNODE// Size=0x300 (Id=1099)
{
    unsigned long long Spare0;// Offset=0x0 Size=0x8
    unsigned long long IdleNonParkedCpuSet;// Offset=0x8 Size=0x8
    union // Size=0x20 (Id=0)
    {
        unsigned long long IdleCpuSet;// Offset=0x10 Size=0x8
        unsigned long long IdleSmtSet;// Offset=0x18 Size=0x8
        unsigned long long IdleIsolationUnitSet[2];// Offset=0x10 Size=0x10
    };
    unsigned long long ThreadQosGroupingSet;// Offset=0x20 Size=0x8
    unsigned long long Spare1[3];// Offset=0x28 Size=0x18
    unsigned long long DeepIdleSet;// Offset=0x40 Size=0x8
    unsigned long long IdleConstrainedSet;// Offset=0x48 Size=0x8
    unsigned long long NonParkedSet;// Offset=0x50 Size=0x8
    unsigned long long ParkRequestSet;// Offset=0x58 Size=0x8
    unsigned long long SoftParkRequestSet;// Offset=0x60 Size=0x8
    unsigned long long ForceParkRequestSet;// Offset=0x68 Size=0x8
    unsigned long long NonIsrTargetedSet;// Offset=0x70 Size=0x8
    long ParkLock;// Offset=0x78 Size=0x4
    unsigned char ProcessSeed;// Offset=0x7c Size=0x1
    unsigned char Spare5[3];// Offset=0x7d Size=0x3
    union // Size=0x10 (Id=0)
    {
        struct _GROUP_AFFINITY Affinity;// Offset=0x80 Size=0x10
        unsigned char AffinityFill[10];// Offset=0x80 Size=0xa
    };
    unsigned short ParentNodeNumber;// Offset=0x8a Size=0x2
    unsigned short SubNodeNumber;// Offset=0x8c Size=0x2
    unsigned short Spare;// Offset=0x8e Size=0x2
    unsigned long long SiblingMask;// Offset=0x90 Size=0x8
    unsigned long long SharedReadyQueueMask;// Offset=0x98 Size=0x8
    unsigned long long StrideMask;// Offset=0xa0 Size=0x8
    unsigned long long LLCLeaders;// Offset=0xa8 Size=0x8
    unsigned long Lowest;// Offset=0xb0 Size=0x4
    unsigned long Highest;// Offset=0xb4 Size=0x4
    struct _flags Flags;// Offset=0xb8 Size=0x1
    unsigned char WorkloadClasses;// Offset=0xb9 Size=0x1
    struct _KHETERO_PROCESSOR_SET * HeteroSets;// Offset=0xc0 Size=0x8
    union _KRANK_LIST * PerformanceRanks;// Offset=0xc8 Size=0x8
    union _KRANK_LIST * EfficiencyRanks;// Offset=0xd0 Size=0x8
    unsigned long long Spare6[5];// Offset=0xd8 Size=0x28
    unsigned long long PpmConfiguredQosSets[7];// Offset=0x100 Size=0x38
    unsigned long long Spare7;// Offset=0x138 Size=0x8
    union _KQOS_GROUPING_SETS PpmQosGroupingSets;// Offset=0x140 Size=0x10
    unsigned long long Spare8[6];// Offset=0x150 Size=0x30
    unsigned long long StealableLocalReadyQueues;// Offset=0x180 Size=0x8
    unsigned long long StealableSharedReadyQueues;// Offset=0x188 Size=0x8
    unsigned long long StealableStandbyThreads;// Offset=0x190 Size=0x8
    unsigned long long Spare9[5];// Offset=0x198 Size=0x28
    union _KRANK_LIST SoftParkRanks;// Offset=0x1c0 Size=0x40
    union _KRANK_LIST CoreShareCounts;// Offset=0x200 Size=0x40
    union _KRANK_LIST ModuleShareCounts;// Offset=0x240 Size=0x40
    union _KRANK_LIST ThreadQosGroupingCoreShareCounts;// Offset=0x280 Size=0x40
    union _KRANK_LIST ThreadQosGroupingModuleShareCounts;// Offset=0x2c0 Size=0x40
};
