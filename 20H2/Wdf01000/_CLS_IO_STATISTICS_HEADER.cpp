enum _CLFS_IOSTATS_CLASS
{
    ClfsIoStatsDefault=0,
    ClfsIoStatsMax=65535
};

struct _CLS_IO_STATISTICS_HEADER// Size=0x10 (Id=2452)
{
    unsigned char ubMajorVersion;// Offset=0x0 Size=0x1
    unsigned char ubMinorVersion;// Offset=0x1 Size=0x1
    enum _CLFS_IOSTATS_CLASS eStatsClass;// Offset=0x4 Size=0x4
    unsigned short cbLength;// Offset=0x8 Size=0x2
    unsigned long coffData;// Offset=0xc Size=0x4
};
