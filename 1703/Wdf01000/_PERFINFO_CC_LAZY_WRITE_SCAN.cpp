struct _PERFINFO_CC_LAZY_WRITE_SCAN// Size=0x58 (Id=3514)
{
    unsigned long long WorkItemKey;// Offset=0x0 Size=0x8
    unsigned long ReasonForFlush;// Offset=0x8 Size=0x4
    unsigned long PagesToWrite;// Offset=0xc Size=0x4
    unsigned long long TotalDirtyPages;// Offset=0x10 Size=0x8
    unsigned long long AvailablePages;// Offset=0x18 Size=0x8
    unsigned long long DirtyPageThreshold;// Offset=0x20 Size=0x8
    unsigned long long NumberOfMappedVacbs;// Offset=0x28 Size=0x8
    unsigned long long TopDirtyPageThreshold;// Offset=0x30 Size=0x8
    unsigned long long BottomDirtyPageThreshold;// Offset=0x38 Size=0x8
    unsigned long long AverageAvailablePages;// Offset=0x40 Size=0x8
    unsigned long long AverageDirtyPages;// Offset=0x48 Size=0x8
    unsigned long long ConsecutiveWorklessLazywriteScans;// Offset=0x50 Size=0x8
};
