enum _SIG
{
    SigUsbdHandleInfo=1145197397
};

struct _USBD_INTERFACE_V3// Size=0xc8 (Id=5589)
{
    unsigned short Size;// Offset=0x0 Size=0x2
    unsigned short Version;// Offset=0x2 Size=0x2
    void * Context;// Offset=0x8 Size=0x8
    void  ( * InterfaceReference)(void * );// Offset=0x10 Size=0x8
    void  ( * InterfaceDereference)(void * );// Offset=0x18 Size=0x8
    unsigned long USBDClientContractVersion;// Offset=0x20 Size=0x4
    struct USBDI_HANDLE__ * USBDInterfaceHandle;// Offset=0x28 Size=0x8
    struct _DEVICE_OBJECT * DeviceObject;// Offset=0x30 Size=0x8
    unsigned long PoolTag;// Offset=0x38 Size=0x4
    void * ContextFromClient;// Offset=0x40 Size=0x8
    unsigned long UsbVerifierEnabled;// Offset=0x48 Size=0x4
    unsigned long UsbVerifierFailRegistration;// Offset=0x4c Size=0x4
    unsigned long UsbVerifierFailChainedMdlSupport;// Offset=0x50 Size=0x4
    unsigned long UsbVerifierFailStaticStreamSupport;// Offset=0x54 Size=0x4
    unsigned long UsbVerifierStaticStreamCountOverride;// Offset=0x58 Size=0x4
    unsigned long UsbVerifierFailEnableStaticStreams;// Offset=0x5c Size=0x4
    unsigned long UsbVerifierTrackXrbs;// Offset=0x60 Size=0x4
    void  ( * Unregister)(struct USBDI_HANDLE__ * );// Offset=0x68 Size=0x8
    long  ( * XrbAllocate)(struct USBDI_HANDLE__ * ,struct _URB ** );// Offset=0x70 Size=0x8
    long  ( * IsochXrbAllocate)(struct USBDI_HANDLE__ * ,unsigned long ,struct _URB ** );// Offset=0x78 Size=0x8
    long  ( * SelectConfigXrbAllocateAndBuild)(struct USBDI_HANDLE__ * ,struct _USB_CONFIGURATION_DESCRIPTOR * ,struct _USBD_INTERFACE_LIST_ENTRY * ,struct _URB ** );// Offset=0x80 Size=0x8
    long  ( * SelectInterfaceXrbAllocateAndBuild)(struct USBDI_HANDLE__ * ,struct _USB_CONFIGURATION_DESCRIPTOR * ,struct _USBD_INTERFACE_LIST_ENTRY * ,struct _URB ** );// Offset=0x88 Size=0x8
    void  ( * XrbFree)(struct _URB * );// Offset=0x90 Size=0x8
    long  ( * SecureIsochXrbAllocate)(struct USBDI_HANDLE__ * ,unsigned long ,struct _URB ** );// Offset=0x98 Size=0x8
    unsigned long UsbVerifierFailSecureTransferSupport;// Offset=0xa0 Size=0x4
    long  ( * SelectInterfaceWithEndpointOffloadXrbAllocateAndBuild)(struct USBDI_HANDLE__ * ,struct _USB_CONFIGURATION_DESCRIPTOR * ,struct _USBD_INTERFACE_LIST_ENTRY * ,unsigned long ,struct _URB ** );// Offset=0xa8 Size=0x8
    unsigned long UsbVerifierFailSelectInterfaceWithEndpointOffloadSupport;// Offset=0xb0 Size=0x4
    long  ( * AsyncNotificationRequestDuringEndpointOffloadXrbAllocateAndBuild)(struct USBDI_HANDLE__ * ,void * ,enum _ENDPOINT_OFFLOAD_RESPONSE_EVENT_TYPE ,struct _URB ** );// Offset=0xb8 Size=0x8
    unsigned long UsbVerifierFailTimeSyncSupport;// Offset=0xc0 Size=0x4
};

struct _USBD_HANDLE_INFO// Size=0xe8 (Id=5591)
{
    enum _SIG Sig;// Offset=0x0 Size=0x4
    struct _USBD_INTERFACE_V3 Interface;// Offset=0x8 Size=0xc8
    struct _DEVICE_OBJECT * TargetDeviceObject;// Offset=0xd0 Size=0x8
    unsigned long CoreStackUsbdInterfaceVersion;// Offset=0xd8 Size=0x4
    long ReferenceCount;// Offset=0xdc Size=0x4
    unsigned char IsCoreStackUsbdInterfaceVersion600AndDeviceHighSpeed;// Offset=0xe0 Size=0x1
    unsigned char PendingDelete;// Offset=0xe1 Size=0x1
};
