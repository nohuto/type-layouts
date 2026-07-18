union _USBHUB_FDO_FLAGS// Size=0x4 (Id=334)
{
    unsigned long ul;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long HubIsRoot:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long WmiRegistered:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long HubBusIfReferenced:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long UsbdBusIfReferenced:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long HubHardResetPending:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long BusAdd:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long HubIsTT:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long MultiTTmode:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long SSalloced:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long DeviceCaps:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long HubAsyncInitCanceled:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long notused_11:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long ResetIrqPipe:1;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x1
        unsigned long HubExAdd:1;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x1
        unsigned long HubHwNotPresent:1;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x1
        unsigned long HighSpeedCapable:1;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x1
        unsigned long MultiTTsupported:1;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned long ResumeSignalling:1;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x1
        unsigned long BUS_ARM:1;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x1
        unsigned long HWC_ARM:1;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0x1
        unsigned long EsdEnabled:1;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x1
        unsigned long ForceSingleTt:1;// Offset=0x0 Size=0x4 BitOffset=0x15 BitSize=0x1
        unsigned long HubDescriptorValid:1;// Offset=0x0 Size=0x4 BitOffset=0x16 BitSize=0x1
        unsigned long BusIfSelectiveSuspendReferenced:1;// Offset=0x0 Size=0x4 BitOffset=0x17 BitSize=0x1
        unsigned long AllowWakeOnConnect:1;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x1
        unsigned long DmTimerInit:1;// Offset=0x0 Size=0x4 BitOffset=0x19 BitSize=0x1
        unsigned long SystemWakeSource:1;// Offset=0x0 Size=0x4 BitOffset=0x1a BitSize=0x1
        unsigned long WinPE:1;// Offset=0x0 Size=0x4 BitOffset=0x1b BitSize=0x1
        unsigned long PowerOnOverCurrent:1;// Offset=0x0 Size=0x4 BitOffset=0x1c BitSize=0x1
        unsigned long BusIfMiniDumpReferenced:1;// Offset=0x0 Size=0x4 BitOffset=0x1d BitSize=0x1
        unsigned long HubInitialized:1;// Offset=0x0 Size=0x4 BitOffset=0x1e BitSize=0x1
        unsigned long BusIfForwardProgressReferenced:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
};
