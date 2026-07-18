struct _anonymous_13// Size=0x8 (Id=13)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=322)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _anonymous_13 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _anonymous_131// Size=0x10 (Id=131)
{
    union _LARGE_INTEGER * Length;// Offset=0x0 Size=0x4
    unsigned long Key;// Offset=0x4 Size=0x4
    union _LARGE_INTEGER ByteOffset;// Offset=0x8 Size=0x8
};
