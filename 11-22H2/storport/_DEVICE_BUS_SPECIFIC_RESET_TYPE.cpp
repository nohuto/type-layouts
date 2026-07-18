struct _unnamed_588// Size=0x8 (Id=588)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long FunctionLevelDeviceReset:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long PlatformLevelDeviceReset:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long SecondaryBusReset:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long Reserved:61;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x3d
    };
};

struct _unnamed_589// Size=0x8 (Id=589)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long FunctionLevelDeviceReset:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long PlatformLevelDeviceReset:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long Reserved:62;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x3e
    };
};

union _DEVICE_BUS_SPECIFIC_RESET_TYPE// Size=0x8 (Id=590)
{
    struct _unnamed_588 Pci;// Offset=0x0 Size=0x8
    struct _unnamed_589 Acpi;// Offset=0x0 Size=0x8
    unsigned long long AsULONGLONG;// Offset=0x0 Size=0x8
};
