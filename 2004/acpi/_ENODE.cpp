struct _GROUP_AFFINITY// Size=0x10 (Id=238)
{
    unsigned long long Mask;// Offset=0x0 Size=0x8
    unsigned short Group;// Offset=0x8 Size=0x2
    unsigned short Reserved[3];// Offset=0xa Size=0x6
};

struct _flags// Size=0x1 (Id=331)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char Removable:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char GroupAssigned:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char GroupCommitted:1;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char GroupAssignmentFixed:1;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char ProcessorOnly:1;// Offset=0x0 Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char Fill:3;// Offset=0x0 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
};

struct _KHETERO_PROCESSOR_SET// Size=0x18 (Id=254)
{
    unsigned long long IdealMask;// Offset=0x0 Size=0x8
    unsigned long long PreferredMask;// Offset=0x8 Size=0x8
    unsigned long long AvailableMask;// Offset=0x10 Size=0x8
};

union _KQOS_GROUPING_SETS// Size=0x10 (Id=271)
{
    unsigned long long SingleCoreSet;// Offset=0x0 Size=0x8
    unsigned long long SmtSet;// Offset=0x8 Size=0x8
};

struct _KNODE// Size=0x180 (Id=99)
{
    unsigned long long IdleNonParkedCpuSet;// Offset=0x0 Size=0x8
    unsigned long long IdleSmtSet;// Offset=0x8 Size=0x8
    unsigned long long NonPairedSmtSet;// Offset=0x10 Size=0x8
    unsigned long long IdleCpuSet;// Offset=0x18 Size=0x8
    unsigned long long DeepIdleSet;// Offset=0x40 Size=0x8
    unsigned long long IdleConstrainedSet;// Offset=0x48 Size=0x8
    unsigned long long NonParkedSet;// Offset=0x50 Size=0x8
    unsigned long long SoftParkedSet;// Offset=0x58 Size=0x8
    unsigned long long NonIsrTargetedSet;// Offset=0x60 Size=0x8
    long ParkLock;// Offset=0x68 Size=0x4
    unsigned short ThreadSeed;// Offset=0x6c Size=0x2
    unsigned short ProcessSeed;// Offset=0x6e Size=0x2
    unsigned long SiblingMask;// Offset=0x80 Size=0x4
    union // Size=0x10 (Id=0)
    {
        struct _GROUP_AFFINITY Affinity;// Offset=0x88 Size=0x10
        unsigned char AffinityFill[10];// Offset=0x88 Size=0xa
    };
    unsigned short NodeNumber;// Offset=0x92 Size=0x2
    unsigned short PrimaryNodeNumber;// Offset=0x94 Size=0x2
    unsigned short Spare0;// Offset=0x96 Size=0x2
    unsigned long long SharedReadyQueueMask;// Offset=0x98 Size=0x8
    unsigned long long StrideMask;// Offset=0xa0 Size=0x8
    unsigned long ProximityId;// Offset=0xa8 Size=0x4
    unsigned long Lowest;// Offset=0xac Size=0x4
    unsigned long Highest;// Offset=0xb0 Size=0x4
    unsigned char MaximumProcessors;// Offset=0xb4 Size=0x1
    struct _flags Flags;// Offset=0xb5 Size=0x1
    unsigned char Spare10;// Offset=0xb6 Size=0x1
    struct _KHETERO_PROCESSOR_SET HeteroSets[5];// Offset=0xb8 Size=0x78
    unsigned long long PpmConfiguredQosSets[5];// Offset=0x130 Size=0x28
    unsigned long long Spare11;// Offset=0x158 Size=0x8
    union _KQOS_GROUPING_SETS QosGroupingSets;// Offset=0x160 Size=0x10
    unsigned long long QosPreemptibleSet;// Offset=0x170 Size=0x8
    unsigned long long LLCLeaders;// Offset=0x178 Size=0x8
};

struct _LIST_ENTRY// Size=0x10 (Id=24)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _WORK_QUEUE_ITEM// Size=0x20 (Id=93)
{
    struct _LIST_ENTRY List;// Offset=0x0 Size=0x10
    void  ( * WorkerRoutine)(void * );// Offset=0x10 Size=0x8
    void * Parameter;// Offset=0x18 Size=0x8
};

struct _ENODE// Size=0x1c0 (Id=100)
{
    struct _KNODE Ncb;// Offset=0x0 Size=0x180
    struct _WORK_QUEUE_ITEM HotAddProcessorWorkItem;// Offset=0x180 Size=0x20
};
