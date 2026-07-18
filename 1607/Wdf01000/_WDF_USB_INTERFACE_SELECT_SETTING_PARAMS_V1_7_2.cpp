enum _WdfUsbTargetDeviceSelectSettingType
{
    WdfUsbInterfaceSelectSettingTypeDescriptor=16,
    WdfUsbInterfaceSelectSettingTypeSetting=17,
    WdfUsbInterfaceSelectSettingTypeUrb=18
};

struct _WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_7// Size=0x10 (Id=4127)
{
    union // Size=0x8 (Id=0)
    {
        unsigned long Size;// Offset=0x0 Size=0x4
        enum _WdfUsbTargetDeviceSelectSettingType Type;// Offset=0x4 Size=0x4
        union <unnamed-type-Types>// Size=0x8 (Id=21279)
        {
            struct <unnamed-type-Descriptor>// Size=0x8 (Id=21280)
            {
                struct _USB_INTERFACE_DESCRIPTOR * InterfaceDescriptor;// Offset=0x0 Size=0x8
            };
            struct _WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_7::<unnamed-type-Types>::<unnamed-type-Descriptor> Descriptor;// Offset=0x0 Size=0x8
            struct <unnamed-type-Interface>// Size=0x1 (Id=21283)
            {
                unsigned char SettingIndex;// Offset=0x0 Size=0x1
            };
            struct _WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_7::<unnamed-type-Types>::<unnamed-type-Interface> Interface;// Offset=0x0 Size=0x1
            struct <unnamed-type-Urb>// Size=0x8 (Id=21286)
            {
                struct _URB * Urb;// Offset=0x0 Size=0x8
            };
            struct _WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_7::<unnamed-type-Types>::<unnamed-type-Urb> Urb;// Offset=0x0 Size=0x8
        };
    };
    union _WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_7::<unnamed-type-Types> Types;// Offset=0x8 Size=0x8
};
