struct _flowspec// Size=0x20 (Id=1620)
{
    unsigned long TokenRate;// Offset=0x0 Size=0x4
    unsigned long TokenBucketSize;// Offset=0x4 Size=0x4
    unsigned long PeakBandwidth;// Offset=0x8 Size=0x4
    unsigned long Latency;// Offset=0xc Size=0x4
    unsigned long DelayVariation;// Offset=0x10 Size=0x4
    unsigned long ServiceType;// Offset=0x14 Size=0x4
    unsigned long MaxSduSize;// Offset=0x18 Size=0x4
    unsigned long MinimumPolicedSize;// Offset=0x1c Size=0x4
};
