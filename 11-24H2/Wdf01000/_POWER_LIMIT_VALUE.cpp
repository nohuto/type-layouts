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

struct _POWER_LIMIT_VALUE// Size=0x10 (Id=3935)
{
    enum _POWER_LIMIT_TYPES Type;// Offset=0x0 Size=0x4
    unsigned long DomainId;// Offset=0x4 Size=0x4
    unsigned long TargetValue;// Offset=0x8 Size=0x4
    unsigned long TimeParameter;// Offset=0xc Size=0x4
};
