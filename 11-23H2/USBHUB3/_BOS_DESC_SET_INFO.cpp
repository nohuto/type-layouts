struct _BOS_DESC_SET_INFO// Size=0x40 (Id=426)
{
    struct _USB_DEVICE_CAPABILITY_USB20_EXTENSION_DESCRIPTOR * USB20CapabilityDescriptor;// Offset=0x0 Size=0x8
    struct _USB_DEVICE_CAPABILITY_SUPERSPEED_USB_DESCRIPTOR * USB30CapabilityDescriptor;// Offset=0x8 Size=0x8
    struct _USB_DEVICE_CAPABILITY_SUPERSPEEDPLUS_USB_DESCRIPTOR * USB31CapabilityDescriptor;// Offset=0x10 Size=0x8
    struct _USB_DEVICE_CAPABILITY_CONTAINER_ID_DESCRIPTOR * ContainerIDDescriptor;// Offset=0x18 Size=0x8
    struct _USB_DEVICE_CAPABILITY_BILLBOARD_DESCRIPTOR * BillboardDescriptor;// Offset=0x20 Size=0x8
    unsigned char HasConfigurationSummaryDescriptor;// Offset=0x28 Size=0x1
    unsigned char DiscardContainerID;// Offset=0x29 Size=0x1
    unsigned char ChargingPolicySupported;// Offset=0x2a Size=0x1
    struct _MSOS20_DESCRIPTOR_SET_INFO * SelectedDescriptorSetInfo;// Offset=0x30 Size=0x8
    struct _USB_PLATFORM_FEATURES_DESCRIPTOR_V1 * UsbDualRoleFeatures;// Offset=0x38 Size=0x8
};
