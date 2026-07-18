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

struct _unnamed_31// Size=0x8 (Id=31)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=76)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_31 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _PEP_ACPI_IO_MEMORY_RESOURCE// Size=0x20 (Id=365)
{
    enum _PEP_ACPI_RESOURCE_TYPE Type;// Offset=0x0 Size=0x4
    unsigned char Information;// Offset=0x4 Size=0x1
    union _LARGE_INTEGER MinimumAddress;// Offset=0x8 Size=0x8
    union _LARGE_INTEGER MaximumAddress;// Offset=0x10 Size=0x8
    unsigned long Alignment;// Offset=0x18 Size=0x4
    unsigned long Length;// Offset=0x1c Size=0x4
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

union _PEP_ACPI_RESOURCE_FLAGS// Size=0x4 (Id=926)
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

struct _PEP_ACPI_INTERRUPT_RESOURCE// Size=0x20 (Id=368)
{
    enum _PEP_ACPI_RESOURCE_TYPE Type;// Offset=0x0 Size=0x4
    enum _KINTERRUPT_MODE InterruptType;// Offset=0x4 Size=0x4
    enum _KINTERRUPT_POLARITY InterruptPolarity;// Offset=0x8 Size=0x4
    union _PEP_ACPI_RESOURCE_FLAGS Flags;// Offset=0xc Size=0x4
    unsigned char Count;// Offset=0x10 Size=0x1
    unsigned long * Pins;// Offset=0x18 Size=0x8
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

struct _PEP_ACPI_GPIO_RESOURCE// Size=0x48 (Id=371)
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

struct _PEP_ACPI_SPB_RESOURCE// Size=0x28 (Id=539)
{
    enum _PEP_ACPI_RESOURCE_TYPE Type;// Offset=0x0 Size=0x4
    union _PEP_ACPI_RESOURCE_FLAGS Flags;// Offset=0x4 Size=0x4
    unsigned short TypeSpecificFlags;// Offset=0x8 Size=0x2
    unsigned char ResourceSourceIndex;// Offset=0xa Size=0x1
    struct _UNICODE_STRING * ResourceSourceName;// Offset=0x10 Size=0x8
    char * VendorData;// Offset=0x18 Size=0x8
    unsigned short VendorDataLength;// Offset=0x20 Size=0x2
};

struct _PEP_ACPI_SPB_I2C_RESOURCE// Size=0x30 (Id=372)
{
    struct _PEP_ACPI_SPB_RESOURCE SpbCommon;// Offset=0x0 Size=0x28
    unsigned long ConnectionSpeed;// Offset=0x28 Size=0x4
    unsigned short SlaveAddress;// Offset=0x2c Size=0x2
};

struct _PEP_ACPI_SPB_SPI_RESOURCE// Size=0x38 (Id=374)
{
    struct _PEP_ACPI_SPB_RESOURCE SpbCommon;// Offset=0x0 Size=0x28
    unsigned long ConnectionSpeed;// Offset=0x28 Size=0x4
    unsigned char DataBitLength;// Offset=0x2c Size=0x1
    unsigned char Phase;// Offset=0x2d Size=0x1
    unsigned char Polarity;// Offset=0x2e Size=0x1
    unsigned short DeviceSelection;// Offset=0x30 Size=0x2
};

struct _PEP_ACPI_SPB_UART_RESOURCE// Size=0x38 (Id=373)
{
    struct _PEP_ACPI_SPB_RESOURCE SpbCommon;// Offset=0x0 Size=0x28
    unsigned long BaudRate;// Offset=0x28 Size=0x4
    unsigned short RxBufferSize;// Offset=0x2c Size=0x2
    unsigned short TxBufferSize;// Offset=0x2e Size=0x2
    unsigned char Parity;// Offset=0x30 Size=0x1
    unsigned char LinesInUse;// Offset=0x31 Size=0x1
};

struct _PEP_ACPI_EXTENDED_ADDRESS// Size=0x48 (Id=375)
{
    enum _PEP_ACPI_RESOURCE_TYPE Type;// Offset=0x0 Size=0x4
    union _PEP_ACPI_RESOURCE_FLAGS Flags;// Offset=0x4 Size=0x4
    unsigned char ResourceFlags;// Offset=0x8 Size=0x1
    unsigned char GeneralFlags;// Offset=0x9 Size=0x1
    unsigned char TypeSpecificFlags;// Offset=0xa Size=0x1
    unsigned char RevisionId;// Offset=0xb Size=0x1
    unsigned char Reserved;// Offset=0xc Size=0x1
    unsigned long long Granularity;// Offset=0x10 Size=0x8
    unsigned long long MinimumAddress;// Offset=0x18 Size=0x8
    unsigned long long MaximumAddress;// Offset=0x20 Size=0x8
    unsigned long long TranslationAddress;// Offset=0x28 Size=0x8
    unsigned long long AddressLength;// Offset=0x30 Size=0x8
    unsigned long long TypeAttribute;// Offset=0x38 Size=0x8
    struct _UNICODE_STRING * DescriptorName;// Offset=0x40 Size=0x8
};

union _PEP_ACPI_RESOURCE// Size=0x48 (Id=364)
{
    enum _PEP_ACPI_RESOURCE_TYPE Type;// Offset=0x0 Size=0x4
    struct _PEP_ACPI_IO_MEMORY_RESOURCE IoMemory;// Offset=0x0 Size=0x20
    struct _PEP_ACPI_INTERRUPT_RESOURCE Interrupt;// Offset=0x0 Size=0x20
    struct _PEP_ACPI_GPIO_RESOURCE Gpio;// Offset=0x0 Size=0x48
    struct _PEP_ACPI_SPB_I2C_RESOURCE SpbI2c;// Offset=0x0 Size=0x30
    struct _PEP_ACPI_SPB_SPI_RESOURCE SpbSpi;// Offset=0x0 Size=0x38
    struct _PEP_ACPI_SPB_UART_RESOURCE SpbUart;// Offset=0x0 Size=0x38
    struct _PEP_ACPI_EXTENDED_ADDRESS ExtendedAddress;// Offset=0x0 Size=0x48
};
