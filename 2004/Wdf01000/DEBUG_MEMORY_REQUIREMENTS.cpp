union _LARGE_INTEGER// Size=0x8 (Id=206)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct <unnamed-type-u>// Size=0x8 (Id=10311)
    {
        unsigned long LowPart;// Offset=0x0 Size=0x4
        long HighPart;// Offset=0x4 Size=0x4
    };
    struct _LARGE_INTEGER::<unnamed-type-u> u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct DEBUG_MEMORY_REQUIREMENTS// Size=0x20 (Id=2925)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    union _LARGE_INTEGER MaxEnd;// Offset=0x8 Size=0x8
    void * VirtualAddress;// Offset=0x10 Size=0x8
    unsigned long Length;// Offset=0x18 Size=0x4
    unsigned char Cached;// Offset=0x1c Size=0x1
    unsigned char Aligned;// Offset=0x1d Size=0x1
};
