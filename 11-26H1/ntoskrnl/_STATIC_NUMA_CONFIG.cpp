struct _STATIC_NUMA_CONFIG// Size=0x48 (Id=276)
{
    unsigned long * ProcessorLocalId;// Offset=0x0 Size=0x8
    unsigned long * ProcessorUid;// Offset=0x8 Size=0x8
    unsigned long * ProcessorProximity;// Offset=0x10 Size=0x8
    unsigned long * ProximityId;// Offset=0x18 Size=0x8
    unsigned long * OrigProximityId;// Offset=0x20 Size=0x8
    unsigned long * NodeCapacity;// Offset=0x28 Size=0x8
    unsigned short * NodeDistance;// Offset=0x30 Size=0x8
    unsigned long NodeCount;// Offset=0x38 Size=0x4
    unsigned long ProcessorCount;// Offset=0x3c Size=0x4
    unsigned long AllocatedNodeCount;// Offset=0x40 Size=0x4
    unsigned long AllocatedProcCount;// Offset=0x44 Size=0x4
};
