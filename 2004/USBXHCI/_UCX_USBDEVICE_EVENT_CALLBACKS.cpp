struct _UCX_USBDEVICE_EVENT_CALLBACKS// Size=0x68 (Id=400)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    void  ( * EvtUsbDeviceEndpointsConfigure)(struct UCXCONTROLLER__ * ,struct WDFREQUEST__ * );// Offset=0x8 Size=0x8
    void  ( * EvtUsbDeviceEnable)(struct UCXCONTROLLER__ * ,struct WDFREQUEST__ * );// Offset=0x10 Size=0x8
    void  ( * EvtUsbDeviceDisable)(struct UCXCONTROLLER__ * ,struct WDFREQUEST__ * );// Offset=0x18 Size=0x8
    void  ( * EvtUsbDeviceReset)(struct UCXCONTROLLER__ * ,struct WDFREQUEST__ * );// Offset=0x20 Size=0x8
    void  ( * EvtUsbDeviceAddress)(struct UCXCONTROLLER__ * ,struct WDFREQUEST__ * );// Offset=0x28 Size=0x8
    void  ( * EvtUsbDeviceUpdate)(struct UCXCONTROLLER__ * ,struct WDFREQUEST__ * );// Offset=0x30 Size=0x8
    void  ( * EvtUsbDeviceHubInfo)(struct UCXCONTROLLER__ * ,struct WDFREQUEST__ * );// Offset=0x38 Size=0x8
    long  ( * EvtUsbDeviceDefaultEndpointAdd)(struct UCXCONTROLLER__ * ,struct UCXUSBDEVICE__ * ,unsigned long ,struct _UCXENDPOINT_INIT * );// Offset=0x40 Size=0x8
    long  ( * EvtUsbDeviceEndpointAdd)(struct UCXCONTROLLER__ * ,struct UCXUSBDEVICE__ * ,struct _USB_ENDPOINT_DESCRIPTOR * ,unsigned long ,struct _USB_SUPERSPEED_ENDPOINT_COMPANION_DESCRIPTOR * ,struct _UCXENDPOINT_INIT * );// Offset=0x48 Size=0x8
    void  ( * EvtUsbDeviceSuspend)(struct UCXCONTROLLER__ * ,struct UCXUSBDEVICE__ * );// Offset=0x50 Size=0x8
    void  ( * EvtUsbDeviceResume)(struct UCXCONTROLLER__ * ,struct UCXUSBDEVICE__ * );// Offset=0x58 Size=0x8
    long  ( * EvtUsbDeviceGetCharacteristic)(struct UCXCONTROLLER__ * ,struct UCXUSBDEVICE__ * ,struct _UCX_USBDEVICE_CHARACTERISTIC * );// Offset=0x60 Size=0x8
};
