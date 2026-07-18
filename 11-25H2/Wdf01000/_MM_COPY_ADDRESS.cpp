struct _unnamed_119// Size=0x8 (Id=119)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=120)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_119 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _MM_COPY_ADDRESS// Size=0x8 (Id=2085)
{
    union // Size=0x8 (Id=0)
    {
        void * VirtualAddress;// Offset=0x0 Size=0x8
        union _LARGE_INTEGER PhysicalAddress;// Offset=0x0 Size=0x8
    };
};
