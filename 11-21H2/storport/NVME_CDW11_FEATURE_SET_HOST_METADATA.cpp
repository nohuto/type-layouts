union NVME_CDW11_FEATURE_SET_HOST_METADATA// Size=0x4 (Id=751)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Reserved0:13;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0xd
        unsigned long EA:2;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x2
        unsigned long Reserved1:17;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x11
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};
