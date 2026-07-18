enum _MFND_QOS_POLICY
{
    MFND_QOS_UNKNOWN=0,
    MFND_QOS_RESERVE=1,
    MFND_QOS_LIMIT=2,
    MFND_QOS_MIX=3,
    MFND_QOS_MAXIMUM=4
};

struct _MFND_QOS// Size=0x38 (Id=908)
{
    unsigned short Version;// Offset=0x0 Size=0x2
    unsigned short Size;// Offset=0x2 Size=0x2
    enum _MFND_QOS_POLICY QoSPolicy;// Offset=0x4 Size=0x4
    unsigned char IsolationLevel;// Offset=0x8 Size=0x1
    unsigned char LimitWriteWeightValue;// Offset=0x9 Size=0x1
    unsigned char Reserved0[2];// Offset=0xa Size=0x2
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

struct _MFND_CHILD_PF_DATA// Size=0xc8 (Id=669)
{
    unsigned short Version;// Offset=0x0 Size=0x2
    unsigned char Reserved0[2];// Offset=0x2 Size=0x2
    unsigned long Size;// Offset=0x4 Size=0x4
    unsigned short ChildControllerId;// Offset=0x8 Size=0x2
    unsigned char SerialNumber[26];// Offset=0xa Size=0x1a
    unsigned long Flags;// Offset=0x24 Size=0x4
    unsigned long ChildControllerState;// Offset=0x28 Size=0x4
    unsigned long NameSpaceCount;// Offset=0x2c Size=0x4
    unsigned char ResourceUpdateStatus;// Offset=0x30 Size=0x1
    unsigned char Reserved1[3];// Offset=0x31 Size=0x3
    unsigned long NameSpace1Id;// Offset=0x34 Size=0x4
    unsigned long NameSpace1TotalStorageUnits;// Offset=0x38 Size=0x4
    unsigned long NameSpace2Id;// Offset=0x3c Size=0x4
    unsigned long NameSpace2TotalStorageUnits;// Offset=0x40 Size=0x4
    unsigned long NameSpace3Id;// Offset=0x44 Size=0x4
    unsigned long NameSpace3TotalStorageUnits;// Offset=0x48 Size=0x4
    unsigned long NameSpace4Id;// Offset=0x4c Size=0x4
    unsigned long NameSpace4TotalStorageUnits;// Offset=0x50 Size=0x4
    unsigned long IoQueuePairCount;// Offset=0x54 Size=0x4
    unsigned long MsiMessageCount;// Offset=0x58 Size=0x4
    struct _MFND_QOS QoS;// Offset=0x5c Size=0x38
    unsigned char HostMetadata[16];// Offset=0x94 Size=0x10
    unsigned long long NameSpace1NUSE;// Offset=0xa8 Size=0x8
    unsigned long long NameSpace2NUSE;// Offset=0xb0 Size=0x8
    unsigned long long NameSpace3NUSE;// Offset=0xb8 Size=0x8
    unsigned long long NameSpace4NUSE;// Offset=0xc0 Size=0x8
};

struct _MFND_CHILD_PF_LIST// Size=0xd8 (Id=668)
{
    unsigned short Version;// Offset=0x0 Size=0x2
    unsigned char Reserved[2];// Offset=0x2 Size=0x2
    unsigned long Size;// Offset=0x4 Size=0x4
    unsigned long ChildPFCount;// Offset=0x8 Size=0x4
    struct _MFND_CHILD_PF_DATA ChildPFs[1];// Offset=0x10 Size=0xc8
};
