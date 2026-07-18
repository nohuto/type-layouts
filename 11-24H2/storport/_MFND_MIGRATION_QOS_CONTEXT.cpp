enum _MFND_QOS_POLICY
{
    MFND_QOS_UNKNOWN=0,
    MFND_QOS_RESERVE=1,
    MFND_QOS_LIMIT=2,
    MFND_QOS_MIX=3,
    MFND_QOS_MAXIMUM=4
};

struct _unnamed_1140// Size=0x1 (Id=1140)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char MigrationQoSCached:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Reserved:7;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x7
    };
};

struct _MFND_MIGRATION_QOS_CONTEXT// Size=0x1c (Id=1141)
{
    enum _MFND_QOS_POLICY QOSP;// Offset=0x0 Size=0x4
    unsigned long LBInMBps;// Offset=0x4 Size=0x4
    unsigned long LWBInMBps;// Offset=0x8 Size=0x4
    unsigned long LRIOPS;// Offset=0xc Size=0x4
    unsigned long LRWIOPS;// Offset=0x10 Size=0x4
    struct _unnamed_1140 Flags;// Offset=0x14 Size=0x1
    unsigned char Reserved[7];// Offset=0x15 Size=0x7
};
