enum _WDF_USB_REQUEST_TYPE
{
    WdfUsbRequestTypeInvalid=0,
    WdfUsbRequestTypeNoFormat=1,
    WdfUsbRequestTypeDeviceString=2,
    WdfUsbRequestTypeDeviceControlTransfer=3,
    WdfUsbRequestTypeDeviceUrb=4,
    WdfUsbRequestTypePipeWrite=5,
    WdfUsbRequestTypePipeRead=6,
    WdfUsbRequestTypePipeAbort=7,
    WdfUsbRequestTypePipeReset=8,
    WdfUsbRequestTypePipeUrb=9
};
