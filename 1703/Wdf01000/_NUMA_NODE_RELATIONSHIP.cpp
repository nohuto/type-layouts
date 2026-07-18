struct _GROUP_AFFINITY// Size=0x10 (Id=758)
{
    unsigned long long Mask;// Offset=0x0 Size=0x8
    unsigned short Group;// Offset=0x8 Size=0x2
    unsigned short Reserved[3];// Offset=0xa Size=0x6
};

struct _NUMA_NODE_RELATIONSHIP// Size=0x28 (Id=2248)
{
    unsigned long NodeNumber;// Offset=0x0 Size=0x4
    unsigned char Reserved[20];// Offset=0x4 Size=0x14
    struct _GROUP_AFFINITY GroupMask;// Offset=0x18 Size=0x10
};
