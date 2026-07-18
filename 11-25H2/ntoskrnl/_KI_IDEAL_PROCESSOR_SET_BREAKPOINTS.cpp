union _KI_PROCESS_CONCURRENCY_COUNT// Size=0x4 (Id=2261)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Fraction:18;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x12
        unsigned long Count:14;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0xe
    };
    unsigned long AllFields;// Offset=0x0 Size=0x4
};

struct _KI_IDEAL_PROCESSOR_SET_BREAKPOINTS// Size=0x8 (Id=2426)
{
    union _KI_PROCESS_CONCURRENCY_COUNT Low;// Offset=0x0 Size=0x4
    union _KI_PROCESS_CONCURRENCY_COUNT High;// Offset=0x4 Size=0x4
};
