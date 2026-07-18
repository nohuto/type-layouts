union NVME_LBA_FORMAT// Size=0x4 (Id=539)
{
    unsigned short MS;// Offset=0x0 Size=0x2
    unsigned char LBADS;// Offset=0x2 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char RP:2;// Offset=0x3 Size=0x1 BitOffset=0x0 BitSize=0x2
        unsigned char Reserved0:6;// Offset=0x3 Size=0x1 BitOffset=0x2 BitSize=0x6
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};
