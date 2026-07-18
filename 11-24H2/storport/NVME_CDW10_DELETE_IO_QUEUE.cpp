union NVME_CDW10_DELETE_IO_QUEUE// Size=0x4 (Id=1245)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long QID:16;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x10
        unsigned long Reserved:16;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x10
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};
