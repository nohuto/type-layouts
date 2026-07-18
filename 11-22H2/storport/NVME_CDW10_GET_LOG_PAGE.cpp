union NVME_CDW10_GET_LOG_PAGE// Size=0x4 (Id=536)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long LID:8;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long Reserved0:8;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x8
        unsigned long NUMD:12;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0xc
        unsigned long Reserved1:4;// Offset=0x0 Size=0x4 BitOffset=0x1c BitSize=0x4
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};
