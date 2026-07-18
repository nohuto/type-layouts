struct _USB_TRANSPORT_CHARACTERISTICS// Size=0x18 (Id=4583)
{
    unsigned long Version;// Offset=0x0 Size=0x4
    unsigned long TransportCharacteristicsFlags;// Offset=0x4 Size=0x4
    unsigned long long CurrentRoundtripLatencyInMilliSeconds;// Offset=0x8 Size=0x8
    unsigned long long MaxPotentialBandwidth;// Offset=0x10 Size=0x8
};

struct _USB_TRANSPORT_CHARACTERISTICS_CHANGE_NOTIFICATION// Size=0x20 (Id=3742)
{
    struct USB_CHANGE_REGISTRATION_HANDLE__ * Handle;// Offset=0x0 Size=0x8
    struct _USB_TRANSPORT_CHARACTERISTICS UsbTransportCharacteristics;// Offset=0x8 Size=0x18
};
