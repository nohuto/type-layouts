union NVME_BOOT_PARTITION_INFORMATION// Size=0x4 (Id=1258)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long BPSZ:15;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0xf
        unsigned long Reserved0:9;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x9
        unsigned long BRS:2;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x2
        unsigned long Reserved1:5;// Offset=0x0 Size=0x4 BitOffset=0x1a BitSize=0x5
        unsigned long ABPID:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};
