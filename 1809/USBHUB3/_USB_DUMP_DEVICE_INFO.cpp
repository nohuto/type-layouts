struct _USB_DUMP_DEVICE_INFO// Size=0x20 (Id=443)
{
    unsigned long EndpointCount;// Offset=0x0 Size=0x4
    struct _USB_DUMP_DEVICE_ENDPOINT_INFO * EndpointInfo;// Offset=0x8 Size=0x8
    unsigned char ConfigurationId;// Offset=0x10 Size=0x1
    unsigned char InterfaceId;// Offset=0x11 Size=0x1
    unsigned char AlternateSettingId;// Offset=0x12 Size=0x1
    void * DeviceHandle;// Offset=0x18 Size=0x8
};
