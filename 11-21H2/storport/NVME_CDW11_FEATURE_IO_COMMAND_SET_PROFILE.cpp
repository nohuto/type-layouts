union NVME_CDW11_FEATURE_IO_COMMAND_SET_PROFILE// Size=0x4 (Id=753)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long IOCSCI:8;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long Reserved:24;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x18
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};
