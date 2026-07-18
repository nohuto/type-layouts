struct _COMMON_BUFFER_COUNTER// Size=0x18 (Id=474)
{
    unsigned long PagesTotal;// Offset=0x0 Size=0x4
    unsigned long PagesInUse;// Offset=0x4 Size=0x4
    long AllocationCount;// Offset=0x8 Size=0x4
    unsigned long FreeCount;// Offset=0xc Size=0x4
    struct _PCW_INSTANCE * PcwInstanceHandle;// Offset=0x10 Size=0x8
};
