struct _SMART_ATTRIBUTE// Size=0xc (Id=259)
{
    unsigned char Id;// Offset=0x0 Size=0x1
    unsigned char LowStatus;// Offset=0x1 Size=0x1
    unsigned char HighStatus;// Offset=0x2 Size=0x1
    unsigned char Value;// Offset=0x3 Size=0x1
    unsigned char Worst;// Offset=0x4 Size=0x1
    unsigned char Raw[6];// Offset=0x5 Size=0x6
    unsigned char Reserved;// Offset=0xb Size=0x1
};

struct _SMART_THRESHOLD// Size=0xc (Id=520)
{
    unsigned char Id;// Offset=0x0 Size=0x1
    unsigned char Value;// Offset=0x1 Size=0x1
    unsigned char Reserved[10];// Offset=0x2 Size=0xa
};

struct _DEVICE_SMART_DATA// Size=0x200 (Id=260)
{
    unsigned short Revision;// Offset=0x0 Size=0x2
    union // Size=0x168 (Id=0)
    {
        struct _SMART_ATTRIBUTE Attributes[30];// Offset=0x2 Size=0x168
        struct _SMART_THRESHOLD Thresholds[30];// Offset=0x2 Size=0x168
    };
    unsigned char OfflineDataCollectionStatus;// Offset=0x16a Size=0x1
    unsigned char SelfTestExecutionStatus;// Offset=0x16b Size=0x1
    unsigned short OfflineDataCollectionPeriod;// Offset=0x16c Size=0x2
    unsigned char VendorSpecific1;// Offset=0x16e Size=0x1
    unsigned char OfflineDataCollectionCapabilities;// Offset=0x16f Size=0x1
    unsigned short SmartCapabilities;// Offset=0x170 Size=0x2
    unsigned char ErrorLoggingCapabilities;// Offset=0x172 Size=0x1
    unsigned char VendorSpecific2;// Offset=0x173 Size=0x1
    unsigned char ShortSelfTestPollingPeriod;// Offset=0x174 Size=0x1
    unsigned char ExtendedSelfTestPollingPeriod;// Offset=0x175 Size=0x1
    unsigned char Reserved[12];// Offset=0x176 Size=0xc
    unsigned char VendorSpecific3[125];// Offset=0x182 Size=0x7d
    unsigned char Checksum;// Offset=0x1ff Size=0x1
};
