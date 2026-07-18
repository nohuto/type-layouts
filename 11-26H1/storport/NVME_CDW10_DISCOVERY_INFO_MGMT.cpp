union NVME_CDW10_DISCOVERY_INFO_MGMT// Size=0x4 (Id=1201)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long TAS:4;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x4
        unsigned long Reserved:28;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1c
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};
