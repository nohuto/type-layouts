union _PCI_EXPRESS_SLOT_STATUS_REGISTER// Size=0x2 (Id=2650)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short AttentionButtonPressed:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short PowerFaultDetected:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short MRLSensorChanged:1;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0x1
        unsigned short PresenceDetectChanged:1;// Offset=0x0 Size=0x2 BitOffset=0x3 BitSize=0x1
        unsigned short CommandCompleted:1;// Offset=0x0 Size=0x2 BitOffset=0x4 BitSize=0x1
        unsigned short MRLSensorState:1;// Offset=0x0 Size=0x2 BitOffset=0x5 BitSize=0x1
        unsigned short PresenceDetectState:1;// Offset=0x0 Size=0x2 BitOffset=0x6 BitSize=0x1
        unsigned short ElectromechanicalLockEngaged:1;// Offset=0x0 Size=0x2 BitOffset=0x7 BitSize=0x1
        unsigned short DataLinkStateChanged:1;// Offset=0x0 Size=0x2 BitOffset=0x8 BitSize=0x1
        unsigned short Rsvd:7;// Offset=0x0 Size=0x2 BitOffset=0x9 BitSize=0x7
    };
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};
