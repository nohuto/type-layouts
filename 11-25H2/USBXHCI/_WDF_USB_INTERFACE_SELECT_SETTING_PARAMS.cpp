enum _WdfUsbTargetDeviceSelectSettingType
{
    WdfUsbInterfaceSelectSettingTypeDescriptor=16,
    WdfUsbInterfaceSelectSettingTypeSetting=17,
    WdfUsbInterfaceSelectSettingTypeUrb=18
};

struct _unnamed_443// Size=0x8 (Id=443)
{
    struct _USB_INTERFACE_DESCRIPTOR * InterfaceDescriptor;// Offset=0x0 Size=0x8
};

struct _unnamed_444// Size=0x1 (Id=444)
{
    unsigned char SettingIndex;// Offset=0x0 Size=0x1
};

struct _unnamed_434// Size=0x8 (Id=434)
{
    struct _URB * Urb;// Offset=0x0 Size=0x8
};

union _unnamed_445// Size=0x8 (Id=445)
{
    struct _unnamed_443 Descriptor;// Offset=0x0 Size=0x8
    struct _unnamed_444 Interface;// Offset=0x0 Size=0x1
    struct _unnamed_434 Urb;// Offset=0x0 Size=0x8
};

struct _WDF_USB_INTERFACE_SELECT_SETTING_PARAMS// Size=0x10 (Id=446)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    enum _WdfUsbTargetDeviceSelectSettingType Type;// Offset=0x4 Size=0x4
    union _unnamed_445 Types;// Offset=0x8 Size=0x8
};
