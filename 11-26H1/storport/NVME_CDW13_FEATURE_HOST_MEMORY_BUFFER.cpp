union NVME_CDW13_FEATURE_HOST_MEMORY_BUFFER// Size=0x4 (Id=1233)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Reserved:4;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x4
        unsigned long HMDLLA:28;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1c
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};
