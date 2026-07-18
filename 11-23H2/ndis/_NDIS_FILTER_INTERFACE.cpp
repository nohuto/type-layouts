struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=232)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

union _NET_LUID_LH// Size=0x8 (Id=592)
{
    unsigned long long Value;// Offset=0x0 Size=0x8
    struct <unnamed-type-Info>// Size=0x8 (Id=12222)
    {
        unsigned long long Reserved:24;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x18
        unsigned long long NetLuidIndex:24;// Offset=0x0 Size=0x8 BitOffset=0x18 BitSize=0x18
        unsigned long long IfType:16;// Offset=0x0 Size=0x8 BitOffset=0x30 BitSize=0x10
    };
    struct _NET_LUID_LH::<unnamed-type-Info> Info;// Offset=0x0 Size=0x8
};

struct _UNICODE_STRING// Size=0x10 (Id=89)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _NDIS_FILTER_INTERFACE// Size=0x40 (Id=1002)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
    unsigned long FilterType;// Offset=0x8 Size=0x4
    unsigned long FilterRunType;// Offset=0xc Size=0x4
    unsigned long IfIndex;// Offset=0x10 Size=0x4
    union _NET_LUID_LH NetLuid;// Offset=0x18 Size=0x8
    struct _UNICODE_STRING FilterClass;// Offset=0x20 Size=0x10
    struct _UNICODE_STRING FilterInstanceName;// Offset=0x30 Size=0x10
};
