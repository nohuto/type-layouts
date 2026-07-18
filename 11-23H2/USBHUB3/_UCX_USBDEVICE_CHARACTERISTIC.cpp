enum _UCX_USBDEVICE_CHARACTERISTIC_TYPE
{
    UCX_USBDEVICE_CHARACTERISTIC_TYPE_PATH_DELAY=1
};

struct _UCX_USBDEVICE_CHARACTERISTIC_PATH_DELAY// Size=0x8 (Id=778)
{
    unsigned long MaximumSendPathDelayInMilliSeconds;// Offset=0x0 Size=0x4
    unsigned long MaximumCompletionPathDelayInMilliSeconds;// Offset=0x4 Size=0x4
};

struct _UCX_USBDEVICE_CHARACTERISTIC// Size=0x10 (Id=492)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    enum _UCX_USBDEVICE_CHARACTERISTIC_TYPE CharacteristicType;// Offset=0x4 Size=0x4
    struct _UCX_USBDEVICE_CHARACTERISTIC_PATH_DELAY PathDelay;// Offset=0x8 Size=0x8
};
