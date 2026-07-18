struct _GUID// Size=0x10 (Id=2)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

union _DEVICE_BUS_SPECIFIC_RESET_TYPE// Size=0x8 (Id=928)
{
    struct <unnamed-type-Pci>// Size=0x8 (Id=2818)
    {
        unsigned long long FunctionLevelDeviceReset:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long PlatformLevelDeviceReset:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long SecondaryBusReset:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long PowerControllerReset:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long NoOpReset:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long Reserved:59;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x3b
    };
    struct _DEVICE_BUS_SPECIFIC_RESET_TYPE::<unnamed-type-Pci> Pci;// Offset=0x0 Size=0x8
    struct <unnamed-type-Acpi>// Size=0x8 (Id=2826)
    {
        unsigned long long FunctionLevelDeviceReset:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long PlatformLevelDeviceReset:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long Reserved:62;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x3e
    };
    struct _DEVICE_BUS_SPECIFIC_RESET_TYPE::<unnamed-type-Acpi> Acpi;// Offset=0x0 Size=0x8
    unsigned long long AsULONGLONG;// Offset=0x0 Size=0x8
};

struct _DEVICE_BUS_SPECIFIC_RESET_INFO// Size=0x18 (Id=1063)
{
    struct _GUID BusTypeGuid;// Offset=0x0 Size=0x10
    union _DEVICE_BUS_SPECIFIC_RESET_TYPE ResetTypeSupported;// Offset=0x10 Size=0x8
};
