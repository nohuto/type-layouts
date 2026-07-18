union NVME_CDW11_DATASET_MANAGEMENT// Size=0x4 (Id=697)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long IDR:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long IDW:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long AD:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long Reserved:29;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1d
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};
