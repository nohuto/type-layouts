union NVME_CDW10_MFND_CC_QOS_STATISTICS_LOG// Size=0x4 (Id=659)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long LID:8;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long SL:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long Reserved0:3;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x3
        unsigned long Reserved1:3;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x3
        unsigned long RAE:1;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x1
        unsigned long NUMDL:16;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x10
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};
