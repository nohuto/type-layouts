union NVME_CDW15_MFND_SET_CHILD_CONTROLLER_COMMAND_PERMISSION// Size=0x4 (Id=427)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long MCID:8;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long Reserved:24;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x18
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};
