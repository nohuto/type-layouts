struct _unnamed_896// Size=0x8 (Id=896)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long FunctionLevelDeviceReset:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long PlatformLevelDeviceReset:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long SecondaryBusReset:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long PowerControllerReset:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long NoOpReset:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long FunctionLevelDeviceResetInPlace:1;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x1
        unsigned long long SecondaryBusResetInPlace:1;// Offset=0x0 Size=0x8 BitOffset=0x6 BitSize=0x1
        unsigned long long PowerControllerResetInPlace:1;// Offset=0x0 Size=0x8 BitOffset=0x7 BitSize=0x1
        unsigned long long Reserved:56;// Offset=0x0 Size=0x8 BitOffset=0x8 BitSize=0x38
    };
};

struct _unnamed_897// Size=0x8 (Id=897)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long FunctionLevelDeviceReset:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long PlatformLevelDeviceReset:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long Reserved:62;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x3e
    };
};

union _DEVICE_BUS_SPECIFIC_RESET_TYPE// Size=0x8 (Id=898)
{
    struct _unnamed_896 Pci;// Offset=0x0 Size=0x8
    struct _unnamed_897 Acpi;// Offset=0x0 Size=0x8
    unsigned long long AsULONGLONG;// Offset=0x0 Size=0x8
};
