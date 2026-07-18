union NVME_CDW14_IDENTIFY// Size=0x4 (Id=928)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long UUIDIndex:7;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x7
        unsigned long Reserved:25;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x19
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};
