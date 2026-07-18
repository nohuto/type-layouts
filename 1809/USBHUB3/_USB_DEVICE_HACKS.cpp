union _USB_DEVICE_HACKS// Size=0x4 (Id=609)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long DisableSerialNumber:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long DontSkipMsOsDescriptor:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long ResetOnResumeSx:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long DisableOnSoftRemove:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long RequestConfigDescOnReset:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long SkipContainerIdQuery:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long IgnoreBOSDescriptorValidationFailure:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long DisableLpm:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long SkipSetSel:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long ResetOnResumeInSuperSpeed:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long AllowInvalidPipeHandles:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long DisableUASP:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long SkipSetIsochDelay:1;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x1
        unsigned long ResetOnResumeS0:1;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x1
        unsigned long DisableHotReset:1;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x1
        unsigned long SkipBOSDescriptorQuery:1;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x1
        unsigned long NonFunctional:1;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned long DisableUsb20HardwareLpm:1;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x1
        unsigned long DisableRemoteWakeForUsb20HardwareLpm:1;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x1
        unsigned long DisableSuperSpeed:1;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0x1
        unsigned long IncompatibleWithWindows:1;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x1
        unsigned long UseWin8DescriptorValidation:1;// Offset=0x0 Size=0x4 BitOffset=0x15 BitSize=0x1
        unsigned long DisableFastEnumeration:1;// Offset=0x0 Size=0x4 BitOffset=0x16 BitSize=0x1
        unsigned long DisableRecoveryFromPowerDrain:1;// Offset=0x0 Size=0x4 BitOffset=0x17 BitSize=0x1
        unsigned long AddControllerSuffixedCompatIdToAudioDevices:1;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x1
        unsigned long AddMausbSuffixToHardwareId:1;// Offset=0x0 Size=0x4 BitOffset=0x19 BitSize=0x1
        unsigned long EnablePLDRDuringCyclePort:1;// Offset=0x0 Size=0x4 BitOffset=0x1a BitSize=0x1
    };
};
