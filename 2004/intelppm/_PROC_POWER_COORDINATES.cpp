union _PROC_POWER_COORDINATES// Size=0x4 (Id=461)
{
    unsigned long PowerCoordinates;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long FrequencyPercent:8;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long PowerEnvelope:24;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x18
    };
};
