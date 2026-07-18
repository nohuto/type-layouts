struct _GROUP_AFFINITY// Size=0x10 (Id=203)
{
    unsigned long long Mask;// Offset=0x0 Size=0x8
    unsigned short Group;// Offset=0x8 Size=0x2
    unsigned short Reserved[3];// Offset=0xa Size=0x6
};

struct _STOR_NUMA_NODE_INFO// Size=0x50 (Id=852)
{
    unsigned short NodeId;// Offset=0x0 Size=0x2
    unsigned short ProcessorCount;// Offset=0x2 Size=0x2
    struct _GROUP_AFFINITY Group;// Offset=0x8 Size=0x10
    unsigned long long Lock;// Offset=0x18 Size=0x8
    unsigned long CqProcessorCount;// Offset=0x20 Size=0x4
    unsigned long NextCqProcessorIndex;// Offset=0x24 Size=0x4
    unsigned long long NonSharedProcessorMask;// Offset=0x28 Size=0x8
    unsigned long long CqProcessorMask;// Offset=0x30 Size=0x8
    unsigned long ActiveProcessorCountAllGroups;// Offset=0x38 Size=0x4
    unsigned short GroupCount;// Offset=0x3c Size=0x2
    unsigned char Reserved[6];// Offset=0x3e Size=0x6
    struct _GROUP_AFFINITY * AllGroups;// Offset=0x48 Size=0x8
};
