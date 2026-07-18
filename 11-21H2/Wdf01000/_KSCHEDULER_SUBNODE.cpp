struct _GROUP_AFFINITY// Size=0x10 (Id=1292)
{
    unsigned long long Mask;// Offset=0x0 Size=0x8
    unsigned short Group;// Offset=0x8 Size=0x2
    unsigned short Reserved[3];// Offset=0xa Size=0x6
};

struct _flags// Size=0x1 (Id=769)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char SmtSetsPresent:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Fill:7;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x7
    };
};

union _KQOS_GROUPING_SETS// Size=0x10 (Id=799)
{
    unsigned long long SingleCoreSet;// Offset=0x0 Size=0x8
    unsigned long long SmtSet;// Offset=0x8 Size=0x8
};

struct _KSCHEDULER_SUBNODE// Size=0x140 (Id=997)
{
    unsigned long long SubNodeLock;// Offset=0x0 Size=0x8
    unsigned long long IdleNonParkedCpuSet;// Offset=0x8 Size=0x8
    unsigned long long IdleSmtSet;// Offset=0x10 Size=0x8
    unsigned long long NonPairedSmtSet;// Offset=0x18 Size=0x8
    unsigned long long IdleModuleSet;// Offset=0x20 Size=0x8
    unsigned long long IdleCpuSet;// Offset=0x28 Size=0x8
    unsigned long long DeepIdleSet;// Offset=0x40 Size=0x8
    unsigned long long IdleConstrainedSet;// Offset=0x48 Size=0x8
    unsigned long long NonParkedSet;// Offset=0x50 Size=0x8
    unsigned long long SoftParkedSet;// Offset=0x58 Size=0x8
    unsigned long long NonIsrTargetedSet;// Offset=0x60 Size=0x8
    long ParkLock;// Offset=0x68 Size=0x4
    unsigned char ProcessSeed;// Offset=0x6c Size=0x1
    unsigned char Spare5[3];// Offset=0x6d Size=0x3
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
    unsigned long long PpmConfiguredQosSets[6];// Offset=0xc8 Size=0x30
    unsigned long long Pad;// Offset=0xf8 Size=0x8
    union _KQOS_GROUPING_SETS QosGroupingSets;// Offset=0x100 Size=0x10
};
