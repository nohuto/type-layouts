struct _MFND_CHILD_PF_QOS_STATISTICS_PROPERTY// Size=0x10 (Id=678)
{
    unsigned short Version;// Offset=0x0 Size=0x2
    unsigned short Size;// Offset=0x2 Size=0x2
    unsigned char FeatureEnable;// Offset=0x4 Size=0x1
    unsigned char Reserved0[3];// Offset=0x5 Size=0x3
    unsigned short QoSStatisticsMonitorPeriod;// Offset=0x8 Size=0x2
    unsigned short SwapBucketPeriod;// Offset=0xa Size=0x2
    unsigned long Reserved1;// Offset=0xc Size=0x4
};
