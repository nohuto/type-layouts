union _USBHUB_PDO_FLAGS// Size=0x4 (Id=258)
{
    unsigned long ul;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long HsDeviceRunningAtFs:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long DisableIdleSupport:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long DeviceIsHub:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long SymbolicLink:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long DeviceInterface:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long DeviceIsComposite:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long DeviceIsBillboard:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long WmiRegistered:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long UsbWakeupSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long SerialNumber:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long PnpValid:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long ExtPropertyInstalled:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long EnumerationFailed:1;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x1
        unsigned long ResumeSignal:1;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x1
        unsigned long NeedsReset:1;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x1
        unsigned long DeviceArmedForWake:1;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x1
        unsigned long DeviceReservedUxd:1;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned long CyclePortPending:1;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x1
        unsigned long HubRemoved:1;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x1
        unsigned long DeviceIsSuperSpeedCapable:1;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0x1
        unsigned long AllowIdleIrpInD3:1;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x1
        unsigned long DecorateSerialNumber:1;// Offset=0x0 Size=0x4 BitOffset=0x15 BitSize=0x1
        unsigned long D3ColdEnabled:1;// Offset=0x0 Size=0x4 BitOffset=0x16 BitSize=0x1
        unsigned long D3ColdSupportedInAcpi:1;// Offset=0x0 Size=0x4 BitOffset=0x17 BitSize=0x1
        unsigned long D3ColdWaitForReconnect:1;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x1
        unsigned long ResetOnLastResume:1;// Offset=0x0 Size=0x4 BitOffset=0x19 BitSize=0x1
        unsigned long InD3Cold:1;// Offset=0x0 Size=0x4 BitOffset=0x1a BitSize=0x1
        unsigned long PortDisabled:1;// Offset=0x0 Size=0x4 BitOffset=0x1b BitSize=0x1
        unsigned long PortPaused:1;// Offset=0x0 Size=0x4 BitOffset=0x1c BitSize=0x1
        unsigned long ResumeTimeSet:1;// Offset=0x0 Size=0x4 BitOffset=0x1d BitSize=0x1
        unsigned long MsOs20AltEnumCmdSent:1;// Offset=0x0 Size=0x4 BitOffset=0x1e BitSize=0x1
    };
};
