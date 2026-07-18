struct _unnamed_31// Size=0x8 (Id=31)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=62)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_31 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _SCATTER_GATHER_ELEMENT// Size=0x18 (Id=893)
{
    union _LARGE_INTEGER Address;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
    unsigned long long Reserved;// Offset=0x10 Size=0x8
};

struct _unnamed_795// Size=0x28 (Id=795)
{
    unsigned long NumberOfElements;// Offset=0x0 Size=0x4
    unsigned long long Reserved;// Offset=0x8 Size=0x8
    struct _SCATTER_GATHER_ELEMENT Elements[1];// Offset=0x10 Size=0x18
};
