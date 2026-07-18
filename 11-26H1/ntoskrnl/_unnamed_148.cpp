struct _unnamed_144// Size=0x4 (Id=144)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Enabled:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved:31;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1f
    };
};

struct _unnamed_148// Size=0x16 (Id=148)
{
    unsigned char Reserved[2];// Offset=0x0 Size=0x2
    unsigned long ProximityDomain;// Offset=0x2 Size=0x4
    unsigned long ApicId;// Offset=0x6 Size=0x4
    struct _unnamed_144 Flags;// Offset=0xa Size=0x4
    unsigned long ClockDomain;// Offset=0xe Size=0x4
    unsigned long Reserved2;// Offset=0x12 Size=0x4
};
