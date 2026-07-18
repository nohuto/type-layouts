struct _MODULE_DEVICE_EXTENSION// Size=0x38 (Id=542)
{
    struct EXTENSION_WORKER WorkQueue;// Offset=0x0 Size=0x18
    unsigned char ArbitersNeeded;// Offset=0x18 Size=0x1
    unsigned char EnumeratedOnce;// Offset=0x19 Size=0x1
    struct _ACPI_ARBITER_INSTANCE * Arbiters[3];// Offset=0x20 Size=0x18
};
