union _PCI_EXPRESS_DPC_CONTROL_REGISTER// Size=0x2 (Id=2103)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short TriggerEnable:2;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x2
        unsigned short CompletionControl:1;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0x1
        unsigned short InterruptEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x3 BitSize=0x1
        unsigned short ErrCorEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x4 BitSize=0x1
        unsigned short PoisonedTlpEgressBlockingEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x5 BitSize=0x1
        unsigned short SoftwareTrigger:1;// Offset=0x0 Size=0x2 BitOffset=0x6 BitSize=0x1
        unsigned short DlActiveErrCorEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x7 BitSize=0x1
        unsigned short Reserved:8;// Offset=0x0 Size=0x2 BitOffset=0x8 BitSize=0x8
    };
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};
