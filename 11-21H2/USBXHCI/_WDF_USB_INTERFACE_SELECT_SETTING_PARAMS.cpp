enum _WdfUsbTargetDeviceSelectSettingType
{
    WdfUsbInterfaceSelectSettingTypeDescriptor=16,
    WdfUsbInterfaceSelectSettingTypeSetting=17,
    WdfUsbInterfaceSelectSettingTypeUrb=18
};

struct _unnamed_394// Size=0x8 (Id=394)
{
    struct _USB_INTERFACE_DESCRIPTOR * InterfaceDescriptor;// Offset=0x0 Size=0x8
};

struct _unnamed_395// Size=0x1 (Id=395)
{
    unsigned char SettingIndex;// Offset=0x0 Size=0x1
};

struct _unnamed_385// Size=0x8 (Id=385)
{
    struct _URB * Urb;// Offset=0x0 Size=0x8
};

union _unnamed_396// Size=0x8 (Id=396)
{
    struct _unnamed_394 Descriptor;// Offset=0x0 Size=0x8
    struct _unnamed_395 Interface;// Offset=0x0 Size=0x1
    struct _unnamed_385 Urb;// Offset=0x0 Size=0x8
};

struct _WDF_USB_INTERFACE_SELECT_SETTING_PARAMS// Size=0x10 (Id=397)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    enum _WdfUsbTargetDeviceSelectSettingType Type;// Offset=0x4 Size=0x4
    union _unnamed_396 Types;// Offset=0x8 Size=0x8
};
