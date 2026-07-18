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

struct _MM_COPY_ADDRESS// Size=0x8 (Id=1558)
{
    union // Size=0x8 (Id=0)
    {
        void * VirtualAddress;// Offset=0x0 Size=0x8
        union _LARGE_INTEGER PhysicalAddress;// Offset=0x0 Size=0x8
    };
};
