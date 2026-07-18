union _PCI_EXPRESS_AER_CAPABILITIES// Size=0x4 (Id=2658)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long FirstErrorPointer:5;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x5
        unsigned long ECRCGenerationCapable:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long ECRCGenerationEnable:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long ECRCCheckCapable:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long ECRCCheckEnable:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long MultipleHeaderRecordingCapable:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long MultipleHeaderRecordingEnable:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long TlpPrefixLogPresent:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long CompletionTimeoutPrefixHeaderLogCapable:1;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x1
        unsigned long HeaderLogSize:5;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x5
        unsigned long LoggedTlpWasFlitMode:1;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x1
        unsigned long LoggedTlpSize:5;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0x5
        unsigned long Reserved:8;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x8
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};
