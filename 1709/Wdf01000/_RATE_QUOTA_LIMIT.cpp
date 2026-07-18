union _RATE_QUOTA_LIMIT// Size=0x4 (Id=2863)
{
    unsigned long RateData;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long RatePercent:7;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x7
        unsigned long Reserved0:25;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x19
    };
};
