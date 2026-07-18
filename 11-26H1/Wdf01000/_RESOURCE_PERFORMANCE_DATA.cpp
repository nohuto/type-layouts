struct _LIST_ENTRY// Size=0x10 (Id=1247)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _RESOURCE_PERFORMANCE_DATA// Size=0x428 (Id=3045)
{
    unsigned long ActiveResourceCount;// Offset=0x0 Size=0x4
    unsigned long TotalResourceCount;// Offset=0x4 Size=0x4
    unsigned long ExclusiveAcquire;// Offset=0x8 Size=0x4
    unsigned long SharedFirstLevel;// Offset=0xc Size=0x4
    unsigned long SharedSecondLevel;// Offset=0x10 Size=0x4
    unsigned long StarveFirstLevel;// Offset=0x14 Size=0x4
    unsigned long StarveSecondLevel;// Offset=0x18 Size=0x4
    unsigned long WaitForExclusive;// Offset=0x1c Size=0x4
    unsigned long OwnerTableExpands;// Offset=0x20 Size=0x4
    unsigned long MaximumTableExpand;// Offset=0x24 Size=0x4
    struct _LIST_ENTRY HashTable[64];// Offset=0x28 Size=0x400
};
