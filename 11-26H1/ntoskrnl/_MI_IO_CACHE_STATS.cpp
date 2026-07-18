struct _MI_IO_CACHE_STATS// Size=0x18 (Id=2493)
{
    long UnmappedCacheFlush;// Offset=0x0 Size=0x4
    long UnmappedCacheConflict;// Offset=0x4 Size=0x4
    unsigned long PermanentIoAttributeConflict;// Offset=0x8 Size=0x4
    unsigned long PermanentIoNodeConflict;// Offset=0xc Size=0x4
    long ExclusionReferenceConflict;// Offset=0x10 Size=0x4
    unsigned long HotAddIoNodeConflict;// Offset=0x14 Size=0x4
};
