union _USB_DEVICE_FLAGS// Size=0x4 (Id=339)
{
    unsigned long ul;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long MsOsDescriptorVc:8;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long DevFlagsInitialized:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long QueryMsOs:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long MsOsSupported:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long DisableSerialNumber:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long ResetOnResume:1;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x1
        unsigned long DisableOnSoftRemove:1;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x1
        unsigned long RequestConfigDescOnReset:1;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x1
        unsigned long SkipContainerIdQuery:1;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x1
        unsigned long DisableUASP:1;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned long SkipBOSDescriptorQuery:1;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x1
        unsigned long DualRoleDevice:1;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x1
        unsigned long FailGetStatusRequest:1;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0x1
        unsigned long Reserved:11;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0xb
    };
};
