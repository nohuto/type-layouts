struct _unnamed_373// Size=0x18 (Id=373)
{
    union NVME_CDW10_IDENTIFY CDW10;// Offset=0x0 Size=0x4
    union NVME_CDW11_IDENTIFY CDW11;// Offset=0x4 Size=0x4
    unsigned long CDW12;// Offset=0x8 Size=0x4
    unsigned long CDW13;// Offset=0xc Size=0x4
    union // Size=0x4 (Id=0)
    {
        unsigned long CDW14;// Offset=0x10 Size=0x4
        union NVME_CDW14_IDENTIFY CDW14_V20;// Offset=0x10 Size=0x4
    };
    unsigned long CDW15;// Offset=0x14 Size=0x4
};
