struct _unnamed_9// Size=0x8 (Id=9)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=508)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_9 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _ETW_LAST_ENABLE_INFO// Size=0x10 (Id=1863)
{
    union _LARGE_INTEGER EnableFlags;// Offset=0x0 Size=0x8
    unsigned short LoggerId;// Offset=0x8 Size=0x2
    unsigned char Level;// Offset=0xa Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Enabled:1;// Offset=0xb Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char InternalFlag:7;// Offset=0xb Size=0x1 BitOffset=0x1 BitSize=0x7
    };
};
