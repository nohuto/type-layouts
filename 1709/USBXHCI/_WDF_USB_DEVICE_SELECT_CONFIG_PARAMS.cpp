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

struct _unnamed_351// Size=0x18 (Id=351)
{
    struct _USB_CONFIGURATION_DESCRIPTOR * ConfigurationDescriptor;// Offset=0x0 Size=0x8
    struct _USB_INTERFACE_DESCRIPTOR ** InterfaceDescriptors;// Offset=0x8 Size=0x8
    unsigned long NumInterfaceDescriptors;// Offset=0x10 Size=0x4
};

struct _unnamed_352// Size=0x8 (Id=352)
{
    struct _URB * Urb;// Offset=0x0 Size=0x8
};

struct _unnamed_353// Size=0x10 (Id=353)
{
    unsigned char NumberConfiguredPipes;// Offset=0x0 Size=0x1
    struct WDFUSBINTERFACE__ * ConfiguredUsbInterface;// Offset=0x8 Size=0x8
};

struct _unnamed_354// Size=0x18 (Id=354)
{
    unsigned char NumberInterfaces;// Offset=0x0 Size=0x1
    struct _WDF_USB_INTERFACE_SETTING_PAIR * Pairs;// Offset=0x8 Size=0x8
    unsigned char NumberOfConfiguredInterfaces;// Offset=0x10 Size=0x1
};

union _unnamed_355// Size=0x18 (Id=355)
{
    struct _unnamed_351 Descriptor;// Offset=0x0 Size=0x18
    struct _unnamed_352 Urb;// Offset=0x0 Size=0x8
    struct _unnamed_353 SingleInterface;// Offset=0x0 Size=0x10
    struct _unnamed_354 MultiInterface;// Offset=0x0 Size=0x18
};

struct _WDF_USB_DEVICE_SELECT_CONFIG_PARAMS// Size=0x20 (Id=356)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    enum _WdfUsbTargetDeviceSelectConfigType Type;// Offset=0x4 Size=0x4
    union _unnamed_355 Types;// Offset=0x8 Size=0x18
};
