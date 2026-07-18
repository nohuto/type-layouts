struct _MI_SYSTEM_NODE_AFFINITY_INFORMATION// Size=0x20 (Id=2441)
{
    struct _GROUP_AFFINITY * GroupAffinity;// Offset=0x0 Size=0x8
    unsigned long NumberOfDomains;// Offset=0x8 Size=0x4
    unsigned long GlobalDomainIndex;// Offset=0xc Size=0x4
    unsigned short GroupAffinityCount;// Offset=0x10 Size=0x2
    unsigned short ProcessorCount[3];// Offset=0x12 Size=0x6
    unsigned short UsableProcessorCount[3];// Offset=0x18 Size=0x6
};
