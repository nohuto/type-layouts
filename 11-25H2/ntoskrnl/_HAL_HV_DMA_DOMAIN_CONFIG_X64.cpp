struct _unnamed_9// Size=0x8 (Id=9)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=587)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_9 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _HAL_HV_DMA_DOMAIN_CONFIG_X64// Size=0x10 (Id=350)
{
    union _LARGE_INTEGER FirstLevelPageTableRoot;// Offset=0x0 Size=0x8
    unsigned char TranslationEnabled;// Offset=0x8 Size=0x1
    unsigned char Blocked;// Offset=0x9 Size=0x1
};
