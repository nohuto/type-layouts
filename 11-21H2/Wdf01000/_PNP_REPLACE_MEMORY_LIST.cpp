union _LARGE_INTEGER// Size=0x8 (Id=371)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct <unnamed-type-u>// Size=0x8 (Id=12031)
    {
        unsigned long LowPart;// Offset=0x0 Size=0x4
        long HighPart;// Offset=0x4 Size=0x4
    };
    struct _LARGE_INTEGER::<unnamed-type-u> u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _PNP_REPLACE_MEMORY_LIST// Size=0x20 (Id=1718)
{
    union // Size=0x10 (Id=0)
    {
        unsigned long AllocatedCount;// Offset=0x0 Size=0x4
        unsigned long Count;// Offset=0x4 Size=0x4
        unsigned long long TotalLength;// Offset=0x8 Size=0x8
        struct <unnamed-type-Ranges>// Size=0x10 (Id=15038)
        {
            union _LARGE_INTEGER Address;// Offset=0x0 Size=0x8
            unsigned long long Length;// Offset=0x8 Size=0x8
        };
    };
    struct _PNP_REPLACE_MEMORY_LIST::<unnamed-type-Ranges> Ranges[1];// Offset=0x10 Size=0x10
};
