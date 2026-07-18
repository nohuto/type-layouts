union _WHEA_ERROR_INJECTION_CAPABILITIES// Size=0x4 (Id=2428)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long ProcessorCorrectable:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long ProcessorUncorrectableNonFatal:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long ProcessorUncorrectableFatal:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long MemoryCorrectable:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long MemoryUncorrectableNonFatal:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long MemoryUncorrectableFatal:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long PCIExpressCorrectable:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long PCIExpressUncorrectableNonFatal:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long PCIExpressUncorrectableFatal:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long PlatformCorrectable:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long PlatformUncorrectableNonFatal:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long PlatformUncorrectableFatal:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long IA64Corrected:1;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x1
        unsigned long IA64Recoverable:1;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x1
        unsigned long IA64Fatal:1;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x1
        unsigned long IA64RecoverableCache:1;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x1
        unsigned long IA64RecoverableRegFile:1;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned long Reserved:15;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0xf
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};
