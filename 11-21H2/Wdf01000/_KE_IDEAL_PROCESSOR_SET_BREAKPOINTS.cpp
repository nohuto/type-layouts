union _KE_PROCESS_CONCURRENCY_COUNT// Size=0x4 (Id=994)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Fraction:20;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x14
        unsigned long Count:12;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0xc
    };
    unsigned long AllFields;// Offset=0x0 Size=0x4
};

struct _KE_IDEAL_PROCESSOR_SET_BREAKPOINTS// Size=0x8 (Id=1061)
{
    union _KE_PROCESS_CONCURRENCY_COUNT Low;// Offset=0x0 Size=0x4
    union _KE_PROCESS_CONCURRENCY_COUNT High;// Offset=0x4 Size=0x4
};
