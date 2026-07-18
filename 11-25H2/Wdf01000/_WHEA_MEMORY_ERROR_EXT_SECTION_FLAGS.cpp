union _WHEA_MEMORY_ERROR_EXT_SECTION_FLAGS// Size=0x8 (Id=2069)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long AddressTranslationByPrmSuccess:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long AddressTranslationByPrmFailed:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long AddressTranslationByPrmNotSupported:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long AddressTranslationByPluginSuccess:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long AddressTranslationByPluginFailed:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long AddressTranslationByPluginNotSupported:1;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x1
        unsigned long long Reserved:58;// Offset=0x0 Size=0x8 BitOffset=0x6 BitSize=0x3a
    };
    unsigned long long AsUINT64;// Offset=0x0 Size=0x8
};
