enum _PEP_ACPI_RESOURCE_TYPE
{
    PepAcpiMemory=0,
    PepAcpiIoPort=1,
    PepAcpiInterrupt=2,
    PepAcpiGpioIo=3,
    PepAcpiGpioInt=4,
    PepAcpiSpbI2c=5,
    PepAcpiSpbSpi=6,
    PepAcpiSpbUart=7,
    PepAcpiExtendedMemory=8,
    PepAcpiExtendedIo=9
};

union _PEP_ACPI_RESOURCE_FLAGS// Size=0x4 (Id=557)
{
    unsigned long AsULong;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long Shared:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Wake:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long ResourceUsage:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long SlaveMode:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long AddressingMode:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long SharedMode:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long Reserved:26;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1a
    };
};

struct _PEP_ACPI_SPB_RESOURCE// Size=0x28 (Id=413)
{
    enum _PEP_ACPI_RESOURCE_TYPE Type;// Offset=0x0 Size=0x4
    union _PEP_ACPI_RESOURCE_FLAGS Flags;// Offset=0x4 Size=0x4
    unsigned short TypeSpecificFlags;// Offset=0x8 Size=0x2
    unsigned char ResourceSourceIndex;// Offset=0xa Size=0x1
    struct _UNICODE_STRING * ResourceSourceName;// Offset=0x10 Size=0x8
    char * VendorData;// Offset=0x18 Size=0x8
    unsigned short VendorDataLength;// Offset=0x20 Size=0x2
};

struct _PEP_ACPI_SPB_I2C_RESOURCE// Size=0x30 (Id=385)
{
    struct _PEP_ACPI_SPB_RESOURCE SpbCommon;// Offset=0x0 Size=0x28
    unsigned long ConnectionSpeed;// Offset=0x28 Size=0x4
    unsigned short SlaveAddress;// Offset=0x2c Size=0x2
};
