struct _USB_DEVICE_CHARACTERISTICS// Size=0x18 (Id=4532)
{
    unsigned long Version;// Offset=0x0 Size=0x4
    unsigned long Reserved[2];// Offset=0x4 Size=0x8
    unsigned long UsbDeviceCharacteristicsFlags;// Offset=0xc Size=0x4
    unsigned long MaximumSendPathDelayInMilliSeconds;// Offset=0x10 Size=0x4
    unsigned long MaximumCompletionPathDelayInMilliSeconds;// Offset=0x14 Size=0x4
};
