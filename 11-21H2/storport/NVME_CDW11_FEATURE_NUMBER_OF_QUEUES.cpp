union NVME_CDW11_FEATURE_NUMBER_OF_QUEUES// Size=0x4 (Id=770)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long NSQ:16;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x10
        unsigned long NCQ:16;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x10
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};
