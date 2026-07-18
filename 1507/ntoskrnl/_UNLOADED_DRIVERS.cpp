struct _UNICODE_STRING// Size=0x10 (Id=26)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    unsigned short * Buffer;// Offset=0x8 Size=0x8
};

struct _unnamed_28// Size=0x8 (Id=28)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=29)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_28 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _UNLOADED_DRIVERS// Size=0x28 (Id=921)
{
    struct _UNICODE_STRING Name;// Offset=0x0 Size=0x10
    void * StartAddress;// Offset=0x10 Size=0x8
    void * EndAddress;// Offset=0x18 Size=0x8
    union _LARGE_INTEGER CurrentTime;// Offset=0x20 Size=0x8
};
