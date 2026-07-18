struct _GROUP_AFFINITY// Size=0xc (Id=299)
{
    unsigned long Mask;// Offset=0x0 Size=0x4
    unsigned short Group;// Offset=0x4 Size=0x2
    unsigned short Reserved[3];// Offset=0x6 Size=0x6
};

struct _flags// Size=0x1 (Id=411)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char Removable:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char GroupAssigned:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char GroupCommitted:1;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char GroupAssignmentFixed:1;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char ProcessorOnly:1;// Offset=0x0 Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char SmtSetsPresent:1;// Offset=0x0 Size=0x1 BitOffset=0x5 BitSize=0x1
        unsigned char Fill:2;// Offset=0x0 Size=0x1 BitOffset=0x6 BitSize=0x2
    };
};

struct _KHETERO_PROCESSOR_SET// Size=0xc (Id=319)
{
    unsigned long IdealMask;// Offset=0x0 Size=0x4
    unsigned long PreferredMask;// Offset=0x4 Size=0x4
    unsigned long AvailableMask;// Offset=0x8 Size=0x4
};

union _KQOS_GROUPING_SETS// Size=0x8 (Id=338)
{
    unsigned long SingleCoreSet;// Offset=0x0 Size=0x4
    unsigned long SmtSet;// Offset=0x4 Size=0x4
    long long QosGroupingMasks;// Offset=0x0 Size=0x8
};

struct _KNODE// Size=0x140 (Id=87)
{
    unsigned long IdleNonParkedCpuSet;// Offset=0x0 Size=0x4
    unsigned long IdleSmtSet;// Offset=0x4 Size=0x4
    unsigned long NonPairedSmtSet;// Offset=0x8 Size=0x4
    unsigned long IdleCpuSet;// Offset=0xc Size=0x4
    unsigned long DeepIdleSet;// Offset=0x40 Size=0x4
    unsigned long IdleConstrainedSet;// Offset=0x44 Size=0x4
    unsigned long NonParkedSet;// Offset=0x48 Size=0x4
    unsigned long SoftParkedSet;// Offset=0x4c Size=0x4
    unsigned long NonIsrTargetedSet;// Offset=0x50 Size=0x4
    long ParkLock;// Offset=0x54 Size=0x4
    unsigned short ThreadSeed;// Offset=0x58 Size=0x2
    unsigned short ProcessSeed;// Offset=0x5a Size=0x2
    unsigned long SiblingMask;// Offset=0x80 Size=0x4
    union // Size=0xc (Id=0)
    {
        struct _GROUP_AFFINITY Affinity;// Offset=0x84 Size=0xc
        unsigned char AffinityFill[6];// Offset=0x84 Size=0x6
    };
    unsigned short NodeNumber;// Offset=0x8a Size=0x2
    unsigned short PrimaryNodeNumber;// Offset=0x8c Size=0x2
    unsigned short Spare0;// Offset=0x8e Size=0x2
    unsigned long SharedReadyQueueMask;// Offset=0x90 Size=0x4
    unsigned long StrideMask;// Offset=0x94 Size=0x4
    unsigned long ProximityId;// Offset=0x98 Size=0x4
    unsigned long Lowest;// Offset=0x9c Size=0x4
    unsigned long Highest;// Offset=0xa0 Size=0x4
    unsigned char MaximumProcessors;// Offset=0xa4 Size=0x1
    struct _flags Flags;// Offset=0xa5 Size=0x1
    unsigned char Spare10;// Offset=0xa6 Size=0x1
    struct _KHETERO_PROCESSOR_SET HeteroSets[5];// Offset=0xa8 Size=0x3c
    unsigned long PpmConfiguredQosSets[5];// Offset=0xe4 Size=0x14
    unsigned long Spare11;// Offset=0xf8 Size=0x4
    union _KQOS_GROUPING_SETS QosGroupingSets;// Offset=0x100 Size=0x8
    unsigned long QosPreemptibleSet;// Offset=0x108 Size=0x4
    unsigned long LLCLeaders;// Offset=0x10c Size=0x4
};

struct _LIST_ENTRY// Size=0x8 (Id=25)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x4
    struct _LIST_ENTRY * Blink;// Offset=0x4 Size=0x4
};

struct _WORK_QUEUE_ITEM// Size=0x10 (Id=81)
{
    struct _LIST_ENTRY List;// Offset=0x0 Size=0x8
    void  ( * WorkerRoutine)(void * );// Offset=0x8 Size=0x4
    void * Parameter;// Offset=0xc Size=0x4
};

struct _ENODE// Size=0x180 (Id=88)
{
    struct _KNODE Ncb;// Offset=0x0 Size=0x140
    struct _WORK_QUEUE_ITEM HotAddProcessorWorkItem;// Offset=0x140 Size=0x10
};
