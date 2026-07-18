struct _unnamed_562// Size=0x8 (Id=562)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long FunctionLevelDeviceReset:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long PlatformLevelDeviceReset:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long SecondaryBusReset:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long Reserved:61;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x3d
    };
};

struct _unnamed_563// Size=0x8 (Id=563)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long FunctionLevelDeviceReset:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long PlatformLevelDeviceReset:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long Reserved:62;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x3e
    };
};

union _DEVICE_BUS_SPECIFIC_RESET_TYPE// Size=0x8 (Id=564)
{
    struct _unnamed_562 Pci;// Offset=0x0 Size=0x8
    struct _unnamed_563 Acpi;// Offset=0x0 Size=0x8
    unsigned long long AsULONGLONG;// Offset=0x0 Size=0x8
};
