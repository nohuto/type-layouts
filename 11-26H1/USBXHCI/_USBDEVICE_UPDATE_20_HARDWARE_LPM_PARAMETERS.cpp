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
