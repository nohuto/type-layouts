union _PCI_EXPRESS_UNCORRECTABLE_ERROR_MASK// Size=0x4 (Id=4545)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Undefined:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved1:3;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x3
        unsigned long DataLinkProtocolError:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long SurpriseDownError:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long Reserved2:6;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x6
        unsigned long PoisonedTLP:1;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x1
        unsigned long FlowControlProtocolError:1;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x1
        unsigned long CompletionTimeout:1;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x1
        unsigned long CompleterAbort:1;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x1
        unsigned long UnexpectedCompletion:1;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned long ReceiverOverflow:1;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x1
        unsigned long MalformedTLP:1;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x1
        unsigned long ECRCError:1;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0x1
        unsigned long UnsupportedRequestError:1;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x1
        unsigned long AcsViolation:1;// Offset=0x0 Size=0x4 BitOffset=0x15 BitSize=0x1
        unsigned long UncorrectableInternalError:1;// Offset=0x0 Size=0x4 BitOffset=0x16 BitSize=0x1
        unsigned long MCBlockedTlp:1;// Offset=0x0 Size=0x4 BitOffset=0x17 BitSize=0x1
        unsigned long AtomicOpEgressBlocked:1;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x1
        unsigned long TlpPrefixBlocked:1;// Offset=0x0 Size=0x4 BitOffset=0x19 BitSize=0x1
        unsigned long Reserved3:6;// Offset=0x0 Size=0x4 BitOffset=0x1a BitSize=0x6
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};
