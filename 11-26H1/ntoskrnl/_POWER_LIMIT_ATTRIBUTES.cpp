enum _POWER_LIMIT_TYPES
{
    PowerLimitContinuous=0,
    PowerLimitType1=0,
    PowerLimitBurst=1,
    PowerLimitType2=1,
    PowerLimitRapid=2,
    PowerLimitType3=2,
    PowerLimitPreemptive=3,
    PowerLimitType4=3,
    PowerLimitPreemptiveOffset=4,
    PowerLimitTypeMax=5
};

union _unnamed_2270// Size=0x4 (Id=2270)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long SupportTimeParameter:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved:31;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1f
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};

struct _POWER_LIMIT_ATTRIBUTES// Size=0x24 (Id=2271)
{
    enum _POWER_LIMIT_TYPES Type;// Offset=0x0 Size=0x4
    unsigned long DomainId;// Offset=0x4 Size=0x4
    unsigned long MaxValue;// Offset=0x8 Size=0x4
    unsigned long MinValue;// Offset=0xc Size=0x4
    unsigned long MinTimeParameter;// Offset=0x10 Size=0x4
    unsigned long MaxTimeParameter;// Offset=0x14 Size=0x4
    unsigned long DefaultACValue;// Offset=0x18 Size=0x4
    unsigned long DefaultDCValue;// Offset=0x1c Size=0x4
    union _unnamed_2270 Flags;// Offset=0x20 Size=0x4
};
