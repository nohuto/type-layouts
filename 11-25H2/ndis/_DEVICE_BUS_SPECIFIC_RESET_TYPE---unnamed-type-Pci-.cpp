struct _DEVICE_BUS_SPECIFIC_RESET_TYPE::<unnamed-type-Pci>// Size=0x8 (Id=929)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long FunctionLevelDeviceReset:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long PlatformLevelDeviceReset:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long SecondaryBusReset:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long PowerControllerReset:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long NoOpReset:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long Reserved:59;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x3b
    };
};
