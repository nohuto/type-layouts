union _PCI_EXPRESS_DEVICE_CAPABILITIES_REGISTER// Size=0x4 (Id=4244)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long MaxPayloadSizeSupported:3;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x3
        unsigned long PhantomFunctionsSupported:2;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x2
        unsigned long ExtendedTagSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long L0sAcceptableLatency:3;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x3
        unsigned long L1AcceptableLatency:3;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x3
        unsigned long Undefined:3;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x3
        unsigned long RoleBasedErrorReporting:1;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x1
        unsigned long Rsvd1:2;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x2
        unsigned long CapturedSlotPowerLimit:8;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x8
        unsigned long CapturedSlotPowerLimitScale:2;// Offset=0x0 Size=0x4 BitOffset=0x1a BitSize=0x2
        unsigned long FunctionLevelResetCapability:1;// Offset=0x0 Size=0x4 BitOffset=0x1c BitSize=0x1
        unsigned long Rsvd2:3;// Offset=0x0 Size=0x4 BitOffset=0x1d BitSize=0x3
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};
