struct _GROUP_AFFINITY// Size=0x10 (Id=155)
{
    unsigned long long Mask;// Offset=0x0 Size=0x8
    unsigned short Group;// Offset=0x8 Size=0x2
    unsigned short Reserved[3];// Offset=0xa Size=0x6
};

struct _PROCESSOR_RELATIONSHIP// Size=0x28 (Id=770)
{
    unsigned char Flags;// Offset=0x0 Size=0x1
    unsigned char EfficiencyClass;// Offset=0x1 Size=0x1
    unsigned char Reserved[20];// Offset=0x2 Size=0x14
    unsigned short GroupCount;// Offset=0x16 Size=0x2
    struct _GROUP_AFFINITY GroupMask[1];// Offset=0x18 Size=0x10
};
