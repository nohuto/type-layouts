union _PCI_EXPRESS_SLOT_CONTROL_REGISTER// Size=0x2 (Id=2217)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short AttentionButtonEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short PowerFaultDetectEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short MRLSensorEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0x1
        unsigned short PresenceDetectEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x3 BitSize=0x1
        unsigned short CommandCompletedEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x4 BitSize=0x1
        unsigned short HotPlugInterruptEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x5 BitSize=0x1
        unsigned short AttentionIndicatorControl:2;// Offset=0x0 Size=0x2 BitOffset=0x6 BitSize=0x2
        unsigned short PowerIndicatorControl:2;// Offset=0x0 Size=0x2 BitOffset=0x8 BitSize=0x2
        unsigned short PowerControllerControl:1;// Offset=0x0 Size=0x2 BitOffset=0xa BitSize=0x1
        unsigned short ElectromechanicalLockControl:1;// Offset=0x0 Size=0x2 BitOffset=0xb BitSize=0x1
        unsigned short DataLinkStateChangeEnable:1;// Offset=0x0 Size=0x2 BitOffset=0xc BitSize=0x1
        unsigned short Rsvd:3;// Offset=0x0 Size=0x2 BitOffset=0xd BitSize=0x3
    };
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};
