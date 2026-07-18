struct _unnamed_91// Size=0x1 (Id=91)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char ProcessorOnly:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char GroupsAssigned:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char MeasurableDistance:1;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char SmtSetsPresent:1;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x1
    };
};

struct _KGROUP_MASK// Size=0x10 (Id=282)
{
    unsigned long long Masks[2];// Offset=0x0 Size=0x10
};

struct _KNODE// Size=0x58 (Id=92)
{
    unsigned short NodeNumber;// Offset=0x0 Size=0x2
    unsigned short PrimaryNodeNumber;// Offset=0x2 Size=0x2
    unsigned long ProximityId;// Offset=0x4 Size=0x4
    unsigned short MaximumProcessors;// Offset=0x8 Size=0x2
    struct _unnamed_91 Flags;// Offset=0xa Size=0x1
    unsigned char GroupSeed;// Offset=0xb Size=0x1
    unsigned char PrimaryGroup;// Offset=0xc Size=0x1
    unsigned char Padding[3];// Offset=0xd Size=0x3
    struct _KGROUP_MASK ActiveGroups;// Offset=0x10 Size=0x10
    struct _KSCHEDULER_SUBNODE ** SchedulerSubNodes;// Offset=0x20 Size=0x8
    unsigned long SchedulerSubNodesSize;// Offset=0x28 Size=0x4
    unsigned long SchedulerSubNodesCount;// Offset=0x2c Size=0x4
    unsigned long ActiveSchedulerSubNodesCount;// Offset=0x30 Size=0x4
    unsigned long ActiveTopologyElements[6];// Offset=0x34 Size=0x18
    unsigned char * SearchRanks;// Offset=0x50 Size=0x8
};
