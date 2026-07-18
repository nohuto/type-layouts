union NVME_CDW11_CREATE_IO_SQ// Size=0x4 (Id=772)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long PC:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long QPRIO:2;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x2
        unsigned long Reserved0:13;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0xd
        unsigned long CQID:16;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x10
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};
