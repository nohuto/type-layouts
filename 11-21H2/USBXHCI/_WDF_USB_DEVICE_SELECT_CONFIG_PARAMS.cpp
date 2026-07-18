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

struct _unnamed_384// Size=0x18 (Id=384)
{
    struct _USB_CONFIGURATION_DESCRIPTOR * ConfigurationDescriptor;// Offset=0x0 Size=0x8
    struct _USB_INTERFACE_DESCRIPTOR ** InterfaceDescriptors;// Offset=0x8 Size=0x8
    unsigned long NumInterfaceDescriptors;// Offset=0x10 Size=0x4
};

struct _unnamed_385// Size=0x8 (Id=385)
{
    struct _URB * Urb;// Offset=0x0 Size=0x8
};

struct _unnamed_386// Size=0x10 (Id=386)
{
    unsigned char NumberConfiguredPipes;// Offset=0x0 Size=0x1
    struct WDFUSBINTERFACE__ * ConfiguredUsbInterface;// Offset=0x8 Size=0x8
};

struct _unnamed_387// Size=0x18 (Id=387)
{
    unsigned char NumberInterfaces;// Offset=0x0 Size=0x1
    struct _WDF_USB_INTERFACE_SETTING_PAIR * Pairs;// Offset=0x8 Size=0x8
    unsigned char NumberOfConfiguredInterfaces;// Offset=0x10 Size=0x1
};

union _unnamed_388// Size=0x18 (Id=388)
{
    struct _unnamed_384 Descriptor;// Offset=0x0 Size=0x18
    struct _unnamed_385 Urb;// Offset=0x0 Size=0x8
    struct _unnamed_386 SingleInterface;// Offset=0x0 Size=0x10
    struct _unnamed_387 MultiInterface;// Offset=0x0 Size=0x18
};

struct _WDF_USB_DEVICE_SELECT_CONFIG_PARAMS// Size=0x20 (Id=389)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    enum _WdfUsbTargetDeviceSelectConfigType Type;// Offset=0x4 Size=0x4
    union _unnamed_388 Types;// Offset=0x8 Size=0x18
};
