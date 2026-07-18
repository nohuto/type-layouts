struct _DEVICE_20_LPM_ATTRIBUTES// Size=0x4 (Id=496)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long LPMCapable:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long BESLAndAlternateHIRDSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long BaselineBESLValid:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long DeepBESLValid:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long BaselineBESL:4;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x4
        unsigned long DeepBESL:4;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x4
    };
};
