union NVME_CDW11_IDENTIFY// Size=0x4 (Id=1160)
{
    unsigned short NVMSETID;// Offset=0x0 Size=0x2
    unsigned short Reserved;// Offset=0x2 Size=0x2
    struct // Size=0x4 (Id=0)
    {
        unsigned long CNSID:16;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x10
        unsigned long Reserved2:8;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x8
        unsigned long CSI:8;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x8
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};
