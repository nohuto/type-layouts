struct _STOR_CPU_INFO// Size=0x40 (Id=462)
{
    unsigned short GroupCount;// Offset=0x0 Size=0x2
    unsigned short Reserved;// Offset=0x2 Size=0x2
    unsigned short NodeCount;// Offset=0x4 Size=0x2
    unsigned short HighestNodeNumber;// Offset=0x6 Size=0x2
    unsigned long MaxProcessorCount;// Offset=0x8 Size=0x4
    unsigned long ActiveProcessorCount;// Offset=0xc Size=0x4
    struct _STOR_CPU_GROUP_INFO * GroupInfo;// Offset=0x10 Size=0x8
    struct _STOR_NUMA_NODE_INFO * NodeInfo;// Offset=0x18 Size=0x8
    struct _STOR_PROCESSOR_INFO * ProcessorInfo;// Offset=0x20 Size=0x8
    unsigned long TotalModuleCount;// Offset=0x28 Size=0x4
    unsigned long Class0ModuleCount;// Offset=0x2c Size=0x4
    unsigned long Class1ModuleCount;// Offset=0x30 Size=0x4
    unsigned long Class0ProcessorCount;// Offset=0x34 Size=0x4
    unsigned long Class1ProcessorCount;// Offset=0x38 Size=0x4
};
