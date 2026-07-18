struct _ETW_SCHEDULING_GROUP_SCB_EVENT// Size=0x18 (Id=2721)
{
    unsigned long long SchedulingGroup;// Offset=0x0 Size=0x8
    unsigned long ProcessorIndex;// Offset=0x8 Size=0x4
    unsigned long Rank;// Offset=0xc Size=0x4
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long MaxOverQuota:1;// Offset=0x10 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long ReservedFlags:31;// Offset=0x10 Size=0x4 BitOffset=0x1 BitSize=0x1f
        };
        unsigned long Flags;// Offset=0x10 Size=0x4
    };
    unsigned long Reserved;// Offset=0x14 Size=0x4
};
