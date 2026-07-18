enum _WdfUsbTargetDeviceSelectSettingType
{
    WdfUsbInterfaceSelectSettingTypeDescriptor=16,
    WdfUsbInterfaceSelectSettingTypeSetting=17,
    WdfUsbInterfaceSelectSettingTypeUrb=18
};

struct _anonymous_378// Size=0x8 (Id=378)
{
    struct _USB_INTERFACE_DESCRIPTOR * InterfaceDescriptor;// Offset=0x0 Size=0x8
};

struct _anonymous_379// Size=0x1 (Id=379)
{
    unsigned char SettingIndex;// Offset=0x0 Size=0x1
};

struct _anonymous_369// Size=0x8 (Id=369)
{
    struct _URB * Urb;// Offset=0x0 Size=0x8
};

union _anonymous_380// Size=0x8 (Id=380)
{
    struct _anonymous_378 Descriptor;// Offset=0x0 Size=0x8
    struct _anonymous_379 Interface;// Offset=0x0 Size=0x1
    struct _anonymous_369 Urb;// Offset=0x0 Size=0x8
};

struct _WDF_USB_INTERFACE_SELECT_SETTING_PARAMS// Size=0x10 (Id=381)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    enum _WdfUsbTargetDeviceSelectSettingType Type;// Offset=0x4 Size=0x4
    union _anonymous_380 Types;// Offset=0x8 Size=0x8
};
