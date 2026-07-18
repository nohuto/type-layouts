union NVME_CDW13_ZONE_MANAGEMENT_RECEIVE// Size=0x4 (Id=700)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long ZRA:8;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long ZRASpecific:8;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x8
        unsigned long Partial:1;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned long Reserved:15;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0xf
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};
