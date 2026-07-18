union _WHEA_PROCESSOR_FAMILY_INFO// Size=0x8 (Id=776)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Stepping:4;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x4
        unsigned long Model:4;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x4
        unsigned long Family:4;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x4
        unsigned long ProcessorType:2;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x2
        unsigned long Reserved1:2;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x2
        unsigned long ExtendedModel:4;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x4
        unsigned long ExtendedFamily:8;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x8
        unsigned long Reserved2:4;// Offset=0x0 Size=0x4 BitOffset=0x1c BitSize=0x4
    };
    unsigned long NativeModelId;// Offset=0x4 Size=0x4
    unsigned long long AsULONGLONG;// Offset=0x0 Size=0x8
};
