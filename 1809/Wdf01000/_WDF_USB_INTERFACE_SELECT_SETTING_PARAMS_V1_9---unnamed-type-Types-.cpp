union _WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_9::<unnamed-type-Types>// Size=0x8 (Id=3660)
{
    struct <unnamed-type-Descriptor>// Size=0x8 (Id=25817)
    {
        struct _USB_INTERFACE_DESCRIPTOR * InterfaceDescriptor;// Offset=0x0 Size=0x8
    };
    struct _WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_9::<unnamed-type-Types>::<unnamed-type-Descriptor> Descriptor;// Offset=0x0 Size=0x8
    struct <unnamed-type-Interface>// Size=0x1 (Id=25820)
    {
        unsigned char SettingIndex;// Offset=0x0 Size=0x1
    };
    struct _WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_9::<unnamed-type-Types>::<unnamed-type-Interface> Interface;// Offset=0x0 Size=0x1
    struct <unnamed-type-Urb>// Size=0x8 (Id=25823)
    {
        struct _URB * Urb;// Offset=0x0 Size=0x8
    };
    struct _WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_9::<unnamed-type-Types>::<unnamed-type-Urb> Urb;// Offset=0x0 Size=0x8
};
