struct _GROUP_AFFINITY// Size=0x10 (Id=1882)
{
    unsigned long long Mask;// Offset=0x0 Size=0x8
    unsigned short Group;// Offset=0x8 Size=0x2
    unsigned short Reserved[3];// Offset=0xa Size=0x6
};

struct _NUMA_NODE_RELATIONSHIP// Size=0x28 (Id=2344)
{
    unsigned long NodeNumber;// Offset=0x0 Size=0x4
    unsigned char Reserved[18];// Offset=0x4 Size=0x12
    unsigned short GroupCount;// Offset=0x16 Size=0x2
    union // Size=0x10 (Id=0)
    {
        struct _GROUP_AFFINITY GroupMask;// Offset=0x18 Size=0x10
        struct _GROUP_AFFINITY GroupMasks[1];// Offset=0x18 Size=0x10
    };
};
