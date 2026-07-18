struct _HUB_CONTROLLERSTACK_INTERFACE// Size=0x100 (Id=406)
{
    unsigned short Size;// Offset=0x0 Size=0x2
    unsigned short Version;// Offset=0x2 Size=0x2
    void * Context;// Offset=0x8 Size=0x8
    void  ( * InterfaceReference)(void * );// Offset=0x10 Size=0x8
    void  ( * InterfaceDereference)(void * );// Offset=0x18 Size=0x8
    struct UCXUSBDEVICE__ * Hub;// Offset=0x20 Size=0x8
    struct USB_HUB_CONTEXT__ * HubContext;// Offset=0x28 Size=0x8
    void  ( * ClearTTBuffer)(struct USB_HUB_CONTEXT__ * ,struct USB_DEVICE_CONTEXT__ * ,struct UCXENDPOINT__ * ,unsigned long ,unsigned long );// Offset=0x30 Size=0x8
    long  ( * UsbDeviceCreate)(struct UCXUSBDEVICE__ * ,struct _USBDEVICE_INFO * ,struct UCXUSBDEVICE__ ** );// Offset=0x38 Size=0x8
    void  ( * UsbDeviceDelete)(struct UCXUSBDEVICE__ * ,struct UCXUSBDEVICE__ * );// Offset=0x40 Size=0x8
    void  ( * UsbDeviceDisconnect)(struct UCXUSBDEVICE__ * ,unsigned long );// Offset=0x48 Size=0x8
    void  ( * UsbDeviceSetPdoInformation)(struct UCXUSBDEVICE__ * ,struct UCXUSBDEVICE__ * ,struct _DEVICE_OBJECT * );// Offset=0x50 Size=0x8
    long  ( * DefaultEndpointCreate)(struct UCXUSBDEVICE__ * ,struct UCXUSBDEVICE__ * ,unsigned long ,struct UCXENDPOINT__ ** );// Offset=0x58 Size=0x8
    void  ( * Address0OwnershipRelease)(struct UCXUSBDEVICE__ * ,struct UCXUSBDEVICE__ * );// Offset=0x60 Size=0x8
    long  ( * EndpointCreate)(struct UCXUSBDEVICE__ * ,struct UCXUSBDEVICE__ * ,struct _USB_ENDPOINT_DESCRIPTOR * ,unsigned long ,struct _USB_SUPERSPEED_ENDPOINT_COMPANION_DESCRIPTOR * ,struct UCXENDPOINT__ ** );// Offset=0x68 Size=0x8
    void  ( * EndpointDelete)(struct UCXUSBDEVICE__ * ,struct UCXUSBDEVICE__ * ,struct UCXENDPOINT__ * );// Offset=0x70 Size=0x8
    void  ( * EndpointExposedToClient)(struct UCXENDPOINT__ * );// Offset=0x78 Size=0x8
    void *  ( * EndpointGetUsbdPipeHandle)(struct UCXENDPOINT__ * );// Offset=0x80 Size=0x8
    unsigned long  ( * EndpointGetMaximumTransferSize)(struct UCXENDPOINT__ * );// Offset=0x88 Size=0x8
    void * UsbDeviceGetPerformanceInfo;// Offset=0x90 Size=0x8
    struct _UCX_FORWARD_PROGRESS_WORKITEM *  ( * ForwardProgressWorkItemAllocate)(struct UCXUSBDEVICE__ * ,struct _DEVICE_OBJECT * ,unsigned long );// Offset=0x98 Size=0x8
    void  ( * ForwardProgressWorkItemDelete)(struct _UCX_FORWARD_PROGRESS_WORKITEM * );// Offset=0xa0 Size=0x8
    void  ( * ForwardProgressWorkItemEnqueue)(struct _UCX_FORWARD_PROGRESS_WORKITEM * ,void  ( * )(struct _DEVICE_OBJECT * ,void * ,struct _UCX_FORWARD_PROGRESS_WORKITEM * ),void * ,enum UCX_FORWARD_PROGRESS_ENQUEUE_OPTIONS );// Offset=0xa8 Size=0x8
    void  ( * ForwardProgressWorkItemFlush)(struct _UCX_FORWARD_PROGRESS_WORKITEM * );// Offset=0xb0 Size=0x8
    void  ( * ClearTTBufferComplete)(struct UCXUSBDEVICE__ * ,struct UCXENDPOINT__ * );// Offset=0xb8 Size=0x8
    void  ( * NoPingResponse)(struct USB_HUB_CONTEXT__ * ,struct USB_DEVICE_CONTEXT__ * );// Offset=0xc0 Size=0x8
    unsigned char  ( * IsDeviceDisconnected)(struct UCXUSBDEVICE__ * );// Offset=0xc8 Size=0x8
    unsigned char  ( * AreSuperspeedStreamsSupported)(struct UCXUSBDEVICE__ * );// Offset=0xd0 Size=0x8
    long  ( * ControllerStopIdleSynchronous)(struct UCXUSBDEVICE__ * ,struct _CONTROLLER_STOP_IDLE_CONTEXT * );// Offset=0xd8 Size=0x8
    void  ( * ControllerResumeIdle)(struct UCXUSBDEVICE__ * ,struct _CONTROLLER_STOP_IDLE_CONTEXT * );// Offset=0xe0 Size=0x8
    void  ( * ControllerGetInfo)(struct UCXUSBDEVICE__ * ,struct _UCX_CONTROLLER_INFO * );// Offset=0xe8 Size=0x8
    union _LARGE_INTEGER  ( * UsbDeviceGetLastTransferTimestamp)(struct UCXUSBDEVICE__ * ,struct UCXUSBDEVICE__ * );// Offset=0xf0 Size=0x8
    void  ( * EndpointSetPriority)(struct UCXUSBDEVICE__ * ,struct UCXUSBDEVICE__ * ,struct UCXENDPOINT__ * ,enum _UCX_ENDPOINT_CHARACTERISTIC_PRIORITY );// Offset=0xf8 Size=0x8
};
