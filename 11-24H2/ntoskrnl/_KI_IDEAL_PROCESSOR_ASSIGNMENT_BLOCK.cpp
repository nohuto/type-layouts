union _KI_PROCESS_CONCURRENCY_COUNT// Size=0x4 (Id=2264)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Fraction:18;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x12
        unsigned long Count:14;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0xe
    };
    unsigned long AllFields;// Offset=0x0 Size=0x4
};

struct _KI_IDEAL_PROCESSOR_SET_BREAKPOINTS// Size=0x8 (Id=2429)
{
    union _KI_PROCESS_CONCURRENCY_COUNT Low;// Offset=0x0 Size=0x4
    union _KI_PROCESS_CONCURRENCY_COUNT High;// Offset=0x4 Size=0x4
};

union _unnamed_1908// Size=0x4 (Id=1908)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long ConcurrencyCountFixed:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
    };
    unsigned long AllFlags;// Offset=0x0 Size=0x4
};

struct _KAFFINITY_EX// Size=0x108 (Id=119)
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

struct _KI_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK// Size=0x1d8 (Id=1909)
{
    union _KI_PROCESS_CONCURRENCY_COUNT ExpectedConcurrencyCount;// Offset=0x0 Size=0x4
    struct _KI_IDEAL_PROCESSOR_SET_BREAKPOINTS Breakpoints;// Offset=0x4 Size=0x8
    union _unnamed_1908 AssignmentFlags;// Offset=0xc Size=0x4
    unsigned short ThreadSeed[32];// Offset=0x10 Size=0x40
    unsigned short IdealProcessor[32];// Offset=0x50 Size=0x40
    unsigned short IdealNode[32];// Offset=0x90 Size=0x40
    struct _KAFFINITY_EX IdealProcessorSets;// Offset=0xd0 Size=0x108
};
