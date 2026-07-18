struct _GROUP_AFFINITY// Size=0x10 (Id=458)
{
    unsigned long long Mask;// Offset=0x0 Size=0x8
    unsigned short Group;// Offset=0x8 Size=0x2
    unsigned short Reserved[3];// Offset=0xa Size=0x6
};

struct _SHARED_COMPUTE_UNIT_RELATIONSHIP// Size=0x28 (Id=2229)
{
    unsigned long Type;// Offset=0x0 Size=0x4
    unsigned long ComputeUnitCount;// Offset=0x4 Size=0x4
    unsigned char Reserved[14];// Offset=0x8 Size=0xe
    unsigned short GroupCount;// Offset=0x16 Size=0x2
    struct _GROUP_AFFINITY GroupMasks[1];// Offset=0x18 Size=0x10
};
