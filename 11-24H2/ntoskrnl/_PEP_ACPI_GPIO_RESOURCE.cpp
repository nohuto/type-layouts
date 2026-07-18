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

union _PEP_ACPI_RESOURCE_FLAGS// Size=0x4 (Id=1623)
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

enum _KINTERRUPT_MODE
{
    LevelSensitive=0,
    Latched=1
};

enum _KINTERRUPT_POLARITY
{
    InterruptPolarityUnknown=0,
    InterruptActiveHigh=1,
    InterruptRisingEdge=1,
    InterruptActiveLow=2,
    InterruptFallingEdge=2,
    InterruptActiveBoth=3,
    InterruptActiveBothTriggerLow=3,
    InterruptActiveBothTriggerHigh=4
};

enum _GPIO_PIN_CONFIG_TYPE
{
    PullDefault=0,
    PullUp=1,
    PullDown=2,
    PullNone=3
};

enum _GPIO_PIN_IORESTRICTION_TYPE
{
    IoRestrictionNone=0,
    IoRestrictionInputOnly=1,
    IoRestrictionOutputOnly=2,
    IoRestrictionNoneAndPreserve=3
};

struct _PEP_ACPI_GPIO_RESOURCE// Size=0x48 (Id=836)
{
    enum _PEP_ACPI_RESOURCE_TYPE Type;// Offset=0x0 Size=0x4
    union _PEP_ACPI_RESOURCE_FLAGS Flags;// Offset=0x4 Size=0x4
    enum _KINTERRUPT_MODE InterruptType;// Offset=0x8 Size=0x4
    enum _KINTERRUPT_POLARITY InterruptPolarity;// Offset=0xc Size=0x4
    enum _GPIO_PIN_CONFIG_TYPE PinConfig;// Offset=0x10 Size=0x4
    enum _GPIO_PIN_IORESTRICTION_TYPE IoRestrictionType;// Offset=0x14 Size=0x4
    unsigned short DriveStrength;// Offset=0x18 Size=0x2
    unsigned short DebounceTimeout;// Offset=0x1a Size=0x2
    unsigned short * PinTable;// Offset=0x20 Size=0x8
    unsigned short PinCount;// Offset=0x28 Size=0x2
    unsigned char ResourceSourceIndex;// Offset=0x2a Size=0x1
    struct _UNICODE_STRING * ResourceSourceName;// Offset=0x30 Size=0x8
    unsigned char * VendorData;// Offset=0x38 Size=0x8
    unsigned short VendorDataLength;// Offset=0x40 Size=0x2
};
