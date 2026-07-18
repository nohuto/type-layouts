union _PCI_EXPRESS_AER_CAPABILITIES// Size=0x4 (Id=2694)
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
        unsigned long Reserved:20;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x14
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};
