struct _SYSTEM_CPU_SET_INFORMATION::_unnamed_2600::<unnamed-type-CpuSet>// Size=0x18 (Id=2600)
{
    unsigned long Id;// Offset=0x0 Size=0x4
    unsigned short Group;// Offset=0x4 Size=0x2
    unsigned char LogicalProcessorIndex;// Offset=0x6 Size=0x1
    unsigned char CoreIndex;// Offset=0x7 Size=0x1
    unsigned char LastLevelCacheIndex;// Offset=0x8 Size=0x1
    unsigned char NumaNodeIndex;// Offset=0x9 Size=0x1
    unsigned char EfficiencyClass;// Offset=0xa Size=0x1
    union // Size=0x1 (Id=0)
    {
        unsigned char AllFlags;// Offset=0xb Size=0x1
        struct // Size=0x1 (Id=0)
        {
            unsigned char Parked:1;// Offset=0xb Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char Allocated:1;// Offset=0xb Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char AllocatedToTargetProcess:1;// Offset=0xb Size=0x1 BitOffset=0x2 BitSize=0x1
            unsigned char RealTime:1;// Offset=0xb Size=0x1 BitOffset=0x3 BitSize=0x1
            unsigned char ReservedFlags:4;// Offset=0xb Size=0x1 BitOffset=0x4 BitSize=0x4
        };
    };
    union // Size=0x4 (Id=0)
    {
        unsigned long Reserved;// Offset=0xc Size=0x4
        unsigned char SchedulingClass;// Offset=0xc Size=0x1
    };
    unsigned long long AllocationTag;// Offset=0x10 Size=0x8
};
