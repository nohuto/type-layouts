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

struct _DOMAIN_CONFIGURATION_X64// Size=0x10 (Id=2208)
{
    union _LARGE_INTEGER FirstLevelPageTableRoot;// Offset=0x0 Size=0x8
    unsigned char TranslationEnabled;// Offset=0x8 Size=0x1
};
