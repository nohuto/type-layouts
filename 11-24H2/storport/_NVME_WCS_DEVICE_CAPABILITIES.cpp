struct _NVME_WCS_DEVICE_CAPABILITIES// Size=0x4 (Id=870)
{
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long PanicAEN:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long PanicCFS:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long Reserved:30;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1e
        };
        unsigned long AsULONG;// Offset=0x0 Size=0x4
    };
};
