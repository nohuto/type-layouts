union _PCI_EXPRESS_SLOT_CAPABILITIES_REGISTER// Size=0x4 (Id=2746)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long AttentionButtonPresent:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long PowerControllerPresent:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long MRLSensorPresent:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long AttentionIndicatorPresent:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long PowerIndicatorPresent:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long HotPlugSurprise:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long HotPlugCapable:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long SlotPowerLimit:8;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x8
        unsigned long SlotPowerLimitScale:2;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x2
        unsigned long ElectromechanicalLockPresent:1;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x1
        unsigned long NoCommandCompletedSupport:1;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x1
        unsigned long PhysicalSlotNumber:13;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0xd
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};
