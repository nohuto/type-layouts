struct _unnamed_526// Size=0x1 (Id=526)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char ProcessorOnly:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char GroupsAssigned:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char MeasurableDistance:1;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char SmtSetsPresent:1;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x1
    };
};

struct _KGROUP_MASK// Size=0x10 (Id=1154)
{
    unsigned long long Masks[2];// Offset=0x0 Size=0x10
};

struct _KNODE_SUBNODE_SEARCH_RANKS// Size=0x20 (Id=1374)
{
    unsigned char Ranks[32];// Offset=0x0 Size=0x20
};

struct _KNODE// Size=0x338 (Id=527)
{
    unsigned short NodeNumber;// Offset=0x0 Size=0x2
    unsigned short PrimaryNodeNumber;// Offset=0x2 Size=0x2
    unsigned long ProximityId;// Offset=0x4 Size=0x4
    unsigned short MaximumProcessors;// Offset=0x8 Size=0x2
    struct _unnamed_526 Flags;// Offset=0xa Size=0x1
    unsigned char GroupSeed;// Offset=0xb Size=0x1
    unsigned char PrimaryGroup;// Offset=0xc Size=0x1
    unsigned char Padding[3];// Offset=0xd Size=0x3
    struct _KGROUP_MASK ActiveGroups;// Offset=0x10 Size=0x10
    struct _KSCHEDULER_SUBNODE * SchedulerSubNodes[32];// Offset=0x20 Size=0x100
    unsigned long ActiveTopologyElements[6];// Offset=0x120 Size=0x18
    struct _KNODE_SUBNODE_SEARCH_RANKS PerformanceSearchRanks[8];// Offset=0x138 Size=0x100
    struct _KNODE_SUBNODE_SEARCH_RANKS EfficiencySearchRanks[8];// Offset=0x238 Size=0x100
};

struct _LIST_ENTRY// Size=0x10 (Id=4)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _WORK_QUEUE_ITEM// Size=0x20 (Id=21)
{
    struct _LIST_ENTRY List;// Offset=0x0 Size=0x10
    void  ( * WorkerRoutine)(void * );// Offset=0x10 Size=0x8
    void * Parameter;// Offset=0x18 Size=0x8
};

struct _ENODE// Size=0x380 (Id=547)
{
    struct _KNODE Ncb;// Offset=0x0 Size=0x338
    struct _WORK_QUEUE_ITEM HotAddProcessorWorkItem;// Offset=0x338 Size=0x20
};
