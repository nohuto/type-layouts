union _unnamed_1153// Size=0x4 (Id=1153)
{
    unsigned long Quantity;// Offset=0x0 Size=0x4
    unsigned long Position;// Offset=0x0 Size=0x4
};

struct _NVME_TELEMETRY_ERROR_ENTRY// Size=0x68 (Id=1388)
{
    struct NVME_COMMAND NvmeCommand;// Offset=0x0 Size=0x40
    struct NVME_COMPLETION_ENTRY NvmeCompletion;// Offset=0x40 Size=0x10
    unsigned long IoSize;// Offset=0x50 Size=0x4
    unsigned long IoLatency;// Offset=0x54 Size=0x4
    unsigned long WaitDuration;// Offset=0x58 Size=0x4
    union _unnamed_1153 u;// Offset=0x5c Size=0x4
    unsigned long long LBA;// Offset=0x60 Size=0x8
};

struct _NVME_TELEMETRY_SAMPLED_ERROR_LOG// Size=0x480 (Id=1319)
{
    unsigned long TotalErrors;// Offset=0x0 Size=0x4
    unsigned long TotalReadWriteErrors;// Offset=0x4 Size=0x4
    struct _NVME_TELEMETRY_ERROR_ENTRY LastError;// Offset=0x8 Size=0x68
    struct _NVME_TELEMETRY_ERROR_ENTRY SampledErrors[10];// Offset=0x70 Size=0x410
};
