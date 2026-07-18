union NVME_ADMIN_QUEUE_ATTRIBUTES// Size=0x4 (Id=1255)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long ASQS:12;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0xc
        unsigned long Reserved0:4;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x4
        unsigned long ACQS:12;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0xc
        unsigned long Reserved1:4;// Offset=0x0 Size=0x4 BitOffset=0x1c BitSize=0x4
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};
