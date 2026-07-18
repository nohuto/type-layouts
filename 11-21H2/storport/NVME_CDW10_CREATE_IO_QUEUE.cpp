union NVME_CDW10_CREATE_IO_QUEUE// Size=0x4 (Id=549)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long QID:16;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x10
        unsigned long QSIZE:16;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x10
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};
