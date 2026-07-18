enum _WdfUsbTargetDeviceSelectSettingType
{
    WdfUsbInterfaceSelectSettingTypeDescriptor=16,
    WdfUsbInterfaceSelectSettingTypeSetting=17,
    WdfUsbInterfaceSelectSettingTypeUrb=18
};

struct _unnamed_432// Size=0x8 (Id=432)
{
    struct _USB_INTERFACE_DESCRIPTOR * InterfaceDescriptor;// Offset=0x0 Size=0x8
};

struct _unnamed_433// Size=0x1 (Id=433)
{
    unsigned char SettingIndex;// Offset=0x0 Size=0x1
};

struct _unnamed_423// Size=0x8 (Id=423)
{
    struct _URB * Urb;// Offset=0x0 Size=0x8
};

union _unnamed_434// Size=0x8 (Id=434)
{
    struct _unnamed_432 Descriptor;// Offset=0x0 Size=0x8
    struct _unnamed_433 Interface;// Offset=0x0 Size=0x1
    struct _unnamed_423 Urb;// Offset=0x0 Size=0x8
};

struct _WDF_USB_INTERFACE_SELECT_SETTING_PARAMS// Size=0x10 (Id=435)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    enum _WdfUsbTargetDeviceSelectSettingType Type;// Offset=0x4 Size=0x4
    union _unnamed_434 Types;// Offset=0x8 Size=0x8
};
