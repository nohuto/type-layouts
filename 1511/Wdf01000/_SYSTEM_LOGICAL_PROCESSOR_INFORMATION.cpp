enum _LOGICAL_PROCESSOR_RELATIONSHIP
{
    RelationProcessorCore=0,
    RelationNumaNode=1,
    RelationCache=2,
    RelationProcessorPackage=3,
    RelationGroup=4,
    RelationAll=65535
};

enum _PROCESSOR_CACHE_TYPE
{
    CacheUnified=0,
    CacheInstruction=1,
    CacheData=2,
    CacheTrace=3
};

struct _CACHE_DESCRIPTOR// Size=0xc (Id=2041)
{
    unsigned char Level;// Offset=0x0 Size=0x1
    unsigned char Associativity;// Offset=0x1 Size=0x1
    unsigned short LineSize;// Offset=0x2 Size=0x2
    unsigned long Size;// Offset=0x4 Size=0x4
    enum _PROCESSOR_CACHE_TYPE Type;// Offset=0x8 Size=0x4
};

struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION// Size=0x20 (Id=2099)
{
    unsigned long long ProcessorMask;// Offset=0x0 Size=0x8
    enum _LOGICAL_PROCESSOR_RELATIONSHIP Relationship;// Offset=0x8 Size=0x4
    union // Size=0x1c (Id=0)
    {
        struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION::_unnamed_2101::<unnamed-type-ProcessorCore> ProcessorCore;// Offset=0x10 Size=0x1
        struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION::_unnamed_2100::<unnamed-type-NumaNode> NumaNode;// Offset=0x10 Size=0x4
        struct _CACHE_DESCRIPTOR Cache;// Offset=0x10 Size=0xc
        unsigned long long Reserved[2];// Offset=0x10 Size=0x10
    };
};
