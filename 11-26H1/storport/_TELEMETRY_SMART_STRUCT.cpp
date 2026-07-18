struct _TELEMETRY_SMART_STRUCT// Size=0x70 (Id=461)
{
    unsigned short StartStopCycleCount;// Offset=0x0 Size=0x2
    unsigned long PowerOnHours;// Offset=0x4 Size=0x4
    unsigned short LoadUnloadCycles;// Offset=0x8 Size=0x2
    unsigned char Temperature;// Offset=0xa Size=0x1
    unsigned long long ReallocatedSectorsCount;// Offset=0x10 Size=0x8
    unsigned long long SpinRetryCount;// Offset=0x18 Size=0x8
    unsigned long long RuntimeBadBlock;// Offset=0x20 Size=0x8
    unsigned long long EndToEndError;// Offset=0x28 Size=0x8
    unsigned long long ReportedUncorrectableErrors;// Offset=0x30 Size=0x8
    unsigned long long CommandTimeout;// Offset=0x38 Size=0x8
    unsigned long long ReallocationEventCount;// Offset=0x40 Size=0x8
    unsigned long long CurrentPendingSectorCount;// Offset=0x48 Size=0x8
    unsigned long long UncorrectableSectorCount;// Offset=0x50 Size=0x8
    unsigned long long SoftReadErrorRate;// Offset=0x58 Size=0x8
    unsigned long long DriveLifeProtectionStatus;// Offset=0x60 Size=0x8
    unsigned long long MediaWearoutIndicator;// Offset=0x68 Size=0x8
};
