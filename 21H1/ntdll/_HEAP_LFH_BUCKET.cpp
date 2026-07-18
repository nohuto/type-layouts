struct _LIST_ENTRY// Size=0x8 (Id=25)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x4
    struct _LIST_ENTRY * Blink;// Offset=0x4 Size=0x4
};

struct _HEAP_LFH_SUBSEGMENT_OWNER// Size=0x1c (Id=250)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char IsBucket:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Spare0:7;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x7
    };
    unsigned char BucketIndex;// Offset=0x1 Size=0x1
    union // Size=0x1 (Id=0)
    {
        unsigned char SlotCount;// Offset=0x2 Size=0x1
        unsigned char SlotIndex;// Offset=0x2 Size=0x1
    };
    unsigned char Spare1;// Offset=0x3 Size=0x1
    unsigned long AvailableSubsegmentCount;// Offset=0x4 Size=0x4
    unsigned long Lock;// Offset=0x8 Size=0x4
    struct _LIST_ENTRY AvailableSubsegmentList;// Offset=0xc Size=0x8
    struct _LIST_ENTRY FullSubsegmentList;// Offset=0x14 Size=0x8
};

struct _HEAP_LFH_BUCKET// Size=0x38 (Id=252)
{
    struct _HEAP_LFH_SUBSEGMENT_OWNER State;// Offset=0x0 Size=0x1c
    unsigned long TotalBlockCount;// Offset=0x1c Size=0x4
    unsigned long TotalSubsegmentCount;// Offset=0x20 Size=0x4
    unsigned long ReciprocalBlockSize;// Offset=0x24 Size=0x4
    unsigned char Shift;// Offset=0x28 Size=0x1
    unsigned char ContentionCount;// Offset=0x29 Size=0x1
    unsigned long AffinityMappingLock;// Offset=0x2c Size=0x4
    unsigned char * ProcAffinityMapping;// Offset=0x30 Size=0x4
    struct _HEAP_LFH_AFFINITY_SLOT ** AffinitySlots;// Offset=0x34 Size=0x4
};
