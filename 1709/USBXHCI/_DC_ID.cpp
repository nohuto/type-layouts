union _DC_ID// Size=0x4 (Id=547)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long CapabilityID:8;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long NextCapabilityPointer:8;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x8
        unsigned long EventRingSizeExponent:5;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x5
        unsigned long Reserved:11;// Offset=0x0 Size=0x4 BitOffset=0x15 BitSize=0xb
    };
};
