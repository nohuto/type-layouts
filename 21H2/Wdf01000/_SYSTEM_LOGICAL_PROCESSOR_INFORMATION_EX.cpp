enum _LOGICAL_PROCESSOR_RELATIONSHIP
{
    RelationProcessorCore=0,
    RelationNumaNode=1,
    RelationCache=2,
    RelationProcessorPackage=3,
    RelationGroup=4,
    RelationAll=65535
};

struct _GROUP_AFFINITY// Size=0x10 (Id=747)
{
    unsigned long long Mask;// Offset=0x0 Size=0x8
    unsigned short Group;// Offset=0x8 Size=0x2
    unsigned short Reserved[3];// Offset=0xa Size=0x6
};

struct _PROCESSOR_RELATIONSHIP// Size=0x28 (Id=2658)
{
    unsigned char Flags;// Offset=0x0 Size=0x1
    unsigned char EfficiencyClass;// Offset=0x1 Size=0x1
    unsigned char Reserved[20];// Offset=0x2 Size=0x14
    unsigned short GroupCount;// Offset=0x16 Size=0x2
    struct _GROUP_AFFINITY GroupMask[1];// Offset=0x18 Size=0x10
};

struct _NUMA_NODE_RELATIONSHIP// Size=0x28 (Id=2093)
{
    unsigned long NodeNumber;// Offset=0x0 Size=0x4
    unsigned char Reserved[20];// Offset=0x4 Size=0x14
    struct _GROUP_AFFINITY GroupMask;// Offset=0x18 Size=0x10
};

enum _PROCESSOR_CACHE_TYPE
{
    CacheUnified=0,
    CacheInstruction=1,
    CacheData=2,
    CacheTrace=3
};

struct _CACHE_RELATIONSHIP// Size=0x30 (Id=2567)
{
    unsigned char Level;// Offset=0x0 Size=0x1
    unsigned char Associativity;// Offset=0x1 Size=0x1
    unsigned short LineSize;// Offset=0x2 Size=0x2
    unsigned long CacheSize;// Offset=0x4 Size=0x4
    enum _PROCESSOR_CACHE_TYPE Type;// Offset=0x8 Size=0x4
    unsigned char Reserved[20];// Offset=0xc Size=0x14
    struct _GROUP_AFFINITY GroupMask;// Offset=0x20 Size=0x10
};

struct _PROCESSOR_GROUP_INFO// Size=0x30 (Id=2875)
{
    unsigned char MaximumProcessorCount;// Offset=0x0 Size=0x1
    unsigned char ActiveProcessorCount;// Offset=0x1 Size=0x1
    unsigned char Reserved[38];// Offset=0x2 Size=0x26
    unsigned long long ActiveProcessorMask;// Offset=0x28 Size=0x8
};

struct _GROUP_RELATIONSHIP// Size=0x48 (Id=1814)
{
    unsigned short MaximumGroupCount;// Offset=0x0 Size=0x2
    unsigned short ActiveGroupCount;// Offset=0x2 Size=0x2
    unsigned char Reserved[20];// Offset=0x4 Size=0x14
    struct _PROCESSOR_GROUP_INFO GroupInfo[1];// Offset=0x18 Size=0x30
};

struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX// Size=0x50 (Id=2895)
{
    enum _LOGICAL_PROCESSOR_RELATIONSHIP Relationship;// Offset=0x0 Size=0x4
    unsigned long Size;// Offset=0x4 Size=0x4
    union // Size=0x38 (Id=0)
    {
        struct _PROCESSOR_RELATIONSHIP Processor;// Offset=0x8 Size=0x28
        struct _NUMA_NODE_RELATIONSHIP NumaNode;// Offset=0x8 Size=0x28
        struct _CACHE_RELATIONSHIP Cache;// Offset=0x8 Size=0x30
        struct _GROUP_RELATIONSHIP Group;// Offset=0x8 Size=0x48
    };
};
