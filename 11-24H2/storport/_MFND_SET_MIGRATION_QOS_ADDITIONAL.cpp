enum _MFND_QOS_POLICY
{
    MFND_QOS_UNKNOWN=0,
    MFND_QOS_RESERVE=1,
    MFND_QOS_LIMIT=2,
    MFND_QOS_MIX=3,
    MFND_QOS_MAXIMUM=4
};

struct _MFND_SET_MIGRATION_QOS_ADDITIONAL// Size=0x20 (Id=686)
{
    unsigned short Version;// Offset=0x0 Size=0x2
    unsigned char Flags;// Offset=0x2 Size=0x1
    unsigned char Reserved0;// Offset=0x3 Size=0x1
    unsigned long Size;// Offset=0x4 Size=0x4
    enum _MFND_QOS_POLICY QoSPolicy;// Offset=0x8 Size=0x4
    unsigned long LimitBandwidthInMBps;// Offset=0xc Size=0x4
    unsigned long LimitWriteBandwidthInMBps;// Offset=0x10 Size=0x4
    unsigned long LimitRandomIops;// Offset=0x14 Size=0x4
    unsigned long LimitRandomWriteIops;// Offset=0x18 Size=0x4
    unsigned char Reserved1[4];// Offset=0x1c Size=0x4
};
