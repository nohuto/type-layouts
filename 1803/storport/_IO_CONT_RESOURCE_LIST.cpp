struct _unnamed_22// Size=0x10 (Id=22)
{
    struct // Size=0x10 (Id=0)
    {
        unsigned long long Depth:16;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x10
        unsigned long long Sequence:48;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x30
        unsigned long long Reserved:4;// Offset=0x8 Size=0x8 BitOffset=0x0 BitSize=0x4
        unsigned long long NextEntry:60;// Offset=0x8 Size=0x8 BitOffset=0x4 BitSize=0x3c
    };
};

union _SLIST_HEADER// Size=0x10 (Id=23)
{
    unsigned long long Alignment;// Offset=0x0 Size=0x8
    unsigned long long Region;// Offset=0x8 Size=0x8
    struct _unnamed_22 HeaderX64;// Offset=0x0 Size=0x10
};

struct _unnamed_10// Size=0x8 (Id=10)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=11)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_10 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _IO_CONT_RESOURCE_LIST// Size=0x80 (Id=382)
{
    union // Size=0x10 (Id=0)
    {
        union _SLIST_HEADER Header;// Offset=0x0 Size=0x10
        union _SLIST_HEADER ** Hash;// Offset=0x0 Size=0x8
        unsigned long HashSize;// Offset=0x40 Size=0x4
    };
    unsigned long MaximumProcessorCount;// Offset=0x44 Size=0x4
    unsigned long ResourceCount;// Offset=0x48 Size=0x4
    unsigned long MinCount;// Offset=0x4c Size=0x4
    unsigned long MaxCount;// Offset=0x50 Size=0x4
    unsigned long ResourceSize;// Offset=0x54 Size=0x4
    struct _DEVICE_OBJECT * DeviceObject;// Offset=0x58 Size=0x8
    unsigned long MemAllocFailureCount;// Offset=0x60 Size=0x4
    unsigned long ConsecutiveFailureCount;// Offset=0x64 Size=0x4
    union _LARGE_INTEGER SuspendTick;// Offset=0x68 Size=0x8
    unsigned long SuspendCount;// Offset=0x70 Size=0x4
    unsigned long CompatSrbSize;// Offset=0x74 Size=0x4
    unsigned char IsVirtualMiniport;// Offset=0x78 Size=0x1
    long AddingNewResource;// Offset=0x7c Size=0x4
};
