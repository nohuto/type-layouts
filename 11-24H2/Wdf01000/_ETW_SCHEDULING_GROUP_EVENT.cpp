struct _ETW_SCHEDULING_GROUP_EVENT// Size=0x18 (Id=3687)
{
    unsigned long long SchedulingGroup;// Offset=0x0 Size=0x8
    unsigned long long Parent;// Offset=0x8 Size=0x8
    union // Size=0x12 (Id=0)
    {
        unsigned long PolicyValue;// Offset=0x10 Size=0x4
        unsigned short Weight;// Offset=0x10 Size=0x2
        unsigned short MinRate;// Offset=0x10 Size=0x2
    };
    unsigned short MaxRate;// Offset=0x12 Size=0x2
    struct // Size=0x4 (Id=0)
    {
        unsigned long Type:1;// Offset=0x14 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Disabled:1;// Offset=0x14 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long RankBias:1;// Offset=0x14 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long PerProcessorLimits:1;// Offset=0x14 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long Spare:28;// Offset=0x14 Size=0x4 BitOffset=0x4 BitSize=0x1c
    };
};
