union NVME_CDW10_ABORT// Size=0x4 (Id=622)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long SQID:8;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long CID:16;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x10
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};
