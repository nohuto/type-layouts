union NVME_CDW11_DIRECTIVE_RECEIVE// Size=0x4 (Id=742)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long DOPER:8;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long DTYPE:8;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x8
        unsigned long DSPEC:16;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x10
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};
