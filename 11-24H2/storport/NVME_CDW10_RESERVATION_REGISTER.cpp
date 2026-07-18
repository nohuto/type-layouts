union NVME_CDW10_RESERVATION_REGISTER// Size=0x4 (Id=1051)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long RREGA:3;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x3
        unsigned long IEKEY:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long Reserved:26;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1a
        unsigned long CPTPL:2;// Offset=0x0 Size=0x4 BitOffset=0x1e BitSize=0x2
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};
