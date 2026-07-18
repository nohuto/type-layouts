enum _WdfUsbTargetDeviceSelectSettingType
{
    WdfUsbInterfaceSelectSettingTypeDescriptor=16,
    WdfUsbInterfaceSelectSettingTypeSetting=17,
    WdfUsbInterfaceSelectSettingTypeUrb=18
};

struct _anonymous_429// Size=0x8 (Id=429)
{
    struct _USB_INTERFACE_DESCRIPTOR * InterfaceDescriptor;// Offset=0x0 Size=0x8
};

struct _anonymous_430// Size=0x1 (Id=430)
{
    unsigned char SettingIndex;// Offset=0x0 Size=0x1
};

struct _anonymous_420// Size=0x8 (Id=420)
{
    struct _URB * Urb;// Offset=0x0 Size=0x8
};

union _anonymous_431// Size=0x8 (Id=431)
{
    struct _anonymous_429 Descriptor;// Offset=0x0 Size=0x8
    struct _anonymous_430 Interface;// Offset=0x0 Size=0x1
    struct _anonymous_420 Urb;// Offset=0x0 Size=0x8
};

struct _WDF_USB_INTERFACE_SELECT_SETTING_PARAMS// Size=0x10 (Id=432)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    enum _WdfUsbTargetDeviceSelectSettingType Type;// Offset=0x4 Size=0x4
    union _anonymous_431 Types;// Offset=0x8 Size=0x8
};
