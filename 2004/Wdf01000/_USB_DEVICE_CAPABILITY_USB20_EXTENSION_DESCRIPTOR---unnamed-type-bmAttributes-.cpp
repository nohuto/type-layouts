union _USB_DEVICE_CAPABILITY_USB20_EXTENSION_DESCRIPTOR::<unnamed-type-bmAttributes>// Size=0x4 (Id=3013)
{
    unsigned long AsUlong;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long Reserved:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long LPMCapable:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long BESLAndAlternateHIRDSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long BaselineBESLValid:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long DeepBESLValid:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long Reserved1:3;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x3
        unsigned long BaselineBESL:4;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x4
        unsigned long DeepBESL:4;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x4
        unsigned long Reserved2:16;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x10
    };
};
