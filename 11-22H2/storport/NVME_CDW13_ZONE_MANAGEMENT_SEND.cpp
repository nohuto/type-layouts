union NVME_CDW13_ZONE_MANAGEMENT_SEND// Size=0x4 (Id=807)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long ZSA:8;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long SelectAll:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long Reserved:23;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x17
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};
