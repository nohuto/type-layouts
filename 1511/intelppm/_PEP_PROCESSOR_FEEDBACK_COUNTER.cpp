struct _PEP_PROCESSOR_FEEDBACK_COUNTER// Size=0x8 (Id=348)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Affinitized:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Type:2;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x2
        unsigned long Counter:4;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x4
        unsigned long Reserved:25;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x19
    };
    unsigned long NominalRate;// Offset=0x4 Size=0x4
};
