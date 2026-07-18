union _NVME_NAMESPACE_TELEMETRY_FLAGS// Size=0x4 (Id=1298)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long TraceLoggingPerformanceEnabled:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long TraceLoggingErrorDataEnabled:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Reserved:30;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1e
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};

struct _unnamed_10// Size=0x8 (Id=10)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=11)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_10 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _RAID_TELEMETRY_CPU_COUNTERS// Size=0x20 (Id=757)
{
    unsigned long long MaxReadWriteLatency;// Offset=0x0 Size=0x8
    unsigned long long TotalReadBytes;// Offset=0x8 Size=0x8
    unsigned long long TotalWriteBytes;// Offset=0x10 Size=0x8
    unsigned long long TotalStreamWriteBytes;// Offset=0x18 Size=0x8
};

union _unnamed_1148// Size=0x4 (Id=1148)
{
    unsigned long Quantity;// Offset=0x0 Size=0x4
    unsigned long Position;// Offset=0x0 Size=0x4
};

struct _NVME_TELEMETRY_ERROR_ENTRY// Size=0x68 (Id=1373)
{
    struct NVME_COMMAND NvmeCommand;// Offset=0x0 Size=0x40
    struct NVME_COMPLETION_ENTRY NvmeCompletion;// Offset=0x40 Size=0x10
    unsigned long IoSize;// Offset=0x50 Size=0x4
    unsigned long IoLatency;// Offset=0x54 Size=0x4
    unsigned long WaitDuration;// Offset=0x58 Size=0x4
    union _unnamed_1148 u;// Offset=0x5c Size=0x4
    unsigned long long LBA;// Offset=0x60 Size=0x8
};

struct _NVME_TELEMETRY_SAMPLED_ERROR_LOG// Size=0x480 (Id=1307)
{
    unsigned long TotalErrors;// Offset=0x0 Size=0x4
    unsigned long TotalReadWriteErrors;// Offset=0x4 Size=0x4
    struct _NVME_TELEMETRY_ERROR_ENTRY LastError;// Offset=0x8 Size=0x68
    struct _NVME_TELEMETRY_ERROR_ENTRY SampledErrors[10];// Offset=0x70 Size=0x410
};

struct _NVME_TELEMETRY_UNIQUE_ERROR_LOG// Size=0x410 (Id=1368)
{
    struct _NVME_TELEMETRY_ERROR_ENTRY UniqueErrors[10];// Offset=0x0 Size=0x410
};

struct _NVME_NAMESPACE_TELEMETRY// Size=0x918 (Id=904)
{
    unsigned long HighLatencyIoCount;// Offset=0x0 Size=0x4
    union _NVME_NAMESPACE_TELEMETRY_FLAGS TelemetryFlags;// Offset=0x4 Size=0x4
    struct _RAID_TELEMETRY_LATENCY_BUCKET * TelemetryLatencyBuckets;// Offset=0x8 Size=0x8
    struct _RAID_TELEMETRY_IO_SIZE_BUCKET * TelemetryIoSizeBuckets;// Offset=0x10 Size=0x8
    union _LARGE_INTEGER TelemetryLastPerfCollectionTimeStamp;// Offset=0x18 Size=0x8
    struct _RAID_TELEMETRY_LATENCY_BUCKET * TelemetryPreviousLatencyBuckets;// Offset=0x20 Size=0x8
    struct _RAID_TELEMETRY_IO_SIZE_BUCKET * TelemetryPreviousIoSizeBuckets;// Offset=0x28 Size=0x8
    struct _RAID_TELEMETRY_CPU_COUNTERS * TelemetryCountersPerCpu;// Offset=0x30 Size=0x8
    struct _RAID_TELEMETRY_CPU_COUNTERS TelemetryPerfPreviousCpuCounters;// Offset=0x38 Size=0x20
    unsigned long long TelemetryMaxFlushLatency;// Offset=0x58 Size=0x8
    unsigned long long TelemetryMaxUnmapLatency;// Offset=0x60 Size=0x8
    unsigned long long TelemetryLock;// Offset=0x68 Size=0x8
    struct _NVME_TELEMETRY_SAMPLED_ERROR_LOG TelemetrySampledErrorLog;// Offset=0x70 Size=0x480
    struct _NVME_TELEMETRY_UNIQUE_ERROR_LOG TelemetryUniqueErrorLog;// Offset=0x4f0 Size=0x410
    unsigned long long TelemetryPrevBytesWritten;// Offset=0x900 Size=0x8
    unsigned long long TelemetryPrevStreamBytesWritten;// Offset=0x908 Size=0x8
    unsigned long long HighLatencyIoThreshold;// Offset=0x910 Size=0x8
};
