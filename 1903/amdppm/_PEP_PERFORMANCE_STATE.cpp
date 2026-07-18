struct _PEP_PROCESSOR_FEEDBACK_COUNTER// Size=0x8 (Id=650)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Affinitized:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Type:2;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x2
        unsigned long Counter:4;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x4
        unsigned long DiscountIdle:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long Reserved:24;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x18
    };
    unsigned long NominalRate;// Offset=0x4 Size=0x4
};

struct _PEP_PERFORMANCE_STATE// Size=0x40 (Id=511)
{
    unsigned long HighestPerformance;// Offset=0x0 Size=0x4
    unsigned long NominalPerformance;// Offset=0x4 Size=0x4
    unsigned long LowestNonlinearPerformance;// Offset=0x8 Size=0x4
    unsigned long LowestPerformance;// Offset=0xc Size=0x4
    unsigned long NominalFrequency;// Offset=0x10 Size=0x4
    unsigned long HighestPercent;// Offset=0x14 Size=0x4
    unsigned long LowestNonlinearPercent;// Offset=0x18 Size=0x4
    unsigned long LowestPercent;// Offset=0x1c Size=0x4
    unsigned char StateCount;// Offset=0x20 Size=0x1
    struct _PEP_PROCESSOR_PERF_STATE * States;// Offset=0x28 Size=0x8
    unsigned long FrequencyCounterIndex;// Offset=0x30 Size=0x4
    unsigned long PerformanceCounterIndex;// Offset=0x34 Size=0x4
    struct _PEP_PROCESSOR_FEEDBACK_COUNTER FeedbackCounters[1];// Offset=0x38 Size=0x8
};
