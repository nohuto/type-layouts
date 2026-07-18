struct _unnamed_144// Size=0x4 (Id=144)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Enabled:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved:31;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1f
    };
};

struct _unnamed_145// Size=0xe (Id=145)
{
    unsigned char ProximityDomainLow;// Offset=0x0 Size=0x1
    unsigned char ApicId;// Offset=0x1 Size=0x1
    struct _unnamed_144 Flags;// Offset=0x2 Size=0x4
    unsigned char SApicEid;// Offset=0x6 Size=0x1
    unsigned char ProximityDomainHigh[3];// Offset=0x7 Size=0x3
    unsigned long ClockDomain;// Offset=0xa Size=0x4
};
