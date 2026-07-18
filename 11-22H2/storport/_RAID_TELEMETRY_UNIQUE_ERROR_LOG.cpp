union _unnamed_771// Size=0x4 (Id=771)
{
    unsigned long Quantity;// Offset=0x0 Size=0x4
    unsigned long Position;// Offset=0x0 Size=0x4
};

struct _RAID_TELEMETRY_ERROR_ENTRY// Size=0x28 (Id=772)
{
    unsigned char SrbStatus;// Offset=0x0 Size=0x1
    unsigned char ScsiStatus;// Offset=0x1 Size=0x1
    unsigned char SenseKey;// Offset=0x2 Size=0x1
    unsigned char AdditionalSenseCode;// Offset=0x3 Size=0x1
    unsigned char AdditionalSenseCodeQualifier;// Offset=0x4 Size=0x1
    unsigned char CdbOpCode;// Offset=0x5 Size=0x1
    unsigned char Reserved1[2];// Offset=0x6 Size=0x2
    unsigned long IoSize;// Offset=0x8 Size=0x4
    unsigned long IoLatency;// Offset=0xc Size=0x4
    unsigned long WaitDuration;// Offset=0x10 Size=0x4
    unsigned long QueueDepth;// Offset=0x14 Size=0x4
    unsigned long long LBA;// Offset=0x18 Size=0x8
    union _unnamed_771 u;// Offset=0x20 Size=0x4
};

struct _RAID_TELEMETRY_UNIQUE_ERROR_LOG// Size=0x190 (Id=721)
{
    struct _RAID_TELEMETRY_ERROR_ENTRY UniqueErrors[10];// Offset=0x0 Size=0x190
};
