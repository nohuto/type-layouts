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

struct _VALIDATION_DEVICE_INFO// Size=0x38 (Id=418)
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

struct _INTERNAL_VALIDATION_DATA// Size=0x50 (Id=422)
{
    struct _VALIDATION_DEVICE_INFO DevInfo;// Offset=0x0 Size=0x38
    unsigned char * DescriptorSetBeginning;// Offset=0x38 Size=0x8
    unsigned char * DescriptorSetEnd;// Offset=0x40 Size=0x8
    unsigned long BufferLength;// Offset=0x48 Size=0x4
};
