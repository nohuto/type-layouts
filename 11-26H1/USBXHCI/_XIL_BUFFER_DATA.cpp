struct _LIST_ENTRY// Size=0x10 (Id=38)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _unnamed_47// Size=0x8 (Id=47)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=48)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_47 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _XIL_TRACKING_DATA// Size=0x20 (Id=710)
{
    struct _LIST_ENTRY ListEntry;// Offset=0x0 Size=0x10
    unsigned long Tag;// Offset=0x10 Size=0x4
    void * Owner;// Offset=0x18 Size=0x8
};

enum _XILCORE_MEMORY_RESOURCE_TYPE
{
    XilCoreMemoryResourceType_None=0,
    XilCoreMemoryResourceType_CommonBuffer=1,
    XilCoreMemoryResourceType_ShadowMemory=2,
    XilCoreMemoryResourceType_SecureCommonBuffer=3,
    XilCoreMemoryResourceType_CommonBufferFromPhysicalAddress=4
};

struct _XIL_BUFFER_DATA// Size=0x68 (Id=483)
{
    struct _LIST_ENTRY ListEntry;// Offset=0x0 Size=0x10
    unsigned char * VirtualAddress;// Offset=0x10 Size=0x8
    union _LARGE_INTEGER LogicalAddress;// Offset=0x18 Size=0x8
    struct _XIL_SEGMENT_HEADER * OwningSegment;// Offset=0x20 Size=0x8
    unsigned long Size;// Offset=0x28 Size=0x4
    unsigned long RequestedSize;// Offset=0x2c Size=0x4
    struct _XIL_TRACKING_DATA TrackingData;// Offset=0x30 Size=0x20
    enum _XILCORE_MEMORY_RESOURCE_TYPE XilCoreMemoryResourceType;// Offset=0x50 Size=0x4
    struct _MDL * Mdl;// Offset=0x58 Size=0x8
    struct _XIL_COMMON_BUFFER_PAGE * CommonBufferPage;// Offset=0x60 Size=0x8
};
