struct _NDIS_PD_EC_UTILIZATION_COUNTER// Size=0x40 (Id=202)
{
    unsigned long ProcessorNumber;// Offset=0x0 Size=0x4
    unsigned long IterationCount;// Offset=0x4 Size=0x4
    unsigned long BusyWaitIterationCount;// Offset=0x8 Size=0x4
    unsigned long TxQueueCount;// Offset=0xc Size=0x4
    unsigned long RxQueueCount;// Offset=0x10 Size=0x4
    unsigned long long CpuCycleTime;// Offset=0x18 Size=0x8
    unsigned long long ThreadCycleTime;// Offset=0x20 Size=0x8
    unsigned long long ProcessingCycles;// Offset=0x28 Size=0x8
    unsigned long long BusyWaitCycles;// Offset=0x30 Size=0x8
    unsigned long long IdleCycles;// Offset=0x38 Size=0x8
};
