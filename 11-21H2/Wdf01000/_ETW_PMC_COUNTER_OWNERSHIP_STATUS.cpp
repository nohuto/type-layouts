enum _ETW_PMC_COUNTER_OWNER_TYPE
{
    EtwPmcOwnerFree=0,
    EtwPmcOwnerUntagged=1,
    EtwPmcOwnerTagged=2,
    EtwPmcOwnerTaggedWithSource=3
};

struct _ETW_PMC_COUNTER_OWNER// Size=0xc (Id=2471)
{
    enum _ETW_PMC_COUNTER_OWNER_TYPE OwnerType;// Offset=0x0 Size=0x4
    unsigned long ProfileSource;// Offset=0x4 Size=0x4
    unsigned long OwnerTag;// Offset=0x8 Size=0x4
};

struct _ETW_PMC_COUNTER_OWNERSHIP_STATUS// Size=0x14 (Id=2998)
{
    unsigned long ProcessorNumber;// Offset=0x0 Size=0x4
    unsigned long NumberOfCounters;// Offset=0x4 Size=0x4
    struct _ETW_PMC_COUNTER_OWNER CounterOwners[1];// Offset=0x8 Size=0xc
};
