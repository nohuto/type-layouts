union _KE_PROCESS_CONCURRENCY_COUNT// Size=0x4 (Id=958)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Fraction:20;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x14
        unsigned long Count:12;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0xc
    };
    unsigned long AllFields;// Offset=0x0 Size=0x4
};

struct _KE_IDEAL_PROCESSOR_SET_BREAKPOINTS// Size=0x8 (Id=1026)
{
    union _KE_PROCESS_CONCURRENCY_COUNT Low;// Offset=0x0 Size=0x4
    union _KE_PROCESS_CONCURRENCY_COUNT High;// Offset=0x4 Size=0x4
};

union _unnamed_952// Size=0x4 (Id=952)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long ConcurrencyCountFixed:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
    };
    unsigned long AllFlags;// Offset=0x0 Size=0x4
};

struct _KAFFINITY_EX// Size=0x108 (Id=1182)
{
    unsigned short Count;// Offset=0x0 Size=0x2
    unsigned short Size;// Offset=0x2 Size=0x2
    unsigned long Reserved;// Offset=0x4 Size=0x4
    union // Size=0x8 (Id=0)
    {
        unsigned long long Bitmap[1];// Offset=0x8 Size=0x8
        unsigned long long StaticBitmap[32];// Offset=0x8 Size=0x100
    };
};

struct _KE_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK// Size=0x118 (Id=954)
{
    union _KE_PROCESS_CONCURRENCY_COUNT ExpectedConcurrencyCount;// Offset=0x0 Size=0x4
    struct _KE_IDEAL_PROCESSOR_SET_BREAKPOINTS Breakpoints;// Offset=0x4 Size=0x8
    union _unnamed_952 AssignmentFlags;// Offset=0xc Size=0x4
    struct _KAFFINITY_EX IdealProcessorSets;// Offset=0x10 Size=0x108
};
