union _LARGE_INTEGER// Size=0x8 (Id=156)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct <unnamed-type-u>// Size=0x8 (Id=5909)
    {
        unsigned long LowPart;// Offset=0x0 Size=0x4
        long HighPart;// Offset=0x4 Size=0x4
    };
    struct _LARGE_INTEGER::<unnamed-type-u> u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _NDIS_PHYSICAL_ADDRESS_UNIT// Size=0x10 (Id=846)
{
    union _LARGE_INTEGER PhysicalAddress;// Offset=0x0 Size=0x8
    unsigned int Length;// Offset=0x8 Size=0x4
};
