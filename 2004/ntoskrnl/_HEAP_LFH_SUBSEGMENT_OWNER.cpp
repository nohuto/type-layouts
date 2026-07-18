struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _HEAP_LFH_SUBSEGMENT_OWNER// Size=0x38 (Id=737)
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
    unsigned long long AvailableSubsegmentCount;// Offset=0x8 Size=0x8
    unsigned long long Lock;// Offset=0x10 Size=0x8
    struct _LIST_ENTRY AvailableSubsegmentList;// Offset=0x18 Size=0x10
    struct _LIST_ENTRY FullSubsegmentList;// Offset=0x28 Size=0x10
};
