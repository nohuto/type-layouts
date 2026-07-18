enum _CLFS_IOSTATS_CLASS
{
    ClfsIoStatsDefault=0,
    ClfsIoStatsMax=65535
};

struct _CLS_IO_STATISTICS_HEADER// Size=0x10 (Id=3047)
{
    unsigned char ubMajorVersion;// Offset=0x0 Size=0x1
    unsigned char ubMinorVersion;// Offset=0x1 Size=0x1
    enum _CLFS_IOSTATS_CLASS eStatsClass;// Offset=0x4 Size=0x4
    unsigned short cbLength;// Offset=0x8 Size=0x2
    unsigned long coffData;// Offset=0xc Size=0x4
};

struct _CLS_IO_STATISTICS// Size=0x30 (Id=1837)
{
    struct _CLS_IO_STATISTICS_HEADER hdrIoStats;// Offset=0x0 Size=0x10
    unsigned long long cFlush;// Offset=0x10 Size=0x8
    unsigned long long cbFlush;// Offset=0x18 Size=0x8
    unsigned long long cMetaFlush;// Offset=0x20 Size=0x8
    unsigned long long cbMetaFlush;// Offset=0x28 Size=0x8
};
