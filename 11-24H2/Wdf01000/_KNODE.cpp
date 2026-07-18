struct _unnamed_1028// Size=0x1 (Id=1028)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char ProcessorOnly:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char GroupsAssigned:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char MeasurableDistance:1;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char SmtSetsPresent:1;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x1
    };
};

struct _KGROUP_MASK// Size=0x10 (Id=1107)
{
    unsigned long long Masks[2];// Offset=0x0 Size=0x10
};

struct _KNODE_SUBNODE_SEARCH_RANKS// Size=0x20 (Id=1258)
{
    unsigned char Ranks[32];// Offset=0x0 Size=0x20
};

struct _KNODE// Size=0x178 (Id=1032)
{
    unsigned short NodeNumber;// Offset=0x0 Size=0x2
    unsigned short PrimaryNodeNumber;// Offset=0x2 Size=0x2
    unsigned long ProximityId;// Offset=0x4 Size=0x4
    unsigned short MaximumProcessors;// Offset=0x8 Size=0x2
    struct _unnamed_1028 Flags;// Offset=0xa Size=0x1
    unsigned char GroupSeed;// Offset=0xb Size=0x1
    unsigned char PrimaryGroup;// Offset=0xc Size=0x1
    unsigned char Padding[3];// Offset=0xd Size=0x3
    struct _KGROUP_MASK ActiveGroups;// Offset=0x10 Size=0x10
    struct _KSCHEDULER_SUBNODE * SchedulerSubNodes[32];// Offset=0x20 Size=0x100
    unsigned long ActiveTopologyElements[6];// Offset=0x120 Size=0x18
    struct _KNODE_SUBNODE_SEARCH_RANKS PerformanceSearchRanks[1];// Offset=0x138 Size=0x20
    struct _KNODE_SUBNODE_SEARCH_RANKS EfficiencySearchRanks[1];// Offset=0x158 Size=0x20
};
