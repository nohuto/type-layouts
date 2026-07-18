struct _GUID// Size=0x10 (Id=58)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _CC_VOLUME_TELEMETRY// Size=0x9b0 (Id=2005)
{
    struct _GUID DeviceGuid;// Offset=0x0 Size=0x10
    unsigned long long TotalDirtyPages;// Offset=0x10 Size=0x8
    unsigned long long MaxDirtyPages;// Offset=0x18 Size=0x8
    unsigned long long TotalDirtyPageThreshold;// Offset=0x20 Size=0x8
    unsigned long long TopDirtyPageThreshold;// Offset=0x28 Size=0x8
    unsigned long long BottomDirtyPageThreshold;// Offset=0x30 Size=0x8
    unsigned long long DirtyPageSamples;// Offset=0x38 Size=0x8
    unsigned long long TotalPagesQueuedToDisk;// Offset=0x40 Size=0x8
    unsigned long long MaxPagesQueuedToDisk;// Offset=0x48 Size=0x8
    unsigned long long PagesQueuedToDiskSamples;// Offset=0x50 Size=0x8
    unsigned long long TotalLoggedPagesQueuedToDisk;// Offset=0x58 Size=0x8
    unsigned long long MaxLoggedPagesQueuedToDisk;// Offset=0x60 Size=0x8
    unsigned long long LoggedPagesQueuedToDiskSamples;// Offset=0x68 Size=0x8
    unsigned long long ReadTotalBytes;// Offset=0x70 Size=0x8
    unsigned long long ReadPagedInTotalBytes;// Offset=0x78 Size=0x8
    unsigned long long ReadAheadTotalBytes;// Offset=0x80 Size=0x8
    unsigned long long TotalSynchronousReadIoCount;// Offset=0x88 Size=0x8
    unsigned long long TotalSynchronousNonBlockingReadIoCount;// Offset=0x90 Size=0x8
    unsigned long long TotalFailedSynchronousNonBlockingReadIoCount;// Offset=0x98 Size=0x8
    unsigned long long TotalWrites;// Offset=0xa0 Size=0x8
    unsigned long long TotalHardThrottleWrites;// Offset=0xa8 Size=0x8
    unsigned long long TotalSoftThrottleWrites;// Offset=0xb0 Size=0x8
    unsigned long long TotalLazyWriterCalls;// Offset=0xb8 Size=0x8
    unsigned long long TotalLazyWriterLatency;// Offset=0xc0 Size=0x8
    unsigned long long TotalLazyWriterPagesFlushed;// Offset=0xc8 Size=0x8
    unsigned long long TotalLazyWriterAvgPagesPerSecond;// Offset=0xd0 Size=0x8
    unsigned long long SynchronousReadIoMaxLatency;// Offset=0xd8 Size=0x8
    unsigned long long SynchronousReadIoNonBlockingMaxLatency;// Offset=0xe0 Size=0x8
    unsigned long long SynchronousReadIoCounts[12];// Offset=0xe8 Size=0x60
    unsigned long long SynchronousReadTotalLatency[12];// Offset=0x148 Size=0x60
    unsigned long long SynchronousReadNonBlockingIoCounts[12];// Offset=0x1a8 Size=0x60
    unsigned long long SynchronousReadNonBlockingTotalLatency[12];// Offset=0x208 Size=0x60
    unsigned long long TotalSynchronousWriteIoCount;// Offset=0x268 Size=0x8
    unsigned long long TotalSynchronousNonBlockingWriteIoCount;// Offset=0x270 Size=0x8
    unsigned long long TotalFailedSynchronousNonBlockingWriteIoCount;// Offset=0x278 Size=0x8
    unsigned long long SynchronousWriteIoMaxLatency;// Offset=0x280 Size=0x8
    unsigned long long SynchronousWriteIoNonBlockingMaxLatency;// Offset=0x288 Size=0x8
    unsigned long long SynchronousWriteIoCounts[12];// Offset=0x290 Size=0x60
    unsigned long long SynchronousWriteTotalLatency[12];// Offset=0x2f0 Size=0x60
    unsigned long long SynchronousWriteNonBlockingIoCounts[12];// Offset=0x350 Size=0x60
    unsigned long long SynchronousWriteNonBlockingTotalLatency[12];// Offset=0x3b0 Size=0x60
    unsigned long long TotalAsynchronousReadIoCount;// Offset=0x410 Size=0x8
    unsigned long long AsynchronousReadIoMaxLatency;// Offset=0x418 Size=0x8
    unsigned long long AsynchronousReadIoCounts[12];// Offset=0x420 Size=0x60
    unsigned long long AsynchronousReadTotalLatency[12];// Offset=0x480 Size=0x60
    unsigned long long CumulativeTotalDirtyPages;// Offset=0x4e0 Size=0x8
    unsigned long long CumulativeMaxDirtyPages;// Offset=0x4e8 Size=0x8
    unsigned long long CumulativeDirtyPageThreshold;// Offset=0x4f0 Size=0x8
    unsigned long long CumulativeTopDirtyPageThreshold;// Offset=0x4f8 Size=0x8
    unsigned long long CumulativeBottomDirtyPageThreshold;// Offset=0x500 Size=0x8
    unsigned long long CumulativeDirtyPageSamples;// Offset=0x508 Size=0x8
    unsigned long long CumulativeTotalPagesQueuedToDisk;// Offset=0x510 Size=0x8
    unsigned long long CumulativeMaxPagesQueuedToDisk;// Offset=0x518 Size=0x8
    unsigned long long CumulativePagesQueuedToDiskSamples;// Offset=0x520 Size=0x8
    unsigned long long CumulativeTotalLoggedPagesQueuedToDisk;// Offset=0x528 Size=0x8
    unsigned long long CumulativeMaxLoggedPagesQueuedToDisk;// Offset=0x530 Size=0x8
    unsigned long long CumulativeLoggedPagesQueuedToDiskSamples;// Offset=0x538 Size=0x8
    unsigned long long CumulativeReadTotalBytes;// Offset=0x540 Size=0x8
    unsigned long long CumulativeReadPagedInTotalBytes;// Offset=0x548 Size=0x8
    unsigned long long CumulativeReadAheadTotalBytes;// Offset=0x550 Size=0x8
    unsigned long long CumulativeTotalSynchronousReadIoCount;// Offset=0x558 Size=0x8
    unsigned long long CumulativeTotalSynchronousNonBlockingReadIoCount;// Offset=0x560 Size=0x8
    unsigned long long CumulativeTotalFailedSynchronousNonBlockingReadIoCount;// Offset=0x568 Size=0x8
    unsigned long long CumulativeTotalWrites;// Offset=0x570 Size=0x8
    unsigned long long CumulativeTotalHardThrottleWrites;// Offset=0x578 Size=0x8
    unsigned long long CumulativeTotalSoftThrottleWrites;// Offset=0x580 Size=0x8
    unsigned long long CumulativeLazyWriterCalls;// Offset=0x588 Size=0x8
    unsigned long long CumulativeLazyWriterLatency;// Offset=0x590 Size=0x8
    unsigned long long CumulativeLazyWriterPagesFlushed;// Offset=0x598 Size=0x8
    unsigned long long CumulativeLazyWriterAvgPagesPerSecond;// Offset=0x5a0 Size=0x8
    unsigned long long CumulativeSynchronousReadIoMaxLatency;// Offset=0x5a8 Size=0x8
    unsigned long long CumulativeSynchronousReadIoNonBlockingMaxLatency;// Offset=0x5b0 Size=0x8
    unsigned long long CumulativeSynchronousReadIoCounts[12];// Offset=0x5b8 Size=0x60
    unsigned long long CumulativeSynchronousReadTotalLatency[12];// Offset=0x618 Size=0x60
    unsigned long long CumulativeSynchronousReadNonBlockingIoCounts[12];// Offset=0x678 Size=0x60
    unsigned long long CumulativeSynchronousReadNonBlockingTotalLatency[12];// Offset=0x6d8 Size=0x60
    unsigned long long CumulativeTotalSynchronousWriteIoCount;// Offset=0x738 Size=0x8
    unsigned long long CumulativeTotalSynchronousNonBlockingWriteIoCount;// Offset=0x740 Size=0x8
    unsigned long long CumulativeTotalFailedSynchronousNonBlockingWriteIoCount;// Offset=0x748 Size=0x8
    unsigned long long CumulativeSynchronousWriteIoMaxLatency;// Offset=0x750 Size=0x8
    unsigned long long CumulativeSynchronousWriteIoNonBlockingMaxLatency;// Offset=0x758 Size=0x8
    unsigned long long CumulativeSynchronousWriteIoCounts[12];// Offset=0x760 Size=0x60
    unsigned long long CumulativeSynchronousWriteTotalLatency[12];// Offset=0x7c0 Size=0x60
    unsigned long long CumulativeSynchronousWriteNonBlockingIoCounts[12];// Offset=0x820 Size=0x60
    unsigned long long CumulativeSynchronousWriteNonBlockingTotalLatency[12];// Offset=0x880 Size=0x60
    unsigned long long CumulativeTotalAsynchronousReadIoCount;// Offset=0x8e0 Size=0x8
    unsigned long long CumulativeAsynchronousReadIoMaxLatency;// Offset=0x8e8 Size=0x8
    unsigned long long CumulativeAsynchronousReadIoCounts[12];// Offset=0x8f0 Size=0x60
    unsigned long long CumulativeAsynchronousReadTotalLatency[12];// Offset=0x950 Size=0x60
};
