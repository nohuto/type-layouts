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

struct _WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_11// Size=0x20 (Id=1560)
{
    union // Size=0x8 (Id=0)
    {
        unsigned long Size;// Offset=0x0 Size=0x4
        enum _WdfUsbTargetDeviceSelectConfigType Type;// Offset=0x4 Size=0x4
        union <unnamed-type-Types>// Size=0x18 (Id=23237)
        {
            struct <unnamed-type-Descriptor>// Size=0x18 (Id=23238)
            {
                struct _USB_CONFIGURATION_DESCRIPTOR * ConfigurationDescriptor;// Offset=0x0 Size=0x8
                struct _USB_INTERFACE_DESCRIPTOR ** InterfaceDescriptors;// Offset=0x8 Size=0x8
                unsigned long NumInterfaceDescriptors;// Offset=0x10 Size=0x4
            };
            struct _WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_11::<unnamed-type-Types>::<unnamed-type-Descriptor> Descriptor;// Offset=0x0 Size=0x18
            struct <unnamed-type-Urb>// Size=0x8 (Id=23243)
            {
                struct _URB * Urb;// Offset=0x0 Size=0x8
            };
            struct _WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_11::<unnamed-type-Types>::<unnamed-type-Urb> Urb;// Offset=0x0 Size=0x8
            struct <unnamed-type-SingleInterface>// Size=0x10 (Id=23246)
            {
                unsigned char NumberConfiguredPipes;// Offset=0x0 Size=0x1
                struct WDFUSBINTERFACE__ * ConfiguredUsbInterface;// Offset=0x8 Size=0x8
            };
            struct _WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_11::<unnamed-type-Types>::<unnamed-type-SingleInterface> SingleInterface;// Offset=0x0 Size=0x10
            struct <unnamed-type-MultiInterface>// Size=0x18 (Id=23250)
            {
                unsigned char NumberInterfaces;// Offset=0x0 Size=0x1
                struct _WDF_USB_INTERFACE_SETTING_PAIR_V1_11 * Pairs;// Offset=0x8 Size=0x8
                unsigned char NumberOfConfiguredInterfaces;// Offset=0x10 Size=0x1
            };
            struct _WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_11::<unnamed-type-Types>::<unnamed-type-MultiInterface> MultiInterface;// Offset=0x0 Size=0x18
        };
    };
    union _WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_11::<unnamed-type-Types> Types;// Offset=0x8 Size=0x18
};
