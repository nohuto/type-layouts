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

struct _unnamed_358// Size=0x18 (Id=358)
{
    struct _USB_CONFIGURATION_DESCRIPTOR * ConfigurationDescriptor;// Offset=0x0 Size=0x8
    struct _USB_INTERFACE_DESCRIPTOR ** InterfaceDescriptors;// Offset=0x8 Size=0x8
    unsigned long NumInterfaceDescriptors;// Offset=0x10 Size=0x4
};

struct _unnamed_359// Size=0x8 (Id=359)
{
    struct _URB * Urb;// Offset=0x0 Size=0x8
};

struct _unnamed_360// Size=0x10 (Id=360)
{
    unsigned char NumberConfiguredPipes;// Offset=0x0 Size=0x1
    struct WDFUSBINTERFACE__ * ConfiguredUsbInterface;// Offset=0x8 Size=0x8
};

struct _unnamed_361// Size=0x18 (Id=361)
{
    unsigned char NumberInterfaces;// Offset=0x0 Size=0x1
    struct _WDF_USB_INTERFACE_SETTING_PAIR * Pairs;// Offset=0x8 Size=0x8
    unsigned char NumberOfConfiguredInterfaces;// Offset=0x10 Size=0x1
};

union _unnamed_362// Size=0x18 (Id=362)
{
    struct _unnamed_358 Descriptor;// Offset=0x0 Size=0x18
    struct _unnamed_359 Urb;// Offset=0x0 Size=0x8
    struct _unnamed_360 SingleInterface;// Offset=0x0 Size=0x10
    struct _unnamed_361 MultiInterface;// Offset=0x0 Size=0x18
};

struct _WDF_USB_DEVICE_SELECT_CONFIG_PARAMS// Size=0x20 (Id=363)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    enum _WdfUsbTargetDeviceSelectConfigType Type;// Offset=0x4 Size=0x4
    union _unnamed_362 Types;// Offset=0x8 Size=0x18
};
