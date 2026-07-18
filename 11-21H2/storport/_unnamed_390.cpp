struct _unnamed_390// Size=0x18 (Id=390)
{
    union // Size=0x4 (Id=0)
    {
        union NVME_CDW10_GET_LOG_PAGE CDW10;// Offset=0x0 Size=0x4
        union NVME_CDW10_GET_LOG_PAGE_V13 CDW10_V13;// Offset=0x0 Size=0x4
    };
    union NVME_CDW11_GET_LOG_PAGE CDW11;// Offset=0x4 Size=0x4
    struct NVME_CDW12_GET_LOG_PAGE CDW12;// Offset=0x8 Size=0x4
    struct NVME_CDW13_GET_LOG_PAGE CDW13;// Offset=0xc Size=0x4
    union NVME_CDW14_GET_LOG_PAGE CDW14;// Offset=0x10 Size=0x4
    unsigned long CDW15;// Offset=0x14 Size=0x4
};
