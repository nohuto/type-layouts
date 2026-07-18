union _PCI_EXPRESS_DEVICE_CONTROL_2_REGISTER// Size=0x2 (Id=2568)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short CompletionTimeoutValue:4;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x4
        unsigned short CompletionTimeoutDisable:1;// Offset=0x0 Size=0x2 BitOffset=0x4 BitSize=0x1
        unsigned short AriForwardingEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x5 BitSize=0x1
        unsigned short AtomicOpRequesterEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x6 BitSize=0x1
        unsigned short AtomicOpEgresBlocking:1;// Offset=0x0 Size=0x2 BitOffset=0x7 BitSize=0x1
        unsigned short IDORequestEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x8 BitSize=0x1
        unsigned short IDOCompletionEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x9 BitSize=0x1
        unsigned short LTRMechanismEnable:1;// Offset=0x0 Size=0x2 BitOffset=0xa BitSize=0x1
        unsigned short Rsvd:2;// Offset=0x0 Size=0x2 BitOffset=0xb BitSize=0x2
        unsigned short OBFFEnable:2;// Offset=0x0 Size=0x2 BitOffset=0xd BitSize=0x2
        unsigned short EndEndTLPPrefixBlocking:1;// Offset=0x0 Size=0x2 BitOffset=0xf BitSize=0x1
    };
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};
