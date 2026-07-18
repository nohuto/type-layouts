enum _MFND_QOS_POLICY
{
    MFND_QOS_RESERVE=1,
    MFND_QOS_LIMIT=2,
    MFND_QOS_MIX=3
};

struct _MFND_QOS// Size=0x38 (Id=529)
{
    unsigned short Version;// Offset=0x0 Size=0x2
    unsigned short SizeInBytes;// Offset=0x2 Size=0x2
    enum _MFND_QOS_POLICY QoSPolicy;// Offset=0x4 Size=0x4
    unsigned char IsolationLevel;// Offset=0x8 Size=0x1
    unsigned char Reserved0[3];// Offset=0x9 Size=0x3
    unsigned long ReserveReadBandwidthInMBps;// Offset=0xc Size=0x4
    unsigned long ReserveWriteBandwidthInMBps;// Offset=0x10 Size=0x4
    unsigned long LimitBandwidthInMBps;// Offset=0x14 Size=0x4
    unsigned long LimitWriteBandwidthInMBps;// Offset=0x18 Size=0x4
    unsigned long ReserveReadIops;// Offset=0x1c Size=0x4
    unsigned long ReserveWriteIops;// Offset=0x20 Size=0x4
    unsigned long LimitIops;// Offset=0x24 Size=0x4
    unsigned long LimitWriteIops;// Offset=0x28 Size=0x4
    unsigned char Reserved1[12];// Offset=0x2c Size=0xc
};

struct _MFND_PHYSICAL_FUNCTION_SETTINGS// Size=0x98 (Id=597)
{
    unsigned short Version;// Offset=0x0 Size=0x2
    unsigned short SizeInBytes;// Offset=0x2 Size=0x2
    unsigned short Flags;// Offset=0x4 Size=0x2
    unsigned short IoQueuePairCount;// Offset=0x6 Size=0x2
    unsigned short InterruptCount;// Offset=0x8 Size=0x2
    unsigned short NamespaceCount;// Offset=0xa Size=0x2
    unsigned long Reserved0;// Offset=0xc Size=0x4
    unsigned long NS1StorageProvisionUnitCount;// Offset=0x10 Size=0x4
    unsigned long NS2StorageProvisionUnitCount;// Offset=0x14 Size=0x4
    unsigned long NS3StorageProvisionUnitCount;// Offset=0x18 Size=0x4
    unsigned long NS4StorageProvisionUnitCount;// Offset=0x1c Size=0x4
    struct _MFND_QOS QoS;// Offset=0x20 Size=0x38
    unsigned char Reserved1[64];// Offset=0x58 Size=0x40
};

struct _MFND_CHILD_PF_SETTINGS// Size=0xa0 (Id=434)
{
    unsigned long Version;// Offset=0x0 Size=0x4
    unsigned long Size;// Offset=0x4 Size=0x4
    struct _MFND_PHYSICAL_FUNCTION_SETTINGS Settings;// Offset=0x8 Size=0x98
};
