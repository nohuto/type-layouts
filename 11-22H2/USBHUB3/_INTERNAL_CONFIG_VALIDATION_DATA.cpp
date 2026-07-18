enum _USB_DEVICE_SPEED
{
    UsbLowSpeed=0,
    UsbFullSpeed=1,
    UsbHighSpeed=2,
    UsbSuperSpeed=3
};

enum _MAX_PORT_POWER
{
    MaxPortPowerInvalid=0,
    MaxPortPower100Milliamps=100,
    MaxPortPower500Milliamps=500
};

struct _VALIDATION_DEVICE_INFO// Size=0x38 (Id=416)
{
    unsigned short USBVersion;// Offset=0x0 Size=0x2
    enum _USB_DEVICE_SPEED USBSpeed;// Offset=0x4 Size=0x4
    enum _MAX_PORT_POWER MaxPortPower;// Offset=0x8 Size=0x4
    unsigned char EnforceStrictestParsing;// Offset=0xc Size=0x1
    unsigned char EnableWin7StricterParsing;// Offset=0xd Size=0x1
    unsigned char RelaxParsing;// Offset=0xe Size=0x1
    unsigned char ValidateReservedFields;// Offset=0xf Size=0x1
    unsigned long SuperSpeedPlusIsochBurstCount;// Offset=0x10 Size=0x4
    void  ( * LogErrorFunction)(void * ,enum _DESCRIPTOR_VALIDATION_ERROR );// Offset=0x18 Size=0x8
    void  ( * LogWarningFunction)(void * ,enum _DESCRIPTOR_VALIDATION_ERROR );// Offset=0x20 Size=0x8
    void * LogFunctionContext;// Offset=0x28 Size=0x8
    unsigned char UseWin8DescriptorValidationBehavior;// Offset=0x30 Size=0x1
};

struct _RTL_BITMAP// Size=0x10 (Id=14)
{
    unsigned long SizeOfBitMap;// Offset=0x0 Size=0x4
    unsigned long * Buffer;// Offset=0x8 Size=0x8
};

union _CONFIG_VALIDATION_FLAGS// Size=0x4 (Id=573)
{
    unsigned long AsUlong;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long FirstInterfaceFound:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long FirstEndpointFound:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long ExpectingEndpointCompanion:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long ExpectingSSPEndpointCompanion:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long EndpointCompanionFound:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long SSPEndpointCompanionFound:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
    };
};

struct _INTERNAL_CONFIG_VALIDATION_DATA// Size=0x108 (Id=421)
{
    struct _VALIDATION_DEVICE_INFO DevInfo;// Offset=0x0 Size=0x38
    unsigned char * DescriptorSetBeginning;// Offset=0x38 Size=0x8
    unsigned char * DescriptorSetEnd;// Offset=0x40 Size=0x8
    unsigned long BufferLength;// Offset=0x48 Size=0x4
    unsigned char CurrentInterfaceNumber;// Offset=0x50 Size=0x1
    unsigned char CurrentAltSetting;// Offset=0x51 Size=0x1
    struct _RTL_BITMAP AlternateSettingsBitmap;// Offset=0x58 Size=0x10
    unsigned long AlternateSettings[8];// Offset=0x68 Size=0x20
    struct _RTL_BITMAP EndpointAddressesBitmap;// Offset=0x88 Size=0x10
    unsigned long EndpointAddresses[8];// Offset=0x98 Size=0x20
    unsigned char NumberEndpoints;// Offset=0xb8 Size=0x1
    unsigned char EndpointCount;// Offset=0xb9 Size=0x1
    struct _USB_ENDPOINT_DESCRIPTOR * LastEndpointDescriptor;// Offset=0xc0 Size=0x8
    unsigned char EndpointCompanionFound;// Offset=0xc8 Size=0x1
    unsigned short InterfacesFound;// Offset=0xca Size=0x2
    struct _RTL_BITMAP InterfaceNumberBitmap;// Offset=0xd0 Size=0x10
    unsigned long InterfaceNumbers[8];// Offset=0xe0 Size=0x20
    union _CONFIG_VALIDATION_FLAGS ValidationFlags;// Offset=0x100 Size=0x4
};
