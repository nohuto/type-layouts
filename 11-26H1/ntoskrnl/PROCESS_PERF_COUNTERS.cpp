struct PROCESS_PERF_COUNTERS// Size=0xd8 (Id=757)
{
    unsigned long long ProcessorTime;// Offset=0x0 Size=0x8
    unsigned long long UserTime;// Offset=0x8 Size=0x8
    unsigned long long PrivilegedTime;// Offset=0x10 Size=0x8
    unsigned long long VirtualBytesPeak;// Offset=0x18 Size=0x8
    unsigned long long VirtualBytes;// Offset=0x20 Size=0x8
    unsigned long PageFaults;// Offset=0x28 Size=0x4
    unsigned long HandleCount;// Offset=0x2c Size=0x4
    unsigned long long WorkingSetPeak;// Offset=0x30 Size=0x8
    unsigned long long WorkingSet;// Offset=0x38 Size=0x8
    unsigned long long PageFileBytesPeak;// Offset=0x40 Size=0x8
    unsigned long long PageFileBytes;// Offset=0x48 Size=0x8
    unsigned long long PrivateBytes;// Offset=0x50 Size=0x8
    unsigned long ThreadCount;// Offset=0x58 Size=0x4
    unsigned long PriorityBase;// Offset=0x5c Size=0x4
    unsigned long long ElapsedTime;// Offset=0x60 Size=0x8
    unsigned long ProcessId;// Offset=0x68 Size=0x4
    unsigned long CreatingProcessId;// Offset=0x6c Size=0x4
    unsigned long long PoolPagedBytes;// Offset=0x70 Size=0x8
    unsigned long long PoolNonpagedBytes;// Offset=0x78 Size=0x8
    unsigned long long IoReadOperations;// Offset=0x80 Size=0x8
    unsigned long long IoWriteOperations;// Offset=0x88 Size=0x8
    unsigned long long IoDataOperations;// Offset=0x90 Size=0x8
    unsigned long long IoOtherOperations;// Offset=0x98 Size=0x8
    unsigned long long IoReadBytes;// Offset=0xa0 Size=0x8
    unsigned long long IoWriteBytes;// Offset=0xa8 Size=0x8
    unsigned long long IoDataBytes;// Offset=0xb0 Size=0x8
    unsigned long long IoOtherBytes;// Offset=0xb8 Size=0x8
    unsigned long long WorkingSetPrivate;// Offset=0xc0 Size=0x8
    unsigned long long PerfFreq;// Offset=0xc8 Size=0x8
    unsigned long long PerfTime;// Offset=0xd0 Size=0x8
};
