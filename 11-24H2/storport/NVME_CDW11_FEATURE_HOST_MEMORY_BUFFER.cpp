union NVME_CDW11_FEATURE_HOST_MEMORY_BUFFER// Size=0x4 (Id=1230)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long EHM:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long MR:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Reserved:30;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1e
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};
