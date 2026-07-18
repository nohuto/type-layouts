struct _MFND_CHILD_CONTROLLER_QOS_STATISTICS_LOG_ENTRY// Size=0x4 (Id=689)
{
    unsigned char MRIOPSP;// Offset=0x0 Size=0x1
    unsigned char MWIOPSP;// Offset=0x1 Size=0x1
    unsigned char MRBWP;// Offset=0x2 Size=0x1
    unsigned char MWBWP;// Offset=0x3 Size=0x1
};

struct _GUID// Size=0x10 (Id=753)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _MFND_CHILD_CONTROLLER_QOS_STATISTICS_LOG// Size=0x2000 (Id=688)
{
    unsigned char LEFV;// Offset=0x0 Size=0x1
    unsigned char LSN;// Offset=0x1 Size=0x1
    unsigned short NCCQSLE;// Offset=0x2 Size=0x2
    unsigned short QSMP;// Offset=0x4 Size=0x2
    unsigned short SBP;// Offset=0x6 Size=0x2
    unsigned long long LogEntry0Timestamp;// Offset=0x8 Size=0x8
    unsigned char Reserved0[16];// Offset=0x10 Size=0x10
    struct _MFND_CHILD_CONTROLLER_QOS_STATISTICS_LOG_ENTRY LogEntries[2035];// Offset=0x20 Size=0x1fcc
    unsigned char Reserved1[2];// Offset=0x1fec Size=0x2
    unsigned short LogPageVersion;// Offset=0x1fee Size=0x2
    struct _GUID LogPageGUID;// Offset=0x1ff0 Size=0x10
};
