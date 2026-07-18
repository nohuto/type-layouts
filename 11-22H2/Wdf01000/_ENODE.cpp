struct _unnamed_867// Size=0x1 (Id=867)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char ProcessorOnly:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char GroupsAssigned:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char MeasurableDistance:1;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x1
    };
};

struct _KNODE// Size=0x130 (Id=868)
{
    unsigned short NodeNumber;// Offset=0x0 Size=0x2
    unsigned short PrimaryNodeNumber;// Offset=0x2 Size=0x2
    unsigned long ProximityId;// Offset=0x4 Size=0x4
    unsigned short MaximumProcessors;// Offset=0x8 Size=0x2
    struct _unnamed_867 Flags;// Offset=0xa Size=0x1
    unsigned char GroupSeed;// Offset=0xb Size=0x1
    unsigned char PrimaryGroup;// Offset=0xc Size=0x1
    unsigned char Padding[3];// Offset=0xd Size=0x3
    unsigned long ActiveGroups;// Offset=0x10 Size=0x4
    struct _KSCHEDULER_SUBNODE * SchedulerSubNodes[32];// Offset=0x18 Size=0x100
    unsigned long ActiveTopologyElements[5];// Offset=0x118 Size=0x14
};

struct _LIST_ENTRY// Size=0x10 (Id=111)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _WORK_QUEUE_ITEM// Size=0x20 (Id=2943)
{
    struct _LIST_ENTRY List;// Offset=0x0 Size=0x10
    void  ( * WorkerRoutine)(void * );// Offset=0x10 Size=0x8
    void * Parameter;// Offset=0x18 Size=0x8
};

struct _ENODE// Size=0x180 (Id=1216)
{
    struct _KNODE Ncb;// Offset=0x0 Size=0x130
    struct _WORK_QUEUE_ITEM HotAddProcessorWorkItem;// Offset=0x130 Size=0x20
};
