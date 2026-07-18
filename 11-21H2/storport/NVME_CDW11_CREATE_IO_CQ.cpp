union NVME_CDW11_CREATE_IO_CQ// Size=0x4 (Id=723)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long PC:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long IEN:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Reserved0:14;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0xe
        unsigned long IV:16;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x10
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};
