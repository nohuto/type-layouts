struct _HEAP_STOP_ON_TAG// Size=0x4 (Id=977)
{
    union // Size=0x4 (Id=0)
    {
        unsigned long HeapAndTagIndex;// Offset=0x0 Size=0x4
        unsigned short TagIndex;// Offset=0x0 Size=0x2
        unsigned short HeapIndex;// Offset=0x2 Size=0x2
    };
};

struct _HEAP_STOP_ON_VALUES// Size=0x30 (Id=661)
{
    unsigned long long AllocAddress;// Offset=0x0 Size=0x8
    struct _HEAP_STOP_ON_TAG AllocTag;// Offset=0x8 Size=0x4
    unsigned long long ReAllocAddress;// Offset=0x10 Size=0x8
    struct _HEAP_STOP_ON_TAG ReAllocTag;// Offset=0x18 Size=0x4
    unsigned long long FreeAddress;// Offset=0x20 Size=0x8
    struct _HEAP_STOP_ON_TAG FreeTag;// Offset=0x28 Size=0x4
};
