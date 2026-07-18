union NVME_CDW10_FIRMWARE_ACTIVATE// Size=0x4 (Id=1144)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long FS:3;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x3
        unsigned long AA:3;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x3
        unsigned long Reserved:25;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x19
        unsigned long BPID:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};
