struct _GROUP_AFFINITY// Size=0x10 (Id=238)
{
    unsigned long long Mask;// Offset=0x0 Size=0x8
    unsigned short Group;// Offset=0x8 Size=0x2
    unsigned short Reserved[3];// Offset=0xa Size=0x6
};

struct _IDT_ASSIGNMENT_SET// Size=0x20 (Id=405)
{
    struct _GROUP_AFFINITY Affinity;// Offset=0x0 Size=0x10
    unsigned long Gsiv;// Offset=0x10 Size=0x4
    unsigned long BaseIdtEntry;// Offset=0x14 Size=0x4
    unsigned long Length;// Offset=0x18 Size=0x4
};
