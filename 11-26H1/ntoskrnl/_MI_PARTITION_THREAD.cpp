enum _MI_PARTITION_THREAD
{
    MiTrimmingThreadSlot=0,
    MiAgingThreadSlot=1,
    MiZeroPageThreadSlot=2,
    MiRebuildLargePagesThreadSlot=3,
    MiBalanceSetThreadSlot=4,
    MiDereferenceSegmentThreadSlot=5,
    MiMappedPageWriterSlot=6,
    MiThreadFaultClusterAgingSlot=7,
    MiModifiedPageWriterSlot=8,
    MiNumberOfPartitionThreads=9
};
