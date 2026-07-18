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

struct _FILE_STANDARD_INFORMATION// Size=0x18 (Id=712)
{
    union _LARGE_INTEGER AllocationSize;// Offset=0x0 Size=0x8
    union _LARGE_INTEGER EndOfFile;// Offset=0x8 Size=0x8
    unsigned long NumberOfLinks;// Offset=0x10 Size=0x4
    unsigned char DeletePending;// Offset=0x14 Size=0x1
    unsigned char Directory;// Offset=0x15 Size=0x1
};
