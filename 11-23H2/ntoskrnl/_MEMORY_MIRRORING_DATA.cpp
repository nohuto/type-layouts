struct _MEMORY_MIRRORING_DATA// Size=0x18 (Id=2174)
{
    unsigned long MemoryRangeCount;// Offset=0x0 Size=0x4
    unsigned long IoSpaceRangeCount;// Offset=0x4 Size=0x4
    struct _LOADER_MEMORY_RANGE * MemoryRanges;// Offset=0x8 Size=0x8
    struct _LOADER_MEMORY_RANGE * IoSpaceRanges;// Offset=0x10 Size=0x8
};
