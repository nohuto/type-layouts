struct _unnamed_144// Size=0x4 (Id=144)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Enabled:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved:31;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1f
    };
};

struct _unnamed_149// Size=0x10 (Id=149)
{
    unsigned long ProximityDomain;// Offset=0x0 Size=0x4
    unsigned long ProcessorUid;// Offset=0x4 Size=0x4
    struct _unnamed_144 Flags;// Offset=0x8 Size=0x4
    unsigned long ClockDomain;// Offset=0xc Size=0x4
};
