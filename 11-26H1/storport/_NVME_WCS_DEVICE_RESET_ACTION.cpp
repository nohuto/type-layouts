struct _NVME_WCS_DEVICE_RESET_ACTION// Size=0x1 (Id=1082)
{
    union // Size=0x1 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            unsigned char ControllerReset:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char NVMeSubsystemReset:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char PCIeFLR:1;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x1
            unsigned char PERST:1;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x1
            unsigned char PowerCycle:1;// Offset=0x0 Size=0x1 BitOffset=0x4 BitSize=0x1
            unsigned char PCIeConventionalHotReset:1;// Offset=0x0 Size=0x1 BitOffset=0x5 BitSize=0x1
            unsigned char Reserved:2;// Offset=0x0 Size=0x1 BitOffset=0x6 BitSize=0x2
        };
        unsigned char AsUCHAR;// Offset=0x0 Size=0x1
    };
};
