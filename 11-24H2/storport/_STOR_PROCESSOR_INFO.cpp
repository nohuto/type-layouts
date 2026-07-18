struct _GROUP_AFFINITY// Size=0x10 (Id=204)
{
    unsigned long long Mask;// Offset=0x0 Size=0x8
    unsigned short Group;// Offset=0x8 Size=0x2
    unsigned short Reserved[3];// Offset=0xa Size=0x6
};

struct _STOR_PROCESSOR_INFO// Size=0x38 (Id=1276)
{
    unsigned long ProcessorId;// Offset=0x0 Size=0x4
    unsigned char EfficiencyClass;// Offset=0x4 Size=0x1
    unsigned char Reserved[3];// Offset=0x5 Size=0x3
    struct _GROUP_AFFINITY OtherProcessorsSharingCore;// Offset=0x8 Size=0x10
    struct _GROUP_AFFINITY OtherProcessorsSharingModule;// Offset=0x18 Size=0x10
    struct _STOR_CPU_GROUP_INFO * Group;// Offset=0x28 Size=0x8
    struct _STOR_NUMA_NODE_INFO * Node;// Offset=0x30 Size=0x8
};
