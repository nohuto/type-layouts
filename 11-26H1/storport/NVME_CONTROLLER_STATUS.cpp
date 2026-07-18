union NVME_CONTROLLER_STATUS// Size=0x4 (Id=530)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long RDY:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long CFS:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long SHST:2;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x2
        unsigned long NSSRO:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long PP:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long ST:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long Reserved0:25;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x19
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};
