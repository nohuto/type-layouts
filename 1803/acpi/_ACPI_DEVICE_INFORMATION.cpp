struct _unnamed_472// Size=0x8 (Id=472)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Reserved:24;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x18
        unsigned long long ProgrammingInterface:8;// Offset=0x0 Size=0x8 BitOffset=0x18 BitSize=0x8
        unsigned long long SubClassCode:16;// Offset=0x0 Size=0x8 BitOffset=0x20 BitSize=0x10
        unsigned long long BaseClassCode:16;// Offset=0x0 Size=0x8 BitOffset=0x30 BitSize=0x10
    };
};

struct _ACPI_DEVICE_INFORMATION// Size=0x28 (Id=473)
{
    union // Size=0x8 (Id=0)
    {
        char * HardwareIdentifier;// Offset=0x0 Size=0x8
        unsigned long long Address;// Offset=0x0 Size=0x8
    };
    char * InstanceIdentifier;// Offset=0x8 Size=0x8
    char * SubSystem;// Offset=0x10 Size=0x8
    unsigned long HardwareRevision;// Offset=0x18 Size=0x4
    union // Size=0x8 (Id=0)
    {
        unsigned long long UClassCode;// Offset=0x20 Size=0x8
        struct _unnamed_472 ClassCode;// Offset=0x20 Size=0x8
    };
};
