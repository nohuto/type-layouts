union NVME_CDW10_FIRMWARE_ACTIVATE// Size=0x4 (Id=764)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long FS:3;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x3
        unsigned long AA:2;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x2
        unsigned long Reserved:27;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1b
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};
