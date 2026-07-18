union NVME_CONTROLLER_MEMORY_BUFFER_SIZE// Size=0x4 (Id=1004)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long SQS:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long CQS:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long LISTS:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long RDS:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long WDS:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long Reserved:3;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x3
        unsigned long SZU:4;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x4
        unsigned long SZ:20;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x14
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};
