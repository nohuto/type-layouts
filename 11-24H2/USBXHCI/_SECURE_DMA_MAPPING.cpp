struct _unnamed_47// Size=0x8 (Id=47)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=78)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_47 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _SECURE_DMA_MAPPING// Size=0x20 (Id=1002)
{
    union _LARGE_INTEGER LogicalAddress;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
    struct TRUSTLET_OBJECT_HANDLE__ * MappingHandle;// Offset=0x10 Size=0x8
    void * ExposedSectionHandle;// Offset=0x18 Size=0x8
};
