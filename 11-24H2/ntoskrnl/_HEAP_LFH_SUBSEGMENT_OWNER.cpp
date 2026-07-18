struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=512)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _HEAP_LFH_PTRREF_LIST// Size=0x4 (Id=907)
{
    unsigned short Flink;// Offset=0x0 Size=0x2
    unsigned short Blink;// Offset=0x2 Size=0x2
};

struct _LIST_ENTRY// Size=0x10 (Id=4)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _HEAP_LFH_SUBSEGMENT_OWNER// Size=0x38 (Id=908)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char IsBucket:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char BucketIndex:7;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x7
    };
    union // Size=0x1 (Id=0)
    {
        unsigned char SlotCount;// Offset=0x1 Size=0x1
        unsigned char AvailableSubsegmentCount;// Offset=0x1 Size=0x1
    };
    unsigned short BucketRef;// Offset=0x2 Size=0x2
    unsigned short PrivateSlotMapRef;// Offset=0x4 Size=0x2
    unsigned short HeatMapRef;// Offset=0x6 Size=0x2
    union // Size=0x8 (Id=0)
    {
        struct _SINGLE_LIST_ENTRY OwnerFreeList;// Offset=0x8 Size=0x8
        struct // Size=0x2 (Id=0)
        {
            unsigned short Spare:12;// Offset=0x8 Size=0x2 BitOffset=0x0 BitSize=0xc
        };
    };
    union // Size=0x18 (Id=0)
    {
        unsigned long long Lock;// Offset=0x10 Size=0x8
        struct _SINGLE_LIST_ENTRY SlotStandbyEntry;// Offset=0x10 Size=0x8
        struct _HEAP_LFH_PTRREF_LIST PrivSlotListEntry;// Offset=0x10 Size=0x4
        unsigned long OwnerThreadId;// Offset=0x14 Size=0x4
    };
    struct _LIST_ENTRY AvailableSubsegmentList;// Offset=0x18 Size=0x10
    struct _LIST_ENTRY FullSubsegmentList;// Offset=0x28 Size=0x10
};
