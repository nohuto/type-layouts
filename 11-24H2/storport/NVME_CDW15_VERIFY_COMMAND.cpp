union NVME_CDW15_VERIFY_COMMAND// Size=0x4 (Id=872)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long ELBAT:16;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x10
        unsigned long ELBATM:16;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x10
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};
