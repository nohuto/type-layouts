struct NVME_CDW11_FEATURE_RESERVATION_NOTIFICATION_MASK// Size=0x4 (Id=1223)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Reserved:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long REGPRE:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long RESREL:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long RESPRE:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long Reserved1:28;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1c
    };
};
