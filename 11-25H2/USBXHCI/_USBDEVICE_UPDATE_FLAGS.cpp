struct _USBDEVICE_UPDATE_FLAGS// Size=0x8 (Id=946)
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
