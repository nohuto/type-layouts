union _LARGE_INTEGER// Size=0x8 (Id=38)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct <unnamed-type-u>// Size=0x8 (Id=5284)
    {
        unsigned long LowPart;// Offset=0x0 Size=0x4
        long HighPart;// Offset=0x4 Size=0x4
    };
    struct _LARGE_INTEGER::<unnamed-type-u> u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _NDIS_GFT_PACKET_COUNTER_VALUE// Size=0x10 (Id=985)
{
    unsigned long long Packets;// Offset=0x0 Size=0x8
    union _LARGE_INTEGER LastUpdate;// Offset=0x8 Size=0x8
};
