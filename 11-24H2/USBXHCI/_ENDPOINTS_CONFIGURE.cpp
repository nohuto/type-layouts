struct _ENDPOINTS_CONFIGURE_FAILURE_FLAGS// Size=0x4 (Id=916)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long InsufficientBandwidth:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long InsufficientHardwareResourcesForEndpoints:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long MaxExitLatencyTooLarge:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long Reserved:29;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1d
    };
};

struct _ENDPOINTS_CONFIGURE// Size=0x60 (Id=659)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    struct UCXUSBDEVICE__ * Hub;// Offset=0x8 Size=0x8
    struct UCXUSBDEVICE__ * UsbDevice;// Offset=0x10 Size=0x8
    unsigned long EndpointsToEnableCount;// Offset=0x18 Size=0x4
    struct UCXENDPOINT__ ** EndpointsToEnable;// Offset=0x20 Size=0x8
    unsigned long EndpointsToDisableCount;// Offset=0x28 Size=0x4
    struct UCXENDPOINT__ ** EndpointsToDisable;// Offset=0x30 Size=0x8
    unsigned long EndpointsEnabledAndUnchangedCount;// Offset=0x38 Size=0x4
    struct UCXENDPOINT__ ** EndpointsEnabledAndUnchanged;// Offset=0x40 Size=0x8
    struct _ENDPOINTS_CONFIGURE_FAILURE_FLAGS FailureFlags;// Offset=0x48 Size=0x4
    unsigned long ExitLatencyDelta;// Offset=0x4c Size=0x4
    unsigned char ConfigurationValue;// Offset=0x50 Size=0x1
    unsigned char InterfaceNumber;// Offset=0x51 Size=0x1
    unsigned char AlternateSetting;// Offset=0x52 Size=0x1
    unsigned long EndpointsToBeOffloaded;// Offset=0x54 Size=0x4
    struct _USBD_ENDPOINT_OFFLOAD_INFORMATION * EndpointOffloadInfoArray;// Offset=0x58 Size=0x8
};
