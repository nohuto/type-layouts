struct _RTL_AVL_TREE// Size=0x8 (Id=117)
{
    struct _RTL_BALANCED_NODE * Root;// Offset=0x0 Size=0x8
};

struct _MI_WORKING_SET_AGING_CONTROL// Size=0x38 (Id=1840)
{
    unsigned char Active;// Offset=0x0 Size=0x1
    unsigned char PeriodicAccessClearing;// Offset=0x1 Size=0x1
    unsigned long long TrimWhileAgingLowThreshold;// Offset=0x8 Size=0x8
    unsigned long long TrimWhileAgingHighThreshold;// Offset=0x10 Size=0x8
    struct _RTL_AVL_TREE AgeListWalkers;// Offset=0x18 Size=0x8
    unsigned long long AgedPages;// Offset=0x20 Size=0x8
    unsigned long long AgingTime;// Offset=0x28 Size=0x8
    unsigned long long MaximumPtesAgePerSecond;// Offset=0x30 Size=0x8
};
