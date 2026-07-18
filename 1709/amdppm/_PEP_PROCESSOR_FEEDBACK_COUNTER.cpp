struct _PEP_PROCESSOR_FEEDBACK_COUNTER// Size=0x8 (Id=583)
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
