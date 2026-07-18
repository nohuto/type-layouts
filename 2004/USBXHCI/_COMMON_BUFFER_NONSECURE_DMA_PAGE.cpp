struct _anonymous_32// Size=0x8 (Id=32)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=33)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _anonymous_32 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _XIL_COMMON_BUFFER_PAGE// Size=0x10 (Id=457)
{
    unsigned char * VirtualAddress;// Offset=0x0 Size=0x8
    union _LARGE_INTEGER LogicalAddress;// Offset=0x8 Size=0x8
};

struct _COMMON_BUFFER_NONSECURE_DMA_PAGE// Size=0x18 (Id=456)
{
    struct _XIL_COMMON_BUFFER_PAGE PageDetails;// Offset=0x0 Size=0x10
    struct WDFCOMMONBUFFER__ * WdfCommonBuffer;// Offset=0x10 Size=0x8
};
