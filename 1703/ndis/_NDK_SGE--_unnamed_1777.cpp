union _LARGE_INTEGER// Size=0x8 (Id=343)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct <unnamed-type-u>// Size=0x8 (Id=5022)
    {
        unsigned long LowPart;// Offset=0x0 Size=0x4
        long HighPart;// Offset=0x4 Size=0x4
    };
    struct _LARGE_INTEGER::<unnamed-type-u> u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

union _NDK_SGE::_unnamed_1777// Size=0x8 (Id=1777)
{
    void * VirtualAddress;// Offset=0x0 Size=0x8
    union _LARGE_INTEGER LogicalAddress;// Offset=0x0 Size=0x8
};
