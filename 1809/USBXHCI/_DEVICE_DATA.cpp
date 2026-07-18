struct _DEVICE_DATA// Size=0x30 (Id=424)
{
    struct _USBXHCI_TRIAGE_INFO * UsbXhciTriageInfo;// Offset=0x0 Size=0x8
    struct _CONTROLLER_DATA * ControllerData;// Offset=0x8 Size=0x8
    struct RECORDER_LOG__ * RecorderLog;// Offset=0x10 Size=0x8
    unsigned char IsSecureDevice;// Offset=0x18 Size=0x1
    struct WDFDEVICE__ * WdfDevice;// Offset=0x20 Size=0x8
    struct _SECURE_CHANNEL_DATA * SecureChannelData;// Offset=0x28 Size=0x8
};
