enum _WdfUsbTargetDeviceSelectSettingType
{
    WdfUsbInterfaceSelectSettingTypeDescriptor=16,
    WdfUsbInterfaceSelectSettingTypeSetting=17,
    WdfUsbInterfaceSelectSettingTypeUrb=18
};

struct _unnamed_361// Size=0x8 (Id=361)
{
    struct _USB_INTERFACE_DESCRIPTOR * InterfaceDescriptor;// Offset=0x0 Size=0x8
};

struct _unnamed_362// Size=0x1 (Id=362)
{
    unsigned char SettingIndex;// Offset=0x0 Size=0x1
};

struct _unnamed_352// Size=0x8 (Id=352)
{
    struct _URB * Urb;// Offset=0x0 Size=0x8
};

union _unnamed_363// Size=0x8 (Id=363)
{
    struct _unnamed_361 Descriptor;// Offset=0x0 Size=0x8
    struct _unnamed_362 Interface;// Offset=0x0 Size=0x1
    struct _unnamed_352 Urb;// Offset=0x0 Size=0x8
};

struct _WDF_USB_INTERFACE_SELECT_SETTING_PARAMS// Size=0x10 (Id=364)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    enum _WdfUsbTargetDeviceSelectSettingType Type;// Offset=0x4 Size=0x4
    union _unnamed_363 Types;// Offset=0x8 Size=0x8
};
