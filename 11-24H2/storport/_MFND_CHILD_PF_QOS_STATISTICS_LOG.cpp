struct _MFND_CHILD_PF_QOS_STATISTICS_LOG_ENTRY// Size=0x8 (Id=680)
{
    unsigned short Version;// Offset=0x0 Size=0x2
    unsigned short Size;// Offset=0x2 Size=0x2
    unsigned char MaxReadIOPsPercentage;// Offset=0x4 Size=0x1
    unsigned char MaxWriteIOPsPercentage;// Offset=0x5 Size=0x1
    unsigned char MaxReadBandwidthPercentage;// Offset=0x6 Size=0x1
    unsigned char MaxWriteBandwidthPercentage;// Offset=0x7 Size=0x1
};

struct _MFND_CHILD_PF_QOS_STATISTICS_LOG// Size=0x28 (Id=679)
{
    unsigned short Version;// Offset=0x0 Size=0x2
    unsigned short Size;// Offset=0x2 Size=0x2
    unsigned short QoSStatisticsMonitorPeriod;// Offset=0x4 Size=0x2
    unsigned short SwapBucketPeriod;// Offset=0x6 Size=0x2
    unsigned char LogEntryFormatVersion;// Offset=0x8 Size=0x1
    unsigned char LogSequenceNumber;// Offset=0x9 Size=0x1
    unsigned char Reserved[6];// Offset=0xa Size=0x6
    unsigned long long LogEntry0Timestamp;// Offset=0x10 Size=0x8
    unsigned long LogEntriesCount;// Offset=0x18 Size=0x4
    struct _MFND_CHILD_PF_QOS_STATISTICS_LOG_ENTRY LogEntries[1];// Offset=0x1c Size=0x8
};
