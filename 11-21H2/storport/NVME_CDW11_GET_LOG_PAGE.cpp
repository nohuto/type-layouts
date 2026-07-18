union NVME_CDW11_GET_LOG_PAGE// Size=0x4 (Id=698)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long NUMDU:16;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x10
        unsigned long LogSpecificIdentifier:16;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x10
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};
