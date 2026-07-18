union NVME_CDW10_RESERVATION_RELEASE// Size=0x4 (Id=519)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long RRELA:3;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x3
        unsigned long IEKEY:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long Reserved:4;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x4
        unsigned long RTYPE:8;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x8
        unsigned long Reserved1:16;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x10
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};
