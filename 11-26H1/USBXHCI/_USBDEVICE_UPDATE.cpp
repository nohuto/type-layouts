struct _USBDEVICE_UPDATE_FLAGS// Size=0x8 (Id=954)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long UpdateDeviceDescriptor:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long UpdateBosDescriptor:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long UpdateMaxExitLatency:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long UpdateIsHub:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long UpdateAllowIoOnInvalidPipeHandles:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long Update20HardwareLpmParameters:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long UpdateRootPortResumeTime:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long UpdateTunnelState:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long Reserved:25;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x19
    };
};

struct _USBDEVICE_UPDATE_FAILURE_FLAGS// Size=0x4 (Id=1062)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long MaxExitLatencyTooLarge:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved:31;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1f
    };
};

struct _USBDEVICE_UPDATE_20_HARDWARE_LPM_PARAMETERS// Size=0x4 (Id=991)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long HardwareLpmEnable:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long RemoteWakeEnable:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long HostInitiatedResumeDurationMode:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long BestEffortServiceLatency:4;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x4
        unsigned long BestEffortServiceLatencyDeep:4;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x4
        unsigned long L1Timeout:8;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x8
        unsigned long Reserved:13;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0xd
    };
};

struct _USBDEVICE_UPDATE// Size=0x48 (Id=741)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    struct UCXUSBDEVICE__ * Hub;// Offset=0x8 Size=0x8
    struct UCXUSBDEVICE__ * UsbDevice;// Offset=0x10 Size=0x8
    struct _USBDEVICE_UPDATE_FLAGS Flags;// Offset=0x18 Size=0x8
    struct _USB_DEVICE_DESCRIPTOR * DeviceDescriptor;// Offset=0x20 Size=0x8
    struct _USB_BOS_DESCRIPTOR * BosDescriptor;// Offset=0x28 Size=0x8
    unsigned long MaxExitLatency;// Offset=0x30 Size=0x4
    unsigned char IsHub;// Offset=0x34 Size=0x1
    struct _USBDEVICE_UPDATE_FAILURE_FLAGS FailureFlags;// Offset=0x38 Size=0x4
    struct _USBDEVICE_UPDATE_20_HARDWARE_LPM_PARAMETERS Usb20HardwareLpmParameters;// Offset=0x3c Size=0x4
    unsigned short RootPortResumeTime;// Offset=0x40 Size=0x2
    unsigned char Reserved;// Offset=0x42 Size=0x1
    unsigned char Reserved2;// Offset=0x43 Size=0x1
};
