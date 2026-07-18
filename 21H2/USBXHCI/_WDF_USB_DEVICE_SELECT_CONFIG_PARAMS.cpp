enum _WdfUsbTargetDeviceSelectConfigType
{
    WdfUsbTargetDeviceSelectConfigTypeInvalid=0,
    WdfUsbTargetDeviceSelectConfigTypeDeconfig=1,
    WdfUsbTargetDeviceSelectConfigTypeSingleInterface=2,
    WdfUsbTargetDeviceSelectConfigTypeMultiInterface=3,
    WdfUsbTargetDeviceSelectConfigTypeInterfacesPairs=4,
    WdfUsbTargetDeviceSelectConfigTypeInterfacesDescriptor=5,
    WdfUsbTargetDeviceSelectConfigTypeUrb=6
};

struct _anonymous_419// Size=0x18 (Id=419)
{
    struct _USB_CONFIGURATION_DESCRIPTOR * ConfigurationDescriptor;// Offset=0x0 Size=0x8
    struct _USB_INTERFACE_DESCRIPTOR ** InterfaceDescriptors;// Offset=0x8 Size=0x8
    unsigned long NumInterfaceDescriptors;// Offset=0x10 Size=0x4
};

struct _anonymous_420// Size=0x8 (Id=420)
{
    struct _URB * Urb;// Offset=0x0 Size=0x8
};

struct _anonymous_421// Size=0x10 (Id=421)
{
    unsigned char NumberConfiguredPipes;// Offset=0x0 Size=0x1
    struct WDFUSBINTERFACE__ * ConfiguredUsbInterface;// Offset=0x8 Size=0x8
};

struct _anonymous_422// Size=0x18 (Id=422)
{
    unsigned char NumberInterfaces;// Offset=0x0 Size=0x1
    struct _WDF_USB_INTERFACE_SETTING_PAIR * Pairs;// Offset=0x8 Size=0x8
    unsigned char NumberOfConfiguredInterfaces;// Offset=0x10 Size=0x1
};

union _anonymous_423// Size=0x18 (Id=423)
{
    struct _anonymous_419 Descriptor;// Offset=0x0 Size=0x18
    struct _anonymous_420 Urb;// Offset=0x0 Size=0x8
    struct _anonymous_421 SingleInterface;// Offset=0x0 Size=0x10
    struct _anonymous_422 MultiInterface;// Offset=0x0 Size=0x18
};

struct _WDF_USB_DEVICE_SELECT_CONFIG_PARAMS// Size=0x20 (Id=424)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    enum _WdfUsbTargetDeviceSelectConfigType Type;// Offset=0x4 Size=0x4
    union _anonymous_423 Types;// Offset=0x8 Size=0x18
};
