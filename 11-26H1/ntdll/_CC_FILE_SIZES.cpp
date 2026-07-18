struct _unnamed_41// Size=0x8 (Id=41)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=415)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_41 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _CC_FILE_SIZES// Size=0x18 (Id=209)
{
    union _LARGE_INTEGER AllocationSize;// Offset=0x0 Size=0x8
    union _LARGE_INTEGER FileSize;// Offset=0x8 Size=0x8
    union _LARGE_INTEGER ValidDataLength;// Offset=0x10 Size=0x8
};
