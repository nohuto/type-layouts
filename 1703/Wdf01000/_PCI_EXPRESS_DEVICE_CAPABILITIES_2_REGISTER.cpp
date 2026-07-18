union _PCI_EXPRESS_DEVICE_CAPABILITIES_2_REGISTER// Size=0x4 (Id=1679)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long CompletionTimeoutRangesSupported:4;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x4
        unsigned long CompletionTimeoutDisableSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long AriForwardingSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long AtomicOpRoutingSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long AtomicOpCompleterSupported32Bit:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long AtomicOpCompleterSupported64Bit:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long CASCompleterSupported128Bit:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long NoROEnabledPRPRPassing:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long LTRMechanismSupported:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long TPHCompleterSupported:2;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x2
        unsigned long Rsvd:4;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x4
        unsigned long OBFFSupported:2;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x2
        unsigned long ExtendedFmtFieldSuported:1;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x1
        unsigned long EndEndTLPPrefixSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x15 BitSize=0x1
        unsigned long MaxEndEndTLPPrefixes:2;// Offset=0x0 Size=0x4 BitOffset=0x16 BitSize=0x2
        unsigned long Rsvd2:8;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x8
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};
