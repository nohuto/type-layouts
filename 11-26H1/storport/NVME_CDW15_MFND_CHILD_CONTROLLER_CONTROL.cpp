union NVME_CDW15_MFND_CHILD_CONTROLLER_CONTROL// Size=0x4 (Id=631)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long MCID:8;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long CCID:16;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x10
        unsigned long SEL:4;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x4
        unsigned long Reserved:4;// Offset=0x0 Size=0x4 BitOffset=0x1c BitSize=0x4
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};
