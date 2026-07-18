union _LARGE_INTEGER// Size=0x8 (Id=371)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct <unnamed-type-u>// Size=0x8 (Id=12031)
    {
        unsigned long LowPart;// Offset=0x0 Size=0x4
        long HighPart;// Offset=0x4 Size=0x4
    };
    struct _LARGE_INTEGER::<unnamed-type-u> u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _FSRTL_COMMON_FCB_HEADER// Size=0x30 (Id=3203)
{
    short NodeTypeCode;// Offset=0x0 Size=0x2
    short NodeByteSize;// Offset=0x2 Size=0x2
    unsigned char Flags;// Offset=0x4 Size=0x1
    unsigned char IsFastIoPossible;// Offset=0x5 Size=0x1
    unsigned char Flags2;// Offset=0x6 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Reserved:4;// Offset=0x7 Size=0x1 BitOffset=0x0 BitSize=0x4
        unsigned char Version:4;// Offset=0x7 Size=0x1 BitOffset=0x4 BitSize=0x4
    };
    struct _ERESOURCE * Resource;// Offset=0x8 Size=0x8
    struct _ERESOURCE * PagingIoResource;// Offset=0x10 Size=0x8
    union _LARGE_INTEGER AllocationSize;// Offset=0x18 Size=0x8
    union _LARGE_INTEGER FileSize;// Offset=0x20 Size=0x8
    union _LARGE_INTEGER ValidDataLength;// Offset=0x28 Size=0x8
};
