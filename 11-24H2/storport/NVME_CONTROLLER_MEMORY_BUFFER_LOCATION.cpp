union NVME_CONTROLLER_MEMORY_BUFFER_LOCATION// Size=0x4 (Id=1253)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long BIR:3;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x3
        unsigned long Reserved:9;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x9
        unsigned long OFST:20;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x14
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};
