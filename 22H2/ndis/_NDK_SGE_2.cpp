union _LARGE_INTEGER// Size=0x8 (Id=41)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct <unnamed-type-u>// Size=0x8 (Id=5144)
    {
        unsigned long LowPart;// Offset=0x0 Size=0x4
        long HighPart;// Offset=0x4 Size=0x4
    };
    struct _LARGE_INTEGER::<unnamed-type-u> u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _NDK_SGE// Size=0x10 (Id=1961)
{
    union // Size=0x8 (Id=0)
    {
        void * VirtualAddress;// Offset=0x0 Size=0x8
        union _LARGE_INTEGER LogicalAddress;// Offset=0x0 Size=0x8
    };
    unsigned long Length;// Offset=0x8 Size=0x4
    unsigned int MemoryRegionToken;// Offset=0xc Size=0x4
};
