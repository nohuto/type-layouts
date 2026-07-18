union _LARGE_INTEGER// Size=0x8 (Id=58)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct <unnamed-type-u>// Size=0x8 (Id=5482)
    {
        unsigned long LowPart;// Offset=0x0 Size=0x4
        long HighPart;// Offset=0x4 Size=0x4
    };
    struct _LARGE_INTEGER::<unnamed-type-u> u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _NDIS_GFT_BYTE_COUNTER_VALUE// Size=0x10 (Id=859)
{
    unsigned long long Bytes;// Offset=0x0 Size=0x8
    union _LARGE_INTEGER LastUpdate;// Offset=0x8 Size=0x8
};
