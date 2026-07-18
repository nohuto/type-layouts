enum _ETW_PMC_COUNTER_OWNER_TYPE
{
    EtwPmcOwnerFree=0,
    EtwPmcOwnerUntagged=1,
    EtwPmcOwnerTagged=2,
    EtwPmcOwnerTaggedWithSource=3
};

struct _ETW_PMC_COUNTER_OWNER// Size=0xc (Id=2579)
{
    enum _ETW_PMC_COUNTER_OWNER_TYPE OwnerType;// Offset=0x0 Size=0x4
    unsigned long ProfileSource;// Offset=0x4 Size=0x4
    unsigned long OwnerTag;// Offset=0x8 Size=0x4
};
