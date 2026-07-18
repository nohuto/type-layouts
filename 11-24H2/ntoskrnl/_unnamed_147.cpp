struct _unnamed_9// Size=0x8 (Id=9)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=252)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_9 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _unnamed_146// Size=0x4 (Id=146)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Enabled:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long HotPlug:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long NonVolatile:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long SpecificPurpose:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long Reserved:28;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1c
    };
};

struct _unnamed_147// Size=0x26 (Id=147)
{
    unsigned long ProximityDomain;// Offset=0x0 Size=0x4
    unsigned char Reserved[2];// Offset=0x4 Size=0x2
    union _LARGE_INTEGER Base;// Offset=0x6 Size=0x8
    unsigned long long Length;// Offset=0xe Size=0x8
    unsigned long Reserved2;// Offset=0x16 Size=0x4
    struct _unnamed_146 Flags;// Offset=0x1a Size=0x4
    unsigned char Reserved3[8];// Offset=0x1e Size=0x8
};
