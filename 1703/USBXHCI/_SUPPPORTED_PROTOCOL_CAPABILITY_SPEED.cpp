union _SUPPPORTED_PROTOCOL_CAPABILITY_SPEED// Size=0x4 (Id=663)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long SpeedID:4;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x4
        unsigned long SpeedExponent:2;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x2
        unsigned long PSIType:2;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x2
        unsigned long PSIFullDuplex:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long Reserved:7;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x7
        unsigned long SpeedMantissa:16;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x10
    };
};
