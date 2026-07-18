struct _anonymous_31// Size=0x8 (Id=31)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=32)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _anonymous_31 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _DOMAIN_CONFIGURATION_ARM64// Size=0x20 (Id=1721)
{
    union _LARGE_INTEGER Ttbr0;// Offset=0x0 Size=0x8
    union _LARGE_INTEGER Ttbr1;// Offset=0x8 Size=0x8
    unsigned long Mair0;// Offset=0x10 Size=0x4
    unsigned long Mair1;// Offset=0x14 Size=0x4
    unsigned char InputSize0;// Offset=0x18 Size=0x1
    unsigned char InputSize1;// Offset=0x19 Size=0x1
    unsigned char CoherentTableWalks;// Offset=0x1a Size=0x1
    unsigned char TranslationEnabled;// Offset=0x1b Size=0x1
};
