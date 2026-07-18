union NVME_CDW10_FORMAT_NVM// Size=0x4 (Id=684)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long LBAF:4;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x4
        unsigned long MS:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long PI:3;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x3
        unsigned long PIL:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long SES:3;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x3
        unsigned long ZF:2;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x2
        unsigned long Reserved:18;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x12
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};
