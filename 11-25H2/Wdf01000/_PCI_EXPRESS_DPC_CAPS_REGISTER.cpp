union _PCI_EXPRESS_DPC_CAPS_REGISTER// Size=0x2 (Id=4015)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short InterruptMsgNumber:5;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x5
        unsigned short RpExtensionsForDpc:1;// Offset=0x0 Size=0x2 BitOffset=0x5 BitSize=0x1
        unsigned short PoisonedTlpEgressBlockingSupported:1;// Offset=0x0 Size=0x2 BitOffset=0x6 BitSize=0x1
        unsigned short DpcSoftwareTriggeringSupported:1;// Offset=0x0 Size=0x2 BitOffset=0x7 BitSize=0x1
        unsigned short RpPioLogSize:4;// Offset=0x0 Size=0x2 BitOffset=0x8 BitSize=0x4
        unsigned short DlActiveErrCorSignalingSupported:1;// Offset=0x0 Size=0x2 BitOffset=0xc BitSize=0x1
        unsigned short Reserved:3;// Offset=0x0 Size=0x2 BitOffset=0xd BitSize=0x3
    };
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};
