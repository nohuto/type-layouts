struct _XHCI_LIVEDUMP_CONTEXT// Size=0x40 (Id=799)
{
    char VendorId[5];// Offset=0x0 Size=0x5
    char DeviceId[5];// Offset=0x5 Size=0x5
    char RevisionId[5];// Offset=0xa Size=0x5
    char FirmwareVersion[17];// Offset=0xf Size=0x11
    void * ControllerHandle;// Offset=0x20 Size=0x8
    void * UsbDeviceHandle;// Offset=0x28 Size=0x8
    void * EndpointHandle;// Offset=0x30 Size=0x8
    void * TransferRingHandle;// Offset=0x38 Size=0x8
};
