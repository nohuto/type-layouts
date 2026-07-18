struct _unnamed_44// Size=0x8 (Id=44)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=108)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_44 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _unnamed_848// Size=0x10 (Id=848)
{
    union _LARGE_INTEGER MinimumAddress;// Offset=0x0 Size=0x8
    union _LARGE_INTEGER MaximumAddress;// Offset=0x8 Size=0x8
};
